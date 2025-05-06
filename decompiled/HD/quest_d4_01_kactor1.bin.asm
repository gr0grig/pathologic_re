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
	key1_done
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
	ood4WhiteMask1
	d4q01KeyWhite
	theaterkey is given
	d4q01_theater_key
	init_theater
	tvirin is given
	tvirin
	SetReturnValue
	branch
	ui/NPC_wmask.png
	ui/NPC_wmask_b.png

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

RunOp = 0x4ce
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
		EVENT_11 Op = 0x356 Vars = (int, int)
	GTASK_6  Params = 0
		EVENT_0 Op = 0x4dc Vars = (object)
	GTASK_7  Params = 1

Events:
EVENT_41 Op = 0x6bd Vars = (object)

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
0x19: Call2 0x584

0x1a: Pop(0)
0x1b: Push(GlobalVars[0])
0x1c: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1e: GOTO 0x2a

0x1f: Push((int) 1)
0x20: @ Sleep(Stack[-1])
0x21: Pop(1)
0x22: PushEmpty(int)
0x23: Call2 0x584

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
0x36: Call2 0x584

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
0xeb: Call2 0x6bd

0xec: Pop(1)
0xed: Return(); Pop(0)

0xee: PushEmpty()
0xef: PushEmpty(bool, object)
0xf0: Stack[-1] = Stack[-3]
0xf1: Call2 0x5c4

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
0x1dd: Call2 0x6bd

0x1de: Pop(1)
0x1df: Return(); Pop(0)

0x1e0: PushEmpty()
0x1e1: PushEmpty(bool, object)
0x1e2: Stack[-1] = Stack[-3]
0x1e3: Call2 0x5c4

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
0x247: Call2 0x6bd

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
0x256: Call2 0x5dc

0x257: Pop(0)
0x258: Pop(1); Push((bool) Stack[-1] == 0)
0x259: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x25a: Return(); Pop(14)

0x25b: PushEmpty(int)
0x25c: Call2 0x6ac

0x25d: Stack[-8] = Stack[-1]
0x25e: Pop(1)
0x25f: Stack[-6] = (int) 0
0x260: PushEmpty(bool)
0x261: Stack[-1] = (bool) 0
0x262: Push((int) 5)
0x263: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x264: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x265: PushEmpty(bool)
0x266: Call2 0x5dc

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
0x278: Call2 0x6a5

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
0x2a8: Call2 0x5e1

0x2a9: Pop(2)
0x2aa: Pop(1); Push((bool) Stack[-1] == 0)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2ac: Stack[-10] = (int) -2
0x2ad: Return(); Pop(8)

0x2ae: @ CreateDialog(Stack[-4])
0x2af: Pop(0)
0x2b0: PushEmpty(int)
0x2b1: Call2 0x713

0x2b2: Pop(0)
0x2b3: @@ SetNPCName(Stack[-1])
0x2b4: Pop(1)
0x2b5: PushEmpty(int)
0x2b6: Call2 0x711

0x2b7: Pop(0)
0x2b8: @@ SetNPCDescription(Stack[-1])
0x2b9: Pop(1)
0x2ba: PushEmpty(string)
0x2bb: Call2 0x715

0x2bc: Pop(0)
0x2bd: @@ SetPhoto(Stack[-1])
0x2be: Pop(1)
0x2bf: PushEmpty(string)
0x2c0: Call2 0x717

0x2c1: Pop(0)
0x2c2: @@ SetPhoto2(Stack[-1])
0x2c3: Pop(1)
0x2c4: PushEmpty(int)
0x2c5: Call2 0x700

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
0x2e4: Call2 0x626

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
0x2f2: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x2f3: PushEmpty(bool, object)
0x2f4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f5: Call2 0x6f4

0x2f6: Pop(1)
0x2f7: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x2f8: PushEmpty(string)
0x2f9: Stack[-1] = "Neutral"
0x2fa: Call2 0x340

0x2fb: Pop(1)
0x2fc: Push((int) 509667)
0x2fd: @@ SetMessage(Stack[-1])
0x2fe: Pop(1)
0x2ff: @@ ClearReplies()
0x300: Pop(0)
0x301: Push((int) 509668)
0x302: Push((int) 10643)
0x303: Push((int) 10642)
0x304: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x305: Pop(3)
0x306: Push((int) 509677)
0x307: Push((int) 10653)
0x308: Push((int) 10652)
0x309: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30a: Pop(3)
0x30b: GOTO 0x322

0x30c: PushEmpty(string)
0x30d: Stack[-1] = "Neutral"
0x30e: Call2 0x340

0x30f: Pop(1)
0x310: Push((int) 509681)
0x311: @@ SetMessage(Stack[-1])
0x312: Pop(1)
0x313: @@ ClearReplies()
0x314: Pop(0)
0x315: Push((int) 509682)
0x316: Push((int) 10660)
0x317: Push((int) 10659)
0x318: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x319: Pop(3)
0x31a: Push((int) 509699)
0x31b: Push((int) -1)
0x31c: Push((int) 10678)
0x31d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31e: Pop(3)
0x31f: GOTO 0x322

0x320: Return(); Pop(0)

0x321: GOTO 0x2f1

0x322: PushEmpty(bool)
0x323: Call2 0x719

0x324: Pop(0)
0x325: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x326: @ lshWaitForAnimEnd()
0x327: Pop(0)
0x328: Push( Stack[3 + Tasks[-1].StackPointer] )
0x329: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x32a: GOTO 0x330

0x32b: PushEmpty(string)
0x32c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x32d: Call2 0x638

0x32e: Pop(1)
0x32f: GOTO 0x326

0x330: GOTO 0x33f

0x331: Push("all")
0x332: Push("idle")
0x333: @ PlayAnimation(Stack[-2], Stack[-1])
0x334: Pop(2)
0x335: @ WaitForAnimEnd()
0x336: Pop(0)
0x337: Push( Stack[3 + Tasks[-1].StackPointer] )
0x338: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x339: GOTO 0x33f

0x33a: Push("all")
0x33b: Push("idle")
0x33c: @ PlayAnimation(Stack[-2], Stack[-1])
0x33d: Pop(2)
0x33e: GOTO 0x335

0x33f: Return(); Pop(0)

0x340: PushEmpty()
0x341: PushEmpty(bool)
0x342: Call2 0x719

0x343: Pop(0)
0x344: Pop(1); Push((bool) Stack[-1] == 0)
0x345: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x346: Return(); Pop(0)

0x347: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x348: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x349: Return(); Pop(0)

0x34a: PushEmpty(string, bool)
0x34b: Stack[-2] = Stack[-3]
0x34c: Push("")
0x34d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x34e: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x34f: Stack[-1] = (bool) 0
0x350: GOTO 0x352

0x351: Stack[-1] = (bool) 1
0x352: Call2 0x648

0x353: Pop(2)
0x354: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x355: Return(); Pop(0)

0x356: PushEmpty()
0x357: Push((int) 1)
0x358: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x359: PushEmpty()
0x35a: Call2 0x657

0x35b: Pop(0)
0x35c: Push((int) 10646)
0x35d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35e: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x35f: PushEmpty(object, object)
0x360: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x361: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x362: Call2 0x6cb

0x363: Pop(2)
0x364: PushEmpty(object, object)
0x365: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x366: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x367: Call2 0x6bf

0x368: Pop(2)
0x369: Push((int) 10650)
0x36a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36b: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x36c: PushEmpty(object, object)
0x36d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x36e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x36f: Call2 0x6cb

0x370: Pop(2)
0x371: PushEmpty(object, object)
0x372: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x373: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x374: Call2 0x6bf

0x375: Pop(2)
0x376: Push((int) 10648)
0x377: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x378: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x379: PushEmpty(object, object)
0x37a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x37b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x37c: Call2 0x6c5

0x37d: Pop(2)
0x37e: PushEmpty(object, object)
0x37f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x380: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x381: Call2 0x6ea

0x382: Pop(2)
0x383: Push((int) 10649)
0x384: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x385: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x386: PushEmpty(object, object)
0x387: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x388: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x389: Call2 0x6c5

0x38a: Pop(2)
0x38b: PushEmpty(object, object)
0x38c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x38d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38e: Call2 0x6ef

0x38f: Pop(2)
0x390: Push((int) 10669)
0x391: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x392: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x393: PushEmpty(object, object)
0x394: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x395: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x396: Call2 0x6df

0x397: Pop(2)
0x398: PushEmpty(object, object)
0x399: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x39a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x39b: Call2 0x6bf

0x39c: Pop(2)
0x39d: Push((int) 10641)
0x39e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39f: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3a0: PushEmpty(bool, object)
0x3a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a2: Call2 0x6f4

0x3a3: Pop(1)
0x3a4: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3a5: PushEmpty(string)
0x3a6: Stack[-1] = "Neutral"
0x3a7: Call2 0x340

0x3a8: Pop(1)
0x3a9: Push((int) 509667)
0x3aa: @@ SetMessage(Stack[-1])
0x3ab: Pop(1)
0x3ac: @@ ClearReplies()
0x3ad: Pop(0)
0x3ae: Push((int) 509668)
0x3af: Push((int) 10643)
0x3b0: Push((int) 10642)
0x3b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b2: Pop(3)
0x3b3: Push((int) 509677)
0x3b4: Push((int) 10653)
0x3b5: Push((int) 10652)
0x3b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b7: Pop(3)
0x3b8: Return(); Pop(0)

0x3b9: PushEmpty(string)
0x3ba: Stack[-1] = "Neutral"
0x3bb: Call2 0x340

0x3bc: Pop(1)
0x3bd: Push((int) 509681)
0x3be: @@ SetMessage(Stack[-1])
0x3bf: Pop(1)
0x3c0: @@ ClearReplies()
0x3c1: Pop(0)
0x3c2: Push((int) 509682)
0x3c3: Push((int) 10660)
0x3c4: Push((int) 10659)
0x3c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c6: Pop(3)
0x3c7: Push((int) 509699)
0x3c8: Push((int) -1)
0x3c9: Push((int) 10678)
0x3ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cb: Pop(3)
0x3cc: Return(); Pop(0)

0x3cd: Push((int) 10660)
0x3ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3d0: PushEmpty(string)
0x3d1: Stack[-1] = "Neutral"
0x3d2: Call2 0x340

0x3d3: Pop(1)
0x3d4: Push((int) 509683)
0x3d5: @@ SetMessage(Stack[-1])
0x3d6: Pop(1)
0x3d7: @@ ClearReplies()
0x3d8: Pop(0)
0x3d9: Push((int) 509684)
0x3da: Push((int) 10662)
0x3db: Push((int) 10661)
0x3dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3dd: Pop(3)
0x3de: Push((int) 509694)
0x3df: Push((int) 10672)
0x3e0: Push((int) 10671)
0x3e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e2: Pop(3)
0x3e3: Push((int) 509698)
0x3e4: Push((int) 10662)
0x3e5: Push((int) 10676)
0x3e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e7: Pop(3)
0x3e8: Return(); Pop(0)

0x3e9: Push((int) 10672)
0x3ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3eb: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3ec: PushEmpty(string)
0x3ed: Stack[-1] = "Neutral"
0x3ee: Call2 0x340

0x3ef: Pop(1)
0x3f0: Push((int) 509695)
0x3f1: @@ SetMessage(Stack[-1])
0x3f2: Pop(1)
0x3f3: @@ ClearReplies()
0x3f4: Pop(0)
0x3f5: Push((int) 509696)
0x3f6: Push((int) 10665)
0x3f7: Push((int) 10673)
0x3f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f9: Pop(3)
0x3fa: Push((int) 509697)
0x3fb: Push((int) -1)
0x3fc: Push((int) 10675)
0x3fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fe: Pop(3)
0x3ff: Return(); Pop(0)

0x400: Push((int) 10662)
0x401: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x402: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x403: PushEmpty(string)
0x404: Stack[-1] = "Neutral"
0x405: Call2 0x340

0x406: Pop(1)
0x407: Push((int) 509685)
0x408: @@ SetMessage(Stack[-1])
0x409: Pop(1)
0x40a: @@ ClearReplies()
0x40b: Pop(0)
0x40c: Push((int) 509687)
0x40d: Push((int) 10665)
0x40e: Push((int) 10664)
0x40f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x410: Pop(3)
0x411: Push((int) 509686)
0x412: Push((int) -1)
0x413: Push((int) 10663)
0x414: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x415: Pop(3)
0x416: Return(); Pop(0)

0x417: Push((int) 10665)
0x418: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x419: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x41a: PushEmpty(string)
0x41b: Stack[-1] = "Neutral"
0x41c: Call2 0x340

0x41d: Pop(1)
0x41e: Push((int) 509688)
0x41f: @@ SetMessage(Stack[-1])
0x420: Pop(1)
0x421: @@ ClearReplies()
0x422: Pop(0)
0x423: Push((int) 509689)
0x424: Push((int) -1)
0x425: Push((int) 10666)
0x426: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x427: Pop(3)
0x428: Push((int) 509690)
0x429: Push((int) 10668)
0x42a: Push((int) 10667)
0x42b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42c: Pop(3)
0x42d: Return(); Pop(0)

0x42e: Push((int) 10668)
0x42f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x430: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x431: PushEmpty(string)
0x432: Stack[-1] = "Neutral"
0x433: Call2 0x340

0x434: Pop(1)
0x435: Push((int) 509691)
0x436: @@ SetMessage(Stack[-1])
0x437: Pop(1)
0x438: @@ ClearReplies()
0x439: Pop(0)
0x43a: Push((int) 509692)
0x43b: Push((int) -1)
0x43c: Push((int) 10669)
0x43d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43e: Pop(3)
0x43f: Push((int) 509693)
0x440: Push((int) -1)
0x441: Push((int) 10670)
0x442: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x443: Pop(3)
0x444: Push((int) 538762)
0x445: Push((int) -1)
0x446: Push((int) 40678)
0x447: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x448: Pop(3)
0x449: Return(); Pop(0)

0x44a: Push((int) 10653)
0x44b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44c: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x44d: PushEmpty(string)
0x44e: Stack[-1] = "Neutral"
0x44f: Call2 0x340

0x450: Pop(1)
0x451: Push((int) 509678)
0x452: @@ SetMessage(Stack[-1])
0x453: Pop(1)
0x454: @@ ClearReplies()
0x455: Pop(0)
0x456: Push((int) 509679)
0x457: Push((int) 10643)
0x458: Push((int) 10654)
0x459: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45a: Pop(3)
0x45b: Push((int) 509680)
0x45c: Push((int) 10643)
0x45d: Push((int) 10656)
0x45e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45f: Pop(3)
0x460: Return(); Pop(0)

0x461: Push((int) 10643)
0x462: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x463: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x464: PushEmpty(string)
0x465: Stack[-1] = "Neutral"
0x466: Call2 0x340

0x467: Pop(1)
0x468: Push((int) 509669)
0x469: @@ SetMessage(Stack[-1])
0x46a: Pop(1)
0x46b: @@ ClearReplies()
0x46c: Pop(0)
0x46d: Push((int) 509670)
0x46e: Push((int) 10645)
0x46f: Push((int) 10644)
0x470: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x471: Pop(3)
0x472: Return(); Pop(0)

0x473: Push((int) 10645)
0x474: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x475: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x476: PushEmpty(string)
0x477: Stack[-1] = "Neutral"
0x478: Call2 0x340

0x479: Pop(1)
0x47a: Push((int) 509671)
0x47b: @@ SetMessage(Stack[-1])
0x47c: Pop(1)
0x47d: @@ ClearReplies()
0x47e: Pop(0)
0x47f: Push((int) 509672)
0x480: Push((int) 43766)
0x481: Push((int) 10646)
0x482: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x483: Pop(3)
0x484: Push((int) 509676)
0x485: Push((int) 10647)
0x486: Push((int) 10650)
0x487: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x488: Pop(3)
0x489: Return(); Pop(0)

0x48a: Push((int) 10647)
0x48b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48c: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x48d: PushEmpty(string)
0x48e: Stack[-1] = "Neutral"
0x48f: Call2 0x340

0x490: Pop(1)
0x491: Push((int) 509673)
0x492: @@ SetMessage(Stack[-1])
0x493: Pop(1)
0x494: @@ ClearReplies()
0x495: Pop(0)
0x496: Push((int) 541600)
0x497: Push((int) 43766)
0x498: Push((int) 43765)
0x499: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49a: Pop(3)
0x49b: Push((int) 541602)
0x49c: Push((int) 43766)
0x49d: Push((int) 43767)
0x49e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49f: Pop(3)
0x4a0: Return(); Pop(0)

0x4a1: Push((int) 43766)
0x4a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a3: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4a4: PushEmpty(string)
0x4a5: Stack[-1] = "Neutral"
0x4a6: Call2 0x340

0x4a7: Pop(1)
0x4a8: Push((int) 541601)
0x4a9: @@ SetMessage(Stack[-1])
0x4aa: Pop(1)
0x4ab: @@ ClearReplies()
0x4ac: Pop(0)
0x4ad: Push((int) 509674)
0x4ae: Push((int) -1)
0x4af: Push((int) 10648)
0x4b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b1: Pop(3)
0x4b2: Push((int) 509675)
0x4b3: Push((int) -1)
0x4b4: Push((int) 10649)
0x4b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b6: Pop(3)
0x4b7: Return(); Pop(0)

0x4b8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4b9: PushEmpty(bool)
0x4ba: Call2 0x719

0x4bb: Pop(0)
0x4bc: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4bd: @ lshStopAnimation()
0x4be: Pop(0)
0x4bf: GOTO 0x4c2

0x4c0: @ StopAnimation()
0x4c1: Pop(0)
0x4c2: Return(); Pop(0)

0x4c3: GOTO 0x357

0x4c4: Return(); Pop(0)

0x4c5: PushEmpty()
0x4c6: PushEmpty(int, object)
0x4c7: Stack[-1] = Stack[-3]
0x4c8: Push(-2, 1); TaskCall(4)
0x4c9: Call2 0x2a3

0x4ca: Pop(-2, 1); TaskReturn
0x4cb: Stack[-4] = Stack[-2]
0x4cc: Pop(2)
0x4cd: Return(); Pop(0)

0x4ce: Push(GlobalVars[0])
0x4cf: PushEmpty(int)
0x4d0: Call2 0x584

0x4d1: Stack[-2] = Stack[-1]
0x4d2: Pop(1)
0x4d3: GlobalVars[0] = Stack[-1]; Pop(1)
0x4d4: Push((int) 3)
0x4d5: @ Sleep(Stack[-1])
0x4d6: Pop(1)
0x4d7: PushEmpty()
0x4d8: Call2 0x513

0x4d9: Pop(0)
0x4da: GOTO 0x4d4

0x4db: Return(); Pop(0)

0x4dc: PushEmpty(int, int)
0x4dd: PushEmpty()
0x4de: Call2 0x564

0x4df: Pop(0)
0x4e0: PushEmpty(int, object)
0x4e1: Stack[-1] = Stack[-5]
0x4e2: Call2 0x4c5

0x4e3: Stack[-3] = Stack[-2]
0x4e4: Pop(2)
0x4e5: Push((int) 0)
0x4e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e7: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x4e8: PushEmpty(bool, string, string)
0x4e9: Stack[-2] = "quest_d4_01"
0x4ea: Stack[-1] = "key1_done"
0x4eb: Call2 0x699

0x4ec: Pop(3)
0x4ed: PushEmpty(object)
0x4ee: Stack[-1] = Stack[-4]
0x4ef: Push(-1, 6); TaskCall(0)
0x4f0: Call2 0x0

0x4f1: Pop(-1, 6); TaskReturn
0x4f2: Pop(1)
0x4f3: PushEmpty(object)
0x4f4: Stack[-1] = Stack[-4]
0x4f5: Push(-1, 6); TaskCall(1)
0x4f6: Call2 0xf9

0x4f7: Pop(-1, 6); TaskReturn
0x4f8: Pop(1)
0x4f9: PushEmpty(object)
0x4fa: Stack[-1] = Stack[-4]
0x4fb: Push(-1, 0); TaskCall(7)
0x4fc: Call2 0x571

0x4fd: Pop(-1, 0); TaskReturn
0x4fe: Pop(1)
0x4ff: PushEmpty()
0x500: Push(-0, 2); TaskCall(2)
0x501: Call2 0x1eb

0x502: Pop(-0, 2); TaskReturn
0x503: Pop(0)
0x504: GOTO 0x512

0x505: Push((int) 1)
0x506: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x507: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x508: PushEmpty(bool, string, string)
0x509: Stack[-2] = "quest_d4_01"
0x50a: Stack[-1] = "key1_done"
0x50b: Call2 0x699

0x50c: Pop(3)
0x50d: PushEmpty()
0x50e: Push(-0, 2); TaskCall(2)
0x50f: Call2 0x1eb

0x510: Pop(-0, 2); TaskReturn
0x511: Pop(0)
0x512: Return(); Pop(2)

0x513: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x514: @ WaitForAnimEnd()
0x515: Pop(0)
0x516: PushEmpty(bool)
0x517: Call2 0x5dc

0x518: Pop(0)
0x519: Pop(1); Push((bool) Stack[-1] == 0)
0x51a: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x51b: Return(); Pop(14)

0x51c: PushEmpty(int)
0x51d: Call2 0x6ac

0x51e: Stack[-8] = Stack[-1]
0x51f: Pop(1)
0x520: Stack[-6] = (int) 0
0x521: PushEmpty(bool)
0x522: Stack[-1] = (bool) 0
0x523: Push((int) 5)
0x524: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x525: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x526: PushEmpty(bool)
0x527: Call2 0x5dc

0x528: Pop(0)
0x529: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x52a: Stack[-1] = (bool) 1
0x52b: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x52c: Push((int) 3)
0x52d: @ irand(Stack[-6], Stack[-1])
0x52e: Pop(1)
0x52f: Push((int) 0)
0x530: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x531: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x532: Push(Stack[-7])
0x533: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x534: @ irand(Stack[-4], Stack[-7])
0x535: Pop(0)
0x536: Push("all")
0x537: PushEmpty(string, int)
0x538: Stack[-1] = Stack[-7]
0x539: Call2 0x6a5

0x53a: Pop(1)
0x53b: @ PlayAnimation(Stack[-2], Stack[-1])
0x53c: Pop(2)
0x53d: @ WaitForAnimEnd(Stack[-3])
0x53e: Pop(0)
0x53f: Pop(0); Push((bool) Stack[-3] == 0)
0x540: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x541: GOTO 0x55f

0x542: GOTO 0x554

0x543: Push((int) 1)
0x544: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x545: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x546: Push((int) 4)
0x547: @ rand(Stack[-3], Stack[-1])
0x548: Pop(1)
0x549: Push((int) 1)
0x54a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x54b: @ Sleep(Stack[-1], Stack[-2])
0x54c: Pop(1)
0x54d: Pop(0); Push((bool) Stack[-1] == 0)
0x54e: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54f: GOTO 0x55f

0x550: GOTO 0x554

0x551: Push(Stack[-6])
0x552: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x553: GOTO 0x55f

0x554: PushEmpty(bool)
0x555: Call2 0x562

0x556: Pop(0)
0x557: Pop(1); Push((bool) Stack[-1] == 0)
0x558: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x559: GOTO 0x55f

0x55a: @ ResetAAS()
0x55b: Pop(0)
0x55c: Push((int) 1)
0x55d: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x55e: GOTO 0x521

0x55f: @ ResetAAS()
0x560: Pop(0)
0x561: Return(); Pop(14)

0x562: Stack[-1] = (bool) 1
0x563: Return(); Pop(0)

0x564: @ StopAnimation()
0x565: Pop(0)
0x566: @ StopGroup0()
0x567: Pop(0)
0x568: Return(); Pop(0)

0x569: PushEmpty()
0x56a: PushEmpty(int, object)
0x56b: Stack[-1] = Stack[-3]
0x56c: Push(-2, 1); TaskCall(4)
0x56d: Call2 0x2a3

0x56e: Pop(-2, 1); TaskReturn
0x56f: Pop(2)
0x570: Return(); Pop(0)

0x571: PushEmpty(bool, bool)
0x572: @ IsOverrideActive(Stack[-1])
0x573: Pop(0)
0x574: Pop(0); Push((bool) Stack[-1] == 0)
0x575: IF (Stack[-1] == 0) GOTO 0x577; Pop(1)

0x576: GOTO 0x578

0x577: GOTO 0x572

0x578: PushEmpty(object)
0x579: Stack[-1] = Stack[-4]
0x57a: Call2 0x569

0x57b: Pop(1)
0x57c: @ Hold()
0x57d: Pop(0)
0x57e: Return(); Pop(2)

0x57f: PushEmpty(cvector, cvector)
0x580: @ GetPosition(Stack[-1])
0x581: Pop(0)
0x582: Stack[-3] = Stack[-1]
0x583: Return(); Pop(2)

0x584: PushEmpty(object, int, object, int)
0x585: @ GetScene(Stack[-2])
0x586: Pop(0)
0x587: PushEmpty(cvector)
0x588: Call2 0x57f

0x589: Pop(0)
0x58a: @@ GetRegionByPt(Stack[-2], Stack[-1])
0x58b: Pop(1)
0x58c: Stack[-5] = Stack[-1]
0x58d: Return(); Pop(4)

0x58e: Stack[-2] = 0
0x58f: PushEmpty(bool, bool)
0x590: Push("HasProperty")
0x591: Push((int) 2)
0x592: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x593: Pop(1); Push((bool) Stack[-1] == 0)
0x594: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x595: Stack[-5] = (bool) 0
0x596: Return(); Pop(2)

0x597: @@ HasProperty(Stack[-3], Stack[-1])
0x598: Pop(0)
0x599: Stack[-5] = Stack[-1]
0x59a: Return(); Pop(2)

0x59b: PushEmpty(bool, bool)
0x59c: @@ IsDead(Stack[-1])
0x59d: Pop(0)
0x59e: Stack[-4] = Stack[-1]
0x59f: Return(); Pop(2)

0x5a0: PushEmpty(object, object, object, object)
0x5a1: Pop(0); Push((bool) Stack[-5] == 0)
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x5a3: Stack[-6] = (bool) 0
0x5a4: Return(); Pop(4)

0x5a5: PushEmpty(bool)
0x5a6: Stack[-1] = (bool) 0
0x5a7: Push("IsDead")
0x5a8: Push((int) 1)
0x5a9: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x5aa: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5ab: PushEmpty(bool, object)
0x5ac: Stack[-1] = Stack[-8]
0x5ad: Call2 0x59b

0x5ae: Pop(1)
0x5af: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5b0: Stack[-1] = (bool) 1
0x5b1: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5b2: Stack[-6] = (bool) 0
0x5b3: Return(); Pop(4)

0x5b4: @ GetScene(Stack[-2])
0x5b5: Pop(0)
0x5b6: Pop(0); Push((bool) Stack[-2] == 0)
0x5b7: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5b8: Stack[-6] = (bool) 0
0x5b9: Return(); Pop(4)

0x5ba: @@ GetScene(Stack[-1])
0x5bb: Pop(0)
0x5bc: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x5bd: IF (Stack[-1] == 0) GOTO 0x5c0; Pop(1)

0x5be: Stack[-6] = (bool) 0
0x5bf: Return(); Pop(4)

0x5c0: Stack[-6] = (bool) 1
0x5c1: Return(); Pop(4)

0x5c2: Stack[-1] = 0
0x5c3: Stack[-2] = 0
0x5c4: PushEmpty(int, int)
0x5c5: PushEmpty(bool, object)
0x5c6: Stack[-1] = Stack[-5]
0x5c7: Call2 0x5a0

0x5c8: Pop(1)
0x5c9: Pop(1); Push((bool) Stack[-1] == 0)
0x5ca: IF (Stack[-1] == 0) GOTO 0x5cd; Pop(1)

0x5cb: Stack[-4] = (bool) 0
0x5cc: Return(); Pop(2)

0x5cd: PushEmpty(bool, object, string)
0x5ce: Stack[-2] = Stack[-6]
0x5cf: Stack[-1] = "noaccess"
0x5d0: Call2 0x58f

0x5d1: Pop(2)
0x5d2: Pop(1); Push((bool) Stack[-1] == 0)
0x5d3: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x5d4: Stack[-4] = (bool) 1
0x5d5: Return(); Pop(2)

0x5d6: Push("noaccess")
0x5d7: @@ GetProperty(Stack[-1], Stack[-2])
0x5d8: Pop(1)
0x5d9: Push((int) 0)
0x5da: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x5db: Return(); Pop(2)

0x5dc: PushEmpty(bool, bool)
0x5dd: @ IsLoaded(Stack[-1])
0x5de: Pop(0)
0x5df: Stack[-3] = Stack[-1]
0x5e0: Return(); Pop(2)

0x5e1: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x5e2: @@ GetPosition(Stack[-8])
0x5e3: Pop(0)
0x5e4: @@ GetEyesHeight(Stack[-9])
0x5e5: Pop(0)
0x5e6: Push(CvectorIndex(Stack[-8], 1))
0x5e7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x5e8: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x5e9: @ GetPosition(Stack[-7])
0x5ea: Pop(0)
0x5eb: @ GetEyesHeight(Stack[-9])
0x5ec: Pop(0)
0x5ed: Push(CvectorIndex(Stack[-7], 1))
0x5ee: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x5ef: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x5f0: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x5f1: Push(CvectorIndex(Stack[-6], 1))
0x5f2: Stack[-1] = (int) 0
0x5f3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x5f4: Pop(0); Push(Stack[-6] | Stack[-6]);
0x5f5: Pop(1); Push(Sqrt(Stack[-1]))
0x5f6: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x5f7: Stack[-5] = -Stack[-6]; Pop(0);
0x5f8: Pop(0); Push(Stack[-6] * Stack[-19]);
0x5f9: PushEmpty(cvector, cvector)
0x5fa: Push(CVector(0.0, 1.0, 0.0))
0x5fb: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x5fc: Call2 0x65e

0x5fd: Pop(1)
0x5fe: Push((int) 25)
0x5ff: Pop(2); Push(Stack[-2] * Stack[-1]);
0x600: Pop(2); Push(Stack[-2] + Stack[-1]);
0x601: Push(CVector(0.0, 10.0, 0.0))
0x602: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x603: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x604: @ IsOverrideActive(Stack[-2])
0x605: Pop(0)
0x606: Push(Stack[-2])
0x607: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x608: Stack[-21] = (bool) 0
0x609: Return(); Pop(18)

0x60a: @ StopWorld()
0x60b: Pop(0)
0x60c: Push((bool) 1)
0x60d: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x60e: Pop(1)
0x60f: Push(CvectorIndex(Stack[-4], 0))
0x610: Push(CvectorIndex(Stack[-5], 2))
0x611: @ Rotate(Stack[-2], Stack[-1])
0x612: Pop(2)
0x613: PushEmpty(bool)
0x614: Call2 0x719

0x615: Pop(0)
0x616: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x617: GOTO 0x620

0x618: Push("head")
0x619: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x61a: Pop(1)
0x61b: Push(Stack[-1])
0x61c: IF (Stack[-1] == 0) GOTO 0x620; Pop(1)

0x61d: Push("head")
0x61e: @ LookAsyncCamera(Stack[-1])
0x61f: Pop(1)
0x620: @ CameraWaitForPlayFinish()
0x621: Pop(0)
0x622: @ ResumeWorld()
0x623: Pop(0)
0x624: Stack[-21] = (bool) 1
0x625: Return(); Pop(18)

0x626: PushEmpty(bool, bool)
0x627: Push((bool) 1)
0x628: @ CameraSwitchToNormal(Stack[-1])
0x629: Pop(1)
0x62a: PushEmpty(bool)
0x62b: Call2 0x719

0x62c: Pop(0)
0x62d: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x62e: GOTO 0x637

0x62f: Push("head")
0x630: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x631: Pop(1)
0x632: Push(Stack[-1])
0x633: IF (Stack[-1] == 0) GOTO 0x637; Pop(1)

0x634: Push("head")
0x635: @ UnlookAsync(Stack[-1])
0x636: Pop(1)
0x637: Return(); Pop(2)

0x638: PushEmpty(bool, float, float, bool, float, float)
0x639: @ lshHasAnimation(Stack[-3], Stack[-7])
0x63a: Pop(0)
0x63b: Push(Stack[-3])
0x63c: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x63d: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x63e: Pop(0)
0x63f: Push((bool) 0)
0x640: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x641: Pop(1)
0x642: GOTO 0x647

0x643: Push("Can't find lsh animation : ")
0x644: Pop(1); Push(Stack[-1] + Stack[-8]);
0x645: @ Trace(Stack[-1])
0x646: Pop(1)
0x647: Return(); Pop(6)

0x648: PushEmpty(bool, float, float, bool, float, float)
0x649: @ lshHasAnimation(Stack[-3], Stack[-8])
0x64a: Pop(0)
0x64b: Push(Stack[-3])
0x64c: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x64d: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x64e: Pop(0)
0x64f: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x650: Pop(0)
0x651: GOTO 0x656

0x652: Push("Can't find lsh animation : ")
0x653: Pop(1); Push(Stack[-1] + Stack[-9]);
0x654: @ Trace(Stack[-1])
0x655: Pop(1)
0x656: Return(); Pop(6)

0x657: PushEmpty(bool)
0x658: Call2 0x719

0x659: Pop(0)
0x65a: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x65b: @ lshStopSpeech()
0x65c: Pop(0)
0x65d: Return(); Pop(0)

0x65e: PushEmpty(float, float)
0x65f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x660: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x661: Push((float)0.0)
0x662: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x663: IF (Stack[-1] == 0) GOTO 0x666; Pop(1)

0x664: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x665: Return(); Pop(2)

0x666: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x667: Return(); Pop(2)

0x668: PushEmpty(int, int)
0x669: @ GetVariable(Stack[-3], Stack[-1])
0x66a: Pop(0)
0x66b: Stack[-4] = Stack[-1]
0x66c: Return(); Pop(2)

0x66d: PushEmpty(object, object)
0x66e: @ CreateIntVector(Stack[-1])
0x66f: Pop(0)
0x670: @@ add(Stack[-4])
0x671: Pop(0)
0x672: @@ add(Stack[-3])
0x673: Pop(0)
0x674: Push((int) 3)
0x675: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x676: Pop(1)
0x677: Return(); Pop(2)

0x678: Stack[-1] = 0
0x679: PushEmpty(int, int, bool, int, int, bool)
0x67a: @@ GetItemID(Stack[-3])
0x67b: Pop(0)
0x67c: Push("Category")
0x67d: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x67e: Pop(1)
0x67f: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x680: Pop(0)
0x681: Pop(0); Push((bool) Stack[-1] == 0)
0x682: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x683: @@ DropItems(Stack[-8], Stack[-7])
0x684: Pop(0)
0x685: GOTO 0x68b

0x686: PushEmpty(int, int)
0x687: Stack[-2] = Stack[-5]
0x688: Stack[-1] = Stack[-9]
0x689: Call2 0x66d

0x68a: Pop(2)
0x68b: Return(); Pop(6)

0x68c: PushEmpty(object, object)
0x68d: @ CreateInvItem(Stack[-1])
0x68e: Pop(0)
0x68f: @@ SetItemName(Stack[-4])
0x690: Pop(0)
0x691: PushEmpty(object, object, int)
0x692: Stack[-3] = Stack[-8]
0x693: Stack[-2] = Stack[-4]
0x694: Stack[-1] = Stack[-6]
0x695: Call2 0x679

0x696: Pop(3)
0x697: Return(); Pop(2)

0x698: Stack[-1] = 0
0x699: PushEmpty(object, object)
0x69a: @ FindActor(Stack[-1], Stack[-4])
0x69b: Pop(0)
0x69c: Pop(0); Push((bool) Stack[-1] == 0)
0x69d: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x69e: Stack[-5] = (bool) 0
0x69f: Return(); Pop(2)

0x6a0: @ Trigger(Stack[-1], Stack[-3])
0x6a1: Pop(0)
0x6a2: Stack[-5] = (bool) 1
0x6a3: Return(); Pop(2)

0x6a4: Stack[-1] = 0
0x6a5: PushEmpty(string, string)
0x6a6: Stack[-1] = "idle"
0x6a7: Push(Stack[-3])
0x6a8: IF (Stack[-1] == 0) GOTO 0x6aa; Pop(1)

0x6a9: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x6aa: Stack[-4] = Stack[-1]
0x6ab: Return(); Pop(2)

0x6ac: PushEmpty(int, bool, int, bool)
0x6ad: Stack[-2] = (int) 0
0x6ae: Push("all")
0x6af: PushEmpty(string, int)
0x6b0: Stack[-1] = Stack[-5]
0x6b1: Call2 0x6a5

0x6b2: Pop(1)
0x6b3: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x6b4: Pop(2)
0x6b5: Pop(0); Push((bool) Stack[-1] == 0)
0x6b6: IF (Stack[-1] == 0) GOTO 0x6b8; Pop(1)

0x6b7: GOTO 0x6bb

0x6b8: Push((int) 1)
0x6b9: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x6ba: GOTO 0x6ae

0x6bb: Stack[-5] = Stack[-2]
0x6bc: Return(); Pop(4)

0x6bd: PushEmpty()
0x6be: Return(); Pop(0)

0x6bf: PushEmpty()
0x6c0: Push("playsound")
0x6c1: Push("giveitem")
0x6c2: @ TriggerWorld(Stack[-2], Stack[-1])
0x6c3: Pop(2)
0x6c4: Return(); Pop(0)

0x6c5: PushEmpty()
0x6c6: Push("ood4WhiteMask1")
0x6c7: Push((int) 1)
0x6c8: @ SetVariable(Stack[-2], Stack[-1])
0x6c9: Pop(2)
0x6ca: Return(); Pop(0)

0x6cb: PushEmpty()
0x6cc: Push("d4q01KeyWhite")
0x6cd: Push((int) 1)
0x6ce: @ SetVariable(Stack[-2], Stack[-1])
0x6cf: Pop(2)
0x6d0: Push("theaterkey is given")
0x6d1: @ Trace(Stack[-1])
0x6d2: Pop(1)
0x6d3: PushEmpty(object, string, int)
0x6d4: Stack[-3] = Stack[-5]
0x6d5: Stack[-2] = "d4q01_theater_key"
0x6d6: Stack[-1] = (int) 1
0x6d7: Call2 0x68c

0x6d8: Pop(3)
0x6d9: PushEmpty(bool, string, string)
0x6da: Stack[-2] = "quest_d4_01"
0x6db: Stack[-1] = "init_theater"
0x6dc: Call2 0x699

0x6dd: Pop(3)
0x6de: Return(); Pop(0)

0x6df: PushEmpty()
0x6e0: Push("tvirin is given")
0x6e1: @ Trace(Stack[-1])
0x6e2: Pop(1)
0x6e3: PushEmpty(object, string, int)
0x6e4: Stack[-3] = Stack[-5]
0x6e5: Stack[-2] = "tvirin"
0x6e6: Stack[-1] = (int) 1
0x6e7: Call2 0x68c

0x6e8: Pop(3)
0x6e9: Return(); Pop(0)

0x6ea: PushEmpty()
0x6eb: Push((int) 0)
0x6ec: @@ SetReturnValue(Stack[-1])
0x6ed: Pop(1)
0x6ee: Return(); Pop(0)

0x6ef: PushEmpty()
0x6f0: Push((int) 1)
0x6f1: @@ SetReturnValue(Stack[-1])
0x6f2: Pop(1)
0x6f3: Return(); Pop(0)

0x6f4: PushEmpty()
0x6f5: PushEmpty(int, string)
0x6f6: Stack[-1] = "ood4WhiteMask1"
0x6f7: Call2 0x668

0x6f8: Pop(1)
0x6f9: Push((int) 0)
0x6fa: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6fb: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6fc: Stack[-2] = (bool) 1
0x6fd: Return(); Pop(0)

0x6fe: Stack[-2] = (bool) 0
0x6ff: Return(); Pop(0)

0x700: PushEmpty(int, int)
0x701: Push("branch")
0x702: @ GetVariable(Stack[-1], Stack[-2])
0x703: Pop(1)
0x704: Push((int) 0)
0x705: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x706: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x707: Stack[-3] = (int) 1
0x708: Return(); Pop(2)

0x709: GOTO 0x70f

0x70a: Push((int) 1)
0x70b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x70c: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x70d: Stack[-3] = (int) 2
0x70e: Return(); Pop(2)

0x70f: Stack[-3] = (int) 3
0x710: Return(); Pop(2)

0x711: Stack[-1] = (int) 515569
0x712: Return(); Pop(0)

0x713: Stack[-1] = (int) 503354
0x714: Return(); Pop(0)

0x715: Stack[-1] = "ui/NPC_wmask.png"
0x716: Return(); Pop(0)

0x717: Stack[-1] = "ui/NPC_wmask_b.png"
0x718: Return(); Pop(0)

0x719: Stack[-1] = (bool) 0
0x71a: Return(); Pop(0)

