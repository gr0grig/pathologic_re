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

RunOp = 0x3dc
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
		EVENT_11 Op = 0x2d2 Vars = (int, int)
	GTASK_6  Params = 0
		EVENT_0 Op = 0x3ea Vars = (object)
	GTASK_7  Params = 1

Events:
EVENT_41 Op = 0x5c9 Vars = (object)

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
0xe: Call2 0x492

0xf: Pop(0)
0x10: Push(GlobalVars[0])
0x11: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x12: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0x13: GOTO 0x1f

0x14: Push((int) 1)
0x15: @ Sleep(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(int)
0x18: Call2 0x492

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
0x28: Call2 0x492

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
0xa8: Call2 0x5c9

0xa9: Pop(1)
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: PushEmpty(bool, object)
0xad: Stack[-1] = Stack[-3]
0xae: Call2 0x4d2

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
0x14f: Call2 0x5c9

0x150: Pop(1)
0x151: Return(); Pop(0)

0x152: PushEmpty()
0x153: PushEmpty(bool, object)
0x154: Stack[-1] = Stack[-3]
0x155: Call2 0x4d2

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
0x1b9: Call2 0x5c9

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
0x1c8: Call2 0x4ea

0x1c9: Pop(0)
0x1ca: Pop(1); Push((bool) Stack[-1] == 0)
0x1cb: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cc: Return(); Pop(14)

0x1cd: PushEmpty(int)
0x1ce: Call2 0x5b8

0x1cf: Stack[-8] = Stack[-1]
0x1d0: Pop(1)
0x1d1: Stack[-6] = (int) 0
0x1d2: PushEmpty(bool)
0x1d3: Stack[-1] = (bool) 0
0x1d4: Push((int) 5)
0x1d5: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d7: PushEmpty(bool)
0x1d8: Call2 0x4ea

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
0x1ea: Call2 0x5b1

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
0x21a: Call2 0x4ef

0x21b: Pop(2)
0x21c: Pop(1); Push((bool) Stack[-1] == 0)
0x21d: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21e: Stack[-10] = (int) -2
0x21f: Return(); Pop(8)

0x220: @ CreateDialog(Stack[-4])
0x221: Pop(0)
0x222: PushEmpty(int)
0x223: Call2 0x61f

0x224: Pop(0)
0x225: @@ SetNPCName(Stack[-1])
0x226: Pop(1)
0x227: PushEmpty(int)
0x228: Call2 0x61d

0x229: Pop(0)
0x22a: @@ SetNPCDescription(Stack[-1])
0x22b: Pop(1)
0x22c: PushEmpty(string)
0x22d: Call2 0x621

0x22e: Pop(0)
0x22f: @@ SetPhoto(Stack[-1])
0x230: Pop(1)
0x231: PushEmpty(string)
0x232: Call2 0x623

0x233: Pop(0)
0x234: @@ SetPhoto2(Stack[-1])
0x235: Pop(1)
0x236: PushEmpty(int)
0x237: Call2 0x60c

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
0x256: Call2 0x533

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
0x264: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x265: PushEmpty(bool, object)
0x266: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x267: Call2 0x600

0x268: Pop(1)
0x269: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x26a: PushEmpty(string)
0x26b: Stack[-1] = "Neutral"
0x26c: Call2 0x2bc

0x26d: Pop(1)
0x26e: Push((int) 509701)
0x26f: @@ SetMessage(Stack[-1])
0x270: Pop(1)
0x271: @@ ClearReplies()
0x272: Pop(0)
0x273: Push((int) 509702)
0x274: Push((int) 10682)
0x275: Push((int) 10681)
0x276: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x277: Pop(3)
0x278: Push((int) 509711)
0x279: Push((int) 10682)
0x27a: Push((int) 10691)
0x27b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27c: Pop(3)
0x27d: GOTO 0x29e

0x27e: PushEmpty(string)
0x27f: Stack[-1] = "Neutral"
0x280: Call2 0x2bc

0x281: Pop(1)
0x282: Push((int) 509712)
0x283: @@ SetMessage(Stack[-1])
0x284: Pop(1)
0x285: @@ ClearReplies()
0x286: Pop(0)
0x287: Push((int) 509713)
0x288: Push((int) 10695)
0x289: Push((int) 10694)
0x28a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28b: Pop(3)
0x28c: Push((int) 509720)
0x28d: Push((int) 10702)
0x28e: Push((int) 10701)
0x28f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x290: Pop(3)
0x291: Push((int) 509723)
0x292: Push((int) 10695)
0x293: Push((int) 10705)
0x294: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x295: Pop(3)
0x296: Push((int) 509724)
0x297: Push((int) -1)
0x298: Push((int) 10707)
0x299: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29a: Pop(3)
0x29b: GOTO 0x29e

0x29c: Return(); Pop(0)

0x29d: GOTO 0x263

0x29e: PushEmpty(bool)
0x29f: Call2 0x625

0x2a0: Pop(0)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a2: @ lshWaitForAnimEnd()
0x2a3: Pop(0)
0x2a4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a6: GOTO 0x2ac

0x2a7: PushEmpty(string)
0x2a8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2a9: Call2 0x544

0x2aa: Pop(1)
0x2ab: GOTO 0x2a2

0x2ac: GOTO 0x2bb

0x2ad: Push("all")
0x2ae: Push("idle")
0x2af: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b0: Pop(2)
0x2b1: @ WaitForAnimEnd()
0x2b2: Pop(0)
0x2b3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b5: GOTO 0x2bb

0x2b6: Push("all")
0x2b7: Push("idle")
0x2b8: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b9: Pop(2)
0x2ba: GOTO 0x2b1

0x2bb: Return(); Pop(0)

0x2bc: PushEmpty()
0x2bd: PushEmpty(bool)
0x2be: Call2 0x625

0x2bf: Pop(0)
0x2c0: Pop(1); Push((bool) Stack[-1] == 0)
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c2: Return(); Pop(0)

0x2c3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c5: Return(); Pop(0)

0x2c6: PushEmpty(string, bool)
0x2c7: Stack[-2] = Stack[-3]
0x2c8: Push("")
0x2c9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cb: Stack[-1] = (bool) 0
0x2cc: GOTO 0x2ce

0x2cd: Stack[-1] = (bool) 1
0x2ce: Call2 0x554

0x2cf: Pop(2)
0x2d0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2d1: Return(); Pop(0)

0x2d2: PushEmpty()
0x2d3: Push((int) 1)
0x2d4: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x2d5: PushEmpty()
0x2d6: Call2 0x563

0x2d7: Pop(0)
0x2d8: Push((int) 10685)
0x2d9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2da: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2db: PushEmpty(object, object)
0x2dc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2de: Call2 0x5d1

0x2df: Pop(2)
0x2e0: PushEmpty(object, object)
0x2e1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e3: Call2 0x5cb

0x2e4: Pop(2)
0x2e5: Push((int) 10687)
0x2e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e7: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2e8: PushEmpty(object, object)
0x2e9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2eb: Call2 0x5e5

0x2ec: Pop(2)
0x2ed: PushEmpty(object, object)
0x2ee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f0: Call2 0x5f6

0x2f1: Pop(2)
0x2f2: Push((int) 10688)
0x2f3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f4: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2f5: PushEmpty(object, object)
0x2f6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f8: Call2 0x5e5

0x2f9: Pop(2)
0x2fa: PushEmpty(object, object)
0x2fb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fd: Call2 0x5fb

0x2fe: Pop(2)
0x2ff: Push((int) 10698)
0x300: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x301: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x302: PushEmpty(object, object)
0x303: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x304: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x305: Call2 0x5eb

0x306: Pop(2)
0x307: PushEmpty(object, object)
0x308: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x309: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x30a: Call2 0x5cb

0x30b: Pop(2)
0x30c: Push((int) 10680)
0x30d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x30f: PushEmpty(bool, object)
0x310: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x311: Call2 0x600

0x312: Pop(1)
0x313: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x314: PushEmpty(string)
0x315: Stack[-1] = "Neutral"
0x316: Call2 0x2bc

0x317: Pop(1)
0x318: Push((int) 509701)
0x319: @@ SetMessage(Stack[-1])
0x31a: Pop(1)
0x31b: @@ ClearReplies()
0x31c: Pop(0)
0x31d: Push((int) 509702)
0x31e: Push((int) 10682)
0x31f: Push((int) 10681)
0x320: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x321: Pop(3)
0x322: Push((int) 509711)
0x323: Push((int) 10682)
0x324: Push((int) 10691)
0x325: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x326: Pop(3)
0x327: Return(); Pop(0)

0x328: PushEmpty(string)
0x329: Stack[-1] = "Neutral"
0x32a: Call2 0x2bc

0x32b: Pop(1)
0x32c: Push((int) 509712)
0x32d: @@ SetMessage(Stack[-1])
0x32e: Pop(1)
0x32f: @@ ClearReplies()
0x330: Pop(0)
0x331: Push((int) 509713)
0x332: Push((int) 10695)
0x333: Push((int) 10694)
0x334: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x335: Pop(3)
0x336: Push((int) 509720)
0x337: Push((int) 10702)
0x338: Push((int) 10701)
0x339: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33a: Pop(3)
0x33b: Push((int) 509723)
0x33c: Push((int) 10695)
0x33d: Push((int) 10705)
0x33e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33f: Pop(3)
0x340: Push((int) 509724)
0x341: Push((int) -1)
0x342: Push((int) 10707)
0x343: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x344: Pop(3)
0x345: Return(); Pop(0)

0x346: Push((int) 10702)
0x347: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x348: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x349: PushEmpty(string)
0x34a: Stack[-1] = "Neutral"
0x34b: Call2 0x2bc

0x34c: Pop(1)
0x34d: Push((int) 509721)
0x34e: @@ SetMessage(Stack[-1])
0x34f: Pop(1)
0x350: @@ ClearReplies()
0x351: Pop(0)
0x352: Push((int) 509722)
0x353: Push((int) 10697)
0x354: Push((int) 10703)
0x355: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x356: Pop(3)
0x357: Return(); Pop(0)

0x358: Push((int) 10695)
0x359: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35a: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x35b: PushEmpty(string)
0x35c: Stack[-1] = "Neutral"
0x35d: Call2 0x2bc

0x35e: Pop(1)
0x35f: Push((int) 509714)
0x360: @@ SetMessage(Stack[-1])
0x361: Pop(1)
0x362: @@ ClearReplies()
0x363: Pop(0)
0x364: Push((int) 509715)
0x365: Push((int) 10697)
0x366: Push((int) 10696)
0x367: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x368: Pop(3)
0x369: Push((int) 509719)
0x36a: Push((int) -1)
0x36b: Push((int) 10700)
0x36c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36d: Pop(3)
0x36e: Return(); Pop(0)

0x36f: Push((int) 10697)
0x370: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x372: PushEmpty(string)
0x373: Stack[-1] = "Neutral"
0x374: Call2 0x2bc

0x375: Pop(1)
0x376: Push((int) 509716)
0x377: @@ SetMessage(Stack[-1])
0x378: Pop(1)
0x379: @@ ClearReplies()
0x37a: Pop(0)
0x37b: Push((int) 509717)
0x37c: Push((int) -1)
0x37d: Push((int) 10698)
0x37e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37f: Pop(3)
0x380: Push((int) 509718)
0x381: Push((int) -1)
0x382: Push((int) 10699)
0x383: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x384: Pop(3)
0x385: Return(); Pop(0)

0x386: Push((int) 10682)
0x387: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x388: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x389: PushEmpty(string)
0x38a: Stack[-1] = "Neutral"
0x38b: Call2 0x2bc

0x38c: Pop(1)
0x38d: Push((int) 509703)
0x38e: @@ SetMessage(Stack[-1])
0x38f: Pop(1)
0x390: @@ ClearReplies()
0x391: Pop(0)
0x392: Push((int) 509704)
0x393: Push((int) 10684)
0x394: Push((int) 10683)
0x395: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x396: Pop(3)
0x397: Push((int) 509710)
0x398: Push((int) 10684)
0x399: Push((int) 10689)
0x39a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39b: Pop(3)
0x39c: Return(); Pop(0)

0x39d: Push((int) 10684)
0x39e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39f: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3a0: PushEmpty(string)
0x3a1: Stack[-1] = "Neutral"
0x3a2: Call2 0x2bc

0x3a3: Pop(1)
0x3a4: Push((int) 509705)
0x3a5: @@ SetMessage(Stack[-1])
0x3a6: Pop(1)
0x3a7: @@ ClearReplies()
0x3a8: Pop(0)
0x3a9: Push((int) 509706)
0x3aa: Push((int) 10686)
0x3ab: Push((int) 10685)
0x3ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ad: Pop(3)
0x3ae: Return(); Pop(0)

0x3af: Push((int) 10686)
0x3b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b1: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3b2: PushEmpty(string)
0x3b3: Stack[-1] = "Neutral"
0x3b4: Call2 0x2bc

0x3b5: Pop(1)
0x3b6: Push((int) 509707)
0x3b7: @@ SetMessage(Stack[-1])
0x3b8: Pop(1)
0x3b9: @@ ClearReplies()
0x3ba: Pop(0)
0x3bb: Push((int) 509708)
0x3bc: Push((int) -1)
0x3bd: Push((int) 10687)
0x3be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bf: Pop(3)
0x3c0: Push((int) 509709)
0x3c1: Push((int) -1)
0x3c2: Push((int) 10688)
0x3c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c4: Pop(3)
0x3c5: Return(); Pop(0)

0x3c6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3c7: PushEmpty(bool)
0x3c8: Call2 0x625

0x3c9: Pop(0)
0x3ca: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cb: @ lshStopAnimation()
0x3cc: Pop(0)
0x3cd: GOTO 0x3d0

0x3ce: @ StopAnimation()
0x3cf: Pop(0)
0x3d0: Return(); Pop(0)

0x3d1: GOTO 0x2d3

0x3d2: Return(); Pop(0)

0x3d3: PushEmpty()
0x3d4: PushEmpty(int, object)
0x3d5: Stack[-1] = Stack[-3]
0x3d6: Push(-2, 1); TaskCall(4)
0x3d7: Call2 0x215

0x3d8: Pop(-2, 1); TaskReturn
0x3d9: Stack[-4] = Stack[-2]
0x3da: Pop(2)
0x3db: Return(); Pop(0)

0x3dc: Push(GlobalVars[0])
0x3dd: PushEmpty(int)
0x3de: Call2 0x492

0x3df: Stack[-2] = Stack[-1]
0x3e0: Pop(1)
0x3e1: GlobalVars[0] = Stack[-1]; Pop(1)
0x3e2: Push((int) 3)
0x3e3: @ Sleep(Stack[-1])
0x3e4: Pop(1)
0x3e5: PushEmpty()
0x3e6: Call2 0x421

0x3e7: Pop(0)
0x3e8: GOTO 0x3e2

0x3e9: Return(); Pop(0)

0x3ea: PushEmpty(int, int)
0x3eb: PushEmpty()
0x3ec: Call2 0x472

0x3ed: Pop(0)
0x3ee: PushEmpty(int, object)
0x3ef: Stack[-1] = Stack[-5]
0x3f0: Call2 0x3d3

0x3f1: Stack[-3] = Stack[-2]
0x3f2: Pop(2)
0x3f3: Push((int) 0)
0x3f4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f5: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x3f6: PushEmpty(bool, string, string)
0x3f7: Stack[-2] = "quest_d4_01"
0x3f8: Stack[-1] = "key2_done"
0x3f9: Call2 0x5a5

0x3fa: Pop(3)
0x3fb: PushEmpty(object)
0x3fc: Stack[-1] = Stack[-4]
0x3fd: Push(-1, 2); TaskCall(0)
0x3fe: Call2 0x0

0x3ff: Pop(-1, 2); TaskReturn
0x400: Pop(1)
0x401: PushEmpty(object)
0x402: Stack[-1] = Stack[-4]
0x403: Push(-1, 2); TaskCall(1)
0x404: Call2 0xb6

0x405: Pop(-1, 2); TaskReturn
0x406: Pop(1)
0x407: PushEmpty(object)
0x408: Stack[-1] = Stack[-4]
0x409: Push(-1, 0); TaskCall(7)
0x40a: Call2 0x47f

0x40b: Pop(-1, 0); TaskReturn
0x40c: Pop(1)
0x40d: PushEmpty()
0x40e: Push(-0, 2); TaskCall(2)
0x40f: Call2 0x15d

0x410: Pop(-0, 2); TaskReturn
0x411: Pop(0)
0x412: GOTO 0x420

0x413: Push((int) 1)
0x414: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x415: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x416: PushEmpty(bool, string, string)
0x417: Stack[-2] = "quest_d4_01"
0x418: Stack[-1] = "key2_done"
0x419: Call2 0x5a5

0x41a: Pop(3)
0x41b: PushEmpty()
0x41c: Push(-0, 2); TaskCall(2)
0x41d: Call2 0x15d

0x41e: Pop(-0, 2); TaskReturn
0x41f: Pop(0)
0x420: Return(); Pop(2)

0x421: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x422: @ WaitForAnimEnd()
0x423: Pop(0)
0x424: PushEmpty(bool)
0x425: Call2 0x4ea

0x426: Pop(0)
0x427: Pop(1); Push((bool) Stack[-1] == 0)
0x428: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x429: Return(); Pop(14)

0x42a: PushEmpty(int)
0x42b: Call2 0x5b8

0x42c: Stack[-8] = Stack[-1]
0x42d: Pop(1)
0x42e: Stack[-6] = (int) 0
0x42f: PushEmpty(bool)
0x430: Stack[-1] = (bool) 0
0x431: Push((int) 5)
0x432: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x434: PushEmpty(bool)
0x435: Call2 0x4ea

0x436: Pop(0)
0x437: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x438: Stack[-1] = (bool) 1
0x439: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x43a: Push((int) 3)
0x43b: @ irand(Stack[-6], Stack[-1])
0x43c: Pop(1)
0x43d: Push((int) 0)
0x43e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x43f: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x440: Push(Stack[-7])
0x441: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x442: @ irand(Stack[-4], Stack[-7])
0x443: Pop(0)
0x444: Push("all")
0x445: PushEmpty(string, int)
0x446: Stack[-1] = Stack[-7]
0x447: Call2 0x5b1

0x448: Pop(1)
0x449: @ PlayAnimation(Stack[-2], Stack[-1])
0x44a: Pop(2)
0x44b: @ WaitForAnimEnd(Stack[-3])
0x44c: Pop(0)
0x44d: Pop(0); Push((bool) Stack[-3] == 0)
0x44e: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44f: GOTO 0x46d

0x450: GOTO 0x462

0x451: Push((int) 1)
0x452: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x453: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x454: Push((int) 4)
0x455: @ rand(Stack[-3], Stack[-1])
0x456: Pop(1)
0x457: Push((int) 1)
0x458: Pop(1); Push(Stack[-3] + Stack[-1]);
0x459: @ Sleep(Stack[-1], Stack[-2])
0x45a: Pop(1)
0x45b: Pop(0); Push((bool) Stack[-1] == 0)
0x45c: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x45d: GOTO 0x46d

0x45e: GOTO 0x462

0x45f: Push(Stack[-6])
0x460: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x461: GOTO 0x46d

0x462: PushEmpty(bool)
0x463: Call2 0x470

0x464: Pop(0)
0x465: Pop(1); Push((bool) Stack[-1] == 0)
0x466: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x467: GOTO 0x46d

0x468: @ ResetAAS()
0x469: Pop(0)
0x46a: Push((int) 1)
0x46b: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x46c: GOTO 0x42f

0x46d: @ ResetAAS()
0x46e: Pop(0)
0x46f: Return(); Pop(14)

0x470: Stack[-1] = (bool) 1
0x471: Return(); Pop(0)

0x472: @ StopAnimation()
0x473: Pop(0)
0x474: @ StopGroup0()
0x475: Pop(0)
0x476: Return(); Pop(0)

0x477: PushEmpty()
0x478: PushEmpty(int, object)
0x479: Stack[-1] = Stack[-3]
0x47a: Push(-2, 1); TaskCall(4)
0x47b: Call2 0x215

0x47c: Pop(-2, 1); TaskReturn
0x47d: Pop(2)
0x47e: Return(); Pop(0)

0x47f: PushEmpty(bool, bool)
0x480: @ IsOverrideActive(Stack[-1])
0x481: Pop(0)
0x482: Pop(0); Push((bool) Stack[-1] == 0)
0x483: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x484: GOTO 0x486

0x485: GOTO 0x480

0x486: PushEmpty(object)
0x487: Stack[-1] = Stack[-4]
0x488: Call2 0x477

0x489: Pop(1)
0x48a: @ Hold()
0x48b: Pop(0)
0x48c: Return(); Pop(2)

0x48d: PushEmpty(cvector, cvector)
0x48e: @ GetPosition(Stack[-1])
0x48f: Pop(0)
0x490: Stack[-3] = Stack[-1]
0x491: Return(); Pop(2)

0x492: PushEmpty(object, int, object, int)
0x493: @ GetScene(Stack[-2])
0x494: Pop(0)
0x495: PushEmpty(cvector)
0x496: Call2 0x48d

0x497: Pop(0)
0x498: @@ GetRegionByPt(Stack[-2], Stack[-1])
0x499: Pop(1)
0x49a: Stack[-5] = Stack[-1]
0x49b: Return(); Pop(4)

0x49c: Stack[-2] = 0
0x49d: PushEmpty(bool, bool)
0x49e: Push("HasProperty")
0x49f: Push((int) 2)
0x4a0: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x4a1: Pop(1); Push((bool) Stack[-1] == 0)
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x4a3: Stack[-5] = (bool) 0
0x4a4: Return(); Pop(2)

0x4a5: @@ HasProperty(Stack[-3], Stack[-1])
0x4a6: Pop(0)
0x4a7: Stack[-5] = Stack[-1]
0x4a8: Return(); Pop(2)

0x4a9: PushEmpty(bool, bool)
0x4aa: @@ IsDead(Stack[-1])
0x4ab: Pop(0)
0x4ac: Stack[-4] = Stack[-1]
0x4ad: Return(); Pop(2)

0x4ae: PushEmpty(object, object, object, object)
0x4af: Pop(0); Push((bool) Stack[-5] == 0)
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4b1: Stack[-6] = (bool) 0
0x4b2: Return(); Pop(4)

0x4b3: PushEmpty(bool)
0x4b4: Stack[-1] = (bool) 0
0x4b5: Push("IsDead")
0x4b6: Push((int) 1)
0x4b7: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x4b8: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4b9: PushEmpty(bool, object)
0x4ba: Stack[-1] = Stack[-8]
0x4bb: Call2 0x4a9

0x4bc: Pop(1)
0x4bd: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4be: Stack[-1] = (bool) 1
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4c0: Stack[-6] = (bool) 0
0x4c1: Return(); Pop(4)

0x4c2: @ GetScene(Stack[-2])
0x4c3: Pop(0)
0x4c4: Pop(0); Push((bool) Stack[-2] == 0)
0x4c5: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4c6: Stack[-6] = (bool) 0
0x4c7: Return(); Pop(4)

0x4c8: @@ GetScene(Stack[-1])
0x4c9: Pop(0)
0x4ca: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x4cb: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4cc: Stack[-6] = (bool) 0
0x4cd: Return(); Pop(4)

0x4ce: Stack[-6] = (bool) 1
0x4cf: Return(); Pop(4)

0x4d0: Stack[-1] = 0
0x4d1: Stack[-2] = 0
0x4d2: PushEmpty(int, int)
0x4d3: PushEmpty(bool, object)
0x4d4: Stack[-1] = Stack[-5]
0x4d5: Call2 0x4ae

0x4d6: Pop(1)
0x4d7: Pop(1); Push((bool) Stack[-1] == 0)
0x4d8: IF (Stack[-1] == 0) GOTO 0x4db; Pop(1)

0x4d9: Stack[-4] = (bool) 0
0x4da: Return(); Pop(2)

0x4db: PushEmpty(bool, object, string)
0x4dc: Stack[-2] = Stack[-6]
0x4dd: Stack[-1] = "noaccess"
0x4de: Call2 0x49d

0x4df: Pop(2)
0x4e0: Pop(1); Push((bool) Stack[-1] == 0)
0x4e1: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e2: Stack[-4] = (bool) 1
0x4e3: Return(); Pop(2)

0x4e4: Push("noaccess")
0x4e5: @@ GetProperty(Stack[-1], Stack[-2])
0x4e6: Pop(1)
0x4e7: Push((int) 0)
0x4e8: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x4e9: Return(); Pop(2)

0x4ea: PushEmpty(bool, bool)
0x4eb: @ IsLoaded(Stack[-1])
0x4ec: Pop(0)
0x4ed: Stack[-3] = Stack[-1]
0x4ee: Return(); Pop(2)

0x4ef: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x4f0: @@ GetPosition(Stack[-8])
0x4f1: Pop(0)
0x4f2: @@ GetEyesHeight(Stack[-9])
0x4f3: Pop(0)
0x4f4: Push(CvectorIndex(Stack[-8], 1))
0x4f5: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x4f6: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x4f7: @ GetPosition(Stack[-7])
0x4f8: Pop(0)
0x4f9: @ GetEyesHeight(Stack[-9])
0x4fa: Pop(0)
0x4fb: Push(CvectorIndex(Stack[-7], 1))
0x4fc: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x4fd: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x4fe: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x4ff: Push(CvectorIndex(Stack[-6], 1))
0x500: Stack[-1] = (int) 0
0x501: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x502: Pop(0); Push(Stack[-6] | Stack[-6]);
0x503: Pop(1); Push(Sqrt(Stack[-1]))
0x504: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x505: Stack[-5] = -Stack[-6]; Pop(0);
0x506: Pop(0); Push(Stack[-6] * Stack[-19]);
0x507: PushEmpty(cvector, cvector)
0x508: Push(CVector(0.0, 1.0, 0.0))
0x509: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x50a: Call2 0x56a

0x50b: Pop(1)
0x50c: Push((int) 25)
0x50d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x50e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x50f: Push(CVector(0.0, 10.0, 0.0))
0x510: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x511: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x512: @ IsOverrideActive(Stack[-2])
0x513: Pop(0)
0x514: Push(Stack[-2])
0x515: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x516: Stack[-21] = (bool) 0
0x517: Return(); Pop(18)

0x518: @ StopWorld()
0x519: Pop(0)
0x51a: @ CameraTransit(Stack[-3], Stack[-5])
0x51b: Pop(0)
0x51c: Push(CvectorIndex(Stack[-4], 0))
0x51d: Push(CvectorIndex(Stack[-5], 2))
0x51e: @ Rotate(Stack[-2], Stack[-1])
0x51f: Pop(2)
0x520: PushEmpty(bool)
0x521: Call2 0x625

0x522: Pop(0)
0x523: IF (Stack[-1] == 0) GOTO 0x525; Pop(1)

0x524: GOTO 0x52d

0x525: Push("head")
0x526: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x527: Pop(1)
0x528: Push(Stack[-1])
0x529: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x52a: Push("head")
0x52b: @ LookAsyncCamera(Stack[-1])
0x52c: Pop(1)
0x52d: @ CameraWaitForPlayFinish()
0x52e: Pop(0)
0x52f: @ ResumeWorld()
0x530: Pop(0)
0x531: Stack[-21] = (bool) 1
0x532: Return(); Pop(18)

0x533: PushEmpty(bool, bool)
0x534: @ CameraSwitchToNormal()
0x535: Pop(0)
0x536: PushEmpty(bool)
0x537: Call2 0x625

0x538: Pop(0)
0x539: IF (Stack[-1] == 0) GOTO 0x53b; Pop(1)

0x53a: GOTO 0x543

0x53b: Push("head")
0x53c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x53d: Pop(1)
0x53e: Push(Stack[-1])
0x53f: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x540: Push("head")
0x541: @ UnlookAsync(Stack[-1])
0x542: Pop(1)
0x543: Return(); Pop(2)

0x544: PushEmpty(bool, float, float, bool, float, float)
0x545: @ lshHasAnimation(Stack[-3], Stack[-7])
0x546: Pop(0)
0x547: Push(Stack[-3])
0x548: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x549: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x54a: Pop(0)
0x54b: Push((bool) 0)
0x54c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x54d: Pop(1)
0x54e: GOTO 0x553

0x54f: Push("Can't find lsh animation : ")
0x550: Pop(1); Push(Stack[-1] + Stack[-8]);
0x551: @ Trace(Stack[-1])
0x552: Pop(1)
0x553: Return(); Pop(6)

0x554: PushEmpty(bool, float, float, bool, float, float)
0x555: @ lshHasAnimation(Stack[-3], Stack[-8])
0x556: Pop(0)
0x557: Push(Stack[-3])
0x558: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x559: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x55a: Pop(0)
0x55b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x55c: Pop(0)
0x55d: GOTO 0x562

0x55e: Push("Can't find lsh animation : ")
0x55f: Pop(1); Push(Stack[-1] + Stack[-9]);
0x560: @ Trace(Stack[-1])
0x561: Pop(1)
0x562: Return(); Pop(6)

0x563: PushEmpty(bool)
0x564: Call2 0x625

0x565: Pop(0)
0x566: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x567: @ lshStopSpeech()
0x568: Pop(0)
0x569: Return(); Pop(0)

0x56a: PushEmpty(float, float)
0x56b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x56c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x56d: Push((float)0.0)
0x56e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x56f: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x570: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x571: Return(); Pop(2)

0x572: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x573: Return(); Pop(2)

0x574: PushEmpty(int, int)
0x575: @ GetVariable(Stack[-3], Stack[-1])
0x576: Pop(0)
0x577: Stack[-4] = Stack[-1]
0x578: Return(); Pop(2)

0x579: PushEmpty(object, object)
0x57a: @ CreateIntVector(Stack[-1])
0x57b: Pop(0)
0x57c: @@ add(Stack[-4])
0x57d: Pop(0)
0x57e: @@ add(Stack[-3])
0x57f: Pop(0)
0x580: Push((int) 3)
0x581: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x582: Pop(1)
0x583: Return(); Pop(2)

0x584: Stack[-1] = 0
0x585: PushEmpty(int, int, bool, int, int, bool)
0x586: @@ GetItemID(Stack[-3])
0x587: Pop(0)
0x588: Push("Category")
0x589: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x58a: Pop(1)
0x58b: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x58c: Pop(0)
0x58d: Pop(0); Push((bool) Stack[-1] == 0)
0x58e: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x58f: @@ DropItems(Stack[-8], Stack[-7])
0x590: Pop(0)
0x591: GOTO 0x597

0x592: PushEmpty(int, int)
0x593: Stack[-2] = Stack[-5]
0x594: Stack[-1] = Stack[-9]
0x595: Call2 0x579

0x596: Pop(2)
0x597: Return(); Pop(6)

0x598: PushEmpty(object, object)
0x599: @ CreateInvItem(Stack[-1])
0x59a: Pop(0)
0x59b: @@ SetItemName(Stack[-4])
0x59c: Pop(0)
0x59d: PushEmpty(object, object, int)
0x59e: Stack[-3] = Stack[-8]
0x59f: Stack[-2] = Stack[-4]
0x5a0: Stack[-1] = Stack[-6]
0x5a1: Call2 0x585

0x5a2: Pop(3)
0x5a3: Return(); Pop(2)

0x5a4: Stack[-1] = 0
0x5a5: PushEmpty(object, object)
0x5a6: @ FindActor(Stack[-1], Stack[-4])
0x5a7: Pop(0)
0x5a8: Pop(0); Push((bool) Stack[-1] == 0)
0x5a9: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x5aa: Stack[-5] = (bool) 0
0x5ab: Return(); Pop(2)

0x5ac: @ Trigger(Stack[-1], Stack[-3])
0x5ad: Pop(0)
0x5ae: Stack[-5] = (bool) 1
0x5af: Return(); Pop(2)

0x5b0: Stack[-1] = 0
0x5b1: PushEmpty(string, string)
0x5b2: Stack[-1] = "idle"
0x5b3: Push(Stack[-3])
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5b5: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x5b6: Stack[-4] = Stack[-1]
0x5b7: Return(); Pop(2)

0x5b8: PushEmpty(int, bool, int, bool)
0x5b9: Stack[-2] = (int) 0
0x5ba: Push("all")
0x5bb: PushEmpty(string, int)
0x5bc: Stack[-1] = Stack[-5]
0x5bd: Call2 0x5b1

0x5be: Pop(1)
0x5bf: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5c0: Pop(2)
0x5c1: Pop(0); Push((bool) Stack[-1] == 0)
0x5c2: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5c3: GOTO 0x5c7

0x5c4: Push((int) 1)
0x5c5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x5c6: GOTO 0x5ba

0x5c7: Stack[-5] = Stack[-2]
0x5c8: Return(); Pop(4)

0x5c9: PushEmpty()
0x5ca: Return(); Pop(0)

0x5cb: PushEmpty()
0x5cc: Push("playsound")
0x5cd: Push("giveitem")
0x5ce: @ TriggerWorld(Stack[-2], Stack[-1])
0x5cf: Pop(2)
0x5d0: Return(); Pop(0)

0x5d1: PushEmpty()
0x5d2: Push("d4q01KeyWasted")
0x5d3: Push((int) 1)
0x5d4: @ SetVariable(Stack[-2], Stack[-1])
0x5d5: Pop(2)
0x5d6: Push("soborkey is given")
0x5d7: @ Trace(Stack[-1])
0x5d8: Pop(1)
0x5d9: PushEmpty(object, string, int)
0x5da: Stack[-3] = Stack[-5]
0x5db: Stack[-2] = "d4q01_sobor_key"
0x5dc: Stack[-1] = (int) 1
0x5dd: Call2 0x598

0x5de: Pop(3)
0x5df: PushEmpty(bool, string, string)
0x5e0: Stack[-2] = "quest_d4_01"
0x5e1: Stack[-1] = "init_sobor"
0x5e2: Call2 0x5a5

0x5e3: Pop(3)
0x5e4: Return(); Pop(0)

0x5e5: PushEmpty()
0x5e6: Push("ood4WastedMale1")
0x5e7: Push((int) 1)
0x5e8: @ SetVariable(Stack[-2], Stack[-1])
0x5e9: Pop(2)
0x5ea: Return(); Pop(0)

0x5eb: PushEmpty()
0x5ec: Push("tvirin is given")
0x5ed: @ Trace(Stack[-1])
0x5ee: Pop(1)
0x5ef: PushEmpty(object, string, int)
0x5f0: Stack[-3] = Stack[-5]
0x5f1: Stack[-2] = "tvirin"
0x5f2: Stack[-1] = (int) 1
0x5f3: Call2 0x598

0x5f4: Pop(3)
0x5f5: Return(); Pop(0)

0x5f6: PushEmpty()
0x5f7: Push((int) 0)
0x5f8: @@ SetReturnValue(Stack[-1])
0x5f9: Pop(1)
0x5fa: Return(); Pop(0)

0x5fb: PushEmpty()
0x5fc: Push((int) 1)
0x5fd: @@ SetReturnValue(Stack[-1])
0x5fe: Pop(1)
0x5ff: Return(); Pop(0)

0x600: PushEmpty()
0x601: PushEmpty(int, string)
0x602: Stack[-1] = "ood4WastedMale1"
0x603: Call2 0x574

0x604: Pop(1)
0x605: Push((int) 0)
0x606: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x607: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x608: Stack[-2] = (bool) 1
0x609: Return(); Pop(0)

0x60a: Stack[-2] = (bool) 0
0x60b: Return(); Pop(0)

0x60c: PushEmpty(int, int)
0x60d: Push("branch")
0x60e: @ GetVariable(Stack[-1], Stack[-2])
0x60f: Pop(1)
0x610: Push((int) 0)
0x611: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x612: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x613: Stack[-3] = (int) 1
0x614: Return(); Pop(2)

0x615: GOTO 0x61b

0x616: Push((int) 1)
0x617: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x618: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x619: Stack[-3] = (int) 2
0x61a: Return(); Pop(2)

0x61b: Stack[-3] = (int) 3
0x61c: Return(); Pop(2)

0x61d: Stack[-1] = (int) 515556
0x61e: Return(); Pop(0)

0x61f: Stack[-1] = (int) 503341
0x620: Return(); Pop(0)

0x621: Stack[-1] = "ui/NPC_Citizen3.png"
0x622: Return(); Pop(0)

0x623: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x624: Return(); Pop(0)

0x625: Stack[-1] = (bool) 0
0x626: Return(); Pop(0)

