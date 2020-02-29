# SHA2017, Hackerhotel 2019 and Disobey 2020 button input wrapper
# Versions of this file tailored for other badges should expose the same API

import _buttons, _mpr121mapping, system, machine

# --- BUTTON CONSTANTS  ---
BTN_A      = 0
BTN_B      = 1
BTN_START  = 2
BTN_SELECT = 3
BTN_DOWN   = 4
BTN_RIGHT  = 5
BTN_UP     = 6
BTN_LEFT   = 7
BTN_FLASH  = 8

# Internal variables
__num = 9
__mprMap = _mpr121mapping.buttons
__orientation = 0
__cb = []

# Internal functions
def __cbReboot(pressed):
    if pressed:
        system.launcher()

def __cb_btn_flash(arg):
    if __cb[-1][BTN_FLASH]:
        __cb[-1][BTN_FLASH](arg)

def __init():
    _buttons.register( 0,                    __cb_btn_flash  ) # The flash button is connected to the badge on GPIO 0
    pushMapping()                                              # Add the initial / default mapping
    
# Public functions

def attach(button, callback):
    '''
    Attach a callback function to a button
    '''
    global __num, __cb
    if button < 0 or button >= __num:
        raise ValueError("Invalid button!")
    __cb[-1][button] = callback

def detach(button):
    '''
    Detach the callback function from a button
    '''
    global __num, __cb
    if button < 0 or button >= __num:
        raise ValueError("Invalid button!")
    __cb[-1][button] = None

def value(button):
    '''
    Read the state of a button (polling)
    '''
    global _buttons, __mprMap, __num
    if button < 0 or button >= __num:
        raise ValueError("Invalid button!")
    if button == BTN_FLASH:
        return not _buttons.pin(0).value() # This input has is active LOW
    else:
        return False # Hardcoded no-press

def getCallback(button):
    '''
    Returns the currently attached callback function
    '''
    global __num, __cb
    if button < 0 or button >= __num:
        raise ValueError("Invalid button!")
    return __cb[-1][button]

def pushMapping(newMapping=None):
    '''
    Push a new button mapping on the stack
    '''
    global __cb
    if newMapping == None:
        newMapping = { BTN_UP: None, BTN_DOWN: None, BTN_LEFT: None, BTN_RIGHT: None, BTN_A: None, BTN_B: None, BTN_SELECT: None, BTN_START: None, BTN_FLASH: None }
        if machine.nvs_getint("system", 'factory_checked'):
            newMapping[BTN_START] = __cbReboot
    __cb.append(newMapping)

def popMapping():
    '''
    Pop the current button mapping from the stack
    '''
    global __cb
    if len(__cb) > 0:
        __cb = __cb[:-1]
    if len(__cb) < 1:
        pushMapping()

def rotate(value):
    '''
    Change the orientation of the arrow keys (0, 90, 180, 270)
    '''
    global __orientation
    __orientation = value

# ---
__init()
