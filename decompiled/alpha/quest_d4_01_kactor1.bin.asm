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
	SetPhoto
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
	playing 
	start: 
	end: 
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	playsound
	giveitem
	ood4WhiteMask1
	theaterkey is given
	d4q01_theater_key
	tvirin is given
	tvirin
	SetReturnValue
	player
	ui/NPC_Black.png

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
	GetCameraFarDistance (1 args)
	GetRandomPFPointInCircle (4 args)
	FindShiftedPathTo (2 args)
	FollowPath (3 args)
	StopGroup0 (0 args)
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
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
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	SetVariable (2 args)

RunOp = 0x3ed
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
		EVENT_10 Op = 0x19e Vars = (object)
		EVENT_28 Op = 0x1a2 Vars = ()
		EVENT_41 Op = 0x1ac Vars = (object)
	GTASK_3  Params = 0
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x29e Vars = (int, int)
	GTASK_6  Params = 0
		EVENT_0 Op = 0x3fb Vars = (object)
	GTASK_7  Params = 1

Events:
EVENT_41 Op = 0x591 Vars = (object)

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
0xb: Call 0x31

0xc: Pop(6)
0xd: PushEmpty(int)
0xe: Call 0x492

0xf: Pop(0)
0x10: Push(GlobalVars[0])
0x11: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x12: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0x13: GOTO 0x1f

0x14: Push((int) 1)
0x15: @ Sleep(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(int)
0x18: Call 0x492

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
0x28: Call 0x492

0x29: Pop(0)
0x2a: Push(GlobalVars[0])
0x2b: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x2c: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2d: PushEmpty()
0x2e: Call 0x9b

0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x32: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x33: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x34: Stack[-7] = Stack[-17]
0x35: PushEmpty(bool, object)
0x36: Stack[-1] = Stack[-23]
0x37: Call 0xab

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
0x6b: Call 0xb2

0x6c: Pop(0)
0x6d: PushEmpty(string)
0x6e: Call 0xb4

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
0xa4: Call 0x9b

0xa5: Pop(0)
0xa6: PushEmpty(object)
0xa7: Stack[-1] = Stack[-2]
0xa8: Call 0x591

0xa9: Pop(1)
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: PushEmpty(bool, object)
0xad: Stack[-1] = Stack[-3]
0xae: Call 0x4d2

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
0xbd: Call 0xc6

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
0xcc: Call 0x152

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
0x100: Call 0x159

0x101: Pop(0)
0x102: PushEmpty(string)
0x103: Call 0x15b

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
0x133: Call 0x152

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
0x14b: Call 0x142

0x14c: Pop(0)
0x14d: PushEmpty(object)
0x14e: Stack[-1] = Stack[-2]
0x14f: Call 0x591

0x150: Pop(1)
0x151: Return(); Pop(0)

0x152: PushEmpty()
0x153: PushEmpty(bool, object)
0x154: Stack[-1] = Stack[-3]
0x155: Call 0x4d2

0x156: Stack[-4] = Stack[-2]
0x157: Pop(2)
0x158: Return(); Pop(0)

0x159: Stack[-1] = "walk"
0x15a: Return(); Pop(0)

0x15b: Stack[-1] = "run"
0x15c: Return(); Pop(0)

0x15d: PushEmpty()
0x15e: Call 0x165

0x15f: Pop(0)
0x160: Push((int) 1)
0x161: @ Sleep(Stack[-1])
0x162: Pop(1)
0x163: GOTO 0x15d

0x164: Return(); Pop(0)

0x165: PushEmpty(float, cvector, cvector, float, bool, object, bool, float, cvector, cvector, float, bool, object, bool)
0x166: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x167: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x168: Push((float)0.5)
0x169: @ rand(Stack[-8], Stack[-1])
0x16a: Pop(1)
0x16b: @ Sleep(Stack[-7])
0x16c: Pop(0)
0x16d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x16e: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x16f: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x170: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x171: @ GetPosition(Stack[-5])
0x172: Pop(0)
0x173: @ GetCameraFarDistance(Stack[-4])
0x174: Pop(0)
0x175: Push((float)2.5)
0x176: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x177: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-4], Stack[-3])
0x178: Pop(0)
0x179: Push(Stack[-3])
0x17a: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x17b: GOTO 0x180

0x17c: Push((int) 1)
0x17d: @ Sleep(Stack[-1])
0x17e: Pop(1)
0x17f: GOTO 0x171

0x180: GOTO 0x182

0x181: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x182: @ FindShiftedPathTo(Stack[-2], Stack[-6])
0x183: Pop(0)
0x184: Pop(0); Push(( Stack[-2] != 0 )
0x185: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x186: @ RotatePath(Stack[-2], Stack[-1])
0x187: Pop(0)
0x188: Push(Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x18a: PushEmpty(bool)
0x18b: Call 0x1b5

0x18c: Pop(0)
0x18d: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x18e: Pop(1)
0x18f: Stack[-2] = 0
0x190: Push(Stack[-1])
0x191: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x192: PushEmpty()
0x193: Push(-0, 0); TaskCall(3)
0x194: Call 0x1b7

0x195: Pop(-0, 0); TaskReturn
0x196: Pop(0)
0x197: GOTO 0x19b

0x198: Push((int) 1)
0x199: @ Sleep(Stack[-1])
0x19a: Pop(1)
0x19b: Stack[-2] = 0
0x19c: GOTO 0x16d

0x19d: Return(); Pop(14)

0x19e: PushEmpty()
0x19f: @ RequestClearPath(Stack[-1])
0x1a0: Pop(0)
0x1a1: Return(); Pop(0)

0x1a2: @ Stop()
0x1a3: Pop(0)
0x1a4: Return(); Pop(0)

0x1a5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1a6: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1a7: @ Stop()
0x1a8: Pop(0)
0x1a9: @ StopGroup0()
0x1aa: Pop(0)
0x1ab: Return(); Pop(0)

0x1ac: PushEmpty()
0x1ad: PushEmpty()
0x1ae: Call 0x1a5

0x1af: Pop(0)
0x1b0: PushEmpty(object)
0x1b1: Stack[-1] = Stack[-2]
0x1b2: Call 0x591

0x1b3: Pop(1)
0x1b4: Return(); Pop(0)

0x1b5: Stack[-1] = (bool) 0
0x1b6: Return(); Pop(0)

0x1b7: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1b8: @ WaitForAnimEnd()
0x1b9: Pop(0)
0x1ba: PushEmpty(bool)
0x1bb: Call 0x4ea

0x1bc: Pop(0)
0x1bd: Pop(1); Push((bool) Stack[-1] == 0)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bf: Return(); Pop(14)

0x1c0: PushEmpty(int)
0x1c1: Call 0x580

0x1c2: Stack[-8] = Stack[-1]
0x1c3: Pop(1)
0x1c4: Stack[-6] = (int) 0
0x1c5: PushEmpty(bool)
0x1c6: Stack[-1] = (bool) 0
0x1c7: Push((int) 5)
0x1c8: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1ca: PushEmpty(bool)
0x1cb: Call 0x4ea

0x1cc: Pop(0)
0x1cd: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1ce: Stack[-1] = (bool) 1
0x1cf: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1d0: Push((int) 3)
0x1d1: @ irand(Stack[-6], Stack[-1])
0x1d2: Pop(1)
0x1d3: Push((int) 0)
0x1d4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1d6: Push(Stack[-7])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1d8: @ irand(Stack[-4], Stack[-7])
0x1d9: Pop(0)
0x1da: Push("all")
0x1db: PushEmpty(string, int)
0x1dc: Stack[-1] = Stack[-7]
0x1dd: Call 0x579

0x1de: Pop(1)
0x1df: @ PlayAnimation(Stack[-2], Stack[-1])
0x1e0: Pop(2)
0x1e1: @ WaitForAnimEnd(Stack[-3])
0x1e2: Pop(0)
0x1e3: Pop(0); Push((bool) Stack[-3] == 0)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e5: GOTO 0x1fb

0x1e6: GOTO 0x1f8

0x1e7: Push((int) 1)
0x1e8: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1ea: Push((int) 4)
0x1eb: @ rand(Stack[-3], Stack[-1])
0x1ec: Pop(1)
0x1ed: Push((int) 1)
0x1ee: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1ef: @ Sleep(Stack[-1], Stack[-2])
0x1f0: Pop(1)
0x1f1: Pop(0); Push((bool) Stack[-1] == 0)
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f3: GOTO 0x1fb

0x1f4: GOTO 0x1f8

0x1f5: Push(Stack[-6])
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f7: GOTO 0x1fb

0x1f8: Push((int) 1)
0x1f9: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1fa: GOTO 0x1c5

0x1fb: Return(); Pop(14)

0x1fc: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1fd: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1fe: PushEmpty(bool, object)
0x1ff: Stack[-1] = Stack[-11]
0x200: Call 0x4ef

0x201: Pop(1)
0x202: Pop(1); Push((bool) Stack[-1] == 0)
0x203: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x204: Stack[-10] = (int) -2
0x205: Return(); Pop(8)

0x206: @ CreateDialog(Stack[-4])
0x207: Pop(0)
0x208: PushEmpty(int)
0x209: Call 0x5dc

0x20a: Pop(0)
0x20b: @@ SetNPCName(Stack[-1])
0x20c: Pop(1)
0x20d: PushEmpty(string)
0x20e: Call 0x5de

0x20f: Pop(0)
0x210: @@ SetPhoto(Stack[-1])
0x211: Pop(1)
0x212: PushEmpty(int)
0x213: Call 0x5cb

0x214: Pop(0)
0x215: @@ SetPlayerName(Stack[-1])
0x216: Pop(1)
0x217: Stack[-2] = (int) -1
0x218: @ IsOverrideActive(Stack[-3])
0x219: Pop(0)
0x21a: Push(Stack[-3])
0x21b: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21c: Stack[-10] = (int) -2
0x21d: Return(); Pop(8)

0x21e: @ DoDialog(Stack[-4])
0x21f: Pop(0)
0x220: PushEmpty(object, object)
0x221: Stack[-2] = Stack[-11]
0x222: Stack[-1] = Stack[-6]
0x223: Push(-2, 4); TaskCall(5)
0x224: Call 0x23b

0x225: Pop(-2, 4); TaskReturn
0x226: Pop(2)
0x227: @@ IsDialogEnd(Stack[-1])
0x228: Pop(0)
0x229: Pop(0); Push((bool) Stack[-1] == 0)
0x22a: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22b: @ sync()
0x22c: Pop(0)
0x22d: @@ IsDialogEnd(Stack[-1])
0x22e: Pop(0)
0x22f: GOTO 0x229

0x230: PushEmpty(object)
0x231: Stack[-1] = Stack[-10]
0x232: Call 0x527

0x233: Pop(1)
0x234: @ StopDialog(Stack[-4])
0x235: Pop(0)
0x236: @@ GetReturnValue(Stack[-2])
0x237: Pop(0)
0x238: Stack[-10] = Stack[-2]
0x239: Return(); Pop(8)

0x23a: Stack[-4] = 0
0x23b: PushEmpty()
0x23c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x23d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x23e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x23f: Push((int) 1)
0x240: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x241: PushEmpty(bool, object)
0x242: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x243: Call 0x5bf

0x244: Pop(1)
0x245: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x246: PushEmpty(string)
0x247: Stack[-1] = "Neutral"
0x248: Call 0x28e

0x249: Pop(1)
0x24a: Push((int) 9667)
0x24b: @@ SetMessage(Stack[-1])
0x24c: Pop(1)
0x24d: @@ ClearReplies()
0x24e: Pop(0)
0x24f: Push((int) 9668)
0x250: Push((int) 10643)
0x251: Push((int) 10642)
0x252: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x253: Pop(3)
0x254: Push((int) 9677)
0x255: Push((int) 10653)
0x256: Push((int) 10652)
0x257: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x258: Pop(3)
0x259: GOTO 0x270

0x25a: PushEmpty(string)
0x25b: Stack[-1] = "Neutral"
0x25c: Call 0x28e

0x25d: Pop(1)
0x25e: Push((int) 9681)
0x25f: @@ SetMessage(Stack[-1])
0x260: Pop(1)
0x261: @@ ClearReplies()
0x262: Pop(0)
0x263: Push((int) 9682)
0x264: Push((int) 10660)
0x265: Push((int) 10659)
0x266: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x267: Pop(3)
0x268: Push((int) 9699)
0x269: Push((int) -1)
0x26a: Push((int) 10678)
0x26b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26c: Pop(3)
0x26d: GOTO 0x270

0x26e: Return(); Pop(0)

0x26f: GOTO 0x23f

0x270: PushEmpty(bool)
0x271: Call 0x5e0

0x272: Pop(0)
0x273: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x274: @ lshWaitForAnimEnd()
0x275: Pop(0)
0x276: Push( Stack[3 + Tasks[-1].StackPointer] )
0x277: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x278: GOTO 0x27e

0x279: PushEmpty(string)
0x27a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x27b: Call 0x52b

0x27c: Pop(1)
0x27d: GOTO 0x274

0x27e: GOTO 0x28d

0x27f: Push("all")
0x280: Push("idle")
0x281: @ PlayAnimation(Stack[-2], Stack[-1])
0x282: Pop(2)
0x283: @ WaitForAnimEnd()
0x284: Pop(0)
0x285: Push( Stack[3 + Tasks[-1].StackPointer] )
0x286: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x287: GOTO 0x28d

0x288: Push("all")
0x289: Push("idle")
0x28a: @ PlayAnimation(Stack[-2], Stack[-1])
0x28b: Pop(2)
0x28c: GOTO 0x283

0x28d: Return(); Pop(0)

0x28e: PushEmpty()
0x28f: PushEmpty(bool)
0x290: Call 0x5e0

0x291: Pop(0)
0x292: Pop(1); Push((bool) Stack[-1] == 0)
0x293: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x294: Return(); Pop(0)

0x295: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x296: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x297: Return(); Pop(0)

0x298: PushEmpty(string)
0x299: Stack[-1] = Stack[-2]
0x29a: Call 0x52b

0x29b: Pop(1)
0x29c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x29d: Return(); Pop(0)

0x29e: PushEmpty()
0x29f: Push((int) 1)
0x2a0: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x2a1: PushEmpty()
0x2a2: Call 0x53d

0x2a3: Pop(0)
0x2a4: Push((int) 10646)
0x2a5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2a7: PushEmpty(object, object)
0x2a8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2aa: Call 0x59f

0x2ab: Pop(2)
0x2ac: PushEmpty(object, object)
0x2ad: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ae: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2af: Call 0x593

0x2b0: Pop(2)
0x2b1: Push((int) 10648)
0x2b2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b3: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2b4: PushEmpty(object, object)
0x2b5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2b6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b7: Call 0x599

0x2b8: Pop(2)
0x2b9: PushEmpty(object, object)
0x2ba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2bc: Call 0x5b5

0x2bd: Pop(2)
0x2be: Push((int) 10649)
0x2bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c1: PushEmpty(object, object)
0x2c2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c4: Call 0x599

0x2c5: Pop(2)
0x2c6: PushEmpty(object, object)
0x2c7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c9: Call 0x5ba

0x2ca: Pop(2)
0x2cb: Push((int) 10669)
0x2cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2ce: PushEmpty(object, object)
0x2cf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d1: Call 0x5aa

0x2d2: Pop(2)
0x2d3: PushEmpty(object, object)
0x2d4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d6: Call 0x593

0x2d7: Pop(2)
0x2d8: Push((int) 10641)
0x2d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2da: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x2db: PushEmpty(bool, object)
0x2dc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2dd: Call 0x5bf

0x2de: Pop(1)
0x2df: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2e0: PushEmpty(string)
0x2e1: Stack[-1] = "Neutral"
0x2e2: Call 0x28e

0x2e3: Pop(1)
0x2e4: Push((int) 9667)
0x2e5: @@ SetMessage(Stack[-1])
0x2e6: Pop(1)
0x2e7: @@ ClearReplies()
0x2e8: Pop(0)
0x2e9: Push((int) 9668)
0x2ea: Push((int) 10643)
0x2eb: Push((int) 10642)
0x2ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ed: Pop(3)
0x2ee: Push((int) 9677)
0x2ef: Push((int) 10653)
0x2f0: Push((int) 10652)
0x2f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f2: Pop(3)
0x2f3: Return(); Pop(0)

0x2f4: PushEmpty(string)
0x2f5: Stack[-1] = "Neutral"
0x2f6: Call 0x28e

0x2f7: Pop(1)
0x2f8: Push((int) 9681)
0x2f9: @@ SetMessage(Stack[-1])
0x2fa: Pop(1)
0x2fb: @@ ClearReplies()
0x2fc: Pop(0)
0x2fd: Push((int) 9682)
0x2fe: Push((int) 10660)
0x2ff: Push((int) 10659)
0x300: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x301: Pop(3)
0x302: Push((int) 9699)
0x303: Push((int) -1)
0x304: Push((int) 10678)
0x305: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x306: Pop(3)
0x307: Return(); Pop(0)

0x308: Push((int) 10660)
0x309: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30a: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x30b: PushEmpty(string)
0x30c: Stack[-1] = "Neutral"
0x30d: Call 0x28e

0x30e: Pop(1)
0x30f: Push((int) 9683)
0x310: @@ SetMessage(Stack[-1])
0x311: Pop(1)
0x312: @@ ClearReplies()
0x313: Pop(0)
0x314: Push((int) 9684)
0x315: Push((int) 10662)
0x316: Push((int) 10661)
0x317: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x318: Pop(3)
0x319: Push((int) 9694)
0x31a: Push((int) 10672)
0x31b: Push((int) 10671)
0x31c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31d: Pop(3)
0x31e: Push((int) 9698)
0x31f: Push((int) 10662)
0x320: Push((int) 10676)
0x321: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x322: Pop(3)
0x323: Return(); Pop(0)

0x324: Push((int) 10672)
0x325: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x326: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x327: PushEmpty(string)
0x328: Stack[-1] = "Neutral"
0x329: Call 0x28e

0x32a: Pop(1)
0x32b: Push((int) 9695)
0x32c: @@ SetMessage(Stack[-1])
0x32d: Pop(1)
0x32e: @@ ClearReplies()
0x32f: Pop(0)
0x330: Push((int) 9696)
0x331: Push((int) 10665)
0x332: Push((int) 10673)
0x333: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x334: Pop(3)
0x335: Push((int) 9697)
0x336: Push((int) -1)
0x337: Push((int) 10675)
0x338: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x339: Pop(3)
0x33a: Return(); Pop(0)

0x33b: Push((int) 10662)
0x33c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33d: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x33e: PushEmpty(string)
0x33f: Stack[-1] = "Neutral"
0x340: Call 0x28e

0x341: Pop(1)
0x342: Push((int) 9685)
0x343: @@ SetMessage(Stack[-1])
0x344: Pop(1)
0x345: @@ ClearReplies()
0x346: Pop(0)
0x347: Push((int) 9686)
0x348: Push((int) -1)
0x349: Push((int) 10663)
0x34a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34b: Pop(3)
0x34c: Push((int) 9687)
0x34d: Push((int) 10665)
0x34e: Push((int) 10664)
0x34f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x350: Pop(3)
0x351: Return(); Pop(0)

0x352: Push((int) 10665)
0x353: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x354: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x355: PushEmpty(string)
0x356: Stack[-1] = "Neutral"
0x357: Call 0x28e

0x358: Pop(1)
0x359: Push((int) 9688)
0x35a: @@ SetMessage(Stack[-1])
0x35b: Pop(1)
0x35c: @@ ClearReplies()
0x35d: Pop(0)
0x35e: Push((int) 9689)
0x35f: Push((int) -1)
0x360: Push((int) 10666)
0x361: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x362: Pop(3)
0x363: Push((int) 9690)
0x364: Push((int) 10668)
0x365: Push((int) 10667)
0x366: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x367: Pop(3)
0x368: Return(); Pop(0)

0x369: Push((int) 10668)
0x36a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36b: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x36c: PushEmpty(string)
0x36d: Stack[-1] = "Neutral"
0x36e: Call 0x28e

0x36f: Pop(1)
0x370: Push((int) 9691)
0x371: @@ SetMessage(Stack[-1])
0x372: Pop(1)
0x373: @@ ClearReplies()
0x374: Pop(0)
0x375: Push((int) 9692)
0x376: Push((int) -1)
0x377: Push((int) 10669)
0x378: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x379: Pop(3)
0x37a: Push((int) 9693)
0x37b: Push((int) -1)
0x37c: Push((int) 10670)
0x37d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37e: Pop(3)
0x37f: Return(); Pop(0)

0x380: Push((int) 10653)
0x381: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x382: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x383: PushEmpty(string)
0x384: Stack[-1] = "Neutral"
0x385: Call 0x28e

0x386: Pop(1)
0x387: Push((int) 9678)
0x388: @@ SetMessage(Stack[-1])
0x389: Pop(1)
0x38a: @@ ClearReplies()
0x38b: Pop(0)
0x38c: Push((int) 9679)
0x38d: Push((int) 10643)
0x38e: Push((int) 10654)
0x38f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x390: Pop(3)
0x391: Push((int) 9680)
0x392: Push((int) 10643)
0x393: Push((int) 10656)
0x394: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x395: Pop(3)
0x396: Return(); Pop(0)

0x397: Push((int) 10643)
0x398: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x399: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x39a: PushEmpty(string)
0x39b: Stack[-1] = "Neutral"
0x39c: Call 0x28e

0x39d: Pop(1)
0x39e: Push((int) 9669)
0x39f: @@ SetMessage(Stack[-1])
0x3a0: Pop(1)
0x3a1: @@ ClearReplies()
0x3a2: Pop(0)
0x3a3: Push((int) 9670)
0x3a4: Push((int) 10645)
0x3a5: Push((int) 10644)
0x3a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a7: Pop(3)
0x3a8: Return(); Pop(0)

0x3a9: Push((int) 10645)
0x3aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3ac: PushEmpty(string)
0x3ad: Stack[-1] = "Neutral"
0x3ae: Call 0x28e

0x3af: Pop(1)
0x3b0: Push((int) 9671)
0x3b1: @@ SetMessage(Stack[-1])
0x3b2: Pop(1)
0x3b3: @@ ClearReplies()
0x3b4: Pop(0)
0x3b5: Push((int) 9672)
0x3b6: Push((int) 10647)
0x3b7: Push((int) 10646)
0x3b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b9: Pop(3)
0x3ba: Push((int) 9676)
0x3bb: Push((int) 10647)
0x3bc: Push((int) 10650)
0x3bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3be: Pop(3)
0x3bf: Return(); Pop(0)

0x3c0: Push((int) 10647)
0x3c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3c3: PushEmpty(string)
0x3c4: Stack[-1] = "Neutral"
0x3c5: Call 0x28e

0x3c6: Pop(1)
0x3c7: Push((int) 9673)
0x3c8: @@ SetMessage(Stack[-1])
0x3c9: Pop(1)
0x3ca: @@ ClearReplies()
0x3cb: Pop(0)
0x3cc: Push((int) 9674)
0x3cd: Push((int) -1)
0x3ce: Push((int) 10648)
0x3cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d0: Pop(3)
0x3d1: Push((int) 9675)
0x3d2: Push((int) -1)
0x3d3: Push((int) 10649)
0x3d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d5: Pop(3)
0x3d6: Return(); Pop(0)

0x3d7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3d8: PushEmpty(bool)
0x3d9: Call 0x5e0

0x3da: Pop(0)
0x3db: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3dc: @ lshStopAnimation()
0x3dd: Pop(0)
0x3de: GOTO 0x3e1

0x3df: @ StopAnimation()
0x3e0: Pop(0)
0x3e1: Return(); Pop(0)

0x3e2: GOTO 0x29f

0x3e3: Return(); Pop(0)

0x3e4: PushEmpty()
0x3e5: PushEmpty(int, object)
0x3e6: Stack[-1] = Stack[-3]
0x3e7: Push(-2, 1); TaskCall(4)
0x3e8: Call 0x1fc

0x3e9: Pop(-2, 1); TaskReturn
0x3ea: Stack[-4] = Stack[-2]
0x3eb: Pop(2)
0x3ec: Return(); Pop(0)

0x3ed: Push(GlobalVars[0])
0x3ee: PushEmpty(int)
0x3ef: Call 0x492

0x3f0: Stack[-2] = Stack[-1]
0x3f1: Pop(1)
0x3f2: GlobalVars[0] = Stack[-1]; Pop(1)
0x3f3: Push((int) 3)
0x3f4: @ Sleep(Stack[-1])
0x3f5: Pop(1)
0x3f6: PushEmpty()
0x3f7: Call 0x42d

0x3f8: Pop(0)
0x3f9: GOTO 0x3f3

0x3fa: Return(); Pop(0)

0x3fb: PushEmpty(int, int)
0x3fc: PushEmpty()
0x3fd: Call 0x472

0x3fe: Pop(0)
0x3ff: PushEmpty(int, object)
0x400: Stack[-1] = Stack[-5]
0x401: Call 0x3e4

0x402: Stack[-3] = Stack[-2]
0x403: Pop(2)
0x404: Push((int) 0)
0x405: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x406: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x407: PushEmpty(bool, string, string)
0x408: Stack[-2] = "quest_d4_01"
0x409: Stack[-1] = "key1_done"
0x40a: Call 0x56d

0x40b: Pop(3)
0x40c: PushEmpty(object)
0x40d: Stack[-1] = Stack[-4]
0x40e: Push(-1, 2); TaskCall(0)
0x40f: Call 0x0

0x410: Pop(-1, 2); TaskReturn
0x411: Pop(1)
0x412: PushEmpty(object)
0x413: Stack[-1] = Stack[-4]
0x414: Push(-1, 2); TaskCall(1)
0x415: Call 0xb6

0x416: Pop(-1, 2); TaskReturn
0x417: Pop(1)
0x418: PushEmpty(object)
0x419: Stack[-1] = Stack[-4]
0x41a: Push(-1, 0); TaskCall(7)
0x41b: Call 0x47f

0x41c: Pop(-1, 0); TaskReturn
0x41d: Pop(1)
0x41e: GOTO 0x42c

0x41f: Push((int) 1)
0x420: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x421: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x422: PushEmpty(bool, string, string)
0x423: Stack[-2] = "quest_d4_01"
0x424: Stack[-1] = "key1_done"
0x425: Call 0x56d

0x426: Pop(3)
0x427: PushEmpty()
0x428: Push(-0, 2); TaskCall(2)
0x429: Call 0x15d

0x42a: Pop(-0, 2); TaskReturn
0x42b: Pop(0)
0x42c: Return(); Pop(2)

0x42d: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x42e: @ WaitForAnimEnd()
0x42f: Pop(0)
0x430: PushEmpty(bool)
0x431: Call 0x4ea

0x432: Pop(0)
0x433: Pop(1); Push((bool) Stack[-1] == 0)
0x434: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x435: Return(); Pop(14)

0x436: PushEmpty(int)
0x437: Call 0x580

0x438: Stack[-8] = Stack[-1]
0x439: Pop(1)
0x43a: Stack[-6] = (int) 0
0x43b: PushEmpty(bool)
0x43c: Stack[-1] = (bool) 0
0x43d: Push((int) 5)
0x43e: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x43f: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x440: PushEmpty(bool)
0x441: Call 0x4ea

0x442: Pop(0)
0x443: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x444: Stack[-1] = (bool) 1
0x445: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x446: Push((int) 3)
0x447: @ irand(Stack[-6], Stack[-1])
0x448: Pop(1)
0x449: Push((int) 0)
0x44a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x44b: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x44c: Push(Stack[-7])
0x44d: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x44e: @ irand(Stack[-4], Stack[-7])
0x44f: Pop(0)
0x450: Push("all")
0x451: PushEmpty(string, int)
0x452: Stack[-1] = Stack[-7]
0x453: Call 0x579

0x454: Pop(1)
0x455: @ PlayAnimation(Stack[-2], Stack[-1])
0x456: Pop(2)
0x457: @ WaitForAnimEnd(Stack[-3])
0x458: Pop(0)
0x459: Pop(0); Push((bool) Stack[-3] == 0)
0x45a: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x45b: GOTO 0x471

0x45c: GOTO 0x46e

0x45d: Push((int) 1)
0x45e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x45f: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x460: Push((int) 4)
0x461: @ rand(Stack[-3], Stack[-1])
0x462: Pop(1)
0x463: Push((int) 1)
0x464: Pop(1); Push(Stack[-3] + Stack[-1]);
0x465: @ Sleep(Stack[-1], Stack[-2])
0x466: Pop(1)
0x467: Pop(0); Push((bool) Stack[-1] == 0)
0x468: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x469: GOTO 0x471

0x46a: GOTO 0x46e

0x46b: Push(Stack[-6])
0x46c: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x46d: GOTO 0x471

0x46e: Push((int) 1)
0x46f: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x470: GOTO 0x43b

0x471: Return(); Pop(14)

0x472: @ StopAnimation()
0x473: Pop(0)
0x474: @ StopGroup0()
0x475: Pop(0)
0x476: Return(); Pop(0)

0x477: PushEmpty()
0x478: PushEmpty(int, object)
0x479: Stack[-1] = Stack[-3]
0x47a: Push(-2, 1); TaskCall(4)
0x47b: Call 0x1fc

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
0x488: Call 0x477

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
0x496: Call 0x48d

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
0x4bb: Call 0x4a9

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
0x4d5: Call 0x4ae

0x4d6: Pop(1)
0x4d7: Pop(1); Push((bool) Stack[-1] == 0)
0x4d8: IF (Stack[-1] == 0) GOTO 0x4db; Pop(1)

0x4d9: Stack[-4] = (bool) 0
0x4da: Return(); Pop(2)

0x4db: PushEmpty(bool, object, string)
0x4dc: Stack[-2] = Stack[-6]
0x4dd: Stack[-1] = "noaccess"
0x4de: Call 0x49d

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

0x4ef: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x4f0: @@ GetPosition(Stack[-7])
0x4f1: Pop(0)
0x4f2: @@ GetEyesHeight(Stack[-8])
0x4f3: Pop(0)
0x4f4: Push(CvectorIndex(Stack[-7], 1))
0x4f5: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x4f6: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x4f7: @ GetPosition(Stack[-6])
0x4f8: Pop(0)
0x4f9: @ GetEyesHeight(Stack[-8])
0x4fa: Pop(0)
0x4fb: Push(CvectorIndex(Stack[-6], 1))
0x4fc: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x4fd: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x4fe: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x4ff: Push(CvectorIndex(Stack[-5], 1))
0x500: Stack[-1] = (int) 0
0x501: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x502: Pop(0); Push(Stack[-5] | Stack[-5]);
0x503: Pop(1); Push(Sqrt(Stack[-1]))
0x504: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x505: Stack[-4] = -Stack[-5]; Pop(0);
0x506: Push((int) 70)
0x507: Pop(1); Push(Stack[-6] * Stack[-1]);
0x508: PushEmpty(cvector, cvector)
0x509: Push(CVector(0.0, 1.0, 0.0))
0x50a: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x50b: Call 0x544

0x50c: Pop(1)
0x50d: Push((int) 25)
0x50e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x50f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x510: Push(CVector(0.0, 10.0, 0.0))
0x511: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x512: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x513: @ IsOverrideActive(Stack[-1])
0x514: Pop(0)
0x515: Push(Stack[-1])
0x516: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x517: Stack[-18] = (bool) 0
0x518: Return(); Pop(16)

0x519: @ StopWorld()
0x51a: Pop(0)
0x51b: @ CameraTransit(Stack[-2], Stack[-4])
0x51c: Pop(0)
0x51d: Push(CvectorIndex(Stack[-3], 0))
0x51e: Push(CvectorIndex(Stack[-4], 2))
0x51f: @ Rotate(Stack[-2], Stack[-1])
0x520: Pop(2)
0x521: @ CameraWaitForPlayFinish()
0x522: Pop(0)
0x523: @ ResumeWorld()
0x524: Pop(0)
0x525: Stack[-18] = (bool) 1
0x526: Return(); Pop(16)

0x527: PushEmpty()
0x528: @ CameraSwitchToNormal()
0x529: Pop(0)
0x52a: Return(); Pop(0)

0x52b: PushEmpty(float, float, float, float)
0x52c: Push("playing ")
0x52d: Pop(1); Push(Stack[-1] + Stack[-6]);
0x52e: @ Trace(Stack[-1])
0x52f: Pop(1)
0x530: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x531: Pop(0)
0x532: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x533: Pop(0)
0x534: Push("start: ")
0x535: Pop(1); Push(Stack[-1] + Stack[-3]);
0x536: @ Trace(Stack[-1])
0x537: Pop(1)
0x538: Push("end: ")
0x539: Pop(1); Push(Stack[-1] + Stack[-2]);
0x53a: @ Trace(Stack[-1])
0x53b: Pop(1)
0x53c: Return(); Pop(4)

0x53d: PushEmpty(bool)
0x53e: Call 0x5e0

0x53f: Pop(0)
0x540: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x541: @ lshStopSpeech()
0x542: Pop(0)
0x543: Return(); Pop(0)

0x544: PushEmpty(float, float)
0x545: Pop(0); Push(Stack[-3] | Stack[-3]);
0x546: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x547: Push((float)0.0)
0x548: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x549: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x54a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x54b: Return(); Pop(2)

0x54c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x54d: Return(); Pop(2)

0x54e: PushEmpty(int, int)
0x54f: @ GetVariable(Stack[-3], Stack[-1])
0x550: Pop(0)
0x551: Stack[-4] = Stack[-1]
0x552: Return(); Pop(2)

0x553: PushEmpty(int, int, bool, int, int, bool)
0x554: @@ GetItemID(Stack[-3])
0x555: Pop(0)
0x556: Push("Category")
0x557: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x558: Pop(1)
0x559: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x55a: Pop(0)
0x55b: Pop(0); Push((bool) Stack[-1] == 0)
0x55c: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x55d: @@ DropItems(Stack[-8], Stack[-7])
0x55e: Pop(0)
0x55f: Return(); Pop(6)

0x560: PushEmpty(object, object)
0x561: @ CreateInvItem(Stack[-1])
0x562: Pop(0)
0x563: @@ SetItemName(Stack[-4])
0x564: Pop(0)
0x565: PushEmpty(object, object, int)
0x566: Stack[-3] = Stack[-8]
0x567: Stack[-2] = Stack[-4]
0x568: Stack[-1] = Stack[-6]
0x569: Call 0x553

0x56a: Pop(3)
0x56b: Return(); Pop(2)

0x56c: Stack[-1] = 0
0x56d: PushEmpty(object, object)
0x56e: @ FindActor(Stack[-1], Stack[-4])
0x56f: Pop(0)
0x570: Pop(0); Push((bool) Stack[-1] == 0)
0x571: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x572: Stack[-5] = (bool) 0
0x573: Return(); Pop(2)

0x574: @ Trigger(Stack[-1], Stack[-3])
0x575: Pop(0)
0x576: Stack[-5] = (bool) 1
0x577: Return(); Pop(2)

0x578: Stack[-1] = 0
0x579: PushEmpty(string, string)
0x57a: Stack[-1] = "idle"
0x57b: Push(Stack[-3])
0x57c: IF (Stack[-1] == 0) GOTO 0x57e; Pop(1)

0x57d: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x57e: Stack[-4] = Stack[-1]
0x57f: Return(); Pop(2)

0x580: PushEmpty(int, bool, int, bool)
0x581: Stack[-2] = (int) 0
0x582: Push("all")
0x583: PushEmpty(string, int)
0x584: Stack[-1] = Stack[-5]
0x585: Call 0x579

0x586: Pop(1)
0x587: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x588: Pop(2)
0x589: Pop(0); Push((bool) Stack[-1] == 0)
0x58a: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x58b: GOTO 0x58f

0x58c: Push((int) 1)
0x58d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x58e: GOTO 0x582

0x58f: Stack[-5] = Stack[-2]
0x590: Return(); Pop(4)

0x591: PushEmpty()
0x592: Return(); Pop(0)

0x593: PushEmpty()
0x594: Push("playsound")
0x595: Push("giveitem")
0x596: @ TriggerWorld(Stack[-2], Stack[-1])
0x597: Pop(2)
0x598: Return(); Pop(0)

0x599: PushEmpty()
0x59a: Push("ood4WhiteMask1")
0x59b: Push((int) 1)
0x59c: @ SetVariable(Stack[-2], Stack[-1])
0x59d: Pop(2)
0x59e: Return(); Pop(0)

0x59f: PushEmpty()
0x5a0: Push("theaterkey is given")
0x5a1: @ Trace(Stack[-1])
0x5a2: Pop(1)
0x5a3: PushEmpty(object, string, int)
0x5a4: Stack[-3] = Stack[-5]
0x5a5: Stack[-2] = "d4q01_theater_key"
0x5a6: Stack[-1] = (int) 1
0x5a7: Call 0x560

0x5a8: Pop(3)
0x5a9: Return(); Pop(0)

0x5aa: PushEmpty()
0x5ab: Push("tvirin is given")
0x5ac: @ Trace(Stack[-1])
0x5ad: Pop(1)
0x5ae: PushEmpty(object, string, int)
0x5af: Stack[-3] = Stack[-5]
0x5b0: Stack[-2] = "tvirin"
0x5b1: Stack[-1] = (int) 1
0x5b2: Call 0x560

0x5b3: Pop(3)
0x5b4: Return(); Pop(0)

0x5b5: PushEmpty()
0x5b6: Push((int) 0)
0x5b7: @@ SetReturnValue(Stack[-1])
0x5b8: Pop(1)
0x5b9: Return(); Pop(0)

0x5ba: PushEmpty()
0x5bb: Push((int) 1)
0x5bc: @@ SetReturnValue(Stack[-1])
0x5bd: Pop(1)
0x5be: Return(); Pop(0)

0x5bf: PushEmpty()
0x5c0: PushEmpty(int, string)
0x5c1: Stack[-1] = "ood4WhiteMask1"
0x5c2: Call 0x54e

0x5c3: Pop(1)
0x5c4: Push((int) 0)
0x5c5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5c6: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c7: Stack[-2] = (bool) 1
0x5c8: Return(); Pop(0)

0x5c9: Stack[-2] = (bool) 0
0x5ca: Return(); Pop(0)

0x5cb: PushEmpty(int, int)
0x5cc: Push("player")
0x5cd: @ GetVariable(Stack[-1], Stack[-2])
0x5ce: Pop(1)
0x5cf: Push((int) 0)
0x5d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d1: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5d2: Stack[-3] = (int) 200001
0x5d3: Return(); Pop(2)

0x5d4: GOTO 0x5da

0x5d5: Push((int) 1)
0x5d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d7: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d8: Stack[-3] = (int) 200002
0x5d9: Return(); Pop(2)

0x5da: Stack[-3] = (int) 200003
0x5db: Return(); Pop(2)

0x5dc: Stack[-1] = (int) 3354
0x5dd: Return(); Pop(0)

0x5de: Stack[-1] = "ui/NPC_Black.png"
0x5df: Return(); Pop(0)

0x5e0: Stack[-1] = (bool) 0
0x5e1: Return(); Pop(0)

