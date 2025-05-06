GlobalVarCount = 2
	G_VAR_0 int 
	G_VAR_1 object 

Strings:
	On Actor Stuck
	GetPosition
	GetPFPosition
	walk
	run
	On Actor Stuck 1
	OnActorStuck
	Random point found
	Random point not found
	all
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	idle
	quest_d4_01
	key2_done
	GetRegionByPt
	HasProperty
	HasProperty
	IsDead
	IsDead
	GetScene
	noaccess
	GetProperty
	GetEyesHeight
	head
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	playsound
	giveitem
	d4q01KeyWasted
	soborkey is given
	d4q01_sobor_key
	init_sobor
	ood4WastedMale1
	tvirin is given
	tvirin
	SetReturnValue
	branch
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png

Import:
	GetPosition (1 args)
	SetTimer (2 args)
	Sleep (1 args)
	KillTimer (1 args)
	Trace (1 args)
	Stop (0 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	Sleep (2 args)
	RequestClearPath (1 args)
	GetRandomPFPointInCircle (4 args)
	SetPosition (1 args)
	rand (2 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	StopGroup0 (0 args)
	FindShiftedPathTo (2 args)
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	GetScene (1 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	UnlookAsync (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	SetVariable (2 args)

RunOp = 0x46a
RunTask = 6

GlobalTasks: 
	GTASK_0 Vars = (bool, object, cvector, int, int, int) Params = 1
		EVENT_7 Op = 0x31 Vars = (int)
		EVENT_10 Op = 0xda Vars = (object)
		EVENT_41 Op = 0xe5 Vars = (object)
	GTASK_1 Vars = (bool, object, cvector, int, int, int) Params = 1
		EVENT_7 Op = 0x117 Vars = (int)
		EVENT_28 Op = 0x13c Vars = ()
		EVENT_10 Op = 0x1cc Vars = (object)
		EVENT_41 Op = 0x1d7 Vars = (object)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_10 Op = 0x233 Vars = (object)
		EVENT_28 Op = 0x237 Vars = ()
		EVENT_41 Op = 0x241 Vars = (object)
	GTASK_3  Params = 0
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x360 Vars = (int, int)
	GTASK_6  Params = 0
		EVENT_0 Op = 0x478 Vars = (object)
	GTASK_7  Params = 1

Events:
EVENT_41 Op = 0x659 Vars = (object)

0x0: PushEmpty()
0x1: @ GetPosition(Stack[-2])
0x2: Pop(0)
0x3: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x4: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x5: Push((int) 123)
0x6: Push((float)0.5)
0x7: @ SetTimer(Stack[-2], Stack[-1])
0x8: Pop(2)
0x9: Stack[3 + Tasks[-1].StackPointer] = (int)0
0xa: Push((int) 10)
0xb: Push((int) 1)
0xc: @ SetTimer(Stack[-2], Stack[-1])
0xd: Pop(2)
0xe: PushEmpty(bool, object, float, float, bool, bool)
0xf: Stack[-5] = Stack[-7]
0x10: Stack[-4] = (int) 250
0x11: Stack[-3] = (int) 3000
0x12: Stack[-2] = (bool) 1
0x13: Stack[-1] = (bool) 1
0x14: Call2 0x62

0x15: Pop(6)
0x16: Push((int) 1)
0x17: Stack[3 + Tasks[-1].StackPointer] = Stack[3 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x18: PushEmpty(int)
0x19: Call2 0x520

0x1a: Pop(0)
0x1b: Push(GlobalVars[0])
0x1c: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1e: GOTO 0x2a

0x1f: Push((int) 1)
0x20: @ Sleep(Stack[-1])
0x21: Pop(1)
0x22: PushEmpty(int)
0x23: Call2 0x520

0x24: Pop(0)
0x25: Push(GlobalVars[0])
0x26: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x27: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x28: GOTO 0x2a

0x29: GOTO 0xe

0x2a: Push((int) 10)
0x2b: @ KillTimer(Stack[-1])
0x2c: Pop(1)
0x2d: Push((int) 123)
0x2e: @ KillTimer(Stack[-1])
0x2f: Pop(1)
0x30: Return(); Pop(0)

0x31: PushEmpty(cvector, cvector, float, cvector, cvector, float)
0x32: Push((int) 10)
0x33: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x34: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x35: PushEmpty(int)
0x36: Call2 0x520

0x37: Pop(0)
0x38: Push(GlobalVars[0])
0x39: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x3a: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x3b: PushEmpty()
0x3c: Call2 0xde

0x3d: Pop(0)
0x3e: Push((int) 123)
0x3f: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x40: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x41: @ GetPosition(Stack[-3])
0x42: Pop(0)
0x43: Stack[-2] = Stack[-3] - Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x44: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x45: PushEmpty(bool)
0x46: Stack[-1] = (bool) 1
0x47: Push((float)10000.0)
0x48: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x49: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x4a: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] != Stack[3 + Tasks[-1].StackPointer])
0x4b: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x4c: Stack[-1] = (bool) 0
0x4d: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x4e: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x4f: Stack[4 + Tasks[-1].StackPointer] = Stack[3 + Tasks[-1].StackPointer]
0x50: Return(); Pop(6)

0x51: Push((int) 1)
0x52: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x53: Push((int) 7)
0x54: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x55: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x56: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x57: Push("On Actor Stuck")
0x58: @ Trace(Stack[-1])
0x59: Pop(1)
0x5a: PushEmpty()
0x5b: Call2 0xde

0x5c: Pop(0)
0x5d: PushEmpty(int)
0x5e: Stack[-1] = Stack[-8]
0x5f: Call2 0xc8

0x60: Pop(1)
0x61: Return(); Pop(6)

0x62: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x63: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x64: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x65: Stack[-7] = Stack[-17]
0x66: PushEmpty(bool, object)
0x67: Stack[-1] = Stack[-23]
0x68: Call2 0xee

0x69: Pop(1)
0x6a: Pop(1); Push((bool) Stack[-1] == 0)
0x6b: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6c: Stack[-22] = (bool) 0
0x6d: Return(); Pop(16)

0x6e: @@ GetPosition(Stack[-5])
0x6f: Pop(0)
0x70: @ GetPosition(Stack[-4])
0x71: Pop(0)
0x72: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x73: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x74: PushEmpty(bool)
0x75: Stack[-1] = (bool) 0
0x76: Push((int) 0)
0x77: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x78: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x79: Pop(0); Push(Stack[-20] * Stack[-20]);
0x7a: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x7b: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7c: Stack[-1] = (bool) 1
0x7d: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x7e: @ Stop()
0x7f: Pop(0)
0x80: Stack[-22] = (bool) 0
0x81: Return(); Pop(16)

0x82: Pop(0); Push(Stack[-20] * Stack[-20]);
0x83: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x84: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0x85: @@ GetPFPosition(Stack[-5])
0x86: Pop(0)
0x87: @ FindPathTo(Stack[-1], Stack[-5])
0x88: Pop(0)
0x89: Pop(0); Push(( Stack[-1] != 0 )
0x8a: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8b: Stack[-6] = Stack[-1]
0x8c: Stack[-1] = 0
0x8d: Pop(0); Push(( Stack[-6] != 0 )
0x8e: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0x8f: Push(Stack[-7])
0x90: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x91: Stack[-7] = (bool) 0
0x92: @ RotatePath(Stack[-6], Stack[-8])
0x93: Pop(0)
0x94: Pop(0); Push((bool) Stack[-8] == 0)
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0xc6

0x97: Push((int) 0)
0x98: Push((float)0.3)
0x99: @ SetTimer(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: PushEmpty(string)
0x9c: Call2 0xf5

0x9d: Pop(0)
0x9e: PushEmpty(string)
0x9f: Call2 0xf7

0xa0: Pop(0)
0xa1: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0xa2: Pop(2)
0xa3: Pop(0); Push((bool) Stack[-8] == 0)
0xa4: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa5: Push( Stack[0 + Tasks[-1].StackPointer] )
0xa6: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa7: Stack[-6] = 0
0xa8: GOTO 0xc6

0xa9: GOTO 0xab

0xaa: GOTO 0xc5

0xab: GOTO 0xad

0xac: Stack[-6] = 0
0xad: GOTO 0xbe

0xae: Push((int) 0)
0xaf: @ KillTimer(Stack[-1])
0xb0: Pop(1)
0xb1: Push((float)0.5)
0xb2: @ Sleep(Stack[-1], Stack[-9])
0xb3: Pop(1)
0xb4: Pop(0); Push((bool) Stack[-8] == 0)
0xb5: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb6: Push( Stack[0 + Tasks[-1].StackPointer] )
0xb7: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb8: Stack[-6] = 0
0xb9: GOTO 0xc6

0xba: Push((int) 0)
0xbb: Push((float)0.3)
0xbc: @ SetTimer(Stack[-2], Stack[-1])
0xbd: Pop(2)
0xbe: Stack[-1] = 0
0xbf: GOTO 0xc4

0xc0: Push((int) 0)
0xc1: @ KillTimer(Stack[-1])
0xc2: Pop(1)
0xc3: GOTO 0xc6

0xc4: Stack[-6] = 0
0xc5: GOTO 0x66

0xc6: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0xc7: Return(); Pop(16)

0xc8: PushEmpty()
0xc9: Push((int) 0)
0xca: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xcc: Return(); Pop(0)

0xcd: PushEmpty(bool, object)
0xce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Call2 0xee

0xd0: Pop(1)
0xd1: Pop(1); Push((bool) Stack[-1] == 0)
0xd2: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd3: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xd4: Push((int) 0)
0xd5: @ KillTimer(Stack[-1])
0xd6: Pop(1)
0xd7: @ Stop()
0xd8: Pop(0)
0xd9: Return(); Pop(0)

0xda: PushEmpty()
0xdb: @ RequestClearPath(Stack[-1])
0xdc: Pop(0)
0xdd: Return(); Pop(0)

0xde: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xdf: Push((int) 0)
0xe0: @ KillTimer(Stack[-1])
0xe1: Pop(1)
0xe2: @ Stop()
0xe3: Pop(0)
0xe4: Return(); Pop(0)

0xe5: PushEmpty()
0xe6: PushEmpty()
0xe7: Call2 0xde

0xe8: Pop(0)
0xe9: PushEmpty(object)
0xea: Stack[-1] = Stack[-2]
0xeb: Call2 0x659

0xec: Pop(1)
0xed: Return(); Pop(0)

0xee: PushEmpty()
0xef: PushEmpty(bool, object)
0xf0: Stack[-1] = Stack[-3]
0xf1: Call2 0x560

0xf2: Stack[-4] = Stack[-2]
0xf3: Pop(2)
0xf4: Return(); Pop(0)

0xf5: Stack[-1] = "walk"
0xf6: Return(); Pop(0)

0xf7: Stack[-1] = "run"
0xf8: Return(); Pop(0)

0xf9: PushEmpty()
0xfa: @ GetPosition(Stack[-2])
0xfb: Pop(0)
0xfc: Stack[4 + Tasks[-1].StackPointer] = (int)0
0xfd: Stack[5 + Tasks[-1].StackPointer] = (int)0
0xfe: Push((int) 123)
0xff: Push((float)0.5)
0x100: @ SetTimer(Stack[-2], Stack[-1])
0x101: Pop(2)
0x102: Stack[3 + Tasks[-1].StackPointer] = (int)0
0x103: PushEmpty(bool, object, float, float, bool, bool)
0x104: Stack[-5] = Stack[-7]
0x105: Stack[-4] = (int) 250
0x106: Stack[-3] = (int) 3000
0x107: Stack[-2] = (bool) 1
0x108: Stack[-1] = (bool) 1
0x109: Call2 0x154

0x10a: Pop(5)
0x10b: Pop(1); Push((bool) Stack[-1] == 0)
0x10c: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x10d: Push((int) 1)
0x10e: Stack[3 + Tasks[-1].StackPointer] = Stack[3 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x10f: Push((int) 1)
0x110: @ Sleep(Stack[-1])
0x111: Pop(1)
0x112: GOTO 0x103

0x113: Push((int) 123)
0x114: @ KillTimer(Stack[-1])
0x115: Pop(1)
0x116: Return(); Pop(0)

0x117: PushEmpty(cvector, cvector, float, cvector, cvector, float)
0x118: Push((int) 123)
0x119: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x11b: @ GetPosition(Stack[-3])
0x11c: Pop(0)
0x11d: Stack[-2] = Stack[-3] - Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x11e: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x11f: PushEmpty(bool)
0x120: Stack[-1] = (bool) 1
0x121: Push((float)10000.0)
0x122: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x124: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] != Stack[3 + Tasks[-1].StackPointer])
0x125: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x126: Stack[-1] = (bool) 0
0x127: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x128: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x129: Stack[4 + Tasks[-1].StackPointer] = Stack[3 + Tasks[-1].StackPointer]
0x12a: Return(); Pop(6)

0x12b: Push((int) 1)
0x12c: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x12d: Push((int) 7)
0x12e: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x130: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x131: Push("On Actor Stuck 1")
0x132: @ Trace(Stack[-1])
0x133: Pop(1)
0x134: PushEmpty()
0x135: Call2 0x1d0

0x136: Pop(0)
0x137: PushEmpty(int)
0x138: Stack[-1] = Stack[-8]
0x139: Call2 0x1ba

0x13a: Pop(1)
0x13b: Return(); Pop(6)

0x13c: PushEmpty(cvector, bool, cvector, cvector, bool, cvector)
0x13d: Push("OnActorStuck")
0x13e: @ Trace(Stack[-1])
0x13f: Pop(1)
0x140: PushEmpty()
0x141: Call2 0x1d0

0x142: Pop(0)
0x143: @ GetPosition(Stack[-3])
0x144: Pop(0)
0x145: Push((float)0.3)
0x146: @ GetRandomPFPointInCircle(Stack[-2], Stack[-4], Stack[-1], Stack[-3])
0x147: Pop(1)
0x148: Push(Stack[-2])
0x149: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14a: Push("Random point found")
0x14b: @ Trace(Stack[-1])
0x14c: Pop(1)
0x14d: @ SetPosition(Stack[-1])
0x14e: Pop(0)
0x14f: GOTO 0x153

0x150: Push("Random point not found")
0x151: @ Trace(Stack[-1])
0x152: Pop(1)
0x153: Return(); Pop(6)

0x154: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x155: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x156: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x157: Stack[-7] = Stack[-17]
0x158: PushEmpty(bool, object)
0x159: Stack[-1] = Stack[-23]
0x15a: Call2 0x1e0

0x15b: Pop(1)
0x15c: Pop(1); Push((bool) Stack[-1] == 0)
0x15d: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15e: Stack[-22] = (bool) 0
0x15f: Return(); Pop(16)

0x160: @@ GetPosition(Stack[-5])
0x161: Pop(0)
0x162: @ GetPosition(Stack[-4])
0x163: Pop(0)
0x164: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x165: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x166: PushEmpty(bool)
0x167: Stack[-1] = (bool) 0
0x168: Push((int) 0)
0x169: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16b: Pop(0); Push(Stack[-20] * Stack[-20]);
0x16c: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x16d: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16e: Stack[-1] = (bool) 1
0x16f: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x170: @ Stop()
0x171: Pop(0)
0x172: Stack[-22] = (bool) 0
0x173: Return(); Pop(16)

0x174: Pop(0); Push(Stack[-20] * Stack[-20]);
0x175: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x177: @@ GetPFPosition(Stack[-5])
0x178: Pop(0)
0x179: @ FindPathTo(Stack[-1], Stack[-5])
0x17a: Pop(0)
0x17b: Pop(0); Push(( Stack[-1] != 0 )
0x17c: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17d: Stack[-6] = Stack[-1]
0x17e: Stack[-1] = 0
0x17f: Pop(0); Push(( Stack[-6] != 0 )
0x180: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x181: Push(Stack[-7])
0x182: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x183: Stack[-7] = (bool) 0
0x184: @ RotatePath(Stack[-6], Stack[-8])
0x185: Pop(0)
0x186: Pop(0); Push((bool) Stack[-8] == 0)
0x187: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x188: GOTO 0x1b8

0x189: Push((int) 0)
0x18a: Push((float)0.3)
0x18b: @ SetTimer(Stack[-2], Stack[-1])
0x18c: Pop(2)
0x18d: PushEmpty(string)
0x18e: Call2 0x1e7

0x18f: Pop(0)
0x190: PushEmpty(string)
0x191: Call2 0x1e9

0x192: Pop(0)
0x193: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x194: Pop(2)
0x195: Pop(0); Push((bool) Stack[-8] == 0)
0x196: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x197: Push( Stack[0 + Tasks[-1].StackPointer] )
0x198: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x199: Stack[-6] = 0
0x19a: GOTO 0x1b8

0x19b: GOTO 0x19d

0x19c: GOTO 0x1b7

0x19d: GOTO 0x19f

0x19e: Stack[-6] = 0
0x19f: GOTO 0x1b0

0x1a0: Push((int) 0)
0x1a1: @ KillTimer(Stack[-1])
0x1a2: Pop(1)
0x1a3: Push((float)0.5)
0x1a4: @ Sleep(Stack[-1], Stack[-9])
0x1a5: Pop(1)
0x1a6: Pop(0); Push((bool) Stack[-8] == 0)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a8: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1aa: Stack[-6] = 0
0x1ab: GOTO 0x1b8

0x1ac: Push((int) 0)
0x1ad: Push((float)0.3)
0x1ae: @ SetTimer(Stack[-2], Stack[-1])
0x1af: Pop(2)
0x1b0: Stack[-1] = 0
0x1b1: GOTO 0x1b6

0x1b2: Push((int) 0)
0x1b3: @ KillTimer(Stack[-1])
0x1b4: Pop(1)
0x1b5: GOTO 0x1b8

0x1b6: Stack[-6] = 0
0x1b7: GOTO 0x158

0x1b8: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1b9: Return(); Pop(16)

0x1ba: PushEmpty()
0x1bb: Push((int) 0)
0x1bc: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1be: Return(); Pop(0)

0x1bf: PushEmpty(bool, object)
0x1c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c1: Call2 0x1e0

0x1c2: Pop(1)
0x1c3: Pop(1); Push((bool) Stack[-1] == 0)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1c6: Push((int) 0)
0x1c7: @ KillTimer(Stack[-1])
0x1c8: Pop(1)
0x1c9: @ Stop()
0x1ca: Pop(0)
0x1cb: Return(); Pop(0)

0x1cc: PushEmpty()
0x1cd: @ RequestClearPath(Stack[-1])
0x1ce: Pop(0)
0x1cf: Return(); Pop(0)

0x1d0: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1d1: Push((int) 0)
0x1d2: @ KillTimer(Stack[-1])
0x1d3: Pop(1)
0x1d4: @ Stop()
0x1d5: Pop(0)
0x1d6: Return(); Pop(0)

0x1d7: PushEmpty()
0x1d8: PushEmpty()
0x1d9: Call2 0x1d0

0x1da: Pop(0)
0x1db: PushEmpty(object)
0x1dc: Stack[-1] = Stack[-2]
0x1dd: Call2 0x659

0x1de: Pop(1)
0x1df: Return(); Pop(0)

0x1e0: PushEmpty()
0x1e1: PushEmpty(bool, object)
0x1e2: Stack[-1] = Stack[-3]
0x1e3: Call2 0x560

0x1e4: Stack[-4] = Stack[-2]
0x1e5: Pop(2)
0x1e6: Return(); Pop(0)

0x1e7: Stack[-1] = "walk"
0x1e8: Return(); Pop(0)

0x1e9: Stack[-1] = "run"
0x1ea: Return(); Pop(0)

0x1eb: PushEmpty()
0x1ec: Call2 0x1f3

0x1ed: Pop(0)
0x1ee: Push((int) 1)
0x1ef: @ Sleep(Stack[-1])
0x1f0: Pop(1)
0x1f1: GOTO 0x1eb

0x1f2: Return(); Pop(0)

0x1f3: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x1f4: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1f5: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1f6: Push((float)0.5)
0x1f7: @ rand(Stack[-7], Stack[-1])
0x1f8: Pop(1)
0x1f9: @ Sleep(Stack[-6])
0x1fa: Pop(0)
0x1fb: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x1fc: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x1fd: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x1fe: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x1ff: @ GetPosition(Stack[-4])
0x200: Pop(0)
0x201: PushEmpty(float)
0x202: Call2 0x22e

0x203: Pop(0)
0x204: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x205: Pop(1)
0x206: Push(Stack[-3])
0x207: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x208: GOTO 0x20d

0x209: Push((int) 1)
0x20a: @ Sleep(Stack[-1])
0x20b: Pop(1)
0x20c: GOTO 0x1ff

0x20d: GOTO 0x20f

0x20e: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x20f: PushEmpty(object, cvector)
0x210: Stack[-1] = Stack[-7]
0x211: Call2 0x24c

0x212: Stack[-4] = Stack[-2]
0x213: Pop(2)
0x214: Pop(0); Push(( Stack[-2] != 0 )
0x215: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x216: @ RotatePath(Stack[-2], Stack[-1])
0x217: Pop(0)
0x218: Push(Stack[-1])
0x219: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x21a: PushEmpty(bool)
0x21b: Call2 0x24a

0x21c: Pop(0)
0x21d: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x21e: Pop(1)
0x21f: Stack[-2] = 0
0x220: Push(Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x222: PushEmpty()
0x223: Push(-0, 0); TaskCall(3)
0x224: Call2 0x252

0x225: Pop(-0, 0); TaskReturn
0x226: Pop(0)
0x227: GOTO 0x22b

0x228: Push((int) 1)
0x229: @ Sleep(Stack[-1])
0x22a: Pop(1)
0x22b: Stack[-2] = 0
0x22c: GOTO 0x1fb

0x22d: Return(); Pop(12)

0x22e: PushEmpty(float, float)
0x22f: @ GetCameraFarDistance(Stack[-1])
0x230: Pop(0)
0x231: Stack[-3] = Stack[-1]
0x232: Return(); Pop(2)

0x233: PushEmpty()
0x234: @ RequestClearPath(Stack[-1])
0x235: Pop(0)
0x236: Return(); Pop(0)

0x237: @ Stop()
0x238: Pop(0)
0x239: Return(); Pop(0)

0x23a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x23b: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x23c: @ Stop()
0x23d: Pop(0)
0x23e: @ StopGroup0()
0x23f: Pop(0)
0x240: Return(); Pop(0)

0x241: PushEmpty()
0x242: PushEmpty()
0x243: Call2 0x23a

0x244: Pop(0)
0x245: PushEmpty(object)
0x246: Stack[-1] = Stack[-2]
0x247: Call2 0x659

0x248: Pop(1)
0x249: Return(); Pop(0)

0x24a: Stack[-1] = (bool) 0
0x24b: Return(); Pop(0)

0x24c: PushEmpty(object, object)
0x24d: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x24e: Pop(0)
0x24f: Stack[-4] = Stack[-1]
0x250: Return(); Pop(2)

0x251: Stack[-1] = 0
0x252: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x253: @ WaitForAnimEnd()
0x254: Pop(0)
0x255: PushEmpty(bool)
0x256: Call2 0x578

0x257: Pop(0)
0x258: Pop(1); Push((bool) Stack[-1] == 0)
0x259: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x25a: Return(); Pop(14)

0x25b: PushEmpty(int)
0x25c: Call2 0x648

0x25d: Stack[-8] = Stack[-1]
0x25e: Pop(1)
0x25f: Stack[-6] = (int) 0
0x260: PushEmpty(bool)
0x261: Stack[-1] = (bool) 0
0x262: Push((int) 5)
0x263: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x264: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x265: PushEmpty(bool)
0x266: Call2 0x578

0x267: Pop(0)
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: Stack[-1] = (bool) 1
0x26a: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x26b: Push((int) 3)
0x26c: @ irand(Stack[-6], Stack[-1])
0x26d: Pop(1)
0x26e: Push((int) 0)
0x26f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x270: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x271: Push(Stack[-7])
0x272: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x273: @ irand(Stack[-4], Stack[-7])
0x274: Pop(0)
0x275: Push("all")
0x276: PushEmpty(string, int)
0x277: Stack[-1] = Stack[-7]
0x278: Call2 0x641

0x279: Pop(1)
0x27a: @ PlayAnimation(Stack[-2], Stack[-1])
0x27b: Pop(2)
0x27c: @ WaitForAnimEnd(Stack[-3])
0x27d: Pop(0)
0x27e: Pop(0); Push((bool) Stack[-3] == 0)
0x27f: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x280: GOTO 0x29e

0x281: GOTO 0x293

0x282: Push((int) 1)
0x283: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x284: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x285: Push((int) 4)
0x286: @ rand(Stack[-3], Stack[-1])
0x287: Pop(1)
0x288: Push((int) 1)
0x289: Pop(1); Push(Stack[-3] + Stack[-1]);
0x28a: @ Sleep(Stack[-1], Stack[-2])
0x28b: Pop(1)
0x28c: Pop(0); Push((bool) Stack[-1] == 0)
0x28d: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28e: GOTO 0x29e

0x28f: GOTO 0x293

0x290: Push(Stack[-6])
0x291: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x292: GOTO 0x29e

0x293: PushEmpty(bool)
0x294: Call2 0x2a1

0x295: Pop(0)
0x296: Pop(1); Push((bool) Stack[-1] == 0)
0x297: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x298: GOTO 0x29e

0x299: @ ResetAAS()
0x29a: Pop(0)
0x29b: Push((int) 1)
0x29c: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x29d: GOTO 0x260

0x29e: @ ResetAAS()
0x29f: Pop(0)
0x2a0: Return(); Pop(14)

0x2a1: Stack[-1] = (bool) 1
0x2a2: Return(); Pop(0)

0x2a3: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2a4: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2a5: PushEmpty(bool, object, float)
0x2a6: Stack[-2] = Stack[-12]
0x2a7: Stack[-1] = (float) 70.0
0x2a8: Call2 0x57d

0x2a9: Pop(2)
0x2aa: Pop(1); Push((bool) Stack[-1] == 0)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2ac: Stack[-10] = (int) -2
0x2ad: Return(); Pop(8)

0x2ae: @ CreateDialog(Stack[-4])
0x2af: Pop(0)
0x2b0: PushEmpty(int)
0x2b1: Call2 0x6af

0x2b2: Pop(0)
0x2b3: @@ SetNPCName(Stack[-1])
0x2b4: Pop(1)
0x2b5: PushEmpty(int)
0x2b6: Call2 0x6ad

0x2b7: Pop(0)
0x2b8: @@ SetNPCDescription(Stack[-1])
0x2b9: Pop(1)
0x2ba: PushEmpty(string)
0x2bb: Call2 0x6b1

0x2bc: Pop(0)
0x2bd: @@ SetPhoto(Stack[-1])
0x2be: Pop(1)
0x2bf: PushEmpty(string)
0x2c0: Call2 0x6b3

0x2c1: Pop(0)
0x2c2: @@ SetPhoto2(Stack[-1])
0x2c3: Pop(1)
0x2c4: PushEmpty(int)
0x2c5: Call2 0x69c

0x2c6: Pop(0)
0x2c7: @@ SetPlayerName(Stack[-1])
0x2c8: Pop(1)
0x2c9: Stack[-2] = (int) -1
0x2ca: @ IsOverrideActive(Stack[-3])
0x2cb: Pop(0)
0x2cc: Push(Stack[-3])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2ce: Stack[-10] = (int) -2
0x2cf: Return(); Pop(8)

0x2d0: @ DoDialog(Stack[-4])
0x2d1: Pop(0)
0x2d2: PushEmpty(object, object)
0x2d3: Stack[-2] = Stack[-11]
0x2d4: Stack[-1] = Stack[-6]
0x2d5: Push(-2, 4); TaskCall(5)
0x2d6: Call2 0x2ed

0x2d7: Pop(-2, 4); TaskReturn
0x2d8: Pop(2)
0x2d9: @@ IsDialogEnd(Stack[-1])
0x2da: Pop(0)
0x2db: Pop(0); Push((bool) Stack[-1] == 0)
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2dd: @ sync()
0x2de: Pop(0)
0x2df: @@ IsDialogEnd(Stack[-1])
0x2e0: Pop(0)
0x2e1: GOTO 0x2db

0x2e2: PushEmpty(object)
0x2e3: Stack[-1] = Stack[-10]
0x2e4: Call2 0x5c2

0x2e5: Pop(1)
0x2e6: @ StopDialog(Stack[-4])
0x2e7: Pop(0)
0x2e8: @@ GetReturnValue(Stack[-2])
0x2e9: Pop(0)
0x2ea: Stack[-10] = Stack[-2]
0x2eb: Return(); Pop(8)

0x2ec: Stack[-4] = 0
0x2ed: PushEmpty()
0x2ee: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2ef: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2f0: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2f1: Push((int) 1)
0x2f2: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x2f3: PushEmpty(bool, object)
0x2f4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f5: Call2 0x690

0x2f6: Pop(1)
0x2f7: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x2f8: PushEmpty(string)
0x2f9: Stack[-1] = "Neutral"
0x2fa: Call2 0x34a

0x2fb: Pop(1)
0x2fc: Push((int) 509701)
0x2fd: @@ SetMessage(Stack[-1])
0x2fe: Pop(1)
0x2ff: @@ ClearReplies()
0x300: Pop(0)
0x301: Push((int) 509702)
0x302: Push((int) 10682)
0x303: Push((int) 10681)
0x304: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x305: Pop(3)
0x306: Push((int) 509711)
0x307: Push((int) 10682)
0x308: Push((int) 10691)
0x309: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30a: Pop(3)
0x30b: GOTO 0x32c

0x30c: PushEmpty(string)
0x30d: Stack[-1] = "Neutral"
0x30e: Call2 0x34a

0x30f: Pop(1)
0x310: Push((int) 509712)
0x311: @@ SetMessage(Stack[-1])
0x312: Pop(1)
0x313: @@ ClearReplies()
0x314: Pop(0)
0x315: Push((int) 509713)
0x316: Push((int) 10695)
0x317: Push((int) 10694)
0x318: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x319: Pop(3)
0x31a: Push((int) 509720)
0x31b: Push((int) 10702)
0x31c: Push((int) 10701)
0x31d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31e: Pop(3)
0x31f: Push((int) 509723)
0x320: Push((int) 10695)
0x321: Push((int) 10705)
0x322: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x323: Pop(3)
0x324: Push((int) 509724)
0x325: Push((int) -1)
0x326: Push((int) 10707)
0x327: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x328: Pop(3)
0x329: GOTO 0x32c

0x32a: Return(); Pop(0)

0x32b: GOTO 0x2f1

0x32c: PushEmpty(bool)
0x32d: Call2 0x6b5

0x32e: Pop(0)
0x32f: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x330: @ lshWaitForAnimEnd()
0x331: Pop(0)
0x332: Push( Stack[3 + Tasks[-1].StackPointer] )
0x333: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x334: GOTO 0x33a

0x335: PushEmpty(string)
0x336: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x337: Call2 0x5d4

0x338: Pop(1)
0x339: GOTO 0x330

0x33a: GOTO 0x349

0x33b: Push("all")
0x33c: Push("idle")
0x33d: @ PlayAnimation(Stack[-2], Stack[-1])
0x33e: Pop(2)
0x33f: @ WaitForAnimEnd()
0x340: Pop(0)
0x341: Push( Stack[3 + Tasks[-1].StackPointer] )
0x342: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x343: GOTO 0x349

0x344: Push("all")
0x345: Push("idle")
0x346: @ PlayAnimation(Stack[-2], Stack[-1])
0x347: Pop(2)
0x348: GOTO 0x33f

0x349: Return(); Pop(0)

0x34a: PushEmpty()
0x34b: PushEmpty(bool)
0x34c: Call2 0x6b5

0x34d: Pop(0)
0x34e: Pop(1); Push((bool) Stack[-1] == 0)
0x34f: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x350: Return(); Pop(0)

0x351: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x352: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x353: Return(); Pop(0)

0x354: PushEmpty(string, bool)
0x355: Stack[-2] = Stack[-3]
0x356: Push("")
0x357: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x358: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x359: Stack[-1] = (bool) 0
0x35a: GOTO 0x35c

0x35b: Stack[-1] = (bool) 1
0x35c: Call2 0x5e4

0x35d: Pop(2)
0x35e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x35f: Return(); Pop(0)

0x360: PushEmpty()
0x361: Push((int) 1)
0x362: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x363: PushEmpty()
0x364: Call2 0x5f3

0x365: Pop(0)
0x366: Push((int) 10685)
0x367: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x368: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x369: PushEmpty(object, object)
0x36a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x36b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x36c: Call2 0x661

0x36d: Pop(2)
0x36e: PushEmpty(object, object)
0x36f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x370: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x371: Call2 0x65b

0x372: Pop(2)
0x373: Push((int) 10687)
0x374: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x375: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x376: PushEmpty(object, object)
0x377: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x378: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x379: Call2 0x675

0x37a: Pop(2)
0x37b: PushEmpty(object, object)
0x37c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x37d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x37e: Call2 0x686

0x37f: Pop(2)
0x380: Push((int) 10688)
0x381: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x382: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x383: PushEmpty(object, object)
0x384: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x385: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x386: Call2 0x675

0x387: Pop(2)
0x388: PushEmpty(object, object)
0x389: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x38a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38b: Call2 0x68b

0x38c: Pop(2)
0x38d: Push((int) 10698)
0x38e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x38f: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x390: PushEmpty(object, object)
0x391: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x392: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x393: Call2 0x67b

0x394: Pop(2)
0x395: PushEmpty(object, object)
0x396: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x397: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x398: Call2 0x65b

0x399: Pop(2)
0x39a: Push((int) 10680)
0x39b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39c: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x39d: PushEmpty(bool, object)
0x39e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x39f: Call2 0x690

0x3a0: Pop(1)
0x3a1: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3a2: PushEmpty(string)
0x3a3: Stack[-1] = "Neutral"
0x3a4: Call2 0x34a

0x3a5: Pop(1)
0x3a6: Push((int) 509701)
0x3a7: @@ SetMessage(Stack[-1])
0x3a8: Pop(1)
0x3a9: @@ ClearReplies()
0x3aa: Pop(0)
0x3ab: Push((int) 509702)
0x3ac: Push((int) 10682)
0x3ad: Push((int) 10681)
0x3ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3af: Pop(3)
0x3b0: Push((int) 509711)
0x3b1: Push((int) 10682)
0x3b2: Push((int) 10691)
0x3b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b4: Pop(3)
0x3b5: Return(); Pop(0)

0x3b6: PushEmpty(string)
0x3b7: Stack[-1] = "Neutral"
0x3b8: Call2 0x34a

0x3b9: Pop(1)
0x3ba: Push((int) 509712)
0x3bb: @@ SetMessage(Stack[-1])
0x3bc: Pop(1)
0x3bd: @@ ClearReplies()
0x3be: Pop(0)
0x3bf: Push((int) 509713)
0x3c0: Push((int) 10695)
0x3c1: Push((int) 10694)
0x3c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c3: Pop(3)
0x3c4: Push((int) 509720)
0x3c5: Push((int) 10702)
0x3c6: Push((int) 10701)
0x3c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c8: Pop(3)
0x3c9: Push((int) 509723)
0x3ca: Push((int) 10695)
0x3cb: Push((int) 10705)
0x3cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cd: Pop(3)
0x3ce: Push((int) 509724)
0x3cf: Push((int) -1)
0x3d0: Push((int) 10707)
0x3d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d2: Pop(3)
0x3d3: Return(); Pop(0)

0x3d4: Push((int) 10702)
0x3d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d6: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3d7: PushEmpty(string)
0x3d8: Stack[-1] = "Neutral"
0x3d9: Call2 0x34a

0x3da: Pop(1)
0x3db: Push((int) 509721)
0x3dc: @@ SetMessage(Stack[-1])
0x3dd: Pop(1)
0x3de: @@ ClearReplies()
0x3df: Pop(0)
0x3e0: Push((int) 509722)
0x3e1: Push((int) 10697)
0x3e2: Push((int) 10703)
0x3e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e4: Pop(3)
0x3e5: Return(); Pop(0)

0x3e6: Push((int) 10695)
0x3e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e8: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3e9: PushEmpty(string)
0x3ea: Stack[-1] = "Neutral"
0x3eb: Call2 0x34a

0x3ec: Pop(1)
0x3ed: Push((int) 509714)
0x3ee: @@ SetMessage(Stack[-1])
0x3ef: Pop(1)
0x3f0: @@ ClearReplies()
0x3f1: Pop(0)
0x3f2: Push((int) 509715)
0x3f3: Push((int) 10697)
0x3f4: Push((int) 10696)
0x3f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f6: Pop(3)
0x3f7: Push((int) 509719)
0x3f8: Push((int) -1)
0x3f9: Push((int) 10700)
0x3fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fb: Pop(3)
0x3fc: Return(); Pop(0)

0x3fd: Push((int) 10697)
0x3fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x400: PushEmpty(string)
0x401: Stack[-1] = "Neutral"
0x402: Call2 0x34a

0x403: Pop(1)
0x404: Push((int) 509716)
0x405: @@ SetMessage(Stack[-1])
0x406: Pop(1)
0x407: @@ ClearReplies()
0x408: Pop(0)
0x409: Push((int) 509717)
0x40a: Push((int) -1)
0x40b: Push((int) 10698)
0x40c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40d: Pop(3)
0x40e: Push((int) 509718)
0x40f: Push((int) -1)
0x410: Push((int) 10699)
0x411: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x412: Pop(3)
0x413: Return(); Pop(0)

0x414: Push((int) 10682)
0x415: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x416: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x417: PushEmpty(string)
0x418: Stack[-1] = "Neutral"
0x419: Call2 0x34a

0x41a: Pop(1)
0x41b: Push((int) 509703)
0x41c: @@ SetMessage(Stack[-1])
0x41d: Pop(1)
0x41e: @@ ClearReplies()
0x41f: Pop(0)
0x420: Push((int) 509704)
0x421: Push((int) 10684)
0x422: Push((int) 10683)
0x423: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x424: Pop(3)
0x425: Push((int) 509710)
0x426: Push((int) 10684)
0x427: Push((int) 10689)
0x428: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x429: Pop(3)
0x42a: Return(); Pop(0)

0x42b: Push((int) 10684)
0x42c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x42d: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x42e: PushEmpty(string)
0x42f: Stack[-1] = "Neutral"
0x430: Call2 0x34a

0x431: Pop(1)
0x432: Push((int) 509705)
0x433: @@ SetMessage(Stack[-1])
0x434: Pop(1)
0x435: @@ ClearReplies()
0x436: Pop(0)
0x437: Push((int) 509706)
0x438: Push((int) 10686)
0x439: Push((int) 10685)
0x43a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43b: Pop(3)
0x43c: Return(); Pop(0)

0x43d: Push((int) 10686)
0x43e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x43f: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x440: PushEmpty(string)
0x441: Stack[-1] = "Neutral"
0x442: Call2 0x34a

0x443: Pop(1)
0x444: Push((int) 509707)
0x445: @@ SetMessage(Stack[-1])
0x446: Pop(1)
0x447: @@ ClearReplies()
0x448: Pop(0)
0x449: Push((int) 509708)
0x44a: Push((int) -1)
0x44b: Push((int) 10687)
0x44c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44d: Pop(3)
0x44e: Push((int) 509709)
0x44f: Push((int) -1)
0x450: Push((int) 10688)
0x451: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x452: Pop(3)
0x453: Return(); Pop(0)

0x454: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x455: PushEmpty(bool)
0x456: Call2 0x6b5

0x457: Pop(0)
0x458: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x459: @ lshStopAnimation()
0x45a: Pop(0)
0x45b: GOTO 0x45e

0x45c: @ StopAnimation()
0x45d: Pop(0)
0x45e: Return(); Pop(0)

0x45f: GOTO 0x361

0x460: Return(); Pop(0)

0x461: PushEmpty()
0x462: PushEmpty(int, object)
0x463: Stack[-1] = Stack[-3]
0x464: Push(-2, 1); TaskCall(4)
0x465: Call2 0x2a3

0x466: Pop(-2, 1); TaskReturn
0x467: Stack[-4] = Stack[-2]
0x468: Pop(2)
0x469: Return(); Pop(0)

0x46a: Push(GlobalVars[0])
0x46b: PushEmpty(int)
0x46c: Call2 0x520

0x46d: Stack[-2] = Stack[-1]
0x46e: Pop(1)
0x46f: GlobalVars[0] = Stack[-1]; Pop(1)
0x470: Push((int) 3)
0x471: @ Sleep(Stack[-1])
0x472: Pop(1)
0x473: PushEmpty()
0x474: Call2 0x4af

0x475: Pop(0)
0x476: GOTO 0x470

0x477: Return(); Pop(0)

0x478: PushEmpty(int, int)
0x479: PushEmpty()
0x47a: Call2 0x500

0x47b: Pop(0)
0x47c: PushEmpty(int, object)
0x47d: Stack[-1] = Stack[-5]
0x47e: Call2 0x461

0x47f: Stack[-3] = Stack[-2]
0x480: Pop(2)
0x481: Push((int) 0)
0x482: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x483: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x484: PushEmpty(bool, string, string)
0x485: Stack[-2] = "quest_d4_01"
0x486: Stack[-1] = "key2_done"
0x487: Call2 0x635

0x488: Pop(3)
0x489: PushEmpty(object)
0x48a: Stack[-1] = Stack[-4]
0x48b: Push(-1, 6); TaskCall(0)
0x48c: Call2 0x0

0x48d: Pop(-1, 6); TaskReturn
0x48e: Pop(1)
0x48f: PushEmpty(object)
0x490: Stack[-1] = Stack[-4]
0x491: Push(-1, 6); TaskCall(1)
0x492: Call2 0xf9

0x493: Pop(-1, 6); TaskReturn
0x494: Pop(1)
0x495: PushEmpty(object)
0x496: Stack[-1] = Stack[-4]
0x497: Push(-1, 0); TaskCall(7)
0x498: Call2 0x50d

0x499: Pop(-1, 0); TaskReturn
0x49a: Pop(1)
0x49b: PushEmpty()
0x49c: Push(-0, 2); TaskCall(2)
0x49d: Call2 0x1eb

0x49e: Pop(-0, 2); TaskReturn
0x49f: Pop(0)
0x4a0: GOTO 0x4ae

0x4a1: Push((int) 1)
0x4a2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a3: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4a4: PushEmpty(bool, string, string)
0x4a5: Stack[-2] = "quest_d4_01"
0x4a6: Stack[-1] = "key2_done"
0x4a7: Call2 0x635

0x4a8: Pop(3)
0x4a9: PushEmpty()
0x4aa: Push(-0, 2); TaskCall(2)
0x4ab: Call2 0x1eb

0x4ac: Pop(-0, 2); TaskReturn
0x4ad: Pop(0)
0x4ae: Return(); Pop(2)

0x4af: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x4b0: @ WaitForAnimEnd()
0x4b1: Pop(0)
0x4b2: PushEmpty(bool)
0x4b3: Call2 0x578

0x4b4: Pop(0)
0x4b5: Pop(1); Push((bool) Stack[-1] == 0)
0x4b6: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4b7: Return(); Pop(14)

0x4b8: PushEmpty(int)
0x4b9: Call2 0x648

0x4ba: Stack[-8] = Stack[-1]
0x4bb: Pop(1)
0x4bc: Stack[-6] = (int) 0
0x4bd: PushEmpty(bool)
0x4be: Stack[-1] = (bool) 0
0x4bf: Push((int) 5)
0x4c0: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c2: PushEmpty(bool)
0x4c3: Call2 0x578

0x4c4: Pop(0)
0x4c5: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c6: Stack[-1] = (bool) 1
0x4c7: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4c8: Push((int) 3)
0x4c9: @ irand(Stack[-6], Stack[-1])
0x4ca: Pop(1)
0x4cb: Push((int) 0)
0x4cc: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4cd: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4ce: Push(Stack[-7])
0x4cf: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4d0: @ irand(Stack[-4], Stack[-7])
0x4d1: Pop(0)
0x4d2: Push("all")
0x4d3: PushEmpty(string, int)
0x4d4: Stack[-1] = Stack[-7]
0x4d5: Call2 0x641

0x4d6: Pop(1)
0x4d7: @ PlayAnimation(Stack[-2], Stack[-1])
0x4d8: Pop(2)
0x4d9: @ WaitForAnimEnd(Stack[-3])
0x4da: Pop(0)
0x4db: Pop(0); Push((bool) Stack[-3] == 0)
0x4dc: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4dd: GOTO 0x4fb

0x4de: GOTO 0x4f0

0x4df: Push((int) 1)
0x4e0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4e1: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4e2: Push((int) 4)
0x4e3: @ rand(Stack[-3], Stack[-1])
0x4e4: Pop(1)
0x4e5: Push((int) 1)
0x4e6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4e7: @ Sleep(Stack[-1], Stack[-2])
0x4e8: Pop(1)
0x4e9: Pop(0); Push((bool) Stack[-1] == 0)
0x4ea: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4eb: GOTO 0x4fb

0x4ec: GOTO 0x4f0

0x4ed: Push(Stack[-6])
0x4ee: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x4ef: GOTO 0x4fb

0x4f0: PushEmpty(bool)
0x4f1: Call2 0x4fe

0x4f2: Pop(0)
0x4f3: Pop(1); Push((bool) Stack[-1] == 0)
0x4f4: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4f5: GOTO 0x4fb

0x4f6: @ ResetAAS()
0x4f7: Pop(0)
0x4f8: Push((int) 1)
0x4f9: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x4fa: GOTO 0x4bd

0x4fb: @ ResetAAS()
0x4fc: Pop(0)
0x4fd: Return(); Pop(14)

0x4fe: Stack[-1] = (bool) 1
0x4ff: Return(); Pop(0)

0x500: @ StopAnimation()
0x501: Pop(0)
0x502: @ StopGroup0()
0x503: Pop(0)
0x504: Return(); Pop(0)

0x505: PushEmpty()
0x506: PushEmpty(int, object)
0x507: Stack[-1] = Stack[-3]
0x508: Push(-2, 1); TaskCall(4)
0x509: Call2 0x2a3

0x50a: Pop(-2, 1); TaskReturn
0x50b: Pop(2)
0x50c: Return(); Pop(0)

0x50d: PushEmpty(bool, bool)
0x50e: @ IsOverrideActive(Stack[-1])
0x50f: Pop(0)
0x510: Pop(0); Push((bool) Stack[-1] == 0)
0x511: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x512: GOTO 0x514

0x513: GOTO 0x50e

0x514: PushEmpty(object)
0x515: Stack[-1] = Stack[-4]
0x516: Call2 0x505

0x517: Pop(1)
0x518: @ Hold()
0x519: Pop(0)
0x51a: Return(); Pop(2)

0x51b: PushEmpty(cvector, cvector)
0x51c: @ GetPosition(Stack[-1])
0x51d: Pop(0)
0x51e: Stack[-3] = Stack[-1]
0x51f: Return(); Pop(2)

0x520: PushEmpty(object, int, object, int)
0x521: @ GetScene(Stack[-2])
0x522: Pop(0)
0x523: PushEmpty(cvector)
0x524: Call2 0x51b

0x525: Pop(0)
0x526: @@ GetRegionByPt(Stack[-2], Stack[-1])
0x527: Pop(1)
0x528: Stack[-5] = Stack[-1]
0x529: Return(); Pop(4)

0x52a: Stack[-2] = 0
0x52b: PushEmpty(bool, bool)
0x52c: Push("HasProperty")
0x52d: Push((int) 2)
0x52e: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x52f: Pop(1); Push((bool) Stack[-1] == 0)
0x530: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x531: Stack[-5] = (bool) 0
0x532: Return(); Pop(2)

0x533: @@ HasProperty(Stack[-3], Stack[-1])
0x534: Pop(0)
0x535: Stack[-5] = Stack[-1]
0x536: Return(); Pop(2)

0x537: PushEmpty(bool, bool)
0x538: @@ IsDead(Stack[-1])
0x539: Pop(0)
0x53a: Stack[-4] = Stack[-1]
0x53b: Return(); Pop(2)

0x53c: PushEmpty(object, object, object, object)
0x53d: Pop(0); Push((bool) Stack[-5] == 0)
0x53e: IF (Stack[-1] == 0) GOTO 0x541; Pop(1)

0x53f: Stack[-6] = (bool) 0
0x540: Return(); Pop(4)

0x541: PushEmpty(bool)
0x542: Stack[-1] = (bool) 0
0x543: Push("IsDead")
0x544: Push((int) 1)
0x545: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x546: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x547: PushEmpty(bool, object)
0x548: Stack[-1] = Stack[-8]
0x549: Call2 0x537

0x54a: Pop(1)
0x54b: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x54c: Stack[-1] = (bool) 1
0x54d: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54e: Stack[-6] = (bool) 0
0x54f: Return(); Pop(4)

0x550: @ GetScene(Stack[-2])
0x551: Pop(0)
0x552: Pop(0); Push((bool) Stack[-2] == 0)
0x553: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x554: Stack[-6] = (bool) 0
0x555: Return(); Pop(4)

0x556: @@ GetScene(Stack[-1])
0x557: Pop(0)
0x558: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x559: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x55a: Stack[-6] = (bool) 0
0x55b: Return(); Pop(4)

0x55c: Stack[-6] = (bool) 1
0x55d: Return(); Pop(4)

0x55e: Stack[-1] = 0
0x55f: Stack[-2] = 0
0x560: PushEmpty(int, int)
0x561: PushEmpty(bool, object)
0x562: Stack[-1] = Stack[-5]
0x563: Call2 0x53c

0x564: Pop(1)
0x565: Pop(1); Push((bool) Stack[-1] == 0)
0x566: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x567: Stack[-4] = (bool) 0
0x568: Return(); Pop(2)

0x569: PushEmpty(bool, object, string)
0x56a: Stack[-2] = Stack[-6]
0x56b: Stack[-1] = "noaccess"
0x56c: Call2 0x52b

0x56d: Pop(2)
0x56e: Pop(1); Push((bool) Stack[-1] == 0)
0x56f: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x570: Stack[-4] = (bool) 1
0x571: Return(); Pop(2)

0x572: Push("noaccess")
0x573: @@ GetProperty(Stack[-1], Stack[-2])
0x574: Pop(1)
0x575: Push((int) 0)
0x576: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x577: Return(); Pop(2)

0x578: PushEmpty(bool, bool)
0x579: @ IsLoaded(Stack[-1])
0x57a: Pop(0)
0x57b: Stack[-3] = Stack[-1]
0x57c: Return(); Pop(2)

0x57d: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x57e: @@ GetPosition(Stack[-8])
0x57f: Pop(0)
0x580: @@ GetEyesHeight(Stack[-9])
0x581: Pop(0)
0x582: Push(CvectorIndex(Stack[-8], 1))
0x583: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x584: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x585: @ GetPosition(Stack[-7])
0x586: Pop(0)
0x587: @ GetEyesHeight(Stack[-9])
0x588: Pop(0)
0x589: Push(CvectorIndex(Stack[-7], 1))
0x58a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x58b: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x58c: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x58d: Push(CvectorIndex(Stack[-6], 1))
0x58e: Stack[-1] = (int) 0
0x58f: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x590: Pop(0); Push(Stack[-6] | Stack[-6]);
0x591: Pop(1); Push(Sqrt(Stack[-1]))
0x592: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x593: Stack[-5] = -Stack[-6]; Pop(0);
0x594: Pop(0); Push(Stack[-6] * Stack[-19]);
0x595: PushEmpty(cvector, cvector)
0x596: Push(CVector(0.0, 1.0, 0.0))
0x597: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x598: Call2 0x5fa

0x599: Pop(1)
0x59a: Push((int) 25)
0x59b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x59c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x59d: Push(CVector(0.0, 10.0, 0.0))
0x59e: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x59f: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x5a0: @ IsOverrideActive(Stack[-2])
0x5a1: Pop(0)
0x5a2: Push(Stack[-2])
0x5a3: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a4: Stack[-21] = (bool) 0
0x5a5: Return(); Pop(18)

0x5a6: @ StopWorld()
0x5a7: Pop(0)
0x5a8: Push((bool) 1)
0x5a9: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x5aa: Pop(1)
0x5ab: Push(CvectorIndex(Stack[-4], 0))
0x5ac: Push(CvectorIndex(Stack[-5], 2))
0x5ad: @ Rotate(Stack[-2], Stack[-1])
0x5ae: Pop(2)
0x5af: PushEmpty(bool)
0x5b0: Call2 0x6b5

0x5b1: Pop(0)
0x5b2: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5b3: GOTO 0x5bc

0x5b4: Push("head")
0x5b5: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x5b6: Pop(1)
0x5b7: Push(Stack[-1])
0x5b8: IF (Stack[-1] == 0) GOTO 0x5bc; Pop(1)

0x5b9: Push("head")
0x5ba: @ LookAsyncCamera(Stack[-1])
0x5bb: Pop(1)
0x5bc: @ CameraWaitForPlayFinish()
0x5bd: Pop(0)
0x5be: @ ResumeWorld()
0x5bf: Pop(0)
0x5c0: Stack[-21] = (bool) 1
0x5c1: Return(); Pop(18)

0x5c2: PushEmpty(bool, bool)
0x5c3: Push((bool) 1)
0x5c4: @ CameraSwitchToNormal(Stack[-1])
0x5c5: Pop(1)
0x5c6: PushEmpty(bool)
0x5c7: Call2 0x6b5

0x5c8: Pop(0)
0x5c9: IF (Stack[-1] == 0) GOTO 0x5cb; Pop(1)

0x5ca: GOTO 0x5d3

0x5cb: Push("head")
0x5cc: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x5cd: Pop(1)
0x5ce: Push(Stack[-1])
0x5cf: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5d0: Push("head")
0x5d1: @ UnlookAsync(Stack[-1])
0x5d2: Pop(1)
0x5d3: Return(); Pop(2)

0x5d4: PushEmpty(bool, float, float, bool, float, float)
0x5d5: @ lshHasAnimation(Stack[-3], Stack[-7])
0x5d6: Pop(0)
0x5d7: Push(Stack[-3])
0x5d8: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5d9: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x5da: Pop(0)
0x5db: Push((bool) 0)
0x5dc: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5dd: Pop(1)
0x5de: GOTO 0x5e3

0x5df: Push("Can't find lsh animation : ")
0x5e0: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5e1: @ Trace(Stack[-1])
0x5e2: Pop(1)
0x5e3: Return(); Pop(6)

0x5e4: PushEmpty(bool, float, float, bool, float, float)
0x5e5: @ lshHasAnimation(Stack[-3], Stack[-8])
0x5e6: Pop(0)
0x5e7: Push(Stack[-3])
0x5e8: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5e9: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x5ea: Pop(0)
0x5eb: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x5ec: Pop(0)
0x5ed: GOTO 0x5f2

0x5ee: Push("Can't find lsh animation : ")
0x5ef: Pop(1); Push(Stack[-1] + Stack[-9]);
0x5f0: @ Trace(Stack[-1])
0x5f1: Pop(1)
0x5f2: Return(); Pop(6)

0x5f3: PushEmpty(bool)
0x5f4: Call2 0x6b5

0x5f5: Pop(0)
0x5f6: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5f7: @ lshStopSpeech()
0x5f8: Pop(0)
0x5f9: Return(); Pop(0)

0x5fa: PushEmpty(float, float)
0x5fb: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5fc: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5fd: Push((float)0.0)
0x5fe: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5ff: IF (Stack[-1] == 0) GOTO 0x602; Pop(1)

0x600: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x601: Return(); Pop(2)

0x602: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x603: Return(); Pop(2)

0x604: PushEmpty(int, int)
0x605: @ GetVariable(Stack[-3], Stack[-1])
0x606: Pop(0)
0x607: Stack[-4] = Stack[-1]
0x608: Return(); Pop(2)

0x609: PushEmpty(object, object)
0x60a: @ CreateIntVector(Stack[-1])
0x60b: Pop(0)
0x60c: @@ add(Stack[-4])
0x60d: Pop(0)
0x60e: @@ add(Stack[-3])
0x60f: Pop(0)
0x610: Push((int) 3)
0x611: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x612: Pop(1)
0x613: Return(); Pop(2)

0x614: Stack[-1] = 0
0x615: PushEmpty(int, int, bool, int, int, bool)
0x616: @@ GetItemID(Stack[-3])
0x617: Pop(0)
0x618: Push("Category")
0x619: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x61a: Pop(1)
0x61b: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x61c: Pop(0)
0x61d: Pop(0); Push((bool) Stack[-1] == 0)
0x61e: IF (Stack[-1] == 0) GOTO 0x622; Pop(1)

0x61f: @@ DropItems(Stack[-8], Stack[-7])
0x620: Pop(0)
0x621: GOTO 0x627

0x622: PushEmpty(int, int)
0x623: Stack[-2] = Stack[-5]
0x624: Stack[-1] = Stack[-9]
0x625: Call2 0x609

0x626: Pop(2)
0x627: Return(); Pop(6)

0x628: PushEmpty(object, object)
0x629: @ CreateInvItem(Stack[-1])
0x62a: Pop(0)
0x62b: @@ SetItemName(Stack[-4])
0x62c: Pop(0)
0x62d: PushEmpty(object, object, int)
0x62e: Stack[-3] = Stack[-8]
0x62f: Stack[-2] = Stack[-4]
0x630: Stack[-1] = Stack[-6]
0x631: Call2 0x615

0x632: Pop(3)
0x633: Return(); Pop(2)

0x634: Stack[-1] = 0
0x635: PushEmpty(object, object)
0x636: @ FindActor(Stack[-1], Stack[-4])
0x637: Pop(0)
0x638: Pop(0); Push((bool) Stack[-1] == 0)
0x639: IF (Stack[-1] == 0) GOTO 0x63c; Pop(1)

0x63a: Stack[-5] = (bool) 0
0x63b: Return(); Pop(2)

0x63c: @ Trigger(Stack[-1], Stack[-3])
0x63d: Pop(0)
0x63e: Stack[-5] = (bool) 1
0x63f: Return(); Pop(2)

0x640: Stack[-1] = 0
0x641: PushEmpty(string, string)
0x642: Stack[-1] = "idle"
0x643: Push(Stack[-3])
0x644: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x645: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x646: Stack[-4] = Stack[-1]
0x647: Return(); Pop(2)

0x648: PushEmpty(int, bool, int, bool)
0x649: Stack[-2] = (int) 0
0x64a: Push("all")
0x64b: PushEmpty(string, int)
0x64c: Stack[-1] = Stack[-5]
0x64d: Call2 0x641

0x64e: Pop(1)
0x64f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x650: Pop(2)
0x651: Pop(0); Push((bool) Stack[-1] == 0)
0x652: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x653: GOTO 0x657

0x654: Push((int) 1)
0x655: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x656: GOTO 0x64a

0x657: Stack[-5] = Stack[-2]
0x658: Return(); Pop(4)

0x659: PushEmpty()
0x65a: Return(); Pop(0)

0x65b: PushEmpty()
0x65c: Push("playsound")
0x65d: Push("giveitem")
0x65e: @ TriggerWorld(Stack[-2], Stack[-1])
0x65f: Pop(2)
0x660: Return(); Pop(0)

0x661: PushEmpty()
0x662: Push("d4q01KeyWasted")
0x663: Push((int) 1)
0x664: @ SetVariable(Stack[-2], Stack[-1])
0x665: Pop(2)
0x666: Push("soborkey is given")
0x667: @ Trace(Stack[-1])
0x668: Pop(1)
0x669: PushEmpty(object, string, int)
0x66a: Stack[-3] = Stack[-5]
0x66b: Stack[-2] = "d4q01_sobor_key"
0x66c: Stack[-1] = (int) 1
0x66d: Call2 0x628

0x66e: Pop(3)
0x66f: PushEmpty(bool, string, string)
0x670: Stack[-2] = "quest_d4_01"
0x671: Stack[-1] = "init_sobor"
0x672: Call2 0x635

0x673: Pop(3)
0x674: Return(); Pop(0)

0x675: PushEmpty()
0x676: Push("ood4WastedMale1")
0x677: Push((int) 1)
0x678: @ SetVariable(Stack[-2], Stack[-1])
0x679: Pop(2)
0x67a: Return(); Pop(0)

0x67b: PushEmpty()
0x67c: Push("tvirin is given")
0x67d: @ Trace(Stack[-1])
0x67e: Pop(1)
0x67f: PushEmpty(object, string, int)
0x680: Stack[-3] = Stack[-5]
0x681: Stack[-2] = "tvirin"
0x682: Stack[-1] = (int) 1
0x683: Call2 0x628

0x684: Pop(3)
0x685: Return(); Pop(0)

0x686: PushEmpty()
0x687: Push((int) 0)
0x688: @@ SetReturnValue(Stack[-1])
0x689: Pop(1)
0x68a: Return(); Pop(0)

0x68b: PushEmpty()
0x68c: Push((int) 1)
0x68d: @@ SetReturnValue(Stack[-1])
0x68e: Pop(1)
0x68f: Return(); Pop(0)

0x690: PushEmpty()
0x691: PushEmpty(int, string)
0x692: Stack[-1] = "ood4WastedMale1"
0x693: Call2 0x604

0x694: Pop(1)
0x695: Push((int) 0)
0x696: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x697: IF (Stack[-1] == 0) GOTO 0x69a; Pop(1)

0x698: Stack[-2] = (bool) 1
0x699: Return(); Pop(0)

0x69a: Stack[-2] = (bool) 0
0x69b: Return(); Pop(0)

0x69c: PushEmpty(int, int)
0x69d: Push("branch")
0x69e: @ GetVariable(Stack[-1], Stack[-2])
0x69f: Pop(1)
0x6a0: Push((int) 0)
0x6a1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6a2: IF (Stack[-1] == 0) GOTO 0x6a6; Pop(1)

0x6a3: Stack[-3] = (int) 1
0x6a4: Return(); Pop(2)

0x6a5: GOTO 0x6ab

0x6a6: Push((int) 1)
0x6a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6a8: IF (Stack[-1] == 0) GOTO 0x6ab; Pop(1)

0x6a9: Stack[-3] = (int) 2
0x6aa: Return(); Pop(2)

0x6ab: Stack[-3] = (int) 3
0x6ac: Return(); Pop(2)

0x6ad: Stack[-1] = (int) 515556
0x6ae: Return(); Pop(0)

0x6af: Stack[-1] = (int) 503341
0x6b0: Return(); Pop(0)

0x6b1: Stack[-1] = "ui/NPC_Citizen3.png"
0x6b2: Return(); Pop(0)

0x6b3: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x6b4: Return(); Pop(0)

0x6b5: Stack[-1] = (bool) 0
0x6b6: Return(); Pop(0)

