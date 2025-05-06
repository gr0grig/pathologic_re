GlobalVarCount = 0

Strings:
	theater@door1
	sobor@door1
	key_actors
	pt_d4q01_key1
	pers_whitemask
	d4q01_key1.xml
	pt_d4q01_key2
	pers_wasted_male
	d4q01_key2.xml
	pers
	pt_d4q01_birdmask
	pers_birdmask
	d4q01_birdmask.xml
	pt_d4q01_wastedwoman
	pers_wasted_girl
	d4q01_wastedwoman.xml
	key1_done
	Remove
	key2_done
	birdmask_done
	wastedwoman_done
	init_sobor
	d4q01_sobor_guard.xml
	init_theater
	d4q01_theater_guard.xml
	cleanup
	d4q01
	fail
	completed
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	Door 
	 not found
	locked
	SetProperty

Import:
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, object) Params = 0
		EVENT_9 Op = 0x19 Vars = (int, float)
		EVENT_26 Op = 0x20 Vars = (string)


0x0: PushEmpty(float, float)
0x1: @ GetGameTime(Stack[-1])
0x2: Pop(0)
0x3: Push((int) 79)
0x4: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x6: Push((int) 0)
0x7: Push((int) 79)
0x8: @ SetTimeEvent(Stack[-2], Stack[-1])
0x9: Pop(2)
0xa: GOTO 0x10

0xb: PushEmpty(string, bool)
0xc: Stack[-2] = "theater@door1"
0xd: Stack[-1] = (bool) 1
0xe: Call2 0x10d

0xf: Pop(2)
0x10: PushEmpty(string, bool)
0x11: Stack[-2] = "sobor@door1"
0x12: Stack[-1] = (bool) 1
0x13: Call2 0x10d

0x14: Pop(2)
0x15: @ Hold()
0x16: Pop(0)
0x17: GOTO 0x15

0x18: Return(); Pop(2)

0x19: PushEmpty()
0x1a: PushEmpty(string, bool)
0x1b: Stack[-2] = "theater@door1"
0x1c: Stack[-1] = (bool) 1
0x1d: Call2 0x10d

0x1e: Pop(2)
0x1f: Return(); Pop(0)

0x20: PushEmpty(object, object, object, object, int, object, object, object, object, int)
0x21: @ Trace(Stack[-11])
0x22: Pop(0)
0x23: Push("key_actors")
0x24: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x25: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x26: @ GetMainOutdoorScene(Stack[-5])
0x27: Pop(0)
0x28: PushEmpty(object, object, string, string, string)
0x29: Stack[-4] = Stack[-10]
0x2a: Stack[-3] = "pt_d4q01_key1"
0x2b: Stack[-2] = "pers_whitemask"
0x2c: Stack[-1] = "d4q01_key1.xml"
0x2d: Call2 0xfb

0x2e: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x2f: Pop(5)
0x30: PushEmpty(object, object, string, string, string)
0x31: Stack[-4] = Stack[-10]
0x32: Stack[-3] = "pt_d4q01_key2"
0x33: Stack[-2] = "pers_wasted_male"
0x34: Stack[-1] = "d4q01_key2.xml"
0x35: Call2 0xfb

0x36: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x37: Pop(5)
0x38: Stack[-5] = 0
0x39: GOTO 0xba

0x3a: Push("pers")
0x3b: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x3d: @ GetMainOutdoorScene(Stack[-4])
0x3e: Pop(0)
0x3f: PushEmpty(object, object, string, string, string)
0x40: Stack[-4] = Stack[-9]
0x41: Stack[-3] = "pt_d4q01_birdmask"
0x42: Stack[-2] = "pers_birdmask"
0x43: Stack[-1] = "d4q01_birdmask.xml"
0x44: Call2 0xfb

0x45: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x46: Pop(5)
0x47: PushEmpty(object, object, string, string, string)
0x48: Stack[-4] = Stack[-9]
0x49: Stack[-3] = "pt_d4q01_wastedwoman"
0x4a: Stack[-2] = "pers_wasted_girl"
0x4b: Stack[-1] = "d4q01_wastedwoman.xml"
0x4c: Call2 0xfb

0x4d: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x4e: Pop(5)
0x4f: Stack[-4] = 0
0x50: GOTO 0xba

0x51: Push("key1_done")
0x52: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x53: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x54: @@ Remove()
0x55: Pop(0)
0x56: GOTO 0xba

0x57: Push("key2_done")
0x58: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5a: @@ Remove()
0x5b: Pop(0)
0x5c: GOTO 0xba

0x5d: Push("birdmask_done")
0x5e: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x5f: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x60: @@ Remove()
0x61: Pop(0)
0x62: GOTO 0xba

0x63: Push("wastedwoman_done")
0x64: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x65: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x66: @@ Remove()
0x67: Pop(0)
0x68: GOTO 0xba

0x69: Push("init_sobor")
0x6a: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x6b: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6e: @@ Remove()
0x6f: Pop(0)
0x70: @ GetMainOutdoorScene(Stack[-3])
0x71: Pop(0)
0x72: PushEmpty(object, object, string, string, string)
0x73: Stack[-4] = Stack[-8]
0x74: Stack[-3] = "pt_d4q01_wastedwoman"
0x75: Stack[-2] = "pers_wasted_male"
0x76: Stack[-1] = "d4q01_sobor_guard.xml"
0x77: Call2 0xfb

0x78: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x79: Pop(5)
0x7a: PushEmpty(string, bool)
0x7b: Stack[-2] = "sobor@door1"
0x7c: Stack[-1] = (bool) 0
0x7d: Call2 0x10d

0x7e: Pop(2)
0x7f: Stack[-3] = 0
0x80: GOTO 0xba

0x81: Push("init_theater")
0x82: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x83: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x84: Push( Stack[2 + Tasks[-1].StackPointer] )
0x85: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x86: @@ Remove()
0x87: Pop(0)
0x88: @ GetMainOutdoorScene(Stack[-2])
0x89: Pop(0)
0x8a: PushEmpty(object, object, string, string, string)
0x8b: Stack[-4] = Stack[-7]
0x8c: Stack[-3] = "pt_d4q01_birdmask"
0x8d: Stack[-2] = "pers_birdmask"
0x8e: Stack[-1] = "d4q01_theater_guard.xml"
0x8f: Call2 0xfb

0x90: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0x91: Pop(5)
0x92: PushEmpty(string, bool)
0x93: Stack[-2] = "theater@door1"
0x94: Stack[-1] = (bool) 0
0x95: Call2 0x10d

0x96: Pop(2)
0x97: Stack[-2] = 0
0x98: GOTO 0xba

0x99: Push("cleanup")
0x9a: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x9b: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0x9c: Push("d4q01")
0x9d: @ GetVariable(Stack[-1], Stack[-2])
0x9e: Pop(1)
0x9f: Push((int) 1000)
0xa0: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xa1: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0xbb

0xa4: Pop(0)
0xa5: GOTO 0xa9

0xa6: PushEmpty()
0xa7: Call2 0xcb

0xa8: Pop(0)
0xa9: PushEmpty()
0xaa: Call2 0xdc

0xab: Pop(0)
0xac: GOTO 0xba

0xad: Push("fail")
0xae: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb0: PushEmpty()
0xb1: Call2 0xbb

0xb2: Pop(0)
0xb3: GOTO 0xba

0xb4: Push("completed")
0xb5: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb7: PushEmpty()
0xb8: Call2 0xc3

0xb9: Pop(0)
0xba: Return(); Pop(10)

0xbb: Push("d4q01")
0xbc: Push((int) -1)
0xbd: @ SetVariable(Stack[-2], Stack[-1])
0xbe: Pop(2)
0xbf: PushEmpty()
0xc0: Call2 0xcb

0xc1: Pop(0)
0xc2: Return(); Pop(0)

0xc3: Push("d4q01")
0xc4: Push((int) 1000)
0xc5: @ SetVariable(Stack[-2], Stack[-1])
0xc6: Pop(2)
0xc7: PushEmpty()
0xc8: Call2 0xcb

0xc9: Pop(0)
0xca: Return(); Pop(0)

0xcb: Push( Stack[0 + Tasks[-1].StackPointer] )
0xcc: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xcd: @@ Remove()
0xce: Pop(0)
0xcf: Push( Stack[1 + Tasks[-1].StackPointer] )
0xd0: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd1: @@ Remove()
0xd2: Pop(0)
0xd3: Push( Stack[2 + Tasks[-1].StackPointer] )
0xd4: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd5: @@ Remove()
0xd6: Pop(0)
0xd7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd8: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd9: @@ Remove()
0xda: Pop(0)
0xdb: Return(); Pop(0)

0xdc: EventDisable(26)
0xdd: Push( Stack[5 + Tasks[-1].StackPointer] )
0xde: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdf: @@ Remove()
0xe0: Pop(0)
0xe1: Push( Stack[4 + Tasks[-1].StackPointer] )
0xe2: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe3: @@ Remove()
0xe4: Pop(0)
0xe5: PushEmpty(string, bool)
0xe6: Stack[-2] = "theater@door1"
0xe7: Stack[-1] = (bool) 0
0xe8: Call2 0x10d

0xe9: Pop(2)
0xea: PushEmpty(string, bool)
0xeb: Stack[-2] = "sobor@door1"
0xec: Stack[-1] = (bool) 1
0xed: Call2 0x10d

0xee: Pop(2)
0xef: PushEmpty(object)
0xf0: Call2 0xf5

0xf1: Pop(0)
0xf2: @ RemoveActor(Stack[-1])
0xf3: Pop(1)
0xf4: Return(); Pop(0)

0xf5: PushEmpty(object, object)
0xf6: @ self(Stack[-1])
0xf7: Pop(0)
0xf8: Stack[-3] = Stack[-1]
0xf9: Return(); Pop(2)

0xfa: Stack[-1] = 0
0xfb: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xfc: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xfd: Pop(0)
0xfe: Pop(0); Push((bool) Stack[-4] == 0)
0xff: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x100: Push("Locator ")
0x101: Pop(1); Push(Stack[-1] + Stack[-12]);
0x102: Push(" doesn't exist")
0x103: Pop(2); Push(Stack[-2] + Stack[-1]);
0x104: @ Trace(Stack[-1])
0x105: Pop(1)
0x106: Stack[-1] = 0
0x107: GOTO 0x10a

0x108: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x109: Pop(0)
0x10a: Stack[-13] = Stack[-1]
0x10b: Return(); Pop(8)

0x10c: Stack[-1] = 0
0x10d: PushEmpty(object, object)
0x10e: @ FindActor(Stack[-1], Stack[-4])
0x10f: Pop(0)
0x110: Pop(0); Push((bool) Stack[-1] == 0)
0x111: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x112: Push("Door ")
0x113: Pop(1); Push(Stack[-1] + Stack[-5]);
0x114: Push(" not found")
0x115: Pop(2); Push(Stack[-2] + Stack[-1]);
0x116: @ Trace(Stack[-1])
0x117: Pop(1)
0x118: GOTO 0x11c

0x119: Push("locked")
0x11a: @@ SetProperty(Stack[-1], Stack[-4])
0x11b: Pop(1)
0x11c: Return(); Pop(2)

0x11d: Stack[-1] = 0
