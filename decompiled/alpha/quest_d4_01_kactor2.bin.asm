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
	soborkey is given
	d4q01_sobor_key
	ood4WastedMale1
	tvirin is given
	tvirin
	SetReturnValue
	player
	ui/NPC_None.png

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

RunOp = 0x3f6
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
		EVENT_11 Op = 0x2c1 Vars = (int, int)
	GTASK_6  Params = 0
		EVENT_0 Op = 0x404 Vars = (object)
	GTASK_7  Params = 1

Events:
EVENT_41 Op = 0x59a Vars = (object)

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
0xe: Call 0x49b

0xf: Pop(0)
0x10: Push(GlobalVars[0])
0x11: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x12: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0x13: GOTO 0x1f

0x14: Push((int) 1)
0x15: @ Sleep(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(int)
0x18: Call 0x49b

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
0x28: Call 0x49b

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
0xa8: Call 0x59a

0xa9: Pop(1)
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: PushEmpty(bool, object)
0xad: Stack[-1] = Stack[-3]
0xae: Call 0x4db

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
0x14f: Call 0x59a

0x150: Pop(1)
0x151: Return(); Pop(0)

0x152: PushEmpty()
0x153: PushEmpty(bool, object)
0x154: Stack[-1] = Stack[-3]
0x155: Call 0x4db

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
0x1b2: Call 0x59a

0x1b3: Pop(1)
0x1b4: Return(); Pop(0)

0x1b5: Stack[-1] = (bool) 0
0x1b6: Return(); Pop(0)

0x1b7: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1b8: @ WaitForAnimEnd()
0x1b9: Pop(0)
0x1ba: PushEmpty(bool)
0x1bb: Call 0x4f3

0x1bc: Pop(0)
0x1bd: Pop(1); Push((bool) Stack[-1] == 0)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bf: Return(); Pop(14)

0x1c0: PushEmpty(int)
0x1c1: Call 0x589

0x1c2: Stack[-8] = Stack[-1]
0x1c3: Pop(1)
0x1c4: Stack[-6] = (int) 0
0x1c5: PushEmpty(bool)
0x1c6: Stack[-1] = (bool) 0
0x1c7: Push((int) 5)
0x1c8: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1ca: PushEmpty(bool)
0x1cb: Call 0x4f3

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
0x1dd: Call 0x582

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
0x200: Call 0x4f8

0x201: Pop(1)
0x202: Pop(1); Push((bool) Stack[-1] == 0)
0x203: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x204: Stack[-10] = (int) -2
0x205: Return(); Pop(8)

0x206: @ CreateDialog(Stack[-4])
0x207: Pop(0)
0x208: PushEmpty(int)
0x209: Call 0x5f2

0x20a: Pop(0)
0x20b: @@ SetNPCName(Stack[-1])
0x20c: Pop(1)
0x20d: PushEmpty(string)
0x20e: Call 0x5f4

0x20f: Pop(0)
0x210: @@ SetPhoto(Stack[-1])
0x211: Pop(1)
0x212: PushEmpty(int)
0x213: Call 0x5e1

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
0x232: Call 0x530

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
0x240: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x241: PushEmpty(bool, object)
0x242: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x243: Call 0x5d2

0x244: Pop(1)
0x245: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x246: PushEmpty(string)
0x247: Stack[-1] = "Neutral"
0x248: Call 0x2b1

0x249: Pop(1)
0x24a: Push((int) 9701)
0x24b: @@ SetMessage(Stack[-1])
0x24c: Pop(1)
0x24d: @@ ClearReplies()
0x24e: Pop(0)
0x24f: Push((int) 9702)
0x250: Push((int) 10682)
0x251: Push((int) 10681)
0x252: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x253: Pop(3)
0x254: Push((int) 9711)
0x255: Push((int) 10682)
0x256: Push((int) 10691)
0x257: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x258: Pop(3)
0x259: GOTO 0x293

0x25a: PushEmpty(string)
0x25b: Stack[-1] = "Neutral"
0x25c: Call 0x2b1

0x25d: Pop(1)
0x25e: Push((int) 9712)
0x25f: @@ SetMessage(Stack[-1])
0x260: Pop(1)
0x261: @@ ClearReplies()
0x262: Pop(0)
0x263: Push((int) 9713)
0x264: Push((int) 10695)
0x265: Push((int) 10694)
0x266: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x267: Pop(3)
0x268: Push((int) 9720)
0x269: Push((int) 10702)
0x26a: Push((int) 10701)
0x26b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26c: Pop(3)
0x26d: Push((int) 9723)
0x26e: Push((int) 10695)
0x26f: Push((int) 10705)
0x270: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x271: Pop(3)
0x272: Push((int) 9724)
0x273: Push((int) -1)
0x274: Push((int) 10707)
0x275: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x276: Pop(3)
0x277: GOTO 0x293

0x278: PushEmpty(bool, object)
0x279: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x27a: Call 0x5c8

0x27b: Pop(1)
0x27c: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x27d: PushEmpty(string)
0x27e: Stack[-1] = "Neutral"
0x27f: Call 0x2b1

0x280: Pop(1)
0x281: Push((int) 11013)
0x282: @@ SetMessage(Stack[-1])
0x283: Pop(1)
0x284: @@ ClearReplies()
0x285: Pop(0)
0x286: Push((int) 11014)
0x287: Push((int) 12186)
0x288: Push((int) 12185)
0x289: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28a: Pop(3)
0x28b: Push((int) 11017)
0x28c: Push((int) -1)
0x28d: Push((int) 12188)
0x28e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28f: Pop(3)
0x290: GOTO 0x293

0x291: Return(); Pop(0)

0x292: GOTO 0x23f

0x293: PushEmpty(bool)
0x294: Call 0x5f6

0x295: Pop(0)
0x296: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x297: @ lshWaitForAnimEnd()
0x298: Pop(0)
0x299: Push( Stack[3 + Tasks[-1].StackPointer] )
0x29a: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29b: GOTO 0x2a1

0x29c: PushEmpty(string)
0x29d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x29e: Call 0x534

0x29f: Pop(1)
0x2a0: GOTO 0x297

0x2a1: GOTO 0x2b0

0x2a2: Push("all")
0x2a3: Push("idle")
0x2a4: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a5: Pop(2)
0x2a6: @ WaitForAnimEnd()
0x2a7: Pop(0)
0x2a8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2aa: GOTO 0x2b0

0x2ab: Push("all")
0x2ac: Push("idle")
0x2ad: @ PlayAnimation(Stack[-2], Stack[-1])
0x2ae: Pop(2)
0x2af: GOTO 0x2a6

0x2b0: Return(); Pop(0)

0x2b1: PushEmpty()
0x2b2: PushEmpty(bool)
0x2b3: Call 0x5f6

0x2b4: Pop(0)
0x2b5: Pop(1); Push((bool) Stack[-1] == 0)
0x2b6: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b7: Return(); Pop(0)

0x2b8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2ba: Return(); Pop(0)

0x2bb: PushEmpty(string)
0x2bc: Stack[-1] = Stack[-2]
0x2bd: Call 0x534

0x2be: Pop(1)
0x2bf: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2c0: Return(); Pop(0)

0x2c1: PushEmpty()
0x2c2: Push((int) 1)
0x2c3: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x2c4: PushEmpty()
0x2c5: Call 0x546

0x2c6: Pop(0)
0x2c7: Push((int) 10685)
0x2c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2ca: PushEmpty(object, object)
0x2cb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2cc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2cd: Call 0x5a2

0x2ce: Pop(2)
0x2cf: PushEmpty(object, object)
0x2d0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d2: Call 0x59c

0x2d3: Pop(2)
0x2d4: Push((int) 10687)
0x2d5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2d7: PushEmpty(object, object)
0x2d8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2da: Call 0x5ad

0x2db: Pop(2)
0x2dc: PushEmpty(object, object)
0x2dd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2de: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2df: Call 0x5be

0x2e0: Pop(2)
0x2e1: Push((int) 10688)
0x2e2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e3: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2e4: PushEmpty(object, object)
0x2e5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e7: Call 0x5ad

0x2e8: Pop(2)
0x2e9: PushEmpty(object, object)
0x2ea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ec: Call 0x5c3

0x2ed: Pop(2)
0x2ee: Push((int) 10698)
0x2ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2f1: PushEmpty(object, object)
0x2f2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f4: Call 0x5b3

0x2f5: Pop(2)
0x2f6: PushEmpty(object, object)
0x2f7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f9: Call 0x59c

0x2fa: Pop(2)
0x2fb: Push((int) 10680)
0x2fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fd: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x2fe: PushEmpty(bool, object)
0x2ff: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x300: Call 0x5d2

0x301: Pop(1)
0x302: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x303: PushEmpty(string)
0x304: Stack[-1] = "Neutral"
0x305: Call 0x2b1

0x306: Pop(1)
0x307: Push((int) 9701)
0x308: @@ SetMessage(Stack[-1])
0x309: Pop(1)
0x30a: @@ ClearReplies()
0x30b: Pop(0)
0x30c: Push((int) 9702)
0x30d: Push((int) 10682)
0x30e: Push((int) 10681)
0x30f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x310: Pop(3)
0x311: Push((int) 9711)
0x312: Push((int) 10682)
0x313: Push((int) 10691)
0x314: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x315: Pop(3)
0x316: Return(); Pop(0)

0x317: PushEmpty(string)
0x318: Stack[-1] = "Neutral"
0x319: Call 0x2b1

0x31a: Pop(1)
0x31b: Push((int) 9712)
0x31c: @@ SetMessage(Stack[-1])
0x31d: Pop(1)
0x31e: @@ ClearReplies()
0x31f: Pop(0)
0x320: Push((int) 9713)
0x321: Push((int) 10695)
0x322: Push((int) 10694)
0x323: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x324: Pop(3)
0x325: Push((int) 9720)
0x326: Push((int) 10702)
0x327: Push((int) 10701)
0x328: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x329: Pop(3)
0x32a: Push((int) 9723)
0x32b: Push((int) 10695)
0x32c: Push((int) 10705)
0x32d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32e: Pop(3)
0x32f: Push((int) 9724)
0x330: Push((int) -1)
0x331: Push((int) 10707)
0x332: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x333: Pop(3)
0x334: Return(); Pop(0)

0x335: PushEmpty(bool, object)
0x336: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x337: Call 0x5c8

0x338: Pop(1)
0x339: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x33a: PushEmpty(string)
0x33b: Stack[-1] = "Neutral"
0x33c: Call 0x2b1

0x33d: Pop(1)
0x33e: Push((int) 11013)
0x33f: @@ SetMessage(Stack[-1])
0x340: Pop(1)
0x341: @@ ClearReplies()
0x342: Pop(0)
0x343: Push((int) 11014)
0x344: Push((int) 12186)
0x345: Push((int) 12185)
0x346: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x347: Pop(3)
0x348: Push((int) 11017)
0x349: Push((int) -1)
0x34a: Push((int) 12188)
0x34b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34c: Pop(3)
0x34d: Return(); Pop(0)

0x34e: Push((int) 12186)
0x34f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x350: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x351: PushEmpty(string)
0x352: Stack[-1] = "Neutral"
0x353: Call 0x2b1

0x354: Pop(1)
0x355: Push((int) 11015)
0x356: @@ SetMessage(Stack[-1])
0x357: Pop(1)
0x358: @@ ClearReplies()
0x359: Pop(0)
0x35a: Push((int) 11016)
0x35b: Push((int) -1)
0x35c: Push((int) 12187)
0x35d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35e: Pop(3)
0x35f: Return(); Pop(0)

0x360: Push((int) 10702)
0x361: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x362: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x363: PushEmpty(string)
0x364: Stack[-1] = "Neutral"
0x365: Call 0x2b1

0x366: Pop(1)
0x367: Push((int) 9721)
0x368: @@ SetMessage(Stack[-1])
0x369: Pop(1)
0x36a: @@ ClearReplies()
0x36b: Pop(0)
0x36c: Push((int) 9722)
0x36d: Push((int) 10697)
0x36e: Push((int) 10703)
0x36f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x370: Pop(3)
0x371: Return(); Pop(0)

0x372: Push((int) 10695)
0x373: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x374: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x375: PushEmpty(string)
0x376: Stack[-1] = "Neutral"
0x377: Call 0x2b1

0x378: Pop(1)
0x379: Push((int) 9714)
0x37a: @@ SetMessage(Stack[-1])
0x37b: Pop(1)
0x37c: @@ ClearReplies()
0x37d: Pop(0)
0x37e: Push((int) 9715)
0x37f: Push((int) 10697)
0x380: Push((int) 10696)
0x381: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x382: Pop(3)
0x383: Push((int) 9719)
0x384: Push((int) -1)
0x385: Push((int) 10700)
0x386: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x387: Pop(3)
0x388: Return(); Pop(0)

0x389: Push((int) 10697)
0x38a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38b: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x38c: PushEmpty(string)
0x38d: Stack[-1] = "Neutral"
0x38e: Call 0x2b1

0x38f: Pop(1)
0x390: Push((int) 9716)
0x391: @@ SetMessage(Stack[-1])
0x392: Pop(1)
0x393: @@ ClearReplies()
0x394: Pop(0)
0x395: Push((int) 9717)
0x396: Push((int) -1)
0x397: Push((int) 10698)
0x398: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x399: Pop(3)
0x39a: Push((int) 9718)
0x39b: Push((int) -1)
0x39c: Push((int) 10699)
0x39d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39e: Pop(3)
0x39f: Return(); Pop(0)

0x3a0: Push((int) 10682)
0x3a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a2: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3a3: PushEmpty(string)
0x3a4: Stack[-1] = "Neutral"
0x3a5: Call 0x2b1

0x3a6: Pop(1)
0x3a7: Push((int) 9703)
0x3a8: @@ SetMessage(Stack[-1])
0x3a9: Pop(1)
0x3aa: @@ ClearReplies()
0x3ab: Pop(0)
0x3ac: Push((int) 9704)
0x3ad: Push((int) 10684)
0x3ae: Push((int) 10683)
0x3af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b0: Pop(3)
0x3b1: Push((int) 9710)
0x3b2: Push((int) 10684)
0x3b3: Push((int) 10689)
0x3b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b5: Pop(3)
0x3b6: Return(); Pop(0)

0x3b7: Push((int) 10684)
0x3b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3ba: PushEmpty(string)
0x3bb: Stack[-1] = "Neutral"
0x3bc: Call 0x2b1

0x3bd: Pop(1)
0x3be: Push((int) 9705)
0x3bf: @@ SetMessage(Stack[-1])
0x3c0: Pop(1)
0x3c1: @@ ClearReplies()
0x3c2: Pop(0)
0x3c3: Push((int) 9706)
0x3c4: Push((int) 10686)
0x3c5: Push((int) 10685)
0x3c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c7: Pop(3)
0x3c8: Return(); Pop(0)

0x3c9: Push((int) 10686)
0x3ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3cc: PushEmpty(string)
0x3cd: Stack[-1] = "Neutral"
0x3ce: Call 0x2b1

0x3cf: Pop(1)
0x3d0: Push((int) 9707)
0x3d1: @@ SetMessage(Stack[-1])
0x3d2: Pop(1)
0x3d3: @@ ClearReplies()
0x3d4: Pop(0)
0x3d5: Push((int) 9708)
0x3d6: Push((int) -1)
0x3d7: Push((int) 10687)
0x3d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d9: Pop(3)
0x3da: Push((int) 9709)
0x3db: Push((int) -1)
0x3dc: Push((int) 10688)
0x3dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3de: Pop(3)
0x3df: Return(); Pop(0)

0x3e0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3e1: PushEmpty(bool)
0x3e2: Call 0x5f6

0x3e3: Pop(0)
0x3e4: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e5: @ lshStopAnimation()
0x3e6: Pop(0)
0x3e7: GOTO 0x3ea

0x3e8: @ StopAnimation()
0x3e9: Pop(0)
0x3ea: Return(); Pop(0)

0x3eb: GOTO 0x2c2

0x3ec: Return(); Pop(0)

0x3ed: PushEmpty()
0x3ee: PushEmpty(int, object)
0x3ef: Stack[-1] = Stack[-3]
0x3f0: Push(-2, 1); TaskCall(4)
0x3f1: Call 0x1fc

0x3f2: Pop(-2, 1); TaskReturn
0x3f3: Stack[-4] = Stack[-2]
0x3f4: Pop(2)
0x3f5: Return(); Pop(0)

0x3f6: Push(GlobalVars[0])
0x3f7: PushEmpty(int)
0x3f8: Call 0x49b

0x3f9: Stack[-2] = Stack[-1]
0x3fa: Pop(1)
0x3fb: GlobalVars[0] = Stack[-1]; Pop(1)
0x3fc: Push((int) 3)
0x3fd: @ Sleep(Stack[-1])
0x3fe: Pop(1)
0x3ff: PushEmpty()
0x400: Call 0x436

0x401: Pop(0)
0x402: GOTO 0x3fc

0x403: Return(); Pop(0)

0x404: PushEmpty(int, int)
0x405: PushEmpty()
0x406: Call 0x47b

0x407: Pop(0)
0x408: PushEmpty(int, object)
0x409: Stack[-1] = Stack[-5]
0x40a: Call 0x3ed

0x40b: Stack[-3] = Stack[-2]
0x40c: Pop(2)
0x40d: Push((int) 0)
0x40e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x40f: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x410: PushEmpty(bool, string, string)
0x411: Stack[-2] = "quest_d4_01"
0x412: Stack[-1] = "key2_done"
0x413: Call 0x576

0x414: Pop(3)
0x415: PushEmpty(object)
0x416: Stack[-1] = Stack[-4]
0x417: Push(-1, 2); TaskCall(0)
0x418: Call 0x0

0x419: Pop(-1, 2); TaskReturn
0x41a: Pop(1)
0x41b: PushEmpty(object)
0x41c: Stack[-1] = Stack[-4]
0x41d: Push(-1, 2); TaskCall(1)
0x41e: Call 0xb6

0x41f: Pop(-1, 2); TaskReturn
0x420: Pop(1)
0x421: PushEmpty(object)
0x422: Stack[-1] = Stack[-4]
0x423: Push(-1, 0); TaskCall(7)
0x424: Call 0x488

0x425: Pop(-1, 0); TaskReturn
0x426: Pop(1)
0x427: GOTO 0x435

0x428: Push((int) 1)
0x429: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x42a: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x42b: PushEmpty(bool, string, string)
0x42c: Stack[-2] = "quest_d4_01"
0x42d: Stack[-1] = "key2_done"
0x42e: Call 0x576

0x42f: Pop(3)
0x430: PushEmpty()
0x431: Push(-0, 2); TaskCall(2)
0x432: Call 0x15d

0x433: Pop(-0, 2); TaskReturn
0x434: Pop(0)
0x435: Return(); Pop(2)

0x436: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x437: @ WaitForAnimEnd()
0x438: Pop(0)
0x439: PushEmpty(bool)
0x43a: Call 0x4f3

0x43b: Pop(0)
0x43c: Pop(1); Push((bool) Stack[-1] == 0)
0x43d: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x43e: Return(); Pop(14)

0x43f: PushEmpty(int)
0x440: Call 0x589

0x441: Stack[-8] = Stack[-1]
0x442: Pop(1)
0x443: Stack[-6] = (int) 0
0x444: PushEmpty(bool)
0x445: Stack[-1] = (bool) 0
0x446: Push((int) 5)
0x447: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x448: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x449: PushEmpty(bool)
0x44a: Call 0x4f3

0x44b: Pop(0)
0x44c: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44d: Stack[-1] = (bool) 1
0x44e: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x44f: Push((int) 3)
0x450: @ irand(Stack[-6], Stack[-1])
0x451: Pop(1)
0x452: Push((int) 0)
0x453: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x454: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x455: Push(Stack[-7])
0x456: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x457: @ irand(Stack[-4], Stack[-7])
0x458: Pop(0)
0x459: Push("all")
0x45a: PushEmpty(string, int)
0x45b: Stack[-1] = Stack[-7]
0x45c: Call 0x582

0x45d: Pop(1)
0x45e: @ PlayAnimation(Stack[-2], Stack[-1])
0x45f: Pop(2)
0x460: @ WaitForAnimEnd(Stack[-3])
0x461: Pop(0)
0x462: Pop(0); Push((bool) Stack[-3] == 0)
0x463: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x464: GOTO 0x47a

0x465: GOTO 0x477

0x466: Push((int) 1)
0x467: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x468: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x469: Push((int) 4)
0x46a: @ rand(Stack[-3], Stack[-1])
0x46b: Pop(1)
0x46c: Push((int) 1)
0x46d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x46e: @ Sleep(Stack[-1], Stack[-2])
0x46f: Pop(1)
0x470: Pop(0); Push((bool) Stack[-1] == 0)
0x471: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x472: GOTO 0x47a

0x473: GOTO 0x477

0x474: Push(Stack[-6])
0x475: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x476: GOTO 0x47a

0x477: Push((int) 1)
0x478: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x479: GOTO 0x444

0x47a: Return(); Pop(14)

0x47b: @ StopAnimation()
0x47c: Pop(0)
0x47d: @ StopGroup0()
0x47e: Pop(0)
0x47f: Return(); Pop(0)

0x480: PushEmpty()
0x481: PushEmpty(int, object)
0x482: Stack[-1] = Stack[-3]
0x483: Push(-2, 1); TaskCall(4)
0x484: Call 0x1fc

0x485: Pop(-2, 1); TaskReturn
0x486: Pop(2)
0x487: Return(); Pop(0)

0x488: PushEmpty(bool, bool)
0x489: @ IsOverrideActive(Stack[-1])
0x48a: Pop(0)
0x48b: Pop(0); Push((bool) Stack[-1] == 0)
0x48c: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48d: GOTO 0x48f

0x48e: GOTO 0x489

0x48f: PushEmpty(object)
0x490: Stack[-1] = Stack[-4]
0x491: Call 0x480

0x492: Pop(1)
0x493: @ Hold()
0x494: Pop(0)
0x495: Return(); Pop(2)

0x496: PushEmpty(cvector, cvector)
0x497: @ GetPosition(Stack[-1])
0x498: Pop(0)
0x499: Stack[-3] = Stack[-1]
0x49a: Return(); Pop(2)

0x49b: PushEmpty(object, int, object, int)
0x49c: @ GetScene(Stack[-2])
0x49d: Pop(0)
0x49e: PushEmpty(cvector)
0x49f: Call 0x496

0x4a0: Pop(0)
0x4a1: @@ GetRegionByPt(Stack[-2], Stack[-1])
0x4a2: Pop(1)
0x4a3: Stack[-5] = Stack[-1]
0x4a4: Return(); Pop(4)

0x4a5: Stack[-2] = 0
0x4a6: PushEmpty(bool, bool)
0x4a7: Push("HasProperty")
0x4a8: Push((int) 2)
0x4a9: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x4aa: Pop(1); Push((bool) Stack[-1] == 0)
0x4ab: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4ac: Stack[-5] = (bool) 0
0x4ad: Return(); Pop(2)

0x4ae: @@ HasProperty(Stack[-3], Stack[-1])
0x4af: Pop(0)
0x4b0: Stack[-5] = Stack[-1]
0x4b1: Return(); Pop(2)

0x4b2: PushEmpty(bool, bool)
0x4b3: @@ IsDead(Stack[-1])
0x4b4: Pop(0)
0x4b5: Stack[-4] = Stack[-1]
0x4b6: Return(); Pop(2)

0x4b7: PushEmpty(object, object, object, object)
0x4b8: Pop(0); Push((bool) Stack[-5] == 0)
0x4b9: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4ba: Stack[-6] = (bool) 0
0x4bb: Return(); Pop(4)

0x4bc: PushEmpty(bool)
0x4bd: Stack[-1] = (bool) 0
0x4be: Push("IsDead")
0x4bf: Push((int) 1)
0x4c0: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4c2: PushEmpty(bool, object)
0x4c3: Stack[-1] = Stack[-8]
0x4c4: Call 0x4b2

0x4c5: Pop(1)
0x4c6: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4c7: Stack[-1] = (bool) 1
0x4c8: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c9: Stack[-6] = (bool) 0
0x4ca: Return(); Pop(4)

0x4cb: @ GetScene(Stack[-2])
0x4cc: Pop(0)
0x4cd: Pop(0); Push((bool) Stack[-2] == 0)
0x4ce: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4cf: Stack[-6] = (bool) 0
0x4d0: Return(); Pop(4)

0x4d1: @@ GetScene(Stack[-1])
0x4d2: Pop(0)
0x4d3: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x4d4: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d5: Stack[-6] = (bool) 0
0x4d6: Return(); Pop(4)

0x4d7: Stack[-6] = (bool) 1
0x4d8: Return(); Pop(4)

0x4d9: Stack[-1] = 0
0x4da: Stack[-2] = 0
0x4db: PushEmpty(int, int)
0x4dc: PushEmpty(bool, object)
0x4dd: Stack[-1] = Stack[-5]
0x4de: Call 0x4b7

0x4df: Pop(1)
0x4e0: Pop(1); Push((bool) Stack[-1] == 0)
0x4e1: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e2: Stack[-4] = (bool) 0
0x4e3: Return(); Pop(2)

0x4e4: PushEmpty(bool, object, string)
0x4e5: Stack[-2] = Stack[-6]
0x4e6: Stack[-1] = "noaccess"
0x4e7: Call 0x4a6

0x4e8: Pop(2)
0x4e9: Pop(1); Push((bool) Stack[-1] == 0)
0x4ea: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4eb: Stack[-4] = (bool) 1
0x4ec: Return(); Pop(2)

0x4ed: Push("noaccess")
0x4ee: @@ GetProperty(Stack[-1], Stack[-2])
0x4ef: Pop(1)
0x4f0: Push((int) 0)
0x4f1: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x4f2: Return(); Pop(2)

0x4f3: PushEmpty(bool, bool)
0x4f4: @ IsLoaded(Stack[-1])
0x4f5: Pop(0)
0x4f6: Stack[-3] = Stack[-1]
0x4f7: Return(); Pop(2)

0x4f8: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x4f9: @@ GetPosition(Stack[-7])
0x4fa: Pop(0)
0x4fb: @@ GetEyesHeight(Stack[-8])
0x4fc: Pop(0)
0x4fd: Push(CvectorIndex(Stack[-7], 1))
0x4fe: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x4ff: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x500: @ GetPosition(Stack[-6])
0x501: Pop(0)
0x502: @ GetEyesHeight(Stack[-8])
0x503: Pop(0)
0x504: Push(CvectorIndex(Stack[-6], 1))
0x505: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x506: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x507: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x508: Push(CvectorIndex(Stack[-5], 1))
0x509: Stack[-1] = (int) 0
0x50a: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x50b: Pop(0); Push(Stack[-5] | Stack[-5]);
0x50c: Pop(1); Push(Sqrt(Stack[-1]))
0x50d: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x50e: Stack[-4] = -Stack[-5]; Pop(0);
0x50f: Push((int) 70)
0x510: Pop(1); Push(Stack[-6] * Stack[-1]);
0x511: PushEmpty(cvector, cvector)
0x512: Push(CVector(0.0, 1.0, 0.0))
0x513: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x514: Call 0x54d

0x515: Pop(1)
0x516: Push((int) 25)
0x517: Pop(2); Push(Stack[-2] * Stack[-1]);
0x518: Pop(2); Push(Stack[-2] + Stack[-1]);
0x519: Push(CVector(0.0, 10.0, 0.0))
0x51a: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x51b: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x51c: @ IsOverrideActive(Stack[-1])
0x51d: Pop(0)
0x51e: Push(Stack[-1])
0x51f: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x520: Stack[-18] = (bool) 0
0x521: Return(); Pop(16)

0x522: @ StopWorld()
0x523: Pop(0)
0x524: @ CameraTransit(Stack[-2], Stack[-4])
0x525: Pop(0)
0x526: Push(CvectorIndex(Stack[-3], 0))
0x527: Push(CvectorIndex(Stack[-4], 2))
0x528: @ Rotate(Stack[-2], Stack[-1])
0x529: Pop(2)
0x52a: @ CameraWaitForPlayFinish()
0x52b: Pop(0)
0x52c: @ ResumeWorld()
0x52d: Pop(0)
0x52e: Stack[-18] = (bool) 1
0x52f: Return(); Pop(16)

0x530: PushEmpty()
0x531: @ CameraSwitchToNormal()
0x532: Pop(0)
0x533: Return(); Pop(0)

0x534: PushEmpty(float, float, float, float)
0x535: Push("playing ")
0x536: Pop(1); Push(Stack[-1] + Stack[-6]);
0x537: @ Trace(Stack[-1])
0x538: Pop(1)
0x539: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x53a: Pop(0)
0x53b: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x53c: Pop(0)
0x53d: Push("start: ")
0x53e: Pop(1); Push(Stack[-1] + Stack[-3]);
0x53f: @ Trace(Stack[-1])
0x540: Pop(1)
0x541: Push("end: ")
0x542: Pop(1); Push(Stack[-1] + Stack[-2]);
0x543: @ Trace(Stack[-1])
0x544: Pop(1)
0x545: Return(); Pop(4)

0x546: PushEmpty(bool)
0x547: Call 0x5f6

0x548: Pop(0)
0x549: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x54a: @ lshStopSpeech()
0x54b: Pop(0)
0x54c: Return(); Pop(0)

0x54d: PushEmpty(float, float)
0x54e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x54f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x550: Push((float)0.0)
0x551: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x552: IF (Stack[-1] == 0) GOTO 0x555; Pop(1)

0x553: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x554: Return(); Pop(2)

0x555: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x556: Return(); Pop(2)

0x557: PushEmpty(int, int)
0x558: @ GetVariable(Stack[-3], Stack[-1])
0x559: Pop(0)
0x55a: Stack[-4] = Stack[-1]
0x55b: Return(); Pop(2)

0x55c: PushEmpty(int, int, bool, int, int, bool)
0x55d: @@ GetItemID(Stack[-3])
0x55e: Pop(0)
0x55f: Push("Category")
0x560: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x561: Pop(1)
0x562: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x563: Pop(0)
0x564: Pop(0); Push((bool) Stack[-1] == 0)
0x565: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x566: @@ DropItems(Stack[-8], Stack[-7])
0x567: Pop(0)
0x568: Return(); Pop(6)

0x569: PushEmpty(object, object)
0x56a: @ CreateInvItem(Stack[-1])
0x56b: Pop(0)
0x56c: @@ SetItemName(Stack[-4])
0x56d: Pop(0)
0x56e: PushEmpty(object, object, int)
0x56f: Stack[-3] = Stack[-8]
0x570: Stack[-2] = Stack[-4]
0x571: Stack[-1] = Stack[-6]
0x572: Call 0x55c

0x573: Pop(3)
0x574: Return(); Pop(2)

0x575: Stack[-1] = 0
0x576: PushEmpty(object, object)
0x577: @ FindActor(Stack[-1], Stack[-4])
0x578: Pop(0)
0x579: Pop(0); Push((bool) Stack[-1] == 0)
0x57a: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x57b: Stack[-5] = (bool) 0
0x57c: Return(); Pop(2)

0x57d: @ Trigger(Stack[-1], Stack[-3])
0x57e: Pop(0)
0x57f: Stack[-5] = (bool) 1
0x580: Return(); Pop(2)

0x581: Stack[-1] = 0
0x582: PushEmpty(string, string)
0x583: Stack[-1] = "idle"
0x584: Push(Stack[-3])
0x585: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x586: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x587: Stack[-4] = Stack[-1]
0x588: Return(); Pop(2)

0x589: PushEmpty(int, bool, int, bool)
0x58a: Stack[-2] = (int) 0
0x58b: Push("all")
0x58c: PushEmpty(string, int)
0x58d: Stack[-1] = Stack[-5]
0x58e: Call 0x582

0x58f: Pop(1)
0x590: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x591: Pop(2)
0x592: Pop(0); Push((bool) Stack[-1] == 0)
0x593: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x594: GOTO 0x598

0x595: Push((int) 1)
0x596: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x597: GOTO 0x58b

0x598: Stack[-5] = Stack[-2]
0x599: Return(); Pop(4)

0x59a: PushEmpty()
0x59b: Return(); Pop(0)

0x59c: PushEmpty()
0x59d: Push("playsound")
0x59e: Push("giveitem")
0x59f: @ TriggerWorld(Stack[-2], Stack[-1])
0x5a0: Pop(2)
0x5a1: Return(); Pop(0)

0x5a2: PushEmpty()
0x5a3: Push("soborkey is given")
0x5a4: @ Trace(Stack[-1])
0x5a5: Pop(1)
0x5a6: PushEmpty(object, string, int)
0x5a7: Stack[-3] = Stack[-5]
0x5a8: Stack[-2] = "d4q01_sobor_key"
0x5a9: Stack[-1] = (int) 1
0x5aa: Call 0x569

0x5ab: Pop(3)
0x5ac: Return(); Pop(0)

0x5ad: PushEmpty()
0x5ae: Push("ood4WastedMale1")
0x5af: Push((int) 1)
0x5b0: @ SetVariable(Stack[-2], Stack[-1])
0x5b1: Pop(2)
0x5b2: Return(); Pop(0)

0x5b3: PushEmpty()
0x5b4: Push("tvirin is given")
0x5b5: @ Trace(Stack[-1])
0x5b6: Pop(1)
0x5b7: PushEmpty(object, string, int)
0x5b8: Stack[-3] = Stack[-5]
0x5b9: Stack[-2] = "tvirin"
0x5ba: Stack[-1] = (int) 1
0x5bb: Call 0x569

0x5bc: Pop(3)
0x5bd: Return(); Pop(0)

0x5be: PushEmpty()
0x5bf: Push((int) 0)
0x5c0: @@ SetReturnValue(Stack[-1])
0x5c1: Pop(1)
0x5c2: Return(); Pop(0)

0x5c3: PushEmpty()
0x5c4: Push((int) 1)
0x5c5: @@ SetReturnValue(Stack[-1])
0x5c6: Pop(1)
0x5c7: Return(); Pop(0)

0x5c8: PushEmpty()
0x5c9: PushEmpty(bool, object)
0x5ca: Stack[-1] = Stack[-3]
0x5cb: Call 0x5de

0x5cc: Pop(1)
0x5cd: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5ce: Stack[-2] = (bool) 1
0x5cf: Return(); Pop(0)

0x5d0: Stack[-2] = (bool) 0
0x5d1: Return(); Pop(0)

0x5d2: PushEmpty()
0x5d3: PushEmpty(int, string)
0x5d4: Stack[-1] = "ood4WastedMale1"
0x5d5: Call 0x557

0x5d6: Pop(1)
0x5d7: Push((int) 0)
0x5d8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5d9: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5da: Stack[-2] = (bool) 1
0x5db: Return(); Pop(0)

0x5dc: Stack[-2] = (bool) 0
0x5dd: Return(); Pop(0)

0x5de: PushEmpty()
0x5df: Stack[-2] = (bool) 0
0x5e0: Return(); Pop(0)

0x5e1: PushEmpty(int, int)
0x5e2: Push("player")
0x5e3: @ GetVariable(Stack[-1], Stack[-2])
0x5e4: Pop(1)
0x5e5: Push((int) 0)
0x5e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5e7: IF (Stack[-1] == 0) GOTO 0x5eb; Pop(1)

0x5e8: Stack[-3] = (int) 200001
0x5e9: Return(); Pop(2)

0x5ea: GOTO 0x5f0

0x5eb: Push((int) 1)
0x5ec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ed: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5ee: Stack[-3] = (int) 200002
0x5ef: Return(); Pop(2)

0x5f0: Stack[-3] = (int) 200003
0x5f1: Return(); Pop(2)

0x5f2: Stack[-1] = (int) 3341
0x5f3: Return(); Pop(0)

0x5f4: Stack[-1] = "ui/NPC_None.png"
0x5f5: Return(); Pop(0)

0x5f6: Stack[-1] = (bool) 0
0x5f7: Return(); Pop(0)

