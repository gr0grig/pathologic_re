GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	place_klara
	cot_anna
	pt_b6q02_klara
	NPC_Klara
	b6q02_klara.xml
	init_maze
	house_vlad@door2
	house_vlad
	pt_prorok
	pers_krysa
	b6q02_prorok.xml
	pt_fog
	GetLocator
	fog_stat_indoor.xml
	add
	maze_start
	pt_maze_start
	fail
	completed
	b6q02
	cleanup
	player
	Locator 
	 doesn't exist
	Door 
	 not found
	locked
	SetProperty
	Teleport location '
	' not found in scene '
	size
	get

Import:
	Trace (1 args)
	GetSceneByName (2 args)
	AddActorByType (6 args)
	GetVariable (2 args)
	SetVariable (2 args)
	Trigger (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	FindActor (2 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddActor (6 args)
	Teleport (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object) Params = 0
		EVENT_26 Op = 0x9 Vars = (string)
		EVENT_9 Op = 0xa7 Vars = (int, float)


0x0: PushEmpty(object)
0x1: Call2 0xb9

0x2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3: Pop(1)
0x4: PushEmpty(int)
0x5: Stack[-1] = (int) 6
0x6: Call2 0x94

0x7: Pop(1)
0x8: Return(); Pop(0)

0x9: PushEmpty(object, object, int, bool, cvector, cvector, object, object, object, int, bool, cvector, cvector, object)
0xa: @ Trace(Stack[-15])
0xb: Pop(0)
0xc: Push("place_klara")
0xd: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0xf: Push("cot_anna")
0x10: @ GetSceneByName(Stack[-8], Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(object, object, string, string, string)
0x13: Stack[-4] = Stack[-12]
0x14: Stack[-3] = "pt_b6q02_klara"
0x15: Stack[-2] = "NPC_Klara"
0x16: Stack[-1] = "b6q02_klara.xml"
0x17: Call2 0xbf

0x18: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x19: Pop(5)
0x1a: Stack[-7] = 0
0x1b: GOTO 0x5d

0x1c: Push("init_maze")
0x1d: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x1e: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x1f: PushEmpty(string, bool)
0x20: Stack[-2] = "house_vlad@door2"
0x21: Stack[-1] = (bool) 0
0x22: Call2 0xd1

0x23: Pop(2)
0x24: Push("house_vlad")
0x25: @ GetSceneByName(Stack[-7], Stack[-1])
0x26: Pop(1)
0x27: PushEmpty(object, object, string, string, string)
0x28: Stack[-4] = Stack[-11]
0x29: Stack[-3] = "pt_prorok"
0x2a: Stack[-2] = "pers_krysa"
0x2b: Stack[-1] = "b6q02_prorok.xml"
0x2c: Call2 0xbf

0x2d: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x2e: Pop(5)
0x2f: Stack[-5] = (int) 1
0x30: Push("pt_fog")
0x31: Pop(1); Push(Stack[-1] + Stack[-6]);
0x32: @@ GetLocator(Stack[-1], Stack[-5], Stack[-4], Stack[-3])
0x33: Pop(1)
0x34: Pop(0); Push((bool) Stack[-4] == 0)
0x35: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x36: GOTO 0x41

0x37: Push("fog")
0x38: Push("fog_stat_indoor.xml")
0x39: @ AddActorByType(Stack[-3], Stack[-2], Stack[-8], Stack[-5], Stack[-4], Stack[-1])
0x3a: Pop(2)
0x3b: @@ add(Stack[-1])
0x3c: Pop(0)
0x3d: Stack[-1] = 0
0x3e: Push((int) 1)
0x3f: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x40: GOTO 0x30

0x41: Stack[-6] = 0
0x42: GOTO 0x5d

0x43: Push("maze_start")
0x44: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x45: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x46: PushEmpty(object, string, string)
0x47: PushEmpty(object)
0x48: Call2 0xac

0x49: Stack[-4] = Stack[-1]
0x4a: Pop(1)
0x4b: Stack[-2] = "house_vlad"
0x4c: Stack[-1] = "pt_maze_start"
0x4d: Call2 0xe2

0x4e: Pop(3)
0x4f: GOTO 0x5d

0x50: Push("fail")
0x51: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x52: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x53: PushEmpty()
0x54: Call2 0x69

0x55: Pop(0)
0x56: GOTO 0x5d

0x57: Push("completed")
0x58: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5a: PushEmpty()
0x5b: Call2 0x71

0x5c: Pop(0)
0x5d: Return(); Pop(14)

0x5e: PushEmpty(int, int)
0x5f: Push("b6q02")
0x60: @ GetVariable(Stack[-1], Stack[-2])
0x61: Pop(1)
0x62: Push((int) 1000)
0x63: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x64: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x65: PushEmpty()
0x66: Call2 0x69

0x67: Pop(0)
0x68: Return(); Pop(2)

0x69: Push("b6q02")
0x6a: Push((int) -1)
0x6b: @ SetVariable(Stack[-2], Stack[-1])
0x6c: Pop(2)
0x6d: PushEmpty()
0x6e: Call2 0x79

0x6f: Pop(0)
0x70: Return(); Pop(0)

0x71: Push("b6q02")
0x72: Push((int) 1000)
0x73: @ SetVariable(Stack[-2], Stack[-1])
0x74: Pop(2)
0x75: PushEmpty()
0x76: Call2 0x79

0x77: Pop(0)
0x78: Return(); Pop(0)

0x79: EventDisable(26)
0x7a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x7b: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7c: Push("cleanup")
0x7d: @ Trigger(Stack[-0], Stack[-1])
0x7e: Pop(1)
0x7f: Push( Stack[1 + Tasks[-1].StackPointer] )
0x80: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x81: Push("cleanup")
0x82: @ Trigger(Stack[-1], Stack[-1])
0x83: Pop(1)
0x84: PushEmpty(object, string)
0x85: Stack[-2] = Stack[2 + Tasks[-1].StackPointer]
0x86: Stack[-1] = "cleanup"
0x87: Call2 0xfa

0x88: Pop(2)
0x89: PushEmpty(string, bool)
0x8a: Stack[-2] = "house_vlad@door2"
0x8b: Stack[-1] = (bool) 1
0x8c: Call2 0xd1

0x8d: Pop(2)
0x8e: PushEmpty(object)
0x8f: Call2 0xb3

0x90: Pop(0)
0x91: @ RemoveActor(Stack[-1])
0x92: Pop(1)
0x93: Return(); Pop(0)

0x94: PushEmpty(float, float)
0x95: @ GetGameTime(Stack[-1])
0x96: Pop(0)
0x97: Push((int) 24)
0x98: Pop(1); Push(Stack[-4] * Stack[-1]);
0x99: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x9a: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9b: PushEmpty()
0x9c: Call2 0x79

0x9d: Pop(0)
0x9e: GOTO 0xa6

0x9f: Push((int) 0)
0xa0: Push((int) 24)
0xa1: Pop(1); Push(Stack[-5] * Stack[-1]);
0xa2: @ SetTimeEvent(Stack[-2], Stack[-1])
0xa3: Pop(2)
0xa4: @ Hold()
0xa5: Pop(0)
0xa6: Return(); Pop(2)

0xa7: PushEmpty()
0xa8: PushEmpty()
0xa9: Call2 0x5e

0xaa: Pop(0)
0xab: Return(); Pop(0)

0xac: PushEmpty(object, object)
0xad: Push("player")
0xae: @ FindActor(Stack[-2], Stack[-1])
0xaf: Pop(1)
0xb0: Stack[-3] = Stack[-1]
0xb1: Return(); Pop(2)

0xb2: Stack[-1] = 0
0xb3: PushEmpty(object, object)
0xb4: @ self(Stack[-1])
0xb5: Pop(0)
0xb6: Stack[-3] = Stack[-1]
0xb7: Return(); Pop(2)

0xb8: Stack[-1] = 0
0xb9: PushEmpty(object, object)
0xba: @ CreateObjectVector(Stack[-1])
0xbb: Pop(0)
0xbc: Stack[-3] = Stack[-1]
0xbd: Return(); Pop(2)

0xbe: Stack[-1] = 0
0xbf: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xc0: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xc1: Pop(0)
0xc2: Pop(0); Push((bool) Stack[-4] == 0)
0xc3: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc4: Push("Locator ")
0xc5: Pop(1); Push(Stack[-1] + Stack[-12]);
0xc6: Push(" doesn't exist")
0xc7: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc8: @ Trace(Stack[-1])
0xc9: Pop(1)
0xca: Stack[-1] = 0
0xcb: GOTO 0xce

0xcc: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xcd: Pop(0)
0xce: Stack[-13] = Stack[-1]
0xcf: Return(); Pop(8)

0xd0: Stack[-1] = 0
0xd1: PushEmpty(object, object)
0xd2: @ FindActor(Stack[-1], Stack[-4])
0xd3: Pop(0)
0xd4: Pop(0); Push((bool) Stack[-1] == 0)
0xd5: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd6: Push("Door ")
0xd7: Pop(1); Push(Stack[-1] + Stack[-5]);
0xd8: Push(" not found")
0xd9: Pop(2); Push(Stack[-2] + Stack[-1]);
0xda: @ Trace(Stack[-1])
0xdb: Pop(1)
0xdc: GOTO 0xe0

0xdd: Push("locked")
0xde: @@ SetProperty(Stack[-1], Stack[-4])
0xdf: Pop(1)
0xe0: Return(); Pop(2)

0xe1: Stack[-1] = 0
0xe2: PushEmpty(object, bool, cvector, cvector, object, bool, cvector, cvector)
0xe3: Pop(0); Push((bool) Stack[-11] == 0)
0xe4: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe5: Return(); Pop(8)

0xe6: @ GetSceneByName(Stack[-4], Stack[-10])
0xe7: Pop(0)
0xe8: @@ GetLocator(Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(0)
0xea: Pop(0); Push((bool) Stack[-3] == 0)
0xeb: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xec: Push("Teleport location '")
0xed: Pop(1); Push(Stack[-1] + Stack[-10]);
0xee: Push("' not found in scene '")
0xef: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf0: Pop(1); Push(Stack[-1] + Stack[-11]);
0xf1: Push("'")
0xf2: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf3: @ Trace(Stack[-1])
0xf4: Pop(1)
0xf5: GOTO 0xf8

0xf6: @ Teleport(Stack[-11], Stack[-4], Stack[-2], Stack[-1])
0xf7: Pop(0)
0xf8: Return(); Pop(8)

0xf9: Stack[-4] = 0
0xfa: PushEmpty(int, int, object, int, int, object)
0xfb: Push(Stack[-8])
0xfc: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xfd: @@ size(Stack[-3])
0xfe: Pop(0)
0xff: Stack[-2] = (int) 0
0x100: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x101: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x102: @@ get(Stack[-1], Stack[-2])
0x103: Pop(0)
0x104: Push(Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x106: @ Trigger(Stack[-1], Stack[-7])
0x107: Pop(0)
0x108: Stack[-1] = 0
0x109: Push((int) 1)
0x10a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x10b: GOTO 0x100

0x10c: Return(); Pop(6)

