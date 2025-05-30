GlobalVarCount = 2
	G_VAR_0 int 
	G_VAR_1 object 

Strings:
	GetPosition
	GetPFPosition
	walk
	run
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
	SetTimer (2 args)
	Sleep (1 args)
	KillTimer (1 args)
	GetPosition (1 args)
	Stop (0 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	Sleep (2 args)
	RequestClearPath (1 args)
	rand (2 args)
	GetRandomPFPointInCircle (4 args)
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
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
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

RunOp = 0x440
RunTask = 6

GlobalTasks: 
	GTASK_0 Vars = (bool, object) Params = 1
		EVENT_7 Op = 0x23 Vars = (int)
		EVENT_10 Op = 0x97 Vars = (object)
		EVENT_41 Op = 0xa2 Vars = (object)
	GTASK_1 Vars = (bool, object) Params = 1
		EVENT_7 Op = 0x12c Vars = (int)
		EVENT_10 Op = 0x13e Vars = (object)
		EVENT_41 Op = 0x149 Vars = (object)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_10 Op = 0x1a5 Vars = (object)
		EVENT_28 Op = 0x1a9 Vars = ()
		EVENT_41 Op = 0x1b3 Vars = (object)
	GTASK_3  Params = 0
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2c8 Vars = (int, int)
	GTASK_6  Params = 0
		EVENT_0 Op = 0x44e Vars = (object)
	GTASK_7  Params = 1

Events:
EVENT_41 Op = 0x62d Vars = (object)

0x0: PushEmpty()
0x1: Push((int) 10)
0x2: Push((int) 1)
0x3: @ SetTimer(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: PushEmpty(bool, object, float, float, bool, bool)
0x6: Stack[-5] = Stack[-7]
0x7: Stack[-4] = (int) 250
0x8: Stack[-3] = (int) 3000
0x9: Stack[-2] = (bool) 1
0xa: Stack[-1] = (bool) 1
0xb: Call2 0x31

0xc: Pop(6)
0xd: PushEmpty(int)
0xe: Call2 0x4f6

0xf: Pop(0)
0x10: Push(GlobalVars[0])
0x11: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x12: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0x13: GOTO 0x1f

0x14: Push((int) 1)
0x15: @ Sleep(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(int)
0x18: Call2 0x4f6

0x19: Pop(0)
0x1a: Push(GlobalVars[0])
0x1b: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0x1d: GOTO 0x1f

0x1e: GOTO 0x5

0x1f: Push((int) 10)
0x20: @ KillTimer(Stack[-1])
0x21: Pop(1)
0x22: Return(); Pop(0)

0x23: PushEmpty()
0x24: Push((int) 10)
0x25: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x27: PushEmpty(int)
0x28: Call2 0x4f6

0x29: Pop(0)
0x2a: Push(GlobalVars[0])
0x2b: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x2c: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2d: PushEmpty()
0x2e: Call2 0x9b

0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x32: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x33: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x34: Stack[-7] = Stack[-17]
0x35: PushEmpty(bool, object)
0x36: Stack[-1] = Stack[-23]
0x37: Call2 0xab

0x38: Pop(1)
0x39: Pop(1); Push((bool) Stack[-1] == 0)
0x3a: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x3b: Stack[-22] = (bool) 0
0x3c: Return(); Pop(16)

0x3d: @@ GetPosition(Stack[-5])
0x3e: Pop(0)
0x3f: @ GetPosition(Stack[-4])
0x40: Pop(0)
0x41: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x42: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x43: PushEmpty(bool)
0x44: Stack[-1] = (bool) 0
0x45: Push((int) 0)
0x46: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x47: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x48: Pop(0); Push(Stack[-20] * Stack[-20]);
0x49: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x4a: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x4b: Stack[-1] = (bool) 1
0x4c: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x4d: @ Stop()
0x4e: Pop(0)
0x4f: Stack[-22] = (bool) 0
0x50: Return(); Pop(16)

0x51: Pop(0); Push(Stack[-20] * Stack[-20]);
0x52: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x53: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x54: @@ GetPFPosition(Stack[-5])
0x55: Pop(0)
0x56: @ FindPathTo(Stack[-1], Stack[-5])
0x57: Pop(0)
0x58: Pop(0); Push(( Stack[-1] != 0 )
0x59: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x5a: Stack[-6] = Stack[-1]
0x5b: Stack[-1] = 0
0x5c: Pop(0); Push(( Stack[-6] != 0 )
0x5d: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x5e: Push(Stack[-7])
0x5f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x60: Stack[-7] = (bool) 0
0x61: @ RotatePath(Stack[-6], Stack[-8])
0x62: Pop(0)
0x63: Pop(0); Push((bool) Stack[-8] == 0)
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: GOTO 0x95

0x66: Push((int) 0)
0x67: Push((float)0.3)
0x68: @ SetTimer(Stack[-2], Stack[-1])
0x69: Pop(2)
0x6a: PushEmpty(string)
0x6b: Call2 0xb2

0x6c: Pop(0)
0x6d: PushEmpty(string)
0x6e: Call2 0xb4

0x6f: Pop(0)
0x70: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x71: Pop(2)
0x72: Pop(0); Push((bool) Stack[-8] == 0)
0x73: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x74: Push( Stack[0 + Tasks[-1].StackPointer] )
0x75: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x76: Stack[-6] = 0
0x77: GOTO 0x95

0x78: GOTO 0x7a

0x79: GOTO 0x94

0x7a: GOTO 0x7c

0x7b: Stack[-6] = 0
0x7c: GOTO 0x8d

0x7d: Push((int) 0)
0x7e: @ KillTimer(Stack[-1])
0x7f: Pop(1)
0x80: Push((float)0.5)
0x81: @ Sleep(Stack[-1], Stack[-9])
0x82: Pop(1)
0x83: Pop(0); Push((bool) Stack[-8] == 0)
0x84: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x85: Push( Stack[0 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x87: Stack[-6] = 0
0x88: GOTO 0x95

0x89: Push((int) 0)
0x8a: Push((float)0.3)
0x8b: @ SetTimer(Stack[-2], Stack[-1])
0x8c: Pop(2)
0x8d: Stack[-1] = 0
0x8e: GOTO 0x93

0x8f: Push((int) 0)
0x90: @ KillTimer(Stack[-1])
0x91: Pop(1)
0x92: GOTO 0x95

0x93: Stack[-6] = 0
0x94: GOTO 0x35

0x95: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x96: Return(); Pop(16)

0x97: PushEmpty()
0x98: @ RequestClearPath(Stack[-1])
0x99: Pop(0)
0x9a: Return(); Pop(0)

0x9b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x9c: Push((int) 0)
0x9d: @ KillTimer(Stack[-1])
0x9e: Pop(1)
0x9f: @ Stop()
0xa0: Pop(0)
0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: PushEmpty()
0xa4: Call2 0x9b

0xa5: Pop(0)
0xa6: PushEmpty(object)
0xa7: Stack[-1] = Stack[-2]
0xa8: Call2 0x62d

0xa9: Pop(1)
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: PushEmpty(bool, object)
0xad: Stack[-1] = Stack[-3]
0xae: Call2 0x536

0xaf: Stack[-4] = Stack[-2]
0xb0: Pop(2)
0xb1: Return(); Pop(0)

0xb2: Stack[-1] = "walk"
0xb3: Return(); Pop(0)

0xb4: Stack[-1] = "run"
0xb5: Return(); Pop(0)

0xb6: PushEmpty()
0xb7: PushEmpty(bool, object, float, float, bool, bool)
0xb8: Stack[-5] = Stack[-7]
0xb9: Stack[-4] = (int) 250
0xba: Stack[-3] = (int) 3000
0xbb: Stack[-2] = (bool) 1
0xbc: Stack[-1] = (bool) 1
0xbd: Call2 0xc6

0xbe: Pop(5)
0xbf: Pop(1); Push((bool) Stack[-1] == 0)
0xc0: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc1: Push((int) 1)
0xc2: @ Sleep(Stack[-1])
0xc3: Pop(1)
0xc4: GOTO 0xb7

0xc5: Return(); Pop(0)

0xc6: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0xc7: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xc8: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0xc9: Stack[-7] = Stack[-17]
0xca: PushEmpty(bool, object)
0xcb: Stack[-1] = Stack[-23]
0xcc: Call2 0x152

0xcd: Pop(1)
0xce: Pop(1); Push((bool) Stack[-1] == 0)
0xcf: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd0: Stack[-22] = (bool) 0
0xd1: Return(); Pop(16)

0xd2: @@ GetPosition(Stack[-5])
0xd3: Pop(0)
0xd4: @ GetPosition(Stack[-4])
0xd5: Pop(0)
0xd6: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0xd7: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xd8: PushEmpty(bool)
0xd9: Stack[-1] = (bool) 0
0xda: Push((int) 0)
0xdb: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdd: Pop(0); Push(Stack[-20] * Stack[-20]);
0xde: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xe0: Stack[-1] = (bool) 1
0xe1: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe2: @ Stop()
0xe3: Pop(0)
0xe4: Stack[-22] = (bool) 0
0xe5: Return(); Pop(16)

0xe6: Pop(0); Push(Stack[-20] * Stack[-20]);
0xe7: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0xe9: @@ GetPFPosition(Stack[-5])
0xea: Pop(0)
0xeb: @ FindPathTo(Stack[-1], Stack[-5])
0xec: Pop(0)
0xed: Pop(0); Push(( Stack[-1] != 0 )
0xee: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xef: Stack[-6] = Stack[-1]
0xf0: Stack[-1] = 0
0xf1: Pop(0); Push(( Stack[-6] != 0 )
0xf2: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0xf3: Push(Stack[-7])
0xf4: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf5: Stack[-7] = (bool) 0
0xf6: @ RotatePath(Stack[-6], Stack[-8])
0xf7: Pop(0)
0xf8: Pop(0); Push((bool) Stack[-8] == 0)
0xf9: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xfa: GOTO 0x12a

0xfb: Push((int) 0)
0xfc: Push((float)0.3)
0xfd: @ SetTimer(Stack[-2], Stack[-1])
0xfe: Pop(2)
0xff: PushEmpty(string)
0x100: Call2 0x159

0x101: Pop(0)
0x102: PushEmpty(string)
0x103: Call2 0x15b

0x104: Pop(0)
0x105: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x106: Pop(2)
0x107: Pop(0); Push((bool) Stack[-8] == 0)
0x108: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x109: Push( Stack[0 + Tasks[-1].StackPointer] )
0x10a: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10b: Stack[-6] = 0
0x10c: GOTO 0x12a

0x10d: GOTO 0x10f

0x10e: GOTO 0x129

0x10f: GOTO 0x111

0x110: Stack[-6] = 0
0x111: GOTO 0x122

0x112: Push((int) 0)
0x113: @ KillTimer(Stack[-1])
0x114: Pop(1)
0x115: Push((float)0.5)
0x116: @ Sleep(Stack[-1], Stack[-9])
0x117: Pop(1)
0x118: Pop(0); Push((bool) Stack[-8] == 0)
0x119: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x11a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x11b: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x11c: Stack[-6] = 0
0x11d: GOTO 0x12a

0x11e: Push((int) 0)
0x11f: Push((float)0.3)
0x120: @ SetTimer(Stack[-2], Stack[-1])
0x121: Pop(2)
0x122: Stack[-1] = 0
0x123: GOTO 0x128

0x124: Push((int) 0)
0x125: @ KillTimer(Stack[-1])
0x126: Pop(1)
0x127: GOTO 0x12a

0x128: Stack[-6] = 0
0x129: GOTO 0xca

0x12a: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x12b: Return(); Pop(16)

0x12c: PushEmpty()
0x12d: Push((int) 0)
0x12e: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x130: Return(); Pop(0)

0x131: PushEmpty(bool, object)
0x132: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x133: Call2 0x152

0x134: Pop(1)
0x135: Pop(1); Push((bool) Stack[-1] == 0)
0x136: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x137: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x138: Push((int) 0)
0x139: @ KillTimer(Stack[-1])
0x13a: Pop(1)
0x13b: @ Stop()
0x13c: Pop(0)
0x13d: Return(); Pop(0)

0x13e: PushEmpty()
0x13f: @ RequestClearPath(Stack[-1])
0x140: Pop(0)
0x141: Return(); Pop(0)

0x142: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x143: Push((int) 0)
0x144: @ KillTimer(Stack[-1])
0x145: Pop(1)
0x146: @ Stop()
0x147: Pop(0)
0x148: Return(); Pop(0)

0x149: PushEmpty()
0x14a: PushEmpty()
0x14b: Call2 0x142

0x14c: Pop(0)
0x14d: PushEmpty(object)
0x14e: Stack[-1] = Stack[-2]
0x14f: Call2 0x62d

0x150: Pop(1)
0x151: Return(); Pop(0)

0x152: PushEmpty()
0x153: PushEmpty(bool, object)
0x154: Stack[-1] = Stack[-3]
0x155: Call2 0x536

0x156: Stack[-4] = Stack[-2]
0x157: Pop(2)
0x158: Return(); Pop(0)

0x159: Stack[-1] = "walk"
0x15a: Return(); Pop(0)

0x15b: Stack[-1] = "run"
0x15c: Return(); Pop(0)

0x15d: PushEmpty()
0x15e: Call2 0x165

0x15f: Pop(0)
0x160: Push((int) 1)
0x161: @ Sleep(Stack[-1])
0x162: Pop(1)
0x163: GOTO 0x15d

0x164: Return(); Pop(0)

0x165: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x166: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x167: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x168: Push((float)0.5)
0x169: @ rand(Stack[-7], Stack[-1])
0x16a: Pop(1)
0x16b: @ Sleep(Stack[-6])
0x16c: Pop(0)
0x16d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x16e: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x16f: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x170: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x171: @ GetPosition(Stack[-4])
0x172: Pop(0)
0x173: PushEmpty(float)
0x174: Call2 0x1a0

0x175: Pop(0)
0x176: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x177: Pop(1)
0x178: Push(Stack[-3])
0x179: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x17a: GOTO 0x17f

0x17b: Push((int) 1)
0x17c: @ Sleep(Stack[-1])
0x17d: Pop(1)
0x17e: GOTO 0x171

0x17f: GOTO 0x181

0x180: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x181: PushEmpty(object, cvector)
0x182: Stack[-1] = Stack[-7]
0x183: Call2 0x1be

0x184: Stack[-4] = Stack[-2]
0x185: Pop(2)
0x186: Pop(0); Push(( Stack[-2] != 0 )
0x187: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x188: @ RotatePath(Stack[-2], Stack[-1])
0x189: Pop(0)
0x18a: Push(Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x18c: PushEmpty(bool)
0x18d: Call2 0x1bc

0x18e: Pop(0)
0x18f: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x190: Pop(1)
0x191: Stack[-2] = 0
0x192: Push(Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x194: PushEmpty()
0x195: Push(-0, 0); TaskCall(3)
0x196: Call2 0x1c4

0x197: Pop(-0, 0); TaskReturn
0x198: Pop(0)
0x199: GOTO 0x19d

0x19a: Push((int) 1)
0x19b: @ Sleep(Stack[-1])
0x19c: Pop(1)
0x19d: Stack[-2] = 0
0x19e: GOTO 0x16d

0x19f: Return(); Pop(12)

0x1a0: PushEmpty(float, float)
0x1a1: @ GetCameraFarDistance(Stack[-1])
0x1a2: Pop(0)
0x1a3: Stack[-3] = Stack[-1]
0x1a4: Return(); Pop(2)

0x1a5: PushEmpty()
0x1a6: @ RequestClearPath(Stack[-1])
0x1a7: Pop(0)
0x1a8: Return(); Pop(0)

0x1a9: @ Stop()
0x1aa: Pop(0)
0x1ab: Return(); Pop(0)

0x1ac: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1ad: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1ae: @ Stop()
0x1af: Pop(0)
0x1b0: @ StopGroup0()
0x1b1: Pop(0)
0x1b2: Return(); Pop(0)

0x1b3: PushEmpty()
0x1b4: PushEmpty()
0x1b5: Call2 0x1ac

0x1b6: Pop(0)
0x1b7: PushEmpty(object)
0x1b8: Stack[-1] = Stack[-2]
0x1b9: Call2 0x62d

0x1ba: Pop(1)
0x1bb: Return(); Pop(0)

0x1bc: Stack[-1] = (bool) 0
0x1bd: Return(); Pop(0)

0x1be: PushEmpty(object, object)
0x1bf: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x1c0: Pop(0)
0x1c1: Stack[-4] = Stack[-1]
0x1c2: Return(); Pop(2)

0x1c3: Stack[-1] = 0
0x1c4: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1c5: @ WaitForAnimEnd()
0x1c6: Pop(0)
0x1c7: PushEmpty(bool)
0x1c8: Call2 0x54e

0x1c9: Pop(0)
0x1ca: Pop(1); Push((bool) Stack[-1] == 0)
0x1cb: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cc: Return(); Pop(14)

0x1cd: PushEmpty(int)
0x1ce: Call2 0x61c

0x1cf: Stack[-8] = Stack[-1]
0x1d0: Pop(1)
0x1d1: Stack[-6] = (int) 0
0x1d2: PushEmpty(bool)
0x1d3: Stack[-1] = (bool) 0
0x1d4: Push((int) 5)
0x1d5: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d7: PushEmpty(bool)
0x1d8: Call2 0x54e

0x1d9: Pop(0)
0x1da: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1db: Stack[-1] = (bool) 1
0x1dc: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x1dd: Push((int) 3)
0x1de: @ irand(Stack[-6], Stack[-1])
0x1df: Pop(1)
0x1e0: Push((int) 0)
0x1e1: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1e3: Push(Stack[-7])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1e5: @ irand(Stack[-4], Stack[-7])
0x1e6: Pop(0)
0x1e7: Push("all")
0x1e8: PushEmpty(string, int)
0x1e9: Stack[-1] = Stack[-7]
0x1ea: Call2 0x615

0x1eb: Pop(1)
0x1ec: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ed: Pop(2)
0x1ee: @ WaitForAnimEnd(Stack[-3])
0x1ef: Pop(0)
0x1f0: Pop(0); Push((bool) Stack[-3] == 0)
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1f2: GOTO 0x210

0x1f3: GOTO 0x205

0x1f4: Push((int) 1)
0x1f5: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1f7: Push((int) 4)
0x1f8: @ rand(Stack[-3], Stack[-1])
0x1f9: Pop(1)
0x1fa: Push((int) 1)
0x1fb: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1fc: @ Sleep(Stack[-1], Stack[-2])
0x1fd: Pop(1)
0x1fe: Pop(0); Push((bool) Stack[-1] == 0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x200: GOTO 0x210

0x201: GOTO 0x205

0x202: Push(Stack[-6])
0x203: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x204: GOTO 0x210

0x205: PushEmpty(bool)
0x206: Call2 0x213

0x207: Pop(0)
0x208: Pop(1); Push((bool) Stack[-1] == 0)
0x209: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x20a: GOTO 0x210

0x20b: @ ResetAAS()
0x20c: Pop(0)
0x20d: Push((int) 1)
0x20e: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x20f: GOTO 0x1d2

0x210: @ ResetAAS()
0x211: Pop(0)
0x212: Return(); Pop(14)

0x213: Stack[-1] = (bool) 1
0x214: Return(); Pop(0)

0x215: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x216: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x217: PushEmpty(bool, object, float)
0x218: Stack[-2] = Stack[-12]
0x219: Stack[-1] = (float) 70.0
0x21a: Call2 0x553

0x21b: Pop(2)
0x21c: Pop(1); Push((bool) Stack[-1] == 0)
0x21d: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21e: Stack[-10] = (int) -2
0x21f: Return(); Pop(8)

0x220: @ CreateDialog(Stack[-4])
0x221: Pop(0)
0x222: PushEmpty(int)
0x223: Call2 0x683

0x224: Pop(0)
0x225: @@ SetNPCName(Stack[-1])
0x226: Pop(1)
0x227: PushEmpty(int)
0x228: Call2 0x681

0x229: Pop(0)
0x22a: @@ SetNPCDescription(Stack[-1])
0x22b: Pop(1)
0x22c: PushEmpty(string)
0x22d: Call2 0x685

0x22e: Pop(0)
0x22f: @@ SetPhoto(Stack[-1])
0x230: Pop(1)
0x231: PushEmpty(string)
0x232: Call2 0x687

0x233: Pop(0)
0x234: @@ SetPhoto2(Stack[-1])
0x235: Pop(1)
0x236: PushEmpty(int)
0x237: Call2 0x670

0x238: Pop(0)
0x239: @@ SetPlayerName(Stack[-1])
0x23a: Pop(1)
0x23b: Stack[-2] = (int) -1
0x23c: @ IsOverrideActive(Stack[-3])
0x23d: Pop(0)
0x23e: Push(Stack[-3])
0x23f: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x240: Stack[-10] = (int) -2
0x241: Return(); Pop(8)

0x242: @ DoDialog(Stack[-4])
0x243: Pop(0)
0x244: PushEmpty(object, object)
0x245: Stack[-2] = Stack[-11]
0x246: Stack[-1] = Stack[-6]
0x247: Push(-2, 4); TaskCall(5)
0x248: Call2 0x25f

0x249: Pop(-2, 4); TaskReturn
0x24a: Pop(2)
0x24b: @@ IsDialogEnd(Stack[-1])
0x24c: Pop(0)
0x24d: Pop(0); Push((bool) Stack[-1] == 0)
0x24e: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x24f: @ sync()
0x250: Pop(0)
0x251: @@ IsDialogEnd(Stack[-1])
0x252: Pop(0)
0x253: GOTO 0x24d

0x254: PushEmpty(object)
0x255: Stack[-1] = Stack[-10]
0x256: Call2 0x597

0x257: Pop(1)
0x258: @ StopDialog(Stack[-4])
0x259: Pop(0)
0x25a: @@ GetReturnValue(Stack[-2])
0x25b: Pop(0)
0x25c: Stack[-10] = Stack[-2]
0x25d: Return(); Pop(8)

0x25e: Stack[-4] = 0
0x25f: PushEmpty()
0x260: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x261: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x262: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x263: Push((int) 1)
0x264: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x265: PushEmpty(bool, object)
0x266: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x267: Call2 0x664

0x268: Pop(1)
0x269: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x26a: PushEmpty(string)
0x26b: Stack[-1] = "Neutral"
0x26c: Call2 0x2b2

0x26d: Pop(1)
0x26e: Push((int) 509667)
0x26f: @@ SetMessage(Stack[-1])
0x270: Pop(1)
0x271: @@ ClearReplies()
0x272: Pop(0)
0x273: Push((int) 509668)
0x274: Push((int) 10643)
0x275: Push((int) 10642)
0x276: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x277: Pop(3)
0x278: Push((int) 509677)
0x279: Push((int) 10653)
0x27a: Push((int) 10652)
0x27b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27c: Pop(3)
0x27d: GOTO 0x294

0x27e: PushEmpty(string)
0x27f: Stack[-1] = "Neutral"
0x280: Call2 0x2b2

0x281: Pop(1)
0x282: Push((int) 509681)
0x283: @@ SetMessage(Stack[-1])
0x284: Pop(1)
0x285: @@ ClearReplies()
0x286: Pop(0)
0x287: Push((int) 509682)
0x288: Push((int) 10660)
0x289: Push((int) 10659)
0x28a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28b: Pop(3)
0x28c: Push((int) 509699)
0x28d: Push((int) -1)
0x28e: Push((int) 10678)
0x28f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x290: Pop(3)
0x291: GOTO 0x294

0x292: Return(); Pop(0)

0x293: GOTO 0x263

0x294: PushEmpty(bool)
0x295: Call2 0x689

0x296: Pop(0)
0x297: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x298: @ lshWaitForAnimEnd()
0x299: Pop(0)
0x29a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x29b: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29c: GOTO 0x2a2

0x29d: PushEmpty(string)
0x29e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x29f: Call2 0x5a8

0x2a0: Pop(1)
0x2a1: GOTO 0x298

0x2a2: GOTO 0x2b1

0x2a3: Push("all")
0x2a4: Push("idle")
0x2a5: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a6: Pop(2)
0x2a7: @ WaitForAnimEnd()
0x2a8: Pop(0)
0x2a9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2aa: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2ab: GOTO 0x2b1

0x2ac: Push("all")
0x2ad: Push("idle")
0x2ae: @ PlayAnimation(Stack[-2], Stack[-1])
0x2af: Pop(2)
0x2b0: GOTO 0x2a7

0x2b1: Return(); Pop(0)

0x2b2: PushEmpty()
0x2b3: PushEmpty(bool)
0x2b4: Call2 0x689

0x2b5: Pop(0)
0x2b6: Pop(1); Push((bool) Stack[-1] == 0)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b8: Return(); Pop(0)

0x2b9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2bb: Return(); Pop(0)

0x2bc: PushEmpty(string, bool)
0x2bd: Stack[-2] = Stack[-3]
0x2be: Push("")
0x2bf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c1: Stack[-1] = (bool) 0
0x2c2: GOTO 0x2c4

0x2c3: Stack[-1] = (bool) 1
0x2c4: Call2 0x5b8

0x2c5: Pop(2)
0x2c6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2c7: Return(); Pop(0)

0x2c8: PushEmpty()
0x2c9: Push((int) 1)
0x2ca: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x2cb: PushEmpty()
0x2cc: Call2 0x5c7

0x2cd: Pop(0)
0x2ce: Push((int) 10646)
0x2cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d1: PushEmpty(object, object)
0x2d2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d4: Call2 0x63b

0x2d5: Pop(2)
0x2d6: PushEmpty(object, object)
0x2d7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d9: Call2 0x62f

0x2da: Pop(2)
0x2db: Push((int) 10650)
0x2dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2de: PushEmpty(object, object)
0x2df: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e1: Call2 0x63b

0x2e2: Pop(2)
0x2e3: PushEmpty(object, object)
0x2e4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e6: Call2 0x62f

0x2e7: Pop(2)
0x2e8: Push((int) 10648)
0x2e9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ea: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2eb: PushEmpty(object, object)
0x2ec: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ed: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ee: Call2 0x635

0x2ef: Pop(2)
0x2f0: PushEmpty(object, object)
0x2f1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f3: Call2 0x65a

0x2f4: Pop(2)
0x2f5: Push((int) 10649)
0x2f6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x2f8: PushEmpty(object, object)
0x2f9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2fa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fb: Call2 0x635

0x2fc: Pop(2)
0x2fd: PushEmpty(object, object)
0x2fe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ff: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x300: Call2 0x65f

0x301: Pop(2)
0x302: Push((int) 10669)
0x303: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x304: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x305: PushEmpty(object, object)
0x306: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x307: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x308: Call2 0x64f

0x309: Pop(2)
0x30a: PushEmpty(object, object)
0x30b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x30c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x30d: Call2 0x62f

0x30e: Pop(2)
0x30f: Push((int) 10641)
0x310: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x311: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x312: PushEmpty(bool, object)
0x313: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x314: Call2 0x664

0x315: Pop(1)
0x316: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x317: PushEmpty(string)
0x318: Stack[-1] = "Neutral"
0x319: Call2 0x2b2

0x31a: Pop(1)
0x31b: Push((int) 509667)
0x31c: @@ SetMessage(Stack[-1])
0x31d: Pop(1)
0x31e: @@ ClearReplies()
0x31f: Pop(0)
0x320: Push((int) 509668)
0x321: Push((int) 10643)
0x322: Push((int) 10642)
0x323: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x324: Pop(3)
0x325: Push((int) 509677)
0x326: Push((int) 10653)
0x327: Push((int) 10652)
0x328: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x329: Pop(3)
0x32a: Return(); Pop(0)

0x32b: PushEmpty(string)
0x32c: Stack[-1] = "Neutral"
0x32d: Call2 0x2b2

0x32e: Pop(1)
0x32f: Push((int) 509681)
0x330: @@ SetMessage(Stack[-1])
0x331: Pop(1)
0x332: @@ ClearReplies()
0x333: Pop(0)
0x334: Push((int) 509682)
0x335: Push((int) 10660)
0x336: Push((int) 10659)
0x337: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x338: Pop(3)
0x339: Push((int) 509699)
0x33a: Push((int) -1)
0x33b: Push((int) 10678)
0x33c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33d: Pop(3)
0x33e: Return(); Pop(0)

0x33f: Push((int) 10660)
0x340: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x342: PushEmpty(string)
0x343: Stack[-1] = "Neutral"
0x344: Call2 0x2b2

0x345: Pop(1)
0x346: Push((int) 509683)
0x347: @@ SetMessage(Stack[-1])
0x348: Pop(1)
0x349: @@ ClearReplies()
0x34a: Pop(0)
0x34b: Push((int) 509684)
0x34c: Push((int) 10662)
0x34d: Push((int) 10661)
0x34e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34f: Pop(3)
0x350: Push((int) 509694)
0x351: Push((int) 10672)
0x352: Push((int) 10671)
0x353: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x354: Pop(3)
0x355: Push((int) 509698)
0x356: Push((int) 10662)
0x357: Push((int) 10676)
0x358: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x359: Pop(3)
0x35a: Return(); Pop(0)

0x35b: Push((int) 10672)
0x35c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35d: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x35e: PushEmpty(string)
0x35f: Stack[-1] = "Neutral"
0x360: Call2 0x2b2

0x361: Pop(1)
0x362: Push((int) 509695)
0x363: @@ SetMessage(Stack[-1])
0x364: Pop(1)
0x365: @@ ClearReplies()
0x366: Pop(0)
0x367: Push((int) 509696)
0x368: Push((int) 10665)
0x369: Push((int) 10673)
0x36a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36b: Pop(3)
0x36c: Push((int) 509697)
0x36d: Push((int) -1)
0x36e: Push((int) 10675)
0x36f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x370: Pop(3)
0x371: Return(); Pop(0)

0x372: Push((int) 10662)
0x373: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x374: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x375: PushEmpty(string)
0x376: Stack[-1] = "Neutral"
0x377: Call2 0x2b2

0x378: Pop(1)
0x379: Push((int) 509685)
0x37a: @@ SetMessage(Stack[-1])
0x37b: Pop(1)
0x37c: @@ ClearReplies()
0x37d: Pop(0)
0x37e: Push((int) 509687)
0x37f: Push((int) 10665)
0x380: Push((int) 10664)
0x381: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x382: Pop(3)
0x383: Push((int) 509686)
0x384: Push((int) -1)
0x385: Push((int) 10663)
0x386: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x387: Pop(3)
0x388: Return(); Pop(0)

0x389: Push((int) 10665)
0x38a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38b: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x38c: PushEmpty(string)
0x38d: Stack[-1] = "Neutral"
0x38e: Call2 0x2b2

0x38f: Pop(1)
0x390: Push((int) 509688)
0x391: @@ SetMessage(Stack[-1])
0x392: Pop(1)
0x393: @@ ClearReplies()
0x394: Pop(0)
0x395: Push((int) 509689)
0x396: Push((int) -1)
0x397: Push((int) 10666)
0x398: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x399: Pop(3)
0x39a: Push((int) 509690)
0x39b: Push((int) 10668)
0x39c: Push((int) 10667)
0x39d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39e: Pop(3)
0x39f: Return(); Pop(0)

0x3a0: Push((int) 10668)
0x3a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a2: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3a3: PushEmpty(string)
0x3a4: Stack[-1] = "Neutral"
0x3a5: Call2 0x2b2

0x3a6: Pop(1)
0x3a7: Push((int) 509691)
0x3a8: @@ SetMessage(Stack[-1])
0x3a9: Pop(1)
0x3aa: @@ ClearReplies()
0x3ab: Pop(0)
0x3ac: Push((int) 509692)
0x3ad: Push((int) -1)
0x3ae: Push((int) 10669)
0x3af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b0: Pop(3)
0x3b1: Push((int) 509693)
0x3b2: Push((int) -1)
0x3b3: Push((int) 10670)
0x3b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b5: Pop(3)
0x3b6: Push((int) 538762)
0x3b7: Push((int) -1)
0x3b8: Push((int) 40678)
0x3b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ba: Pop(3)
0x3bb: Return(); Pop(0)

0x3bc: Push((int) 10653)
0x3bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3be: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3bf: PushEmpty(string)
0x3c0: Stack[-1] = "Neutral"
0x3c1: Call2 0x2b2

0x3c2: Pop(1)
0x3c3: Push((int) 509678)
0x3c4: @@ SetMessage(Stack[-1])
0x3c5: Pop(1)
0x3c6: @@ ClearReplies()
0x3c7: Pop(0)
0x3c8: Push((int) 509679)
0x3c9: Push((int) 10643)
0x3ca: Push((int) 10654)
0x3cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cc: Pop(3)
0x3cd: Push((int) 509680)
0x3ce: Push((int) 10643)
0x3cf: Push((int) 10656)
0x3d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d1: Pop(3)
0x3d2: Return(); Pop(0)

0x3d3: Push((int) 10643)
0x3d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3d6: PushEmpty(string)
0x3d7: Stack[-1] = "Neutral"
0x3d8: Call2 0x2b2

0x3d9: Pop(1)
0x3da: Push((int) 509669)
0x3db: @@ SetMessage(Stack[-1])
0x3dc: Pop(1)
0x3dd: @@ ClearReplies()
0x3de: Pop(0)
0x3df: Push((int) 509670)
0x3e0: Push((int) 10645)
0x3e1: Push((int) 10644)
0x3e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e3: Pop(3)
0x3e4: Return(); Pop(0)

0x3e5: Push((int) 10645)
0x3e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e7: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3e8: PushEmpty(string)
0x3e9: Stack[-1] = "Neutral"
0x3ea: Call2 0x2b2

0x3eb: Pop(1)
0x3ec: Push((int) 509671)
0x3ed: @@ SetMessage(Stack[-1])
0x3ee: Pop(1)
0x3ef: @@ ClearReplies()
0x3f0: Pop(0)
0x3f1: Push((int) 509672)
0x3f2: Push((int) 43766)
0x3f3: Push((int) 10646)
0x3f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f5: Pop(3)
0x3f6: Push((int) 509676)
0x3f7: Push((int) 10647)
0x3f8: Push((int) 10650)
0x3f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fa: Pop(3)
0x3fb: Return(); Pop(0)

0x3fc: Push((int) 10647)
0x3fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3fe: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x3ff: PushEmpty(string)
0x400: Stack[-1] = "Neutral"
0x401: Call2 0x2b2

0x402: Pop(1)
0x403: Push((int) 509673)
0x404: @@ SetMessage(Stack[-1])
0x405: Pop(1)
0x406: @@ ClearReplies()
0x407: Pop(0)
0x408: Push((int) 541600)
0x409: Push((int) 43766)
0x40a: Push((int) 43765)
0x40b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40c: Pop(3)
0x40d: Push((int) 541602)
0x40e: Push((int) 43766)
0x40f: Push((int) 43767)
0x410: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x411: Pop(3)
0x412: Return(); Pop(0)

0x413: Push((int) 43766)
0x414: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x415: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x416: PushEmpty(string)
0x417: Stack[-1] = "Neutral"
0x418: Call2 0x2b2

0x419: Pop(1)
0x41a: Push((int) 541601)
0x41b: @@ SetMessage(Stack[-1])
0x41c: Pop(1)
0x41d: @@ ClearReplies()
0x41e: Pop(0)
0x41f: Push((int) 509674)
0x420: Push((int) -1)
0x421: Push((int) 10648)
0x422: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x423: Pop(3)
0x424: Push((int) 509675)
0x425: Push((int) -1)
0x426: Push((int) 10649)
0x427: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x428: Pop(3)
0x429: Return(); Pop(0)

0x42a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x42b: PushEmpty(bool)
0x42c: Call2 0x689

0x42d: Pop(0)
0x42e: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x42f: @ lshStopAnimation()
0x430: Pop(0)
0x431: GOTO 0x434

0x432: @ StopAnimation()
0x433: Pop(0)
0x434: Return(); Pop(0)

0x435: GOTO 0x2c9

0x436: Return(); Pop(0)

0x437: PushEmpty()
0x438: PushEmpty(int, object)
0x439: Stack[-1] = Stack[-3]
0x43a: Push(-2, 1); TaskCall(4)
0x43b: Call2 0x215

0x43c: Pop(-2, 1); TaskReturn
0x43d: Stack[-4] = Stack[-2]
0x43e: Pop(2)
0x43f: Return(); Pop(0)

0x440: Push(GlobalVars[0])
0x441: PushEmpty(int)
0x442: Call2 0x4f6

0x443: Stack[-2] = Stack[-1]
0x444: Pop(1)
0x445: GlobalVars[0] = Stack[-1]; Pop(1)
0x446: Push((int) 3)
0x447: @ Sleep(Stack[-1])
0x448: Pop(1)
0x449: PushEmpty()
0x44a: Call2 0x485

0x44b: Pop(0)
0x44c: GOTO 0x446

0x44d: Return(); Pop(0)

0x44e: PushEmpty(int, int)
0x44f: PushEmpty()
0x450: Call2 0x4d6

0x451: Pop(0)
0x452: PushEmpty(int, object)
0x453: Stack[-1] = Stack[-5]
0x454: Call2 0x437

0x455: Stack[-3] = Stack[-2]
0x456: Pop(2)
0x457: Push((int) 0)
0x458: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x459: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x45a: PushEmpty(bool, string, string)
0x45b: Stack[-2] = "quest_d4_01"
0x45c: Stack[-1] = "key1_done"
0x45d: Call2 0x609

0x45e: Pop(3)
0x45f: PushEmpty(object)
0x460: Stack[-1] = Stack[-4]
0x461: Push(-1, 2); TaskCall(0)
0x462: Call2 0x0

0x463: Pop(-1, 2); TaskReturn
0x464: Pop(1)
0x465: PushEmpty(object)
0x466: Stack[-1] = Stack[-4]
0x467: Push(-1, 2); TaskCall(1)
0x468: Call2 0xb6

0x469: Pop(-1, 2); TaskReturn
0x46a: Pop(1)
0x46b: PushEmpty(object)
0x46c: Stack[-1] = Stack[-4]
0x46d: Push(-1, 0); TaskCall(7)
0x46e: Call2 0x4e3

0x46f: Pop(-1, 0); TaskReturn
0x470: Pop(1)
0x471: PushEmpty()
0x472: Push(-0, 2); TaskCall(2)
0x473: Call2 0x15d

0x474: Pop(-0, 2); TaskReturn
0x475: Pop(0)
0x476: GOTO 0x484

0x477: Push((int) 1)
0x478: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x479: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x47a: PushEmpty(bool, string, string)
0x47b: Stack[-2] = "quest_d4_01"
0x47c: Stack[-1] = "key1_done"
0x47d: Call2 0x609

0x47e: Pop(3)
0x47f: PushEmpty()
0x480: Push(-0, 2); TaskCall(2)
0x481: Call2 0x15d

0x482: Pop(-0, 2); TaskReturn
0x483: Pop(0)
0x484: Return(); Pop(2)

0x485: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x486: @ WaitForAnimEnd()
0x487: Pop(0)
0x488: PushEmpty(bool)
0x489: Call2 0x54e

0x48a: Pop(0)
0x48b: Pop(1); Push((bool) Stack[-1] == 0)
0x48c: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48d: Return(); Pop(14)

0x48e: PushEmpty(int)
0x48f: Call2 0x61c

0x490: Stack[-8] = Stack[-1]
0x491: Pop(1)
0x492: Stack[-6] = (int) 0
0x493: PushEmpty(bool)
0x494: Stack[-1] = (bool) 0
0x495: Push((int) 5)
0x496: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x497: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x498: PushEmpty(bool)
0x499: Call2 0x54e

0x49a: Pop(0)
0x49b: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x49c: Stack[-1] = (bool) 1
0x49d: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x49e: Push((int) 3)
0x49f: @ irand(Stack[-6], Stack[-1])
0x4a0: Pop(1)
0x4a1: Push((int) 0)
0x4a2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4a3: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4a4: Push(Stack[-7])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4a6: @ irand(Stack[-4], Stack[-7])
0x4a7: Pop(0)
0x4a8: Push("all")
0x4a9: PushEmpty(string, int)
0x4aa: Stack[-1] = Stack[-7]
0x4ab: Call2 0x615

0x4ac: Pop(1)
0x4ad: @ PlayAnimation(Stack[-2], Stack[-1])
0x4ae: Pop(2)
0x4af: @ WaitForAnimEnd(Stack[-3])
0x4b0: Pop(0)
0x4b1: Pop(0); Push((bool) Stack[-3] == 0)
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b3: GOTO 0x4d1

0x4b4: GOTO 0x4c6

0x4b5: Push((int) 1)
0x4b6: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4b7: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4b8: Push((int) 4)
0x4b9: @ rand(Stack[-3], Stack[-1])
0x4ba: Pop(1)
0x4bb: Push((int) 1)
0x4bc: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4bd: @ Sleep(Stack[-1], Stack[-2])
0x4be: Pop(1)
0x4bf: Pop(0); Push((bool) Stack[-1] == 0)
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4c1: GOTO 0x4d1

0x4c2: GOTO 0x4c6

0x4c3: Push(Stack[-6])
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c5: GOTO 0x4d1

0x4c6: PushEmpty(bool)
0x4c7: Call2 0x4d4

0x4c8: Pop(0)
0x4c9: Pop(1); Push((bool) Stack[-1] == 0)
0x4ca: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4cb: GOTO 0x4d1

0x4cc: @ ResetAAS()
0x4cd: Pop(0)
0x4ce: Push((int) 1)
0x4cf: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x4d0: GOTO 0x493

0x4d1: @ ResetAAS()
0x4d2: Pop(0)
0x4d3: Return(); Pop(14)

0x4d4: Stack[-1] = (bool) 1
0x4d5: Return(); Pop(0)

0x4d6: @ StopAnimation()
0x4d7: Pop(0)
0x4d8: @ StopGroup0()
0x4d9: Pop(0)
0x4da: Return(); Pop(0)

0x4db: PushEmpty()
0x4dc: PushEmpty(int, object)
0x4dd: Stack[-1] = Stack[-3]
0x4de: Push(-2, 1); TaskCall(4)
0x4df: Call2 0x215

0x4e0: Pop(-2, 1); TaskReturn
0x4e1: Pop(2)
0x4e2: Return(); Pop(0)

0x4e3: PushEmpty(bool, bool)
0x4e4: @ IsOverrideActive(Stack[-1])
0x4e5: Pop(0)
0x4e6: Pop(0); Push((bool) Stack[-1] == 0)
0x4e7: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e8: GOTO 0x4ea

0x4e9: GOTO 0x4e4

0x4ea: PushEmpty(object)
0x4eb: Stack[-1] = Stack[-4]
0x4ec: Call2 0x4db

0x4ed: Pop(1)
0x4ee: @ Hold()
0x4ef: Pop(0)
0x4f0: Return(); Pop(2)

0x4f1: PushEmpty(cvector, cvector)
0x4f2: @ GetPosition(Stack[-1])
0x4f3: Pop(0)
0x4f4: Stack[-3] = Stack[-1]
0x4f5: Return(); Pop(2)

0x4f6: PushEmpty(object, int, object, int)
0x4f7: @ GetScene(Stack[-2])
0x4f8: Pop(0)
0x4f9: PushEmpty(cvector)
0x4fa: Call2 0x4f1

0x4fb: Pop(0)
0x4fc: @@ GetRegionByPt(Stack[-2], Stack[-1])
0x4fd: Pop(1)
0x4fe: Stack[-5] = Stack[-1]
0x4ff: Return(); Pop(4)

0x500: Stack[-2] = 0
0x501: PushEmpty(bool, bool)
0x502: Push("HasProperty")
0x503: Push((int) 2)
0x504: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x505: Pop(1); Push((bool) Stack[-1] == 0)
0x506: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x507: Stack[-5] = (bool) 0
0x508: Return(); Pop(2)

0x509: @@ HasProperty(Stack[-3], Stack[-1])
0x50a: Pop(0)
0x50b: Stack[-5] = Stack[-1]
0x50c: Return(); Pop(2)

0x50d: PushEmpty(bool, bool)
0x50e: @@ IsDead(Stack[-1])
0x50f: Pop(0)
0x510: Stack[-4] = Stack[-1]
0x511: Return(); Pop(2)

0x512: PushEmpty(object, object, object, object)
0x513: Pop(0); Push((bool) Stack[-5] == 0)
0x514: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x515: Stack[-6] = (bool) 0
0x516: Return(); Pop(4)

0x517: PushEmpty(bool)
0x518: Stack[-1] = (bool) 0
0x519: Push("IsDead")
0x51a: Push((int) 1)
0x51b: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x51c: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x51d: PushEmpty(bool, object)
0x51e: Stack[-1] = Stack[-8]
0x51f: Call2 0x50d

0x520: Pop(1)
0x521: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x522: Stack[-1] = (bool) 1
0x523: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x524: Stack[-6] = (bool) 0
0x525: Return(); Pop(4)

0x526: @ GetScene(Stack[-2])
0x527: Pop(0)
0x528: Pop(0); Push((bool) Stack[-2] == 0)
0x529: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x52a: Stack[-6] = (bool) 0
0x52b: Return(); Pop(4)

0x52c: @@ GetScene(Stack[-1])
0x52d: Pop(0)
0x52e: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x52f: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x530: Stack[-6] = (bool) 0
0x531: Return(); Pop(4)

0x532: Stack[-6] = (bool) 1
0x533: Return(); Pop(4)

0x534: Stack[-1] = 0
0x535: Stack[-2] = 0
0x536: PushEmpty(int, int)
0x537: PushEmpty(bool, object)
0x538: Stack[-1] = Stack[-5]
0x539: Call2 0x512

0x53a: Pop(1)
0x53b: Pop(1); Push((bool) Stack[-1] == 0)
0x53c: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x53d: Stack[-4] = (bool) 0
0x53e: Return(); Pop(2)

0x53f: PushEmpty(bool, object, string)
0x540: Stack[-2] = Stack[-6]
0x541: Stack[-1] = "noaccess"
0x542: Call2 0x501

0x543: Pop(2)
0x544: Pop(1); Push((bool) Stack[-1] == 0)
0x545: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x546: Stack[-4] = (bool) 1
0x547: Return(); Pop(2)

0x548: Push("noaccess")
0x549: @@ GetProperty(Stack[-1], Stack[-2])
0x54a: Pop(1)
0x54b: Push((int) 0)
0x54c: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x54d: Return(); Pop(2)

0x54e: PushEmpty(bool, bool)
0x54f: @ IsLoaded(Stack[-1])
0x550: Pop(0)
0x551: Stack[-3] = Stack[-1]
0x552: Return(); Pop(2)

0x553: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x554: @@ GetPosition(Stack[-8])
0x555: Pop(0)
0x556: @@ GetEyesHeight(Stack[-9])
0x557: Pop(0)
0x558: Push(CvectorIndex(Stack[-8], 1))
0x559: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x55a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x55b: @ GetPosition(Stack[-7])
0x55c: Pop(0)
0x55d: @ GetEyesHeight(Stack[-9])
0x55e: Pop(0)
0x55f: Push(CvectorIndex(Stack[-7], 1))
0x560: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x561: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x562: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x563: Push(CvectorIndex(Stack[-6], 1))
0x564: Stack[-1] = (int) 0
0x565: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x566: Pop(0); Push(Stack[-6] | Stack[-6]);
0x567: Pop(1); Push(Sqrt(Stack[-1]))
0x568: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x569: Stack[-5] = -Stack[-6]; Pop(0);
0x56a: Pop(0); Push(Stack[-6] * Stack[-19]);
0x56b: PushEmpty(cvector, cvector)
0x56c: Push(CVector(0.0, 1.0, 0.0))
0x56d: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x56e: Call2 0x5ce

0x56f: Pop(1)
0x570: Push((int) 25)
0x571: Pop(2); Push(Stack[-2] * Stack[-1]);
0x572: Pop(2); Push(Stack[-2] + Stack[-1]);
0x573: Push(CVector(0.0, 10.0, 0.0))
0x574: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x575: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x576: @ IsOverrideActive(Stack[-2])
0x577: Pop(0)
0x578: Push(Stack[-2])
0x579: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x57a: Stack[-21] = (bool) 0
0x57b: Return(); Pop(18)

0x57c: @ StopWorld()
0x57d: Pop(0)
0x57e: @ CameraTransit(Stack[-3], Stack[-5])
0x57f: Pop(0)
0x580: Push(CvectorIndex(Stack[-4], 0))
0x581: Push(CvectorIndex(Stack[-5], 2))
0x582: @ Rotate(Stack[-2], Stack[-1])
0x583: Pop(2)
0x584: PushEmpty(bool)
0x585: Call2 0x689

0x586: Pop(0)
0x587: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x588: GOTO 0x591

0x589: Push("head")
0x58a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x58b: Pop(1)
0x58c: Push(Stack[-1])
0x58d: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x58e: Push("head")
0x58f: @ LookAsyncCamera(Stack[-1])
0x590: Pop(1)
0x591: @ CameraWaitForPlayFinish()
0x592: Pop(0)
0x593: @ ResumeWorld()
0x594: Pop(0)
0x595: Stack[-21] = (bool) 1
0x596: Return(); Pop(18)

0x597: PushEmpty(bool, bool)
0x598: @ CameraSwitchToNormal()
0x599: Pop(0)
0x59a: PushEmpty(bool)
0x59b: Call2 0x689

0x59c: Pop(0)
0x59d: IF (Stack[-1] == 0) GOTO 0x59f; Pop(1)

0x59e: GOTO 0x5a7

0x59f: Push("head")
0x5a0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x5a1: Pop(1)
0x5a2: Push(Stack[-1])
0x5a3: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x5a4: Push("head")
0x5a5: @ UnlookAsync(Stack[-1])
0x5a6: Pop(1)
0x5a7: Return(); Pop(2)

0x5a8: PushEmpty(bool, float, float, bool, float, float)
0x5a9: @ lshHasAnimation(Stack[-3], Stack[-7])
0x5aa: Pop(0)
0x5ab: Push(Stack[-3])
0x5ac: IF (Stack[-1] == 0) GOTO 0x5b3; Pop(1)

0x5ad: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x5ae: Pop(0)
0x5af: Push((bool) 0)
0x5b0: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5b1: Pop(1)
0x5b2: GOTO 0x5b7

0x5b3: Push("Can't find lsh animation : ")
0x5b4: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5b5: @ Trace(Stack[-1])
0x5b6: Pop(1)
0x5b7: Return(); Pop(6)

0x5b8: PushEmpty(bool, float, float, bool, float, float)
0x5b9: @ lshHasAnimation(Stack[-3], Stack[-8])
0x5ba: Pop(0)
0x5bb: Push(Stack[-3])
0x5bc: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5bd: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x5be: Pop(0)
0x5bf: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x5c0: Pop(0)
0x5c1: GOTO 0x5c6

0x5c2: Push("Can't find lsh animation : ")
0x5c3: Pop(1); Push(Stack[-1] + Stack[-9]);
0x5c4: @ Trace(Stack[-1])
0x5c5: Pop(1)
0x5c6: Return(); Pop(6)

0x5c7: PushEmpty(bool)
0x5c8: Call2 0x689

0x5c9: Pop(0)
0x5ca: IF (Stack[-1] == 0) GOTO 0x5cd; Pop(1)

0x5cb: @ lshStopSpeech()
0x5cc: Pop(0)
0x5cd: Return(); Pop(0)

0x5ce: PushEmpty(float, float)
0x5cf: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5d0: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5d1: Push((float)0.0)
0x5d2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5d3: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x5d4: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5d5: Return(); Pop(2)

0x5d6: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5d7: Return(); Pop(2)

0x5d8: PushEmpty(int, int)
0x5d9: @ GetVariable(Stack[-3], Stack[-1])
0x5da: Pop(0)
0x5db: Stack[-4] = Stack[-1]
0x5dc: Return(); Pop(2)

0x5dd: PushEmpty(object, object)
0x5de: @ CreateIntVector(Stack[-1])
0x5df: Pop(0)
0x5e0: @@ add(Stack[-4])
0x5e1: Pop(0)
0x5e2: @@ add(Stack[-3])
0x5e3: Pop(0)
0x5e4: Push((int) 3)
0x5e5: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x5e6: Pop(1)
0x5e7: Return(); Pop(2)

0x5e8: Stack[-1] = 0
0x5e9: PushEmpty(int, int, bool, int, int, bool)
0x5ea: @@ GetItemID(Stack[-3])
0x5eb: Pop(0)
0x5ec: Push("Category")
0x5ed: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x5ee: Pop(1)
0x5ef: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x5f0: Pop(0)
0x5f1: Pop(0); Push((bool) Stack[-1] == 0)
0x5f2: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5f3: @@ DropItems(Stack[-8], Stack[-7])
0x5f4: Pop(0)
0x5f5: GOTO 0x5fb

0x5f6: PushEmpty(int, int)
0x5f7: Stack[-2] = Stack[-5]
0x5f8: Stack[-1] = Stack[-9]
0x5f9: Call2 0x5dd

0x5fa: Pop(2)
0x5fb: Return(); Pop(6)

0x5fc: PushEmpty(object, object)
0x5fd: @ CreateInvItem(Stack[-1])
0x5fe: Pop(0)
0x5ff: @@ SetItemName(Stack[-4])
0x600: Pop(0)
0x601: PushEmpty(object, object, int)
0x602: Stack[-3] = Stack[-8]
0x603: Stack[-2] = Stack[-4]
0x604: Stack[-1] = Stack[-6]
0x605: Call2 0x5e9

0x606: Pop(3)
0x607: Return(); Pop(2)

0x608: Stack[-1] = 0
0x609: PushEmpty(object, object)
0x60a: @ FindActor(Stack[-1], Stack[-4])
0x60b: Pop(0)
0x60c: Pop(0); Push((bool) Stack[-1] == 0)
0x60d: IF (Stack[-1] == 0) GOTO 0x610; Pop(1)

0x60e: Stack[-5] = (bool) 0
0x60f: Return(); Pop(2)

0x610: @ Trigger(Stack[-1], Stack[-3])
0x611: Pop(0)
0x612: Stack[-5] = (bool) 1
0x613: Return(); Pop(2)

0x614: Stack[-1] = 0
0x615: PushEmpty(string, string)
0x616: Stack[-1] = "idle"
0x617: Push(Stack[-3])
0x618: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x619: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x61a: Stack[-4] = Stack[-1]
0x61b: Return(); Pop(2)

0x61c: PushEmpty(int, bool, int, bool)
0x61d: Stack[-2] = (int) 0
0x61e: Push("all")
0x61f: PushEmpty(string, int)
0x620: Stack[-1] = Stack[-5]
0x621: Call2 0x615

0x622: Pop(1)
0x623: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x624: Pop(2)
0x625: Pop(0); Push((bool) Stack[-1] == 0)
0x626: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x627: GOTO 0x62b

0x628: Push((int) 1)
0x629: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x62a: GOTO 0x61e

0x62b: Stack[-5] = Stack[-2]
0x62c: Return(); Pop(4)

0x62d: PushEmpty()
0x62e: Return(); Pop(0)

0x62f: PushEmpty()
0x630: Push("playsound")
0x631: Push("giveitem")
0x632: @ TriggerWorld(Stack[-2], Stack[-1])
0x633: Pop(2)
0x634: Return(); Pop(0)

0x635: PushEmpty()
0x636: Push("ood4WhiteMask1")
0x637: Push((int) 1)
0x638: @ SetVariable(Stack[-2], Stack[-1])
0x639: Pop(2)
0x63a: Return(); Pop(0)

0x63b: PushEmpty()
0x63c: Push("d4q01KeyWhite")
0x63d: Push((int) 1)
0x63e: @ SetVariable(Stack[-2], Stack[-1])
0x63f: Pop(2)
0x640: Push("theaterkey is given")
0x641: @ Trace(Stack[-1])
0x642: Pop(1)
0x643: PushEmpty(object, string, int)
0x644: Stack[-3] = Stack[-5]
0x645: Stack[-2] = "d4q01_theater_key"
0x646: Stack[-1] = (int) 1
0x647: Call2 0x5fc

0x648: Pop(3)
0x649: PushEmpty(bool, string, string)
0x64a: Stack[-2] = "quest_d4_01"
0x64b: Stack[-1] = "init_theater"
0x64c: Call2 0x609

0x64d: Pop(3)
0x64e: Return(); Pop(0)

0x64f: PushEmpty()
0x650: Push("tvirin is given")
0x651: @ Trace(Stack[-1])
0x652: Pop(1)
0x653: PushEmpty(object, string, int)
0x654: Stack[-3] = Stack[-5]
0x655: Stack[-2] = "tvirin"
0x656: Stack[-1] = (int) 1
0x657: Call2 0x5fc

0x658: Pop(3)
0x659: Return(); Pop(0)

0x65a: PushEmpty()
0x65b: Push((int) 0)
0x65c: @@ SetReturnValue(Stack[-1])
0x65d: Pop(1)
0x65e: Return(); Pop(0)

0x65f: PushEmpty()
0x660: Push((int) 1)
0x661: @@ SetReturnValue(Stack[-1])
0x662: Pop(1)
0x663: Return(); Pop(0)

0x664: PushEmpty()
0x665: PushEmpty(int, string)
0x666: Stack[-1] = "ood4WhiteMask1"
0x667: Call2 0x5d8

0x668: Pop(1)
0x669: Push((int) 0)
0x66a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x66b: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x66c: Stack[-2] = (bool) 1
0x66d: Return(); Pop(0)

0x66e: Stack[-2] = (bool) 0
0x66f: Return(); Pop(0)

0x670: PushEmpty(int, int)
0x671: Push("branch")
0x672: @ GetVariable(Stack[-1], Stack[-2])
0x673: Pop(1)
0x674: Push((int) 0)
0x675: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x676: IF (Stack[-1] == 0) GOTO 0x67a; Pop(1)

0x677: Stack[-3] = (int) 1
0x678: Return(); Pop(2)

0x679: GOTO 0x67f

0x67a: Push((int) 1)
0x67b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x67c: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x67d: Stack[-3] = (int) 2
0x67e: Return(); Pop(2)

0x67f: Stack[-3] = (int) 3
0x680: Return(); Pop(2)

0x681: Stack[-1] = (int) 515569
0x682: Return(); Pop(0)

0x683: Stack[-1] = (int) 503354
0x684: Return(); Pop(0)

0x685: Stack[-1] = "ui/NPC_wmask.png"
0x686: Return(); Pop(0)

0x687: Stack[-1] = "ui/NPC_wmask_b.png"
0x688: Return(); Pop(0)

0x689: Stack[-1] = (bool) 0
0x68a: Return(); Pop(0)

