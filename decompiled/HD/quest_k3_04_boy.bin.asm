GlobalVarCount = 1
	G_VAR_0 object 

Strings:
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
	all
	idle
	quest_d3_03
	boy_free
	noaccess
	GetPosition
	Can't retreat, distance: 
	fdie
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	head
	HasProperty
	HasProperty
	IsDead
	IsDead
	GetScene
	GetProperty
	fhit
	bhit
	hit_react
	1
	2
	add
	size
	get
	scripted
	blood_dir.xml
	Can't find lsh animation : 
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	playsound
	giveitem
	k3q04LopuhTalk
	powder is given
	powder
	branch
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png
	RemoveStationaryActor
	health
	quest_k3_04
	boy_attacked

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	SetProperty (2 args)
	rand (2 args)
	Sleep (1 args)
	GetPosition (1 args)
	GetRandomPFPointInCircle (4 args)
	RotatePath (2 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	RequestClearPath (1 args)
	Stop (0 args)
	StopGroup0 (0 args)
	FindShiftedPathTo (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
	GetDirection (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	SetTimer (2 args)
	MovePoint (3 args)
	KillTimer (1 args)
	FindDirLength (3 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	GetScene (1 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshStopSpeech (0 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	GetVariable (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	IsPlayerActor (2 args)

RunOp = 0xed
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0xf1 Vars = (object)
	GTASK_3 Vars = (bool, bool) Params = 0
		EVENT_17 Op = 0x10f Vars = (object)
		EVENT_10 Op = 0x15d Vars = (object)
		EVENT_28 Op = 0x161 Vars = ()
		EVENT_41 Op = 0x16b Vars = (object)
	GTASK_4  Params = 0
		EVENT_17 Op = 0x17c Vars = (object)
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x247 Vars = (int)
		EVENT_41 Op = 0x282 Vars = (object)
	GTASK_6  Params = 1
		EVENT_22 Op = 0x319 Vars = (object, int, float, float)
		EVENT_16 Op = 0x31b Vars = (object, string)
		EVENT_41 Op = 0x31d Vars = (object)

Events:
EVENT_22 Op = 0x550 Vars = (object, int, float, float)
EVENT_43 Op = 0x558 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x562 Vars = (object, string)
EVENT_41 Op = 0x56f Vars = (object)
EVENT_17 Op = 0x584 Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x3fb

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x533

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x531

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x535

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x537

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x520

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x440

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x84

0x53: Pop(1)
0x54: Push((int) 525646)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 525647)
0x5a: Push((int) 26990)
0x5b: Push((int) 26989)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 539057)
0x5f: Push((int) 26990)
0x60: Push((int) 41004)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x539

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x452

0x72: Pop(1)
0x73: GOTO 0x6a

0x74: GOTO 0x83

0x75: Push("all")
0x76: Push("idle")
0x77: @ PlayAnimation(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: @ WaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: Push("all")
0x7f: Push("idle")
0x80: @ PlayAnimation(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: GOTO 0x79

0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: PushEmpty(bool)
0x86: Call2 0x539

0x87: Pop(0)
0x88: Pop(1); Push((bool) Stack[-1] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Return(); Pop(0)

0x8b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Return(); Pop(0)

0x8e: PushEmpty(string, bool)
0x8f: Stack[-2] = Stack[-3]
0x90: Push("")
0x91: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: GOTO 0x96

0x95: Stack[-1] = (bool) 1
0x96: Call2 0x462

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x471

0x9f: Pop(0)
0xa0: Push((int) 26991)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x515

0xa7: Pop(2)
0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x50f

0xac: Pop(2)
0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x509

0xb1: Pop(2)
0xb2: Push((int) 26988)
0xb3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xb5: PushEmpty(string)
0xb6: Stack[-1] = "Neutral"
0xb7: Call2 0x84

0xb8: Pop(1)
0xb9: Push((int) 525646)
0xba: @@ SetMessage(Stack[-1])
0xbb: Pop(1)
0xbc: @@ ClearReplies()
0xbd: Pop(0)
0xbe: Push((int) 525647)
0xbf: Push((int) 26990)
0xc0: Push((int) 26989)
0xc1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc2: Pop(3)
0xc3: Push((int) 539057)
0xc4: Push((int) 26990)
0xc5: Push((int) 41004)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Return(); Pop(0)

0xc9: Push((int) 26990)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral"
0xce: Call2 0x84

0xcf: Pop(1)
0xd0: Push((int) 525648)
0xd1: @@ SetMessage(Stack[-1])
0xd2: Pop(1)
0xd3: @@ ClearReplies()
0xd4: Pop(0)
0xd5: Push((int) 525649)
0xd6: Push((int) -1)
0xd7: Push((int) 26991)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Push((int) 539058)
0xdb: Push((int) -1)
0xdc: Push((int) 41005)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Return(); Pop(0)

0xe0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe1: PushEmpty(bool)
0xe2: Call2 0x539

0xe3: Pop(0)
0xe4: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe5: @ lshStopAnimation()
0xe6: Pop(0)
0xe7: GOTO 0xea

0xe8: @ StopAnimation()
0xe9: Pop(0)
0xea: Return(); Pop(0)

0xeb: GOTO 0x9b

0xec: Return(); Pop(0)

0xed: @ Hold()
0xee: Pop(0)
0xef: GOTO 0xed

0xf0: Return(); Pop(0)

0xf1: PushEmpty()
0xf2: PushEmpty(int, object)
0xf3: Stack[-1] = Stack[-3]
0xf4: Push(-2, 1); TaskCall(0)
0xf5: Call2 0x0

0xf6: Pop(-2, 1); TaskReturn
0xf7: Pop(2)
0xf8: PushEmpty()
0xf9: Call2 0x53b

0xfa: Pop(0)
0xfb: PushEmpty()
0xfc: Push(-0, 2); TaskCall(3)
0xfd: Call2 0x101

0xfe: Pop(-0, 2); TaskReturn
0xff: Pop(0)
0x100: Return(); Pop(0)

0x101: PushEmpty(bool, string, string)
0x102: Stack[-2] = "quest_d3_03"
0x103: Stack[-1] = "boy_free"
0x104: Call2 0x4e5

0x105: Pop(3)
0x106: Push("noaccess")
0x107: Push((int) 0)
0x108: @ SetProperty(Stack[-2], Stack[-1])
0x109: Pop(2)
0x10a: PushEmpty()
0x10b: Call2 0x11d

0x10c: Pop(0)
0x10d: GOTO 0x10a

0x10e: Return(); Pop(0)

0x10f: PushEmpty()
0x110: PushEmpty(bool, object)
0x111: Stack[-1] = Stack[-3]
0x112: Call2 0x575

0x113: Pop(1)
0x114: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x115: PushEmpty()
0x116: Call2 0x164

0x117: Pop(0)
0x118: PushEmpty(object)
0x119: Stack[-1] = Stack[-2]
0x11a: Call2 0x57c

0x11b: Pop(1)
0x11c: Return(); Pop(0)

0x11d: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x11e: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x11f: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x120: Push((float)0.5)
0x121: @ rand(Stack[-7], Stack[-1])
0x122: Pop(1)
0x123: @ Sleep(Stack[-6])
0x124: Pop(0)
0x125: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x126: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x127: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x128: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x129: @ GetPosition(Stack[-4])
0x12a: Pop(0)
0x12b: PushEmpty(float)
0x12c: Call2 0x158

0x12d: Pop(0)
0x12e: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x12f: Pop(1)
0x130: Push(Stack[-3])
0x131: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x132: GOTO 0x137

0x133: Push((int) 1)
0x134: @ Sleep(Stack[-1])
0x135: Pop(1)
0x136: GOTO 0x129

0x137: GOTO 0x139

0x138: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x139: PushEmpty(object, cvector)
0x13a: Stack[-1] = Stack[-7]
0x13b: Call2 0x176

0x13c: Stack[-4] = Stack[-2]
0x13d: Pop(2)
0x13e: Pop(0); Push(( Stack[-2] != 0 )
0x13f: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x140: @ RotatePath(Stack[-2], Stack[-1])
0x141: Pop(0)
0x142: Push(Stack[-1])
0x143: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x144: PushEmpty(bool)
0x145: Call2 0x174

0x146: Pop(0)
0x147: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x148: Pop(1)
0x149: Stack[-2] = 0
0x14a: Push(Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14c: PushEmpty()
0x14d: Push(-0, 0); TaskCall(4)
0x14e: Call2 0x18a

0x14f: Pop(-0, 0); TaskReturn
0x150: Pop(0)
0x151: GOTO 0x155

0x152: Push((int) 1)
0x153: @ Sleep(Stack[-1])
0x154: Pop(1)
0x155: Stack[-2] = 0
0x156: GOTO 0x125

0x157: Return(); Pop(12)

0x158: PushEmpty(float, float)
0x159: @ GetCameraFarDistance(Stack[-1])
0x15a: Pop(0)
0x15b: Stack[-3] = Stack[-1]
0x15c: Return(); Pop(2)

0x15d: PushEmpty()
0x15e: @ RequestClearPath(Stack[-1])
0x15f: Pop(0)
0x160: Return(); Pop(0)

0x161: @ Stop()
0x162: Pop(0)
0x163: Return(); Pop(0)

0x164: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x165: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x166: @ Stop()
0x167: Pop(0)
0x168: @ StopGroup0()
0x169: Pop(0)
0x16a: Return(); Pop(0)

0x16b: PushEmpty()
0x16c: PushEmpty()
0x16d: Call2 0x164

0x16e: Pop(0)
0x16f: PushEmpty(object)
0x170: Stack[-1] = Stack[-2]
0x171: Call2 0x56f

0x172: Pop(1)
0x173: Return(); Pop(0)

0x174: Stack[-1] = (bool) 0
0x175: Return(); Pop(0)

0x176: PushEmpty(object, object)
0x177: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x178: Pop(0)
0x179: Stack[-4] = Stack[-1]
0x17a: Return(); Pop(2)

0x17b: Stack[-1] = 0
0x17c: PushEmpty()
0x17d: PushEmpty(bool, object)
0x17e: Stack[-1] = Stack[-3]
0x17f: Call2 0x575

0x180: Pop(1)
0x181: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x182: PushEmpty()
0x183: Call2 0x1db

0x184: Pop(0)
0x185: PushEmpty(object)
0x186: Stack[-1] = Stack[-2]
0x187: Call2 0x57c

0x188: Pop(1)
0x189: Return(); Pop(0)

0x18a: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x18b: @ WaitForAnimEnd()
0x18c: Pop(0)
0x18d: PushEmpty(bool)
0x18e: Call2 0x3f6

0x18f: Pop(0)
0x190: Pop(1); Push((bool) Stack[-1] == 0)
0x191: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x192: Return(); Pop(14)

0x193: PushEmpty(int)
0x194: Call2 0x4f8

0x195: Stack[-8] = Stack[-1]
0x196: Pop(1)
0x197: Stack[-6] = (int) 0
0x198: PushEmpty(bool)
0x199: Stack[-1] = (bool) 0
0x19a: Push((int) 5)
0x19b: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19d: PushEmpty(bool)
0x19e: Call2 0x3f6

0x19f: Pop(0)
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a1: Stack[-1] = (bool) 1
0x1a2: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1a3: Push((int) 3)
0x1a4: @ irand(Stack[-6], Stack[-1])
0x1a5: Pop(1)
0x1a6: Push((int) 0)
0x1a7: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1a9: Push(Stack[-7])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1ab: @ irand(Stack[-4], Stack[-7])
0x1ac: Pop(0)
0x1ad: Push("all")
0x1ae: PushEmpty(string, int)
0x1af: Stack[-1] = Stack[-7]
0x1b0: Call2 0x4f1

0x1b1: Pop(1)
0x1b2: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b3: Pop(2)
0x1b4: @ WaitForAnimEnd(Stack[-3])
0x1b5: Pop(0)
0x1b6: Pop(0); Push((bool) Stack[-3] == 0)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: GOTO 0x1d6

0x1b9: GOTO 0x1cb

0x1ba: Push((int) 1)
0x1bb: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1bd: Push((int) 4)
0x1be: @ rand(Stack[-3], Stack[-1])
0x1bf: Pop(1)
0x1c0: Push((int) 1)
0x1c1: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1c2: @ Sleep(Stack[-1], Stack[-2])
0x1c3: Pop(1)
0x1c4: Pop(0); Push((bool) Stack[-1] == 0)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c6: GOTO 0x1d6

0x1c7: GOTO 0x1cb

0x1c8: Push(Stack[-6])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1ca: GOTO 0x1d6

0x1cb: PushEmpty(bool)
0x1cc: Call2 0x1d9

0x1cd: Pop(0)
0x1ce: Pop(1); Push((bool) Stack[-1] == 0)
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1d0: GOTO 0x1d6

0x1d1: @ ResetAAS()
0x1d2: Pop(0)
0x1d3: Push((int) 1)
0x1d4: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1d5: GOTO 0x198

0x1d6: @ ResetAAS()
0x1d7: Pop(0)
0x1d8: Return(); Pop(14)

0x1d9: Stack[-1] = (bool) 1
0x1da: Return(); Pop(0)

0x1db: @ StopAnimation()
0x1dc: Pop(0)
0x1dd: @ StopGroup0()
0x1de: Pop(0)
0x1df: Return(); Pop(0)

0x1e0: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x1e1: @ GetPosition(Stack[-6])
0x1e2: Pop(0)
0x1e3: @@ GetPosition(Stack[-5])
0x1e4: Pop(0)
0x1e5: @ GetDirection(Stack[-4])
0x1e6: Pop(0)
0x1e7: PushEmpty(cvector, cvector)
0x1e8: PushEmpty(cvector, cvector)
0x1e9: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x1ea: Call2 0x4a7

0x1eb: Pop(1)
0x1ec: Push((float)0.75)
0x1ed: Pop(1); Push(Stack[-8] * Stack[-1]);
0x1ee: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x1ef: Call2 0x4a7

0x1f0: Stack[-5] = Stack[-2]
0x1f1: Pop(2)
0x1f2: Push((int) 32)
0x1f3: Push((float)7000.0)
0x1f4: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x1f5: Pop(2)
0x1f6: Push((int) 100)
0x1f7: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x1f8: Push((int) 0)
0x1f9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1fb: Stack[-1] = (int) 0
0x1fc: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x1fd: Return(); Pop(12)

0x1fe: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x1ff: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x200: PushEmpty(cvector, float)
0x201: Stack[-1] = (float) 1.74533
0x202: Call2 0x1e0

0x203: Stack[-7] = Stack[-2]
0x204: Pop(2)
0x205: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x206: Push((float)2500.0)
0x207: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x209: PushEmpty(cvector, float)
0x20a: Stack[-1] = (float) 2.61799
0x20b: Call2 0x1e0

0x20c: Stack[-7] = Stack[-2]
0x20d: Pop(2)
0x20e: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x20f: Push((float)2500.0)
0x210: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x212: Push("Can't retreat, distance: ")
0x213: Pop(0); Push(Sqrt(Stack[-5]))
0x214: Pop(2); Push(Stack[-2] + Stack[-1]);
0x215: @ Trace(Stack[-1])
0x216: Pop(1)
0x217: Push((float)0.5)
0x218: @ Sleep(Stack[-1])
0x219: Pop(1)
0x21a: Return(); Pop(10)

0x21b: Push(CvectorIndex(Stack[-5], 0))
0x21c: Push(CvectorIndex(Stack[-6], 2))
0x21d: @ Rotate(Stack[-2], Stack[-1])
0x21e: Pop(2)
0x21f: PushEmpty(cvector)
0x220: Call2 0x31f

0x221: Pop(0)
0x222: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x223: Push((int) 120)
0x224: Push((float)0.5)
0x225: @ SetTimer(Stack[-2], Stack[-1])
0x226: Pop(2)
0x227: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x228: Push((int) 1)
0x229: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x22a: Pop(1)
0x22b: Push(Stack[-3])
0x22c: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x22d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x22e: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22f: GOTO 0x246

0x230: GOTO 0x244

0x231: PushEmpty(cvector, float)
0x232: Stack[-1] = (float) 2.61799
0x233: Call2 0x1e0

0x234: Stack[-4] = Stack[-2]
0x235: Pop(2)
0x236: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x237: Push((float)2500.0)
0x238: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x239: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x23a: PushEmpty(cvector)
0x23b: Call2 0x31f

0x23c: Pop(0)
0x23d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x23e: Push((int) 120)
0x23f: Push((float)0.5)
0x240: @ SetTimer(Stack[-2], Stack[-1])
0x241: Pop(2)
0x242: GOTO 0x244

0x243: GOTO 0x246

0x244: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x245: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x246: Return(); Pop(10)

0x247: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x248: Push((int) 120)
0x249: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x24a: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x24b: Return(); Pop(8)

0x24c: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x24d: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x24e: @ Stop()
0x24f: Pop(0)
0x250: Push((int) 1)
0x251: @ KillTimer(Stack[-1])
0x252: Pop(1)
0x253: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x254: GOTO 0x27a

0x255: @ GetDirection(Stack[-4])
0x256: Pop(0)
0x257: Push((float)7000.0)
0x258: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x259: Pop(1)
0x25a: PushEmpty(cvector, float)
0x25b: Stack[-1] = (float) 1.74533
0x25c: Call2 0x1e0

0x25d: Stack[-4] = Stack[-2]
0x25e: Pop(2)
0x25f: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x260: PushEmpty(bool)
0x261: Stack[-1] = (bool) 0
0x262: Push((float)2500.0)
0x263: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x264: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x265: PushEmpty(bool)
0x266: Stack[-1] = (bool) 1
0x267: Pop(0); Push(Stack[-5] * Stack[-5]);
0x268: Push((float)2.25)
0x269: Pop(2); Push(Stack[-2] * Stack[-1]);
0x26a: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x26c: PushEmpty(bool)
0x26d: Call2 0x28b

0x26e: Pop(0)
0x26f: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x270: Stack[-1] = (bool) 0
0x271: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x272: Stack[-1] = (bool) 1
0x273: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x274: @ Stop()
0x275: Pop(0)
0x276: PushEmpty(cvector)
0x277: Call2 0x31f

0x278: Pop(0)
0x279: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x27a: Return(); Pop(8)

0x27b: @ Stop()
0x27c: Pop(0)
0x27d: Push((int) 120)
0x27e: @ KillTimer(Stack[-1])
0x27f: Pop(1)
0x280: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x281: Return(); Pop(0)

0x282: PushEmpty()
0x283: PushEmpty()
0x284: Call2 0x27b

0x285: Pop(0)
0x286: PushEmpty(object)
0x287: Stack[-1] = Stack[-2]
0x288: Call2 0x56f

0x289: Pop(1)
0x28a: Return(); Pop(0)

0x28b: PushEmpty(cvector, cvector, cvector, cvector)
0x28c: @ GetDirection(Stack[-2])
0x28d: Pop(0)
0x28e: PushEmpty(cvector, object)
0x28f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x290: Call2 0x324

0x291: Stack[-3] = Stack[-2]
0x292: Pop(2)
0x293: PushEmpty(float, cvector, cvector)
0x294: Stack[-2] = Stack[-5]
0x295: Stack[-1] = Stack[-4]
0x296: Call2 0x4b1

0x297: Pop(2)
0x298: Push((float)-0.34202)
0x299: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x29a: Return(); Pop(4)

0x29b: PushEmpty()
0x29c: PushEmpty(object)
0x29d: Stack[-1] = Stack[-2]
0x29e: Call2 0x2a4

0x29f: Pop(1)
0x2a0: @ Hold()
0x2a1: Pop(0)
0x2a2: GOTO 0x2a0

0x2a3: Return(); Pop(0)

0x2a4: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x2a5: Pop(0); Push((bool) Stack[-21] == 0)
0x2a6: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2a7: PushEmpty(string)
0x2a8: Stack[-1] = "fdie"
0x2a9: Call2 0x2ff

0x2aa: Pop(1)
0x2ab: GOTO 0x2fe

0x2ac: @@ GetPosition(Stack[-10])
0x2ad: Pop(0)
0x2ae: @ GetPosition(Stack[-9])
0x2af: Pop(0)
0x2b0: @ GetDirection(Stack[-8])
0x2b1: Pop(0)
0x2b2: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x2b3: Push(CvectorIndex(Stack[-7], 0))
0x2b4: Push(CvectorIndex(Stack[-9], 0))
0x2b5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2b6: Push(CvectorIndex(Stack[-8], 2))
0x2b7: Push(CvectorIndex(Stack[-10], 2))
0x2b8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2b9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2ba: Push((int) 0)
0x2bb: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2bd: Stack[-6] = "fdie"
0x2be: GOTO 0x2c0

0x2bf: Stack[-6] = "bdie"
0x2c0: @ RemoveRTEnvelope()
0x2c1: Pop(0)
0x2c2: @ SetDeathState()
0x2c3: Pop(0)
0x2c4: @ Stop()
0x2c5: Pop(0)
0x2c6: @ StopAsync()
0x2c7: Pop(0)
0x2c8: Stack[-5] = Stack[-21]
0x2c9: Push("GetScriptProperty")
0x2ca: Push((int) 2)
0x2cb: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x2cc: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2cd: Push("Owner")
0x2ce: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x2cf: Pop(1)
0x2d0: Push(Stack[-4])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d2: Push("Owner")
0x2d3: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x2d4: Pop(1)
0x2d5: Pop(0); Push((bool) Stack[-5] == 0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d7: Stack[-5] = Stack[-21]
0x2d8: Push("@GetEyesHeight")
0x2d9: Push((int) 1)
0x2da: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x2db: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2dc: @@ GetEyesHeight(Stack[-2])
0x2dd: Pop(0)
0x2de: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2df: Push(CvectorIndex(Stack[-1], 1))
0x2e0: Stack[-1] = Stack[-3]
0x2e1: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2e2: Push("head")
0x2e3: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x2e4: Pop(1)
0x2e5: Stack[-3] = (bool) 1
0x2e6: GOTO 0x2e8

0x2e7: Stack[-3] = (bool) 0
0x2e8: PushEmpty(string)
0x2e9: Stack[-1] = Stack[-7]
0x2ea: Call2 0x478

0x2eb: Pop(1)
0x2ec: Push("all")
0x2ed: @ PlayAnimation(Stack[-1], Stack[-7])
0x2ee: Pop(1)
0x2ef: @ WaitForAnimEnd()
0x2f0: Pop(0)
0x2f1: Push(Stack[-3])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f3: @ StopAsync()
0x2f4: Pop(0)
0x2f5: Push("head")
0x2f6: @ UnlookAsync(Stack[-1])
0x2f7: Pop(1)
0x2f8: Push("all")
0x2f9: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x2fa: Pop(1)
0x2fb: @ RemoveEnvelope()
0x2fc: Pop(0)
0x2fd: Stack[-5] = 0
0x2fe: Return(); Pop(20)

0x2ff: PushEmpty()
0x300: @ RemoveRTEnvelope()
0x301: Pop(0)
0x302: @ SetDeathState()
0x303: Pop(0)
0x304: @ Stop()
0x305: Pop(0)
0x306: @ StopAsync()
0x307: Pop(0)
0x308: @ StopSecondaryAnimation()
0x309: Pop(0)
0x30a: PushEmpty(string)
0x30b: Stack[-1] = Stack[-2]
0x30c: Call2 0x478

0x30d: Pop(1)
0x30e: Push("all")
0x30f: @ PlayAnimation(Stack[-1], Stack[-2])
0x310: Pop(1)
0x311: @ WaitForAnimEnd()
0x312: Pop(0)
0x313: Push("all")
0x314: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x315: Pop(1)
0x316: @ RemoveEnvelope()
0x317: Pop(0)
0x318: Return(); Pop(0)

0x319: PushEmpty()
0x31a: Return(); Pop(0)

0x31b: PushEmpty()
0x31c: Return(); Pop(0)

0x31d: PushEmpty()
0x31e: Return(); Pop(0)

0x31f: PushEmpty(cvector, cvector)
0x320: @ GetPosition(Stack[-1])
0x321: Pop(0)
0x322: Stack[-3] = Stack[-1]
0x323: Return(); Pop(2)

0x324: PushEmpty(cvector, cvector, cvector, cvector)
0x325: @ GetPosition(Stack[-2])
0x326: Pop(0)
0x327: @@ GetPosition(Stack[-1])
0x328: Pop(0)
0x329: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x32a: Return(); Pop(4)

0x32b: PushEmpty(bool, bool)
0x32c: Push("HasProperty")
0x32d: Push((int) 2)
0x32e: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x32f: Pop(1); Push((bool) Stack[-1] == 0)
0x330: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x331: Stack[-5] = (bool) 0
0x332: Return(); Pop(2)

0x333: @@ HasProperty(Stack[-3], Stack[-1])
0x334: Pop(0)
0x335: Stack[-5] = Stack[-1]
0x336: Return(); Pop(2)

0x337: PushEmpty(bool, bool)
0x338: @@ IsDead(Stack[-1])
0x339: Pop(0)
0x33a: Stack[-4] = Stack[-1]
0x33b: Return(); Pop(2)

0x33c: PushEmpty(object, object, object, object)
0x33d: Pop(0); Push((bool) Stack[-5] == 0)
0x33e: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x33f: Stack[-6] = (bool) 0
0x340: Return(); Pop(4)

0x341: PushEmpty(bool)
0x342: Stack[-1] = (bool) 0
0x343: Push("IsDead")
0x344: Push((int) 1)
0x345: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x346: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x347: PushEmpty(bool, object)
0x348: Stack[-1] = Stack[-8]
0x349: Call2 0x337

0x34a: Pop(1)
0x34b: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x34c: Stack[-1] = (bool) 1
0x34d: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34e: Stack[-6] = (bool) 0
0x34f: Return(); Pop(4)

0x350: @ GetScene(Stack[-2])
0x351: Pop(0)
0x352: Pop(0); Push((bool) Stack[-2] == 0)
0x353: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x354: Stack[-6] = (bool) 0
0x355: Return(); Pop(4)

0x356: @@ GetScene(Stack[-1])
0x357: Pop(0)
0x358: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x359: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x35a: Stack[-6] = (bool) 0
0x35b: Return(); Pop(4)

0x35c: Stack[-6] = (bool) 1
0x35d: Return(); Pop(4)

0x35e: Stack[-1] = 0
0x35f: Stack[-2] = 0
0x360: PushEmpty(int, int)
0x361: PushEmpty(bool, object)
0x362: Stack[-1] = Stack[-5]
0x363: Call2 0x33c

0x364: Pop(1)
0x365: Pop(1); Push((bool) Stack[-1] == 0)
0x366: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x367: Stack[-4] = (bool) 0
0x368: Return(); Pop(2)

0x369: PushEmpty(bool, object, string)
0x36a: Stack[-2] = Stack[-6]
0x36b: Stack[-1] = "noaccess"
0x36c: Call2 0x32b

0x36d: Pop(2)
0x36e: Pop(1); Push((bool) Stack[-1] == 0)
0x36f: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x370: Stack[-4] = (bool) 1
0x371: Return(); Pop(2)

0x372: Push("noaccess")
0x373: @@ GetProperty(Stack[-1], Stack[-2])
0x374: Pop(1)
0x375: Push((int) 0)
0x376: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x377: Return(); Pop(2)

0x378: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x379: Pop(0); Push((bool) Stack[-15] == 0)
0x37a: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x37b: Return(); Pop(14)

0x37c: @ IsDead(Stack[-7])
0x37d: Pop(0)
0x37e: Push(Stack[-7])
0x37f: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x380: Return(); Pop(14)

0x381: @ GetSecondaryAnimationType(Stack[-6])
0x382: Pop(0)
0x383: Push((int) 0)
0x384: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x385: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x386: Return(); Pop(14)

0x387: @@ GetPosition(Stack[-5])
0x388: Pop(0)
0x389: @ GetPosition(Stack[-4])
0x38a: Pop(0)
0x38b: @ GetDirection(Stack[-3])
0x38c: Pop(0)
0x38d: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x38e: Push(CvectorIndex(Stack[-2], 0))
0x38f: Push(CvectorIndex(Stack[-4], 0))
0x390: Pop(2); Push(Stack[-2] * Stack[-1]);
0x391: Push(CvectorIndex(Stack[-3], 2))
0x392: Push(CvectorIndex(Stack[-5], 2))
0x393: Pop(2); Push(Stack[-2] * Stack[-1]);
0x394: Pop(2); Push(Stack[-2] + Stack[-1]);
0x395: Push((int) 0)
0x396: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x397: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x398: Stack[-1] = "fhit"
0x399: GOTO 0x39b

0x39a: Stack[-1] = "bhit"
0x39b: Push("hit_react")
0x39c: Push("1")
0x39d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x39e: Push("2")
0x39f: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3a0: Push((int) -10)
0x3a1: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3a2: Pop(4)
0x3a3: Return(); Pop(14)

0x3a4: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x3a5: PushEmpty(bool)
0x3a6: Stack[-1] = (bool) 0
0x3a7: PushEmpty(bool)
0x3a8: Stack[-1] = (bool) 0
0x3a9: Push(Stack[-23])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ab: Push((int) 4)
0x3ac: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x3ad: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ae: Stack[-1] = (bool) 1
0x3af: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b0: Push((int) 5)
0x3b1: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b3: Stack[-1] = (bool) 1
0x3b4: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3b5: PushEmpty(cvector, cvector)
0x3b6: PushEmpty(cvector, object)
0x3b7: Stack[-1] = Stack[-25]
0x3b8: Call2 0x324

0x3b9: Stack[-3] = Stack[-2]
0x3ba: Pop(2)
0x3bb: Call2 0x4a7

0x3bc: Stack[-11] = Stack[-2]
0x3bd: Pop(2)
0x3be: @ CreateVectorVector(Stack[-8])
0x3bf: Pop(0)
0x3c0: Stack[-7] = (int) 1
0x3c1: Push("hit")
0x3c2: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3c3: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x3c4: Pop(1)
0x3c5: Pop(0); Push((bool) Stack[-6] == 0)
0x3c6: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c7: GOTO 0x3d1

0x3c8: Pop(0); Push(Stack[-4] | Stack[-9]);
0x3c9: Push((float)0.70711)
0x3ca: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cc: @@ add(Stack[-5])
0x3cd: Pop(0)
0x3ce: Push((int) 1)
0x3cf: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x3d0: GOTO 0x3c1

0x3d1: @@ size(Stack[-3])
0x3d2: Pop(0)
0x3d3: Push(Stack[-3])
0x3d4: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3d5: @ irand(Stack[-2], Stack[-3])
0x3d6: Pop(0)
0x3d7: @@ get(Stack[-1], Stack[-2])
0x3d8: Pop(0)
0x3d9: PushEmpty(object, int, float, cvector, cvector)
0x3da: Stack[-5] = Stack[-26]
0x3db: Stack[-4] = Stack[-25]
0x3dc: Stack[-3] = Stack[-24]
0x3dd: Stack[-2] = Stack[-6]
0x3de: Stack[-1] = -Stack[-14]; Pop(0);
0x3df: Call2 0x3e8

0x3e0: Pop(5)
0x3e1: Return(); Pop(18)

0x3e2: Stack[-8] = 0
0x3e3: PushEmpty(object)
0x3e4: Stack[-1] = Stack[-22]
0x3e5: Call2 0x378

0x3e6: Pop(1)
0x3e7: Return(); Pop(18)

0x3e8: PushEmpty(object, object, object, object)
0x3e9: @ GetScene(Stack[-2])
0x3ea: Pop(0)
0x3eb: Push("scripted")
0x3ec: Push("blood_dir.xml")
0x3ed: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x3ee: Pop(2)
0x3ef: PushEmpty(object)
0x3f0: Stack[-1] = Stack[-10]
0x3f1: Call2 0x378

0x3f2: Pop(1)
0x3f3: Return(); Pop(4)

0x3f4: Stack[-1] = 0
0x3f5: Stack[-2] = 0
0x3f6: PushEmpty(bool, bool)
0x3f7: @ IsLoaded(Stack[-1])
0x3f8: Pop(0)
0x3f9: Stack[-3] = Stack[-1]
0x3fa: Return(); Pop(2)

0x3fb: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3fc: @@ GetPosition(Stack[-8])
0x3fd: Pop(0)
0x3fe: @@ GetEyesHeight(Stack[-9])
0x3ff: Pop(0)
0x400: Push(CvectorIndex(Stack[-8], 1))
0x401: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x402: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x403: @ GetPosition(Stack[-7])
0x404: Pop(0)
0x405: @ GetEyesHeight(Stack[-9])
0x406: Pop(0)
0x407: Push(CvectorIndex(Stack[-7], 1))
0x408: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x409: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x40a: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x40b: Push(CvectorIndex(Stack[-6], 1))
0x40c: Stack[-1] = (int) 0
0x40d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x40e: Pop(0); Push(Stack[-6] | Stack[-6]);
0x40f: Pop(1); Push(Sqrt(Stack[-1]))
0x410: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x411: Stack[-5] = -Stack[-6]; Pop(0);
0x412: Pop(0); Push(Stack[-6] * Stack[-19]);
0x413: PushEmpty(cvector, cvector)
0x414: Push(CVector(0.0, 1.0, 0.0))
0x415: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x416: Call2 0x4a7

0x417: Pop(1)
0x418: Push((int) 25)
0x419: Pop(2); Push(Stack[-2] * Stack[-1]);
0x41a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x41b: Push(CVector(0.0, 10.0, 0.0))
0x41c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x41d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x41e: @ IsOverrideActive(Stack[-2])
0x41f: Pop(0)
0x420: Push(Stack[-2])
0x421: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x422: Stack[-21] = (bool) 0
0x423: Return(); Pop(18)

0x424: @ StopWorld()
0x425: Pop(0)
0x426: Push((bool) 1)
0x427: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x428: Pop(1)
0x429: Push(CvectorIndex(Stack[-4], 0))
0x42a: Push(CvectorIndex(Stack[-5], 2))
0x42b: @ Rotate(Stack[-2], Stack[-1])
0x42c: Pop(2)
0x42d: PushEmpty(bool)
0x42e: Call2 0x539

0x42f: Pop(0)
0x430: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x431: GOTO 0x43a

0x432: Push("head")
0x433: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x434: Pop(1)
0x435: Push(Stack[-1])
0x436: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x437: Push("head")
0x438: @ LookAsyncCamera(Stack[-1])
0x439: Pop(1)
0x43a: @ CameraWaitForPlayFinish()
0x43b: Pop(0)
0x43c: @ ResumeWorld()
0x43d: Pop(0)
0x43e: Stack[-21] = (bool) 1
0x43f: Return(); Pop(18)

0x440: PushEmpty(bool, bool)
0x441: Push((bool) 1)
0x442: @ CameraSwitchToNormal(Stack[-1])
0x443: Pop(1)
0x444: PushEmpty(bool)
0x445: Call2 0x539

0x446: Pop(0)
0x447: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x448: GOTO 0x451

0x449: Push("head")
0x44a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x44b: Pop(1)
0x44c: Push(Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x44e: Push("head")
0x44f: @ UnlookAsync(Stack[-1])
0x450: Pop(1)
0x451: Return(); Pop(2)

0x452: PushEmpty(bool, float, float, bool, float, float)
0x453: @ lshHasAnimation(Stack[-3], Stack[-7])
0x454: Pop(0)
0x455: Push(Stack[-3])
0x456: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x457: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x458: Pop(0)
0x459: Push((bool) 0)
0x45a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x45b: Pop(1)
0x45c: GOTO 0x461

0x45d: Push("Can't find lsh animation : ")
0x45e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x45f: @ Trace(Stack[-1])
0x460: Pop(1)
0x461: Return(); Pop(6)

0x462: PushEmpty(bool, float, float, bool, float, float)
0x463: @ lshHasAnimation(Stack[-3], Stack[-8])
0x464: Pop(0)
0x465: Push(Stack[-3])
0x466: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x467: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x468: Pop(0)
0x469: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x46a: Pop(0)
0x46b: GOTO 0x470

0x46c: Push("Can't find lsh animation : ")
0x46d: Pop(1); Push(Stack[-1] + Stack[-9]);
0x46e: @ Trace(Stack[-1])
0x46f: Pop(1)
0x470: Return(); Pop(6)

0x471: PushEmpty(bool)
0x472: Call2 0x539

0x473: Pop(0)
0x474: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x475: @ lshStopSpeech()
0x476: Pop(0)
0x477: Return(); Pop(0)

0x478: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x479: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x47a: Pop(0)
0x47b: Pop(0); Push((bool) Stack[-8] == 0)
0x47c: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x47d: Stack[-7] = (int) 0
0x47e: Push((int) 1)
0x47f: Pop(1); Push(Stack[-8] + Stack[-1]);
0x480: Pop(1); Push(Stack[-18] + Stack[-1]);
0x481: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x482: Pop(1)
0x483: Pop(0); Push((bool) Stack[-6] == 0)
0x484: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x485: GOTO 0x489

0x486: Push((int) 1)
0x487: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x488: GOTO 0x47e

0x489: Pop(0); Push((bool) Stack[-7] == 0)
0x48a: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x48b: Return(); Pop(16)

0x48c: @ irand(Stack[-5], Stack[-7])
0x48d: Pop(0)
0x48e: Push((int) 1)
0x48f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x490: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x491: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x492: Pop(0)
0x493: Push(Stack[-4])
0x494: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x495: @ GetEyesHeight(Stack[-3])
0x496: Pop(0)
0x497: @ GetDirection(Stack[-2])
0x498: Pop(0)
0x499: Push((int) 50)
0x49a: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x49b: Push(CvectorIndex(Stack[-1], 1))
0x49c: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x49d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x49e: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x49f: Pop(0)
0x4a0: Return(); Pop(16)

0x4a1: PushEmpty(object, object)
0x4a2: @ self(Stack[-1])
0x4a3: Pop(0)
0x4a4: Stack[-3] = Stack[-1]
0x4a5: Return(); Pop(2)

0x4a6: Stack[-1] = 0
0x4a7: PushEmpty(float, float)
0x4a8: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4a9: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x4aa: Push((float)0.0)
0x4ab: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4ac: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4ad: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x4ae: Return(); Pop(2)

0x4af: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x4b0: Return(); Pop(2)

0x4b1: PushEmpty()
0x4b2: Pop(0); Push(Stack[-2] | Stack[-1]);
0x4b3: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4b4: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4b5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4b6: Pop(1); Push(Sqrt(Stack[-1]))
0x4b7: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x4b8: Return(); Pop(0)

0x4b9: PushEmpty(object, object)
0x4ba: @ CreateIntVector(Stack[-1])
0x4bb: Pop(0)
0x4bc: @@ add(Stack[-4])
0x4bd: Pop(0)
0x4be: @@ add(Stack[-3])
0x4bf: Pop(0)
0x4c0: Push((int) 3)
0x4c1: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x4c2: Pop(1)
0x4c3: Return(); Pop(2)

0x4c4: Stack[-1] = 0
0x4c5: PushEmpty(int, int, bool, int, int, bool)
0x4c6: @@ GetItemID(Stack[-3])
0x4c7: Pop(0)
0x4c8: Push("Category")
0x4c9: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x4ca: Pop(1)
0x4cb: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x4cc: Pop(0)
0x4cd: Pop(0); Push((bool) Stack[-1] == 0)
0x4ce: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4cf: @@ DropItems(Stack[-8], Stack[-7])
0x4d0: Pop(0)
0x4d1: GOTO 0x4d7

0x4d2: PushEmpty(int, int)
0x4d3: Stack[-2] = Stack[-5]
0x4d4: Stack[-1] = Stack[-9]
0x4d5: Call2 0x4b9

0x4d6: Pop(2)
0x4d7: Return(); Pop(6)

0x4d8: PushEmpty(object, object)
0x4d9: @ CreateInvItem(Stack[-1])
0x4da: Pop(0)
0x4db: @@ SetItemName(Stack[-4])
0x4dc: Pop(0)
0x4dd: PushEmpty(object, object, int)
0x4de: Stack[-3] = Stack[-8]
0x4df: Stack[-2] = Stack[-4]
0x4e0: Stack[-1] = Stack[-6]
0x4e1: Call2 0x4c5

0x4e2: Pop(3)
0x4e3: Return(); Pop(2)

0x4e4: Stack[-1] = 0
0x4e5: PushEmpty(object, object)
0x4e6: @ FindActor(Stack[-1], Stack[-4])
0x4e7: Pop(0)
0x4e8: Pop(0); Push((bool) Stack[-1] == 0)
0x4e9: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4ea: Stack[-5] = (bool) 0
0x4eb: Return(); Pop(2)

0x4ec: @ Trigger(Stack[-1], Stack[-3])
0x4ed: Pop(0)
0x4ee: Stack[-5] = (bool) 1
0x4ef: Return(); Pop(2)

0x4f0: Stack[-1] = 0
0x4f1: PushEmpty(string, string)
0x4f2: Stack[-1] = "idle"
0x4f3: Push(Stack[-3])
0x4f4: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4f5: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x4f6: Stack[-4] = Stack[-1]
0x4f7: Return(); Pop(2)

0x4f8: PushEmpty(int, bool, int, bool)
0x4f9: Stack[-2] = (int) 0
0x4fa: Push("all")
0x4fb: PushEmpty(string, int)
0x4fc: Stack[-1] = Stack[-5]
0x4fd: Call2 0x4f1

0x4fe: Pop(1)
0x4ff: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x500: Pop(2)
0x501: Pop(0); Push((bool) Stack[-1] == 0)
0x502: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x503: GOTO 0x507

0x504: Push((int) 1)
0x505: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x506: GOTO 0x4fa

0x507: Stack[-5] = Stack[-2]
0x508: Return(); Pop(4)

0x509: PushEmpty()
0x50a: Push("playsound")
0x50b: Push("giveitem")
0x50c: @ TriggerWorld(Stack[-2], Stack[-1])
0x50d: Pop(2)
0x50e: Return(); Pop(0)

0x50f: PushEmpty()
0x510: Push("k3q04LopuhTalk")
0x511: Push((int) 1)
0x512: @ SetVariable(Stack[-2], Stack[-1])
0x513: Pop(2)
0x514: Return(); Pop(0)

0x515: PushEmpty()
0x516: Push("powder is given")
0x517: @ Trace(Stack[-1])
0x518: Pop(1)
0x519: PushEmpty(object, string, int)
0x51a: Stack[-3] = Stack[-5]
0x51b: Stack[-2] = "powder"
0x51c: Stack[-1] = (int) 1
0x51d: Call2 0x4d8

0x51e: Pop(3)
0x51f: Return(); Pop(0)

0x520: PushEmpty(int, int)
0x521: Push("branch")
0x522: @ GetVariable(Stack[-1], Stack[-2])
0x523: Pop(1)
0x524: Push((int) 0)
0x525: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x526: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x527: Stack[-3] = (int) 1
0x528: Return(); Pop(2)

0x529: GOTO 0x52f

0x52a: Push((int) 1)
0x52b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x52c: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x52d: Stack[-3] = (int) 2
0x52e: Return(); Pop(2)

0x52f: Stack[-3] = (int) 3
0x530: Return(); Pop(2)

0x531: Stack[-1] = (int) 515560
0x532: Return(); Pop(0)

0x533: Stack[-1] = (int) 503345
0x534: Return(); Pop(0)

0x535: Stack[-1] = "ui/NPC_Citizen3.png"
0x536: Return(); Pop(0)

0x537: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x538: Return(); Pop(0)

0x539: Stack[-1] = (bool) 0
0x53a: Return(); Pop(0)

0x53b: PushEmpty(object, object)
0x53c: @ GetScene(Stack[-1])
0x53d: Pop(0)
0x53e: PushEmpty(object)
0x53f: Call2 0x4a1

0x540: Pop(0)
0x541: @@ RemoveStationaryActor(Stack[-1])
0x542: Pop(1)
0x543: Return(); Pop(2)

0x544: Stack[-1] = 0
0x545: PushEmpty()
0x546: PushEmpty()
0x547: Call2 0x53b

0x548: Pop(0)
0x549: PushEmpty(object)
0x54a: Stack[-1] = Stack[-2]
0x54b: Push(-1, 0); TaskCall(6)
0x54c: Call2 0x29b

0x54d: Pop(-1, 0); TaskReturn
0x54e: Pop(1)
0x54f: Return(); Pop(0)

0x550: PushEmpty()
0x551: PushEmpty(object, int, float)
0x552: Stack[-3] = Stack[-7]
0x553: Stack[-2] = Stack[-6]
0x554: Stack[-1] = Stack[-5]
0x555: Call2 0x3a4

0x556: Pop(3)
0x557: Return(); Pop(0)

0x558: PushEmpty()
0x559: PushEmpty(object, int, float, cvector, cvector)
0x55a: Stack[-5] = Stack[-11]
0x55b: Stack[-4] = Stack[-10]
0x55c: Stack[-3] = Stack[-9]
0x55d: Stack[-2] = Stack[-7]
0x55e: Stack[-1] = Stack[-6]
0x55f: Call2 0x3e8

0x560: Pop(5)
0x561: Return(); Pop(0)

0x562: PushEmpty(float, float)
0x563: Push("health")
0x564: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x565: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x566: Push("health")
0x567: @ GetProperty(Stack[-1], Stack[-2])
0x568: Pop(1)
0x569: Push((int) 0)
0x56a: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x56b: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x56c: @ SignalDeath(Stack[-4])
0x56d: Pop(0)
0x56e: Return(); Pop(2)

0x56f: PushEmpty()
0x570: PushEmpty(object)
0x571: Stack[-1] = Stack[-2]
0x572: Call2 0x545

0x573: Pop(1)
0x574: Return(); Pop(0)

0x575: PushEmpty()
0x576: PushEmpty(bool, object)
0x577: Stack[-1] = Stack[-3]
0x578: Call2 0x360

0x579: Stack[-4] = Stack[-2]
0x57a: Pop(2)
0x57b: Return(); Pop(0)

0x57c: PushEmpty()
0x57d: PushEmpty(object)
0x57e: Stack[-1] = Stack[-2]
0x57f: Push(-1, 3); TaskCall(5)
0x580: Call2 0x1fe

0x581: Pop(-1, 3); TaskReturn
0x582: Pop(1)
0x583: Return(); Pop(0)

0x584: PushEmpty(bool, bool)
0x585: @ IsPlayerActor(Stack[-3], Stack[-1])
0x586: Pop(0)
0x587: Push(Stack[-1])
0x588: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x589: PushEmpty(bool, string, string)
0x58a: Stack[-2] = "quest_k3_04"
0x58b: Stack[-1] = "boy_attacked"
0x58c: Call2 0x4e5

0x58d: Pop(3)
0x58e: Return(); Pop(2)

