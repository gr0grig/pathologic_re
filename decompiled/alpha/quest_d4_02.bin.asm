GlobalVarCount = 0

Strings:
	d4q02
	s_house7_03_door1
	s_house7_03_door2
	house7_03@door1
	house7_03@door2
	scene_load
	d4q02_survived
	door_close
	quest_d4_02_survival
	scene_unload
	Remove
	birdmask
	pt_d4q02_birdmask
	pers_birdmask
	d4q02_birdmask.xml
	birdmask_talk
	door_open
	completed
	.bin
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	Door 
	 not found
	locked
	SetProperty

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetVariable (2 args)
	PlaySound (1 args)
	GetMainOutdoorScene (1 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddBlankActor (4 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x1d Vars = (string)
		EVENT_9 Op = 0xc7 Vars = (int, float)


0x0: Push("d4q02")
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(string, bool)
0x5: Stack[-2] = "s_house7_03_door1"
0x6: Stack[-1] = (bool) 1
0x7: Call 0xef

0x8: Pop(2)
0x9: PushEmpty(string, bool)
0xa: Stack[-2] = "s_house7_03_door2"
0xb: Stack[-1] = (bool) 1
0xc: Call 0xef

0xd: Pop(2)
0xe: PushEmpty(string, bool)
0xf: Stack[-2] = "house7_03@door1"
0x10: Stack[-1] = (bool) 1
0x11: Call 0xef

0x12: Pop(2)
0x13: PushEmpty(string, bool)
0x14: Stack[-2] = "house7_03@door2"
0x15: Stack[-1] = (bool) 1
0x16: Call 0xef

0x17: Pop(2)
0x18: PushEmpty(int)
0x19: Stack[-1] = (int) 4
0x1a: Call 0xb4

0x1b: Pop(1)
0x1c: Return(); Pop(0)

0x1d: PushEmpty(bool, object, bool, object)
0x1e: @ Trace(Stack[-5])
0x1f: Pop(0)
0x20: Push("scene_load")
0x21: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x23: Push("d4q02_survived")
0x24: @ GetVariable(Stack[-1], Stack[-3])
0x25: Pop(1)
0x26: Pop(0); Push((bool) Stack[-2] == 0)
0x27: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x28: Push("door_close")
0x29: @ PlaySound(Stack[-1])
0x2a: Pop(1)
0x2b: PushEmpty(object, string)
0x2c: Stack[-1] = "quest_d4_02_survival"
0x2d: Call 0xd2

0x2e: Pop(2)
0x2f: GOTO 0x6b

0x30: Push("scene_unload")
0x31: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x32: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x33: Push( Stack[0 + Tasks[-1].StackPointer] )
0x34: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x35: @@ Remove()
0x36: Pop(0)
0x37: PushEmpty(string, bool)
0x38: Stack[-2] = "s_house7_03_door2"
0x39: Stack[-1] = (bool) 0
0x3a: Call 0xef

0x3b: Pop(2)
0x3c: GOTO 0x6b

0x3d: Push("birdmask")
0x3e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x3f: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x40: @ GetMainOutdoorScene(Stack[-1])
0x41: Pop(0)
0x42: PushEmpty(object, object, string, string, string)
0x43: Stack[-4] = Stack[-6]
0x44: Stack[-3] = "pt_d4q02_birdmask"
0x45: Stack[-2] = "pers_birdmask"
0x46: Stack[-1] = "d4q02_birdmask.xml"
0x47: Call 0xdd

0x48: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x49: Pop(5)
0x4a: Stack[-1] = 0
0x4b: GOTO 0x6b

0x4c: Push("birdmask_talk")
0x4d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4e: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x4f: PushEmpty(string, bool)
0x50: Stack[-2] = "house7_03@door1"
0x51: Stack[-1] = (bool) 0
0x52: Call 0xef

0x53: Pop(2)
0x54: GOTO 0x6b

0x55: Push("survived")
0x56: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x57: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x58: PushEmpty(string, bool)
0x59: Stack[-2] = "s_house7_03_door1"
0x5a: Stack[-1] = (bool) 0
0x5b: Call 0xef

0x5c: Pop(2)
0x5d: Push("d4q02_survived")
0x5e: Push((int) 1)
0x5f: @ SetVariable(Stack[-2], Stack[-1])
0x60: Pop(2)
0x61: Push("door_open")
0x62: @ PlaySound(Stack[-1])
0x63: Pop(1)
0x64: GOTO 0x6b

0x65: Push("completed")
0x66: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x67: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x68: PushEmpty()
0x69: Call 0x7f

0x6a: Pop(0)
0x6b: Return(); Pop(4)

0x6c: PushEmpty(int, int)
0x6d: Push("d4q02")
0x6e: @ GetVariable(Stack[-1], Stack[-2])
0x6f: Pop(1)
0x70: Push((int) 1000)
0x71: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x72: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x73: PushEmpty()
0x74: Call 0x77

0x75: Pop(0)
0x76: Return(); Pop(2)

0x77: Push("d4q02")
0x78: Push((int) -1)
0x79: @ SetVariable(Stack[-2], Stack[-1])
0x7a: Pop(2)
0x7b: PushEmpty()
0x7c: Call 0x95

0x7d: Pop(0)
0x7e: Return(); Pop(0)

0x7f: PushEmpty(int, int)
0x80: Push("d4q02")
0x81: @ GetVariable(Stack[-1], Stack[-2])
0x82: Pop(1)
0x83: PushEmpty(bool)
0x84: Stack[-1] = (bool) 0
0x85: Push((int) 1000)
0x86: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x87: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x88: Push((int) -1)
0x89: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x8a: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x8b: Stack[-1] = (bool) 1
0x8c: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x8d: Push("d4q02")
0x8e: Push((int) 1000)
0x8f: @ SetVariable(Stack[-2], Stack[-1])
0x90: Pop(2)
0x91: PushEmpty()
0x92: Call 0x95

0x93: Pop(0)
0x94: Return(); Pop(2)

0x95: EventDisable(26)
0x96: Push( Stack[0 + Tasks[-1].StackPointer] )
0x97: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x98: @@ Remove()
0x99: Pop(0)
0x9a: PushEmpty(string, bool)
0x9b: Stack[-2] = "s_house7_03_door1"
0x9c: Stack[-1] = (bool) 0
0x9d: Call 0xef

0x9e: Pop(2)
0x9f: PushEmpty(string, bool)
0xa0: Stack[-2] = "s_house7_03_door2"
0xa1: Stack[-1] = (bool) 0
0xa2: Call 0xef

0xa3: Pop(2)
0xa4: PushEmpty(string, bool)
0xa5: Stack[-2] = "house7_03@door1"
0xa6: Stack[-1] = (bool) 0
0xa7: Call 0xef

0xa8: Pop(2)
0xa9: PushEmpty(string, bool)
0xaa: Stack[-2] = "house7_03@door2"
0xab: Stack[-1] = (bool) 0
0xac: Call 0xef

0xad: Pop(2)
0xae: PushEmpty(object)
0xaf: Call 0xcc

0xb0: Pop(0)
0xb1: @ RemoveActor(Stack[-1])
0xb2: Pop(1)
0xb3: Return(); Pop(0)

0xb4: PushEmpty(float, float)
0xb5: @ GetGameTime(Stack[-1])
0xb6: Pop(0)
0xb7: Push((int) 24)
0xb8: Pop(1); Push(Stack[-4] * Stack[-1]);
0xb9: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbb: PushEmpty()
0xbc: Call 0x95

0xbd: Pop(0)
0xbe: GOTO 0xc6

0xbf: Push((int) 0)
0xc0: Push((int) 24)
0xc1: Pop(1); Push(Stack[-5] * Stack[-1]);
0xc2: @ SetTimeEvent(Stack[-2], Stack[-1])
0xc3: Pop(2)
0xc4: @ Hold()
0xc5: Pop(0)
0xc6: Return(); Pop(2)

0xc7: PushEmpty()
0xc8: PushEmpty()
0xc9: Call 0x6c

0xca: Pop(0)
0xcb: Return(); Pop(0)

0xcc: PushEmpty(object, object)
0xcd: @ self(Stack[-1])
0xce: Pop(0)
0xcf: Stack[-3] = Stack[-1]
0xd0: Return(); Pop(2)

0xd1: Stack[-1] = 0
0xd2: PushEmpty(object, object, object, object)
0xd3: @ GetMainOutdoorScene(Stack[-2])
0xd4: Pop(0)
0xd5: Push(".bin")
0xd6: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd7: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0xd8: Pop(1)
0xd9: Stack[-6] = Stack[-1]
0xda: Return(); Pop(4)

0xdb: Stack[-1] = 0
0xdc: Stack[-2] = 0
0xdd: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xde: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xdf: Pop(0)
0xe0: Pop(0); Push((bool) Stack[-4] == 0)
0xe1: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe2: Push("Locator ")
0xe3: Pop(1); Push(Stack[-1] + Stack[-12]);
0xe4: Push(" doesn't exist")
0xe5: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe6: @ Trace(Stack[-1])
0xe7: Pop(1)
0xe8: Stack[-1] = 0
0xe9: GOTO 0xec

0xea: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0xeb: Pop(0)
0xec: Stack[-13] = Stack[-1]
0xed: Return(); Pop(8)

0xee: Stack[-1] = 0
0xef: PushEmpty(object, object)
0xf0: @ FindActor(Stack[-1], Stack[-4])
0xf1: Pop(0)
0xf2: Pop(0); Push((bool) Stack[-1] == 0)
0xf3: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf4: Push("Door ")
0xf5: Pop(1); Push(Stack[-1] + Stack[-5]);
0xf6: Push(" not found")
0xf7: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf8: @ Trace(Stack[-1])
0xf9: Pop(1)
0xfa: Push("locked")
0xfb: @@ SetProperty(Stack[-1], Stack[-4])
0xfc: Pop(1)
0xfd: Return(); Pop(2)

0xfe: Stack[-1] = 0
