GlobalVarCount = 0

Strings:
	init_soldiers
	pt_d11q01_soldier
	pers_soldat
	d11q01_soldier.xml
	add
	pt_d11q01_msoldier
	d11q01_msoldier.xml
	init_girl
	shouse1_kabak
	pt_d11q01_girl
	pers_nudegirl
	d11q01_girl.xml
	remove_andrei
	NPC_Andrei
	restore_andrei
	pt_andrei
	NPC_Danko_Andrei.xml
	soldier_attack
	size
	get
	GetActor
	Remove
	fail
	completed
	d11q01
	cleanup
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	clear

Import:
	Hold (0 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	GetSceneByName (2 args)
	FindActor (2 args)
	RemoveActor (1 args)
	Trigger (2 args)
	SetVariable (2 args)
	CreateObjectVector (1 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object) Params = 0
		EVENT_26 Op = 0x8 Vars = (string)


0x0: PushEmpty(object)
0x1: Call 0x9d

0x2: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x3: Pop(1)
0x4: @ Hold()
0x5: Pop(0)
0x6: GOTO 0x4

0x7: Return(); Pop(0)

0x8: PushEmpty(object, int, object, object, object, int, int, object, object, object, int, object, object, object, int, int, object, object)
0x9: @ Trace(Stack[-19])
0xa: Pop(0)
0xb: Push("init_soldiers")
0xc: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0xd: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0xe: @ GetMainOutdoorScene(Stack[-9])
0xf: Pop(0)
0x10: Stack[-8] = (int) 1
0x11: Push((int) 10)
0x12: Pop(1); Push((bool) Stack[-9] <= Stack[-1])
0x13: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x14: PushEmpty(object, object, string, string, string)
0x15: Stack[-4] = Stack[-14]
0x16: Push("pt_d11q01_soldier")
0x17: Stack[-4] = Stack[-1] + Stack[-14]; Pop(1);
0x18: Stack[-2] = "pers_soldat"
0x19: Stack[-1] = "d11q01_soldier.xml"
0x1a: Call 0xb5

0x1b: Pop(4)
0x1c: @@ add(Stack[-1])
0x1d: Pop(1)
0x1e: Push((int) 1)
0x1f: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x20: GOTO 0x11

0x21: PushEmpty(object, object, string, string, string)
0x22: Stack[-4] = Stack[-14]
0x23: Stack[-3] = "pt_d11q01_msoldier"
0x24: Stack[-2] = "pers_soldat"
0x25: Stack[-1] = "d11q01_msoldier.xml"
0x26: Call 0xb5

0x27: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x28: Pop(5)
0x29: Stack[-9] = 0
0x2a: GOTO 0x7d

0x2b: Push("init_girl")
0x2c: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x2e: Push("shouse1_kabak")
0x2f: @ GetSceneByName(Stack[-8], Stack[-1])
0x30: Pop(1)
0x31: PushEmpty(object, object, string, string, string)
0x32: Stack[-4] = Stack[-12]
0x33: Stack[-3] = "pt_d11q01_girl"
0x34: Stack[-2] = "pers_nudegirl"
0x35: Stack[-1] = "d11q01_girl.xml"
0x36: Call 0xa3

0x37: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x38: Pop(5)
0x39: Stack[-7] = 0
0x3a: GOTO 0x7d

0x3b: Push("remove_andrei")
0x3c: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x3d: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x3e: Push("NPC_Andrei")
0x3f: @ FindActor(Stack[-7], Stack[-1])
0x40: Pop(1)
0x41: @ RemoveActor(Stack[-6])
0x42: Pop(0)
0x43: Stack[-6] = 0
0x44: GOTO 0x7d

0x45: Push("restore_andrei")
0x46: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x47: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x48: Push("shouse1_kabak")
0x49: @ GetSceneByName(Stack[-6], Stack[-1])
0x4a: Pop(1)
0x4b: PushEmpty(object, object, string, string, string)
0x4c: Stack[-4] = Stack[-10]
0x4d: Stack[-3] = "pt_andrei"
0x4e: Stack[-2] = "NPC_Andrei"
0x4f: Stack[-1] = "NPC_Danko_Andrei.xml"
0x50: Call 0xa3

0x51: Pop(5)
0x52: Stack[-5] = 0
0x53: GOTO 0x7d

0x54: Push("soldier_attack")
0x55: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x56: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x57: @@ size(Stack[-4])
0x58: Pop(0)
0x59: Stack[-3] = (int) 0
0x5a: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x5b: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x5c: @@ get(Stack[-2], Stack[-3])
0x5d: Pop(0)
0x5e: Push(Stack[-2])
0x5f: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x60: @@ GetActor(Stack[-1])
0x61: Pop(0)
0x62: Pop(0); Push((bool) Stack[-1] == 0)
0x63: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x64: @@ Remove()
0x65: Pop(0)
0x66: GOTO 0x6a

0x67: Push("attack")
0x68: @ Trigger(Stack[-2], Stack[-1])
0x69: Pop(1)
0x6a: Stack[-1] = 0
0x6b: Stack[-2] = 0
0x6c: Push((int) 1)
0x6d: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x6e: GOTO 0x5a

0x6f: GOTO 0x7d

0x70: Push("fail")
0x71: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x72: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x73: PushEmpty()
0x74: Call 0x7e

0x75: Pop(0)
0x76: GOTO 0x7d

0x77: Push("completed")
0x78: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x79: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7a: PushEmpty()
0x7b: Call 0x86

0x7c: Pop(0)
0x7d: Return(); Pop(18)

0x7e: Push("d11q01")
0x7f: Push((int) -1)
0x80: @ SetVariable(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: PushEmpty()
0x83: Call 0x8e

0x84: Pop(0)
0x85: Return(); Pop(0)

0x86: Push("d11q01")
0x87: Push((int) 1000)
0x88: @ SetVariable(Stack[-2], Stack[-1])
0x89: Pop(2)
0x8a: PushEmpty()
0x8b: Call 0x8e

0x8c: Pop(0)
0x8d: Return(); Pop(0)

0x8e: EventDisable(26)
0x8f: PushEmpty(object)
0x90: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x91: Call 0xc7

0x92: Pop(1)
0x93: Push( Stack[2 + Tasks[-1].StackPointer] )
0x94: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x95: @@ Remove()
0x96: Pop(0)
0x97: Push( Stack[0 + Tasks[-1].StackPointer] )
0x98: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x99: Push("cleanup")
0x9a: @ Trigger(Stack[-0], Stack[-1])
0x9b: Pop(1)
0x9c: Return(); Pop(0)

0x9d: PushEmpty(object, object)
0x9e: @ CreateObjectVector(Stack[-1])
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
0xc7: PushEmpty(int, int, object, int, int, object)
0xc8: @@ size(Stack[-3])
0xc9: Pop(0)
0xca: Stack[-2] = (int) 0
0xcb: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xcc: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xcd: @@ get(Stack[-1], Stack[-2])
0xce: Pop(0)
0xcf: Push(Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd1: @@ Remove()
0xd2: Pop(0)
0xd3: Stack[-1] = 0
0xd4: Push((int) 1)
0xd5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xd6: GOTO 0xcb

0xd7: @@ clear()
0xd8: Pop(0)
0xd9: Return(); Pop(6)

