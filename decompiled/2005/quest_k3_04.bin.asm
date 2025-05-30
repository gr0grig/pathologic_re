GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	icot_eva_door
	k3q04
	dt_house2_08
	pt_k3q04_danko
	NPC_Bakalavr
	k3q04_danko.xml
	place_burah_lopuh
	burah_home@door1
	house5_23
	pt_k3q04_burah
	NPC_Burah
	k3q04_burah.xml
	pt_d3q03_boy
	pers_littleboy
	k3q04_boy.xml
	completed
	fail
	cleanup
	Remove
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	Door 
	 not found
	locked
	SetProperty
	Close

Import:
	SetVariable (2 args)
	GetSceneByName (2 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
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
	GTASK_0 Vars = (object, object, object) Params = 0
		EVENT_26 Op = 0x1b Vars = (string)
		EVENT_9 Op = 0x98 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: PushEmpty(string, bool)
0x2: Stack[-2] = "icot_eva_door"
0x3: Stack[-1] = (bool) 1
0x4: Call2 0xd8

0x5: Pop(2)
0x6: Push("k3q04")
0x7: Push((int) 1)
0x8: @ SetVariable(Stack[-2], Stack[-1])
0x9: Pop(2)
0xa: Push("dt_house2_08")
0xb: @ GetSceneByName(Stack[-2], Stack[-1])
0xc: Pop(1)
0xd: PushEmpty(object, object, string, string, string)
0xe: Stack[-4] = Stack[-6]
0xf: Stack[-3] = "pt_k3q04_danko"
0x10: Stack[-2] = "NPC_Bakalavr"
0x11: Stack[-1] = "k3q04_danko.xml"
0x12: Call2 0xa3

0x13: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x14: Pop(5)
0x15: PushEmpty(int)
0x16: Stack[-1] = (int) 3
0x17: Call2 0x85

0x18: Pop(1)
0x19: Return(); Pop(2)

0x1a: Stack[-1] = 0
0x1b: PushEmpty(object, object)
0x1c: @ Trace(Stack[-3])
0x1d: Pop(0)
0x1e: Push("place_burah_lopuh")
0x1f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x21: PushEmpty(string, bool)
0x22: Stack[-2] = "burah_home@door1"
0x23: Stack[-1] = (bool) 1
0x24: Call2 0xc7

0x25: Pop(2)
0x26: Push("house5_23")
0x27: @ GetSceneByName(Stack[-2], Stack[-1])
0x28: Pop(1)
0x29: PushEmpty(object, object, string, string, string)
0x2a: Stack[-4] = Stack[-6]
0x2b: Stack[-3] = "pt_k3q04_burah"
0x2c: Stack[-2] = "NPC_Burah"
0x2d: Stack[-1] = "k3q04_burah.xml"
0x2e: Call2 0xa3

0x2f: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x30: Pop(5)
0x31: @ GetMainOutdoorScene(Stack[-1])
0x32: Pop(0)
0x33: PushEmpty(object, object, string, string, string)
0x34: Stack[-4] = Stack[-6]
0x35: Stack[-3] = "pt_d3q03_boy"
0x36: Stack[-2] = "pers_littleboy"
0x37: Stack[-1] = "k3q04_boy.xml"
0x38: Call2 0xb5

0x39: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x3a: Pop(5)
0x3b: Stack[-1] = 0
0x3c: GOTO 0x4a

0x3d: Push("completed")
0x3e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3f: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x40: PushEmpty()
0x41: Call2 0x5e

0x42: Pop(0)
0x43: GOTO 0x4a

0x44: Push("fail")
0x45: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x47: PushEmpty()
0x48: Call2 0x56

0x49: Pop(0)
0x4a: Return(); Pop(2)

0x4b: PushEmpty(int, int)
0x4c: Push("k3q04")
0x4d: @ GetVariable(Stack[-1], Stack[-2])
0x4e: Pop(1)
0x4f: Push((int) 1000)
0x50: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x51: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x52: PushEmpty()
0x53: Call2 0x56

0x54: Pop(0)
0x55: Return(); Pop(2)

0x56: Push("k3q04")
0x57: Push((int) -1)
0x58: @ SetVariable(Stack[-2], Stack[-1])
0x59: Pop(2)
0x5a: PushEmpty()
0x5b: Call2 0x66

0x5c: Pop(0)
0x5d: Return(); Pop(0)

0x5e: Push("k3q04")
0x5f: Push((int) 1000)
0x60: @ SetVariable(Stack[-2], Stack[-1])
0x61: Pop(2)
0x62: PushEmpty()
0x63: Call2 0x66

0x64: Pop(0)
0x65: Return(); Pop(0)

0x66: EventDisable(26)
0x67: PushEmpty(string, bool)
0x68: Stack[-2] = "icot_eva_door"
0x69: Stack[-1] = (bool) 0
0x6a: Call2 0xd8

0x6b: Pop(2)
0x6c: PushEmpty(string, bool)
0x6d: Stack[-2] = "burah_home@door1"
0x6e: Stack[-1] = (bool) 0
0x6f: Call2 0xc7

0x70: Pop(2)
0x71: Push( Stack[0 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x73: Push("cleanup")
0x74: @ Trigger(Stack[-0], Stack[-1])
0x75: Pop(1)
0x76: Push( Stack[1 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x78: Push("cleanup")
0x79: @ Trigger(Stack[-1], Stack[-1])
0x7a: Pop(1)
0x7b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7d: @@ Remove()
0x7e: Pop(0)
0x7f: PushEmpty(object)
0x80: Call2 0x9d

0x81: Pop(0)
0x82: @ RemoveActor(Stack[-1])
0x83: Pop(1)
0x84: Return(); Pop(0)

0x85: PushEmpty(float, float)
0x86: @ GetGameTime(Stack[-1])
0x87: Pop(0)
0x88: Push((int) 24)
0x89: Pop(1); Push(Stack[-4] * Stack[-1]);
0x8a: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x8b: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8c: PushEmpty()
0x8d: Call2 0x66

0x8e: Pop(0)
0x8f: GOTO 0x97

0x90: Push((int) 0)
0x91: Push((int) 24)
0x92: Pop(1); Push(Stack[-5] * Stack[-1]);
0x93: @ SetTimeEvent(Stack[-2], Stack[-1])
0x94: Pop(2)
0x95: @ Hold()
0x96: Pop(0)
0x97: Return(); Pop(2)

0x98: PushEmpty()
0x99: PushEmpty()
0x9a: Call2 0x4b

0x9b: Pop(0)
0x9c: Return(); Pop(0)

0x9d: PushEmpty(object, object)
0x9e: @ self(Stack[-1])
0x9f: Pop(0)
0xa0: Stack[-3] = Stack[-1]
0xa1: Return(); Pop(2)

0xa2: Stack[-1] = 0
0xa3: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xa4: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xa5: Pop(0)
0xa6: Pop(0); Push((bool) Stack[-4] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xa8: Push("Locator ")
0xa9: Pop(1); Push(Stack[-1] + Stack[-12]);
0xaa: Push(" doesn't exist")
0xab: Pop(2); Push(Stack[-2] + Stack[-1]);
0xac: @ Trace(Stack[-1])
0xad: Pop(1)
0xae: Stack[-1] = 0
0xaf: GOTO 0xb2

0xb0: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xb1: Pop(0)
0xb2: Stack[-13] = Stack[-1]
0xb3: Return(); Pop(8)

0xb4: Stack[-1] = 0
0xb5: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xb6: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xb7: Pop(0)
0xb8: Pop(0); Push((bool) Stack[-4] == 0)
0xb9: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xba: Push("Locator ")
0xbb: Pop(1); Push(Stack[-1] + Stack[-12]);
0xbc: Push(" doesn't exist")
0xbd: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbe: @ Trace(Stack[-1])
0xbf: Pop(1)
0xc0: Stack[-1] = 0
0xc1: GOTO 0xc4

0xc2: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0xc3: Pop(0)
0xc4: Stack[-13] = Stack[-1]
0xc5: Return(); Pop(8)

0xc6: Stack[-1] = 0
0xc7: PushEmpty(object, object)
0xc8: @ FindActor(Stack[-1], Stack[-4])
0xc9: Pop(0)
0xca: Pop(0); Push((bool) Stack[-1] == 0)
0xcb: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xcc: Push("Door ")
0xcd: Pop(1); Push(Stack[-1] + Stack[-5]);
0xce: Push(" not found")
0xcf: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd0: @ Trace(Stack[-1])
0xd1: Pop(1)
0xd2: GOTO 0xd6

0xd3: Push("locked")
0xd4: @@ SetProperty(Stack[-1], Stack[-4])
0xd5: Pop(1)
0xd6: Return(); Pop(2)

0xd7: Stack[-1] = 0
0xd8: PushEmpty(object, object)
0xd9: @ FindActor(Stack[-1], Stack[-4])
0xda: Pop(0)
0xdb: Pop(0); Push((bool) Stack[-1] == 0)
0xdc: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xdd: Push("Door ")
0xde: Pop(1); Push(Stack[-1] + Stack[-5]);
0xdf: Push(" not found")
0xe0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe1: @ Trace(Stack[-1])
0xe2: Pop(1)
0xe3: GOTO 0xeb

0xe4: Push(Stack[-3])
0xe5: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe6: @@ Close()
0xe7: Pop(0)
0xe8: Push("locked")
0xe9: @@ SetProperty(Stack[-1], Stack[-4])
0xea: Pop(1)
0xeb: Return(); Pop(2)

0xec: Stack[-1] = 0
