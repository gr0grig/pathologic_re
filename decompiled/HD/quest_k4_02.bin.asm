GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	NPC_Mark
	theater@door1
	k4q02
	pt_k4q02_birdmask1
	pers_birdmask
	k4q02_birdmask.xml
	pt_k4q02_birdmask2
	cot_maria
	pt_k4q02_mark
	k4q02_mark.xml
	init_theater
	pt_k4q02_prophet
	pers_krysa
	k4q02_prophet.xml
	completed
	cleanup
	Remove
	pt_mark
	NPC_Klara_Mark.xml
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
	GetMainOutdoorScene (1 args)
	GetSceneByName (2 args)
	Trace (1 args)
	GetVariable (2 args)
	Trigger (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object) Params = 0
		EVENT_26 Op = 0x31 Vars = (string)
		EVENT_9 Op = 0xab Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: PushEmpty(bool, string)
0x2: Stack[-1] = "NPC_Mark"
0x3: Call2 0xec

0x4: Pop(2)
0x5: PushEmpty(string, bool)
0x6: Stack[-2] = "theater@door1"
0x7: Stack[-1] = (bool) 1
0x8: Call2 0xdb

0x9: Pop(2)
0xa: Push("k4q02")
0xb: Push((int) 1)
0xc: @ SetVariable(Stack[-2], Stack[-1])
0xd: Pop(2)
0xe: @ GetMainOutdoorScene(Stack[-1])
0xf: Pop(0)
0x10: PushEmpty(object, object, string, string, string)
0x11: Stack[-4] = Stack[-6]
0x12: Stack[-3] = "pt_k4q02_birdmask1"
0x13: Stack[-2] = "pers_birdmask"
0x14: Stack[-1] = "k4q02_birdmask.xml"
0x15: Call2 0xc8

0x16: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x17: Pop(5)
0x18: PushEmpty(object, object, string, string, string)
0x19: Stack[-4] = Stack[-6]
0x1a: Stack[-3] = "pt_k4q02_birdmask2"
0x1b: Stack[-2] = "pers_birdmask"
0x1c: Stack[-1] = "k4q02_birdmask.xml"
0x1d: Call2 0xc8

0x1e: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x1f: Pop(5)
0x20: Push("cot_maria")
0x21: @ GetSceneByName(Stack[-2], Stack[-1])
0x22: Pop(1)
0x23: PushEmpty(object, object, string, string, string)
0x24: Stack[-4] = Stack[-6]
0x25: Stack[-3] = "pt_k4q02_mark"
0x26: Stack[-2] = "NPC_Mark"
0x27: Stack[-1] = "k4q02_mark.xml"
0x28: Call2 0xb6

0x29: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x2a: Pop(5)
0x2b: PushEmpty(int)
0x2c: Stack[-1] = (int) 4
0x2d: Call2 0x98

0x2e: Pop(1)
0x2f: Return(); Pop(2)

0x30: Stack[-1] = 0
0x31: PushEmpty(object, object)
0x32: @ Trace(Stack[-3])
0x33: Pop(0)
0x34: Push("init_theater")
0x35: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x36: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x37: Push("theater")
0x38: @ GetSceneByName(Stack[-2], Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(object, object, string, string, string)
0x3b: Stack[-4] = Stack[-6]
0x3c: Stack[-3] = "pt_k4q02_prophet"
0x3d: Stack[-2] = "pers_krysa"
0x3e: Stack[-1] = "k4q02_prophet.xml"
0x3f: Call2 0xb6

0x40: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x41: Pop(5)
0x42: PushEmpty(string, bool)
0x43: Stack[-2] = "theater@door1"
0x44: Stack[-1] = (bool) 0
0x45: Call2 0xdb

0x46: Pop(2)
0x47: Stack[-1] = 0
0x48: GOTO 0x4f

0x49: Push("completed")
0x4a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4b: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4c: PushEmpty()
0x4d: Call2 0x63

0x4e: Pop(0)
0x4f: Return(); Pop(2)

0x50: PushEmpty(int, int)
0x51: Push("k4q02")
0x52: @ GetVariable(Stack[-1], Stack[-2])
0x53: Pop(1)
0x54: Push((int) 1000)
0x55: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x56: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x57: PushEmpty()
0x58: Call2 0x5b

0x59: Pop(0)
0x5a: Return(); Pop(2)

0x5b: Push("k4q02")
0x5c: Push((int) -1)
0x5d: @ SetVariable(Stack[-2], Stack[-1])
0x5e: Pop(2)
0x5f: PushEmpty()
0x60: Call2 0x6b

0x61: Pop(0)
0x62: Return(); Pop(0)

0x63: Push("k4q02")
0x64: Push((int) 1000)
0x65: @ SetVariable(Stack[-2], Stack[-1])
0x66: Pop(2)
0x67: PushEmpty()
0x68: Call2 0x6b

0x69: Pop(0)
0x6a: Return(); Pop(0)

0x6b: PushEmpty(object, object)
0x6c: EventDisable(26)
0x6d: PushEmpty(string, bool)
0x6e: Stack[-2] = "theater@door1"
0x6f: Stack[-1] = (bool) 0
0x70: Call2 0xdb

0x71: Pop(2)
0x72: Push( Stack[2 + Tasks[-1].StackPointer] )
0x73: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x74: Push("cleanup")
0x75: @ Trigger(Stack[-2], Stack[-1])
0x76: Pop(1)
0x77: Push( Stack[0 + Tasks[-1].StackPointer] )
0x78: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x79: @@ Remove()
0x7a: Pop(0)
0x7b: Push( Stack[1 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7d: @@ Remove()
0x7e: Pop(0)
0x7f: Push( Stack[4 + Tasks[-1].StackPointer] )
0x80: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x81: Push("cleanup")
0x82: @ Trigger(Stack[-4], Stack[-1])
0x83: Pop(1)
0x84: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x85: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x86: Push("theater")
0x87: @ GetSceneByName(Stack[-2], Stack[-1])
0x88: Pop(1)
0x89: PushEmpty(object, object, string, string, string)
0x8a: Stack[-4] = Stack[-6]
0x8b: Stack[-3] = "pt_mark"
0x8c: Stack[-2] = "NPC_Mark"
0x8d: Stack[-1] = "NPC_Klara_Mark.xml"
0x8e: Call2 0xb6

0x8f: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x90: Pop(5)
0x91: Stack[-1] = 0
0x92: PushEmpty(object)
0x93: Call2 0xb0

0x94: Pop(0)
0x95: @ RemoveActor(Stack[-1])
0x96: Pop(1)
0x97: Return(); Pop(2)

0x98: PushEmpty(float, float)
0x99: @ GetGameTime(Stack[-1])
0x9a: Pop(0)
0x9b: Push((int) 24)
0x9c: Pop(1); Push(Stack[-4] * Stack[-1]);
0x9d: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x9f: PushEmpty()
0xa0: Call2 0x6b

0xa1: Pop(0)
0xa2: GOTO 0xaa

0xa3: Push((int) 0)
0xa4: Push((int) 24)
0xa5: Pop(1); Push(Stack[-5] * Stack[-1]);
0xa6: @ SetTimeEvent(Stack[-2], Stack[-1])
0xa7: Pop(2)
0xa8: @ Hold()
0xa9: Pop(0)
0xaa: Return(); Pop(2)

0xab: PushEmpty()
0xac: PushEmpty()
0xad: Call2 0x50

0xae: Pop(0)
0xaf: Return(); Pop(0)

0xb0: PushEmpty(object, object)
0xb1: @ self(Stack[-1])
0xb2: Pop(0)
0xb3: Stack[-3] = Stack[-1]
0xb4: Return(); Pop(2)

0xb5: Stack[-1] = 0
0xb6: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xb7: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xb8: Pop(0)
0xb9: Pop(0); Push((bool) Stack[-4] == 0)
0xba: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbb: Push("Locator ")
0xbc: Pop(1); Push(Stack[-1] + Stack[-12]);
0xbd: Push(" doesn't exist")
0xbe: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbf: @ Trace(Stack[-1])
0xc0: Pop(1)
0xc1: Stack[-1] = 0
0xc2: GOTO 0xc5

0xc3: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xc4: Pop(0)
0xc5: Stack[-13] = Stack[-1]
0xc6: Return(); Pop(8)

0xc7: Stack[-1] = 0
0xc8: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xc9: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xca: Pop(0)
0xcb: Pop(0); Push((bool) Stack[-4] == 0)
0xcc: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xcd: Push("Locator ")
0xce: Pop(1); Push(Stack[-1] + Stack[-12]);
0xcf: Push(" doesn't exist")
0xd0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd1: @ Trace(Stack[-1])
0xd2: Pop(1)
0xd3: Stack[-1] = 0
0xd4: GOTO 0xd8

0xd5: Push((bool) 1)
0xd6: @@ AddStationaryActor(Stack[-2], Stack[-4], Stack[-3], Stack[-11], Stack[-10], Stack[-1])
0xd7: Pop(1)
0xd8: Stack[-13] = Stack[-1]
0xd9: Return(); Pop(8)

0xda: Stack[-1] = 0
0xdb: PushEmpty(object, object)
0xdc: @ FindActor(Stack[-1], Stack[-4])
0xdd: Pop(0)
0xde: Pop(0); Push((bool) Stack[-1] == 0)
0xdf: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe0: Push("Door ")
0xe1: Pop(1); Push(Stack[-1] + Stack[-5]);
0xe2: Push(" not found")
0xe3: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe4: @ Trace(Stack[-1])
0xe5: Pop(1)
0xe6: GOTO 0xea

0xe7: Push("locked")
0xe8: @@ SetProperty(Stack[-1], Stack[-4])
0xe9: Pop(1)
0xea: Return(); Pop(2)

0xeb: Stack[-1] = 0
0xec: PushEmpty(object, object)
0xed: @ FindActor(Stack[-1], Stack[-3])
0xee: Pop(0)
0xef: Pop(0); Push((bool) Stack[-1] == 0)
0xf0: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xf1: Stack[-4] = (bool) 0
0xf2: Return(); Pop(2)

0xf3: @ RemoveActor(Stack[-1])
0xf4: Pop(0)
0xf5: Stack[-4] = (bool) 1
0xf6: Return(); Pop(2)

0xf7: Stack[-1] = 0
