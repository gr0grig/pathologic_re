GlobalVarCount = 0

Strings:
	d5q03
	completed
	quest_d5_03_cutscene
	fail
	place_prisoners
	uprava_prison@door1
	uprava_prison
	pt_guard
	pers_birdmask
	d5q03_birdmask.xml
	pt_prisoner1
	pers_unosha
	d5q03_unosha.xml
	add
	pt_prisoner2
	pers_worker
	d5q03_worker.xml
	pt_prisoner3
	pers_wasted_male
	d5q03_wastedmale.xml
	pt_prisoner4
	pers_alkash
	d5q03_alkash.xml
	pt_prisoner5
	pt_prisoner6
	cleanup
	.bin
	GetLocator
	Locator 
	 doesn't exist
	Door 
	 not found
	locked
	SetProperty
	size
	get
	clear

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetSceneByName (2 args)
	CameraSwitchToNormal (0 args)
	GetVariable (2 args)
	Trigger (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	CreateObjectVector (1 args)
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	AddActor (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_26 Op = 0xd Vars = (string)
		EVENT_24 Op = 0x74 Vars = (int)
		EVENT_9 Op = 0xce Vars = (int, float)


0x0: Push("d5q03")
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(object)
0x5: Call2 0xd9

0x6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7: Pop(1)
0x8: PushEmpty(int)
0x9: Stack[-1] = (int) 5
0xa: Call2 0xbb

0xb: Pop(1)
0xc: Return(); Pop(0)

0xd: PushEmpty(object, object, object, object)
0xe: @ Trace(Stack[-5])
0xf: Pop(0)
0x10: Push("completed")
0x11: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x12: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x13: PushEmpty(object, string)
0x14: Stack[-1] = "quest_d5_03_cutscene"
0x15: Call2 0xdf

0x16: Pop(2)
0x17: PushEmpty()
0x18: Call2 0x90

0x19: Pop(0)
0x1a: GOTO 0x73

0x1b: Push("fail")
0x1c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1e: PushEmpty()
0x1f: Call2 0x83

0x20: Pop(0)
0x21: GOTO 0x73

0x22: Push("place_prisoners")
0x23: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x24: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x25: PushEmpty(string, bool)
0x26: Stack[-2] = "uprava_prison@door1"
0x27: Stack[-1] = (bool) 0
0x28: Call2 0xfc

0x29: Pop(2)
0x2a: Push("uprava_prison")
0x2b: @ GetSceneByName(Stack[-3], Stack[-1])
0x2c: Pop(1)
0x2d: PushEmpty(object, object, string, string, string)
0x2e: Stack[-4] = Stack[-7]
0x2f: Stack[-3] = "pt_guard"
0x30: Stack[-2] = "pers_birdmask"
0x31: Stack[-1] = "d5q03_birdmask.xml"
0x32: Call2 0xea

0x33: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x34: Pop(5)
0x35: PushEmpty(object, object, string, string, string)
0x36: Stack[-4] = Stack[-7]
0x37: Stack[-3] = "pt_prisoner1"
0x38: Stack[-2] = "pers_unosha"
0x39: Stack[-1] = "d5q03_unosha.xml"
0x3a: Call2 0xea

0x3b: Stack[-6] = Stack[-5]
0x3c: Pop(5)
0x3d: @@ add(Stack[-1])
0x3e: Pop(0)
0x3f: PushEmpty(object, object, string, string, string)
0x40: Stack[-4] = Stack[-7]
0x41: Stack[-3] = "pt_prisoner2"
0x42: Stack[-2] = "pers_worker"
0x43: Stack[-1] = "d5q03_worker.xml"
0x44: Call2 0xea

0x45: Stack[-6] = Stack[-5]
0x46: Pop(5)
0x47: @@ add(Stack[-1])
0x48: Pop(0)
0x49: PushEmpty(object, object, string, string, string)
0x4a: Stack[-4] = Stack[-7]
0x4b: Stack[-3] = "pt_prisoner3"
0x4c: Stack[-2] = "pers_wasted_male"
0x4d: Stack[-1] = "d5q03_wastedmale.xml"
0x4e: Call2 0xea

0x4f: Stack[-6] = Stack[-5]
0x50: Pop(5)
0x51: @@ add(Stack[-1])
0x52: Pop(0)
0x53: PushEmpty(object, object, string, string, string)
0x54: Stack[-4] = Stack[-7]
0x55: Stack[-3] = "pt_prisoner4"
0x56: Stack[-2] = "pers_alkash"
0x57: Stack[-1] = "d5q03_alkash.xml"
0x58: Call2 0xea

0x59: Stack[-6] = Stack[-5]
0x5a: Pop(5)
0x5b: @@ add(Stack[-1])
0x5c: Pop(0)
0x5d: PushEmpty(object, object, string, string, string)
0x5e: Stack[-4] = Stack[-7]
0x5f: Stack[-3] = "pt_prisoner5"
0x60: Stack[-2] = "pers_worker"
0x61: Stack[-1] = "d5q03_worker.xml"
0x62: Call2 0xea

0x63: Stack[-6] = Stack[-5]
0x64: Pop(5)
0x65: @@ add(Stack[-1])
0x66: Pop(0)
0x67: PushEmpty(object, object, string, string, string)
0x68: Stack[-4] = Stack[-7]
0x69: Stack[-3] = "pt_prisoner6"
0x6a: Stack[-2] = "pers_unosha"
0x6b: Stack[-1] = "d5q03_unosha.xml"
0x6c: Call2 0xea

0x6d: Stack[-6] = Stack[-5]
0x6e: Pop(5)
0x6f: @@ add(Stack[-1])
0x70: Pop(0)
0x71: Stack[-1] = 0
0x72: Stack[-2] = 0
0x73: Return(); Pop(4)

0x74: PushEmpty()
0x75: @ CameraSwitchToNormal()
0x76: Pop(0)
0x77: Return(); Pop(0)

0x78: PushEmpty(int, int)
0x79: Push("d5q03")
0x7a: @ GetVariable(Stack[-1], Stack[-2])
0x7b: Pop(1)
0x7c: Push((int) 1000)
0x7d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x7e: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x7f: PushEmpty()
0x80: Call2 0x83

0x81: Pop(0)
0x82: Return(); Pop(2)

0x83: Push("d5q03")
0x84: Push((int) -1)
0x85: @ SetVariable(Stack[-2], Stack[-1])
0x86: Pop(2)
0x87: PushEmpty(string, bool)
0x88: Stack[-2] = "uprava_prison@door1"
0x89: Stack[-1] = (bool) 1
0x8a: Call2 0xfc

0x8b: Pop(2)
0x8c: PushEmpty()
0x8d: Call2 0xab

0x8e: Pop(0)
0x8f: Return(); Pop(0)

0x90: PushEmpty(int, int)
0x91: Push("d5q03")
0x92: @ GetVariable(Stack[-1], Stack[-2])
0x93: Pop(1)
0x94: PushEmpty(bool)
0x95: Stack[-1] = (bool) 0
0x96: Push((int) 1000)
0x97: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x98: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x99: Push((int) -1)
0x9a: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: Stack[-1] = (bool) 1
0x9d: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0x9e: Push("d5q03")
0x9f: Push((int) 1000)
0xa0: @ SetVariable(Stack[-2], Stack[-1])
0xa1: Pop(2)
0xa2: PushEmpty(string, bool)
0xa3: Stack[-2] = "uprava_prison@door1"
0xa4: Stack[-1] = (bool) 1
0xa5: Call2 0xfc

0xa6: Pop(2)
0xa7: PushEmpty()
0xa8: Call2 0xab

0xa9: Pop(0)
0xaa: Return(); Pop(2)

0xab: EventDisable(26)
0xac: PushEmpty(object)
0xad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xae: Call2 0x10d

0xaf: Pop(1)
0xb0: Push( Stack[1 + Tasks[-1].StackPointer] )
0xb1: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb2: Push("cleanup")
0xb3: @ Trigger(Stack[-1], Stack[-1])
0xb4: Pop(1)
0xb5: PushEmpty(object)
0xb6: Call2 0xd3

0xb7: Pop(0)
0xb8: @ RemoveActor(Stack[-1])
0xb9: Pop(1)
0xba: Return(); Pop(0)

0xbb: PushEmpty(float, float)
0xbc: @ GetGameTime(Stack[-1])
0xbd: Pop(0)
0xbe: Push((int) 24)
0xbf: Pop(1); Push(Stack[-4] * Stack[-1]);
0xc0: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc2: PushEmpty()
0xc3: Call2 0xab

0xc4: Pop(0)
0xc5: GOTO 0xcd

0xc6: Push((int) 0)
0xc7: Push((int) 24)
0xc8: Pop(1); Push(Stack[-5] * Stack[-1]);
0xc9: @ SetTimeEvent(Stack[-2], Stack[-1])
0xca: Pop(2)
0xcb: @ Hold()
0xcc: Pop(0)
0xcd: Return(); Pop(2)

0xce: PushEmpty()
0xcf: PushEmpty()
0xd0: Call2 0x78

0xd1: Pop(0)
0xd2: Return(); Pop(0)

0xd3: PushEmpty(object, object)
0xd4: @ self(Stack[-1])
0xd5: Pop(0)
0xd6: Stack[-3] = Stack[-1]
0xd7: Return(); Pop(2)

0xd8: Stack[-1] = 0
0xd9: PushEmpty(object, object)
0xda: @ CreateObjectVector(Stack[-1])
0xdb: Pop(0)
0xdc: Stack[-3] = Stack[-1]
0xdd: Return(); Pop(2)

0xde: Stack[-1] = 0
0xdf: PushEmpty(object, object, object, object)
0xe0: @ GetMainOutdoorScene(Stack[-2])
0xe1: Pop(0)
0xe2: Push(".bin")
0xe3: Pop(1); Push(Stack[-6] + Stack[-1]);
0xe4: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0xe5: Pop(1)
0xe6: Stack[-6] = Stack[-1]
0xe7: Return(); Pop(4)

0xe8: Stack[-1] = 0
0xe9: Stack[-2] = 0
0xea: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xeb: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xec: Pop(0)
0xed: Pop(0); Push((bool) Stack[-4] == 0)
0xee: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xef: Push("Locator ")
0xf0: Pop(1); Push(Stack[-1] + Stack[-12]);
0xf1: Push(" doesn't exist")
0xf2: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf3: @ Trace(Stack[-1])
0xf4: Pop(1)
0xf5: Stack[-1] = 0
0xf6: GOTO 0xf9

0xf7: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xf8: Pop(0)
0xf9: Stack[-13] = Stack[-1]
0xfa: Return(); Pop(8)

0xfb: Stack[-1] = 0
0xfc: PushEmpty(object, object)
0xfd: @ FindActor(Stack[-1], Stack[-4])
0xfe: Pop(0)
0xff: Pop(0); Push((bool) Stack[-1] == 0)
0x100: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x101: Push("Door ")
0x102: Pop(1); Push(Stack[-1] + Stack[-5]);
0x103: Push(" not found")
0x104: Pop(2); Push(Stack[-2] + Stack[-1]);
0x105: @ Trace(Stack[-1])
0x106: Pop(1)
0x107: GOTO 0x10b

0x108: Push("locked")
0x109: @@ SetProperty(Stack[-1], Stack[-4])
0x10a: Pop(1)
0x10b: Return(); Pop(2)

0x10c: Stack[-1] = 0
0x10d: PushEmpty(int, int, object, int, int, object)
0x10e: Push(Stack[-7])
0x10f: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x110: @@ size(Stack[-3])
0x111: Pop(0)
0x112: Stack[-2] = (int) 0
0x113: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x114: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x115: @@ get(Stack[-1], Stack[-2])
0x116: Pop(0)
0x117: Push(Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x119: @ RemoveActor(Stack[-1])
0x11a: Pop(0)
0x11b: Stack[-1] = 0
0x11c: Push((int) 1)
0x11d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x11e: GOTO 0x113

0x11f: @@ clear()
0x120: Pop(0)
0x121: Return(); Pop(6)

