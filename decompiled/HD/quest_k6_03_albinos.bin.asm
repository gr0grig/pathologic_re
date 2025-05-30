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
	quest_k6_03
	abinos_unload
	player
	head
	RemoveStationaryActor
	pt_k6q03_albinos_path
	GetLocator
	albinos_retreated
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
	fire
	bullet
	phys
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	health
	armor
	armor_
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
	reputation
	ui/NPC_Albinos.png
	ui/NPC_Albinos_b.png
	completed
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch

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
	Sleep (1 args)
	Hold (0 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetScene (1 args)
	GetVariable (2 args)
	MovePoint (3 args)
	Rotate (3 args)
	Stop (0 args)
	GetPosition (1 args)
	GetDirection (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	FindDirLength (3 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	IsPlayerActor (2 args)
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
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	ReportHit (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x250
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x186 Vars = (object)
		EVENT_17 Op = 0x198 Vars = (object)
		EVENT_41 Op = 0x19a Vars = (object)
		EVENT_6 Op = 0x1a3 Vars = ()
		EVENT_7 Op = 0x1d5 Vars = (int)
	GTASK_3 Vars = (bool, int) Params = 0
		EVENT_17 Op = 0x26b Vars = (object)
		EVENT_41 Op = 0x26d Vars = (object)
		EVENT_6 Op = 0x276 Vars = ()
	GTASK_4 Vars = (object, cvector, bool) Params = 2
		EVENT_6 Op = 0x2c7 Vars = ()
		EVENT_7 Op = 0x2cf Vars = (int)
		EVENT_41 Op = 0x37e Vars = (object)
	GTASK_5  Params = 1
		EVENT_22 Op = 0x415 Vars = (object, int, float, float)
		EVENT_16 Op = 0x417 Vars = (object, string)
		EVENT_41 Op = 0x419 Vars = (object)

Events:
EVENT_22 Op = 0x6ea Vars = (object, int, float, float)
EVENT_43 Op = 0x6f2 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x6fc Vars = (object, string)
EVENT_41 Op = 0x709 Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x530

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x657

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x655

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x659

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x65b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x6b7

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
0x41: Call2 0x575

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
0x4f: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x50: PushEmpty(object, object)
0x51: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53: Call2 0x677

0x54: Pop(2)
0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x89

0x58: Pop(1)
0x59: Push((int) 526744)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 528787)
0x5f: Push((int) 30200)
0x60: Push((int) 30199)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 528791)
0x64: Push((int) 30200)
0x65: Push((int) 30203)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x65d

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x587

0x77: Pop(1)
0x78: GOTO 0x6f

0x79: GOTO 0x88

0x7a: Push("all")
0x7b: Push("idle")
0x7c: @ PlayAnimation(Stack[-2], Stack[-1])
0x7d: Pop(2)
0x7e: @ WaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: Push("all")
0x84: Push("idle")
0x85: @ PlayAnimation(Stack[-2], Stack[-1])
0x86: Pop(2)
0x87: GOTO 0x7e

0x88: Return(); Pop(0)

0x89: PushEmpty()
0x8a: PushEmpty(bool)
0x8b: Call2 0x65d

0x8c: Pop(0)
0x8d: Pop(1); Push((bool) Stack[-1] == 0)
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: Return(); Pop(0)

0x90: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: Return(); Pop(0)

0x93: PushEmpty(string, bool)
0x94: Stack[-2] = Stack[-3]
0x95: Push("")
0x96: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x97: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x98: Stack[-1] = (bool) 0
0x99: GOTO 0x9b

0x9a: Stack[-1] = (bool) 1
0x9b: Call2 0x597

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x5b1

0xa4: Pop(0)
0xa5: Push((int) 28021)
0xa6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x677

0xac: Pop(2)
0xad: PushEmpty(string)
0xae: Stack[-1] = "Neutral"
0xaf: Call2 0x89

0xb0: Pop(1)
0xb1: Push((int) 526744)
0xb2: @@ SetMessage(Stack[-1])
0xb3: Pop(1)
0xb4: @@ ClearReplies()
0xb5: Pop(0)
0xb6: Push((int) 528787)
0xb7: Push((int) 30200)
0xb8: Push((int) 30199)
0xb9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba: Pop(3)
0xbb: Push((int) 528791)
0xbc: Push((int) 30200)
0xbd: Push((int) 30203)
0xbe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf: Pop(3)
0xc0: Return(); Pop(0)

0xc1: Push((int) 30200)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xc4: PushEmpty(string)
0xc5: Stack[-1] = "Neutral"
0xc6: Call2 0x89

0xc7: Pop(1)
0xc8: Push((int) 528788)
0xc9: @@ SetMessage(Stack[-1])
0xca: Pop(1)
0xcb: @@ ClearReplies()
0xcc: Pop(0)
0xcd: Push((int) 528789)
0xce: Push((int) 30202)
0xcf: Push((int) 30201)
0xd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1: Pop(3)
0xd2: Push((int) 541036)
0xd3: Push((int) 30202)
0xd4: Push((int) 43130)
0xd5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6: Pop(3)
0xd7: Return(); Pop(0)

0xd8: Push((int) 30202)
0xd9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xdb: PushEmpty(string)
0xdc: Stack[-1] = "Neutral"
0xdd: Call2 0x89

0xde: Pop(1)
0xdf: Push((int) 528790)
0xe0: @@ SetMessage(Stack[-1])
0xe1: Pop(1)
0xe2: @@ ClearReplies()
0xe3: Pop(0)
0xe4: Push((int) 526745)
0xe5: Push((int) 28023)
0xe6: Push((int) 28022)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Push((int) 526752)
0xea: Push((int) 28030)
0xeb: Push((int) 28029)
0xec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed: Pop(3)
0xee: Return(); Pop(0)

0xef: Push((int) 28030)
0xf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xf2: PushEmpty(string)
0xf3: Stack[-1] = "Neutral"
0xf4: Call2 0x89

0xf5: Pop(1)
0xf6: Push((int) 526753)
0xf7: @@ SetMessage(Stack[-1])
0xf8: Pop(1)
0xf9: @@ ClearReplies()
0xfa: Pop(0)
0xfb: Push((int) 526754)
0xfc: Push((int) -1)
0xfd: Push((int) 28031)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Push((int) 528786)
0x101: Push((int) -1)
0x102: Push((int) 30198)
0x103: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104: Pop(3)
0x105: Return(); Pop(0)

0x106: Push((int) 28023)
0x107: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x109: PushEmpty(string)
0x10a: Stack[-1] = "Neutral"
0x10b: Call2 0x89

0x10c: Pop(1)
0x10d: Push((int) 526746)
0x10e: @@ SetMessage(Stack[-1])
0x10f: Pop(1)
0x110: @@ ClearReplies()
0x111: Pop(0)
0x112: Push((int) 528792)
0x113: Push((int) 30206)
0x114: Push((int) 30205)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: Push((int) 541037)
0x118: Push((int) 43133)
0x119: Push((int) 43132)
0x11a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b: Pop(3)
0x11c: Return(); Pop(0)

0x11d: Push((int) 43133)
0x11e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x120: PushEmpty(string)
0x121: Stack[-1] = "Neutral"
0x122: Call2 0x89

0x123: Pop(1)
0x124: Push((int) 541038)
0x125: @@ SetMessage(Stack[-1])
0x126: Pop(1)
0x127: @@ ClearReplies()
0x128: Pop(0)
0x129: Push((int) 541039)
0x12a: Push((int) 30206)
0x12b: Push((int) 43134)
0x12c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d: Pop(3)
0x12e: Push((int) 541040)
0x12f: Push((int) 30206)
0x130: Push((int) 43135)
0x131: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x132: Pop(3)
0x133: Return(); Pop(0)

0x134: Push((int) 30206)
0x135: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x136: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x137: PushEmpty(string)
0x138: Stack[-1] = "Neutral"
0x139: Call2 0x89

0x13a: Pop(1)
0x13b: Push((int) 528793)
0x13c: @@ SetMessage(Stack[-1])
0x13d: Pop(1)
0x13e: @@ ClearReplies()
0x13f: Pop(0)
0x140: Push((int) 526747)
0x141: Push((int) 28025)
0x142: Push((int) 28024)
0x143: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x144: Pop(3)
0x145: Return(); Pop(0)

0x146: Push((int) 28025)
0x147: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x149: PushEmpty(string)
0x14a: Stack[-1] = "Neutral"
0x14b: Call2 0x89

0x14c: Pop(1)
0x14d: Push((int) 526748)
0x14e: @@ SetMessage(Stack[-1])
0x14f: Pop(1)
0x150: @@ ClearReplies()
0x151: Pop(0)
0x152: Push((int) 526749)
0x153: Push((int) 28027)
0x154: Push((int) 28026)
0x155: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x156: Pop(3)
0x157: Return(); Pop(0)

0x158: Push((int) 28027)
0x159: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15a: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x15b: PushEmpty(string)
0x15c: Stack[-1] = "Neutral"
0x15d: Call2 0x89

0x15e: Pop(1)
0x15f: Push((int) 526750)
0x160: @@ SetMessage(Stack[-1])
0x161: Pop(1)
0x162: @@ ClearReplies()
0x163: Pop(0)
0x164: Push((int) 526751)
0x165: Push((int) -1)
0x166: Push((int) 28028)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: Push((int) 528794)
0x16a: Push((int) -1)
0x16b: Push((int) 30207)
0x16c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16d: Pop(3)
0x16e: Return(); Pop(0)

0x16f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x170: PushEmpty(bool)
0x171: Call2 0x65d

0x172: Pop(0)
0x173: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x174: @ lshStopAnimation()
0x175: Pop(0)
0x176: GOTO 0x179

0x177: @ StopAnimation()
0x178: Pop(0)
0x179: Return(); Pop(0)

0x17a: GOTO 0xa0

0x17b: Return(); Pop(0)

0x17c: PushEmpty(float, float)
0x17d: Stack[-2] = (int) 300
0x17e: Stack[-1] = (int) 100
0x17f: Call2 0x1ab

0x180: Pop(2)
0x181: Push((int) 3)
0x182: @ Sleep(Stack[-1])
0x183: Pop(1)
0x184: GOTO 0x17c

0x185: Return(); Pop(0)

0x186: PushEmpty()
0x187: PushEmpty()
0x188: Call2 0x1ec

0x189: Pop(0)
0x18a: PushEmpty(int, object)
0x18b: Stack[-1] = Stack[-3]
0x18c: Push(-2, 1); TaskCall(0)
0x18d: Call2 0x0

0x18e: Pop(-2, 1); TaskReturn
0x18f: Pop(2)
0x190: PushEmpty(object, bool)
0x191: Stack[-2] = Stack[-3]
0x192: Stack[-1] = (bool) 0
0x193: Push(-2, 3); TaskCall(4)
0x194: Call2 0x2bb

0x195: Pop(-2, 3); TaskReturn
0x196: Pop(2)
0x197: Return(); Pop(0)

0x198: PushEmpty()
0x199: Return(); Pop(0)

0x19a: PushEmpty()
0x19b: PushEmpty()
0x19c: Call2 0x1ec

0x19d: Pop(0)
0x19e: PushEmpty(object)
0x19f: Stack[-1] = Stack[-2]
0x1a0: Call2 0x709

0x1a1: Pop(1)
0x1a2: Return(); Pop(0)

0x1a3: PushEmpty(bool, string, string)
0x1a4: Stack[-2] = "quest_k6_03"
0x1a5: Stack[-1] = "abinos_unload"
0x1a6: Call2 0x649

0x1a7: Pop(3)
0x1a8: @ Hold()
0x1a9: Pop(0)
0x1aa: Return(); Pop(0)

0x1ab: PushEmpty()
0x1ac: PushEmpty(bool)
0x1ad: Call2 0x52b

0x1ae: Pop(0)
0x1af: Pop(1); Push((bool) Stack[-1] == 0)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b1: Return(); Pop(0)

0x1b2: Push("player")
0x1b3: @ FindActor(Stack[-4], Stack[-1])
0x1b4: Pop(1)
0x1b5: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1b6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1b7: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1b8: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1b9: Push((int) 10)
0x1ba: Push((float)1.0)
0x1bb: @ SetTimer(Stack[-2], Stack[-1])
0x1bc: Pop(2)
0x1bd: PushEmpty()
0x1be: Call2 0x1fa

0x1bf: Pop(0)
0x1c0: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c2: Push((int) 10)
0x1c3: @ KillTimer(Stack[-1])
0x1c4: Pop(1)
0x1c5: Return(); Pop(0)

0x1c6: PushEmpty(float, float)
0x1c7: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c9: Stack[-3] = (bool) 0
0x1ca: Return(); Pop(2)

0x1cb: PushEmpty(float, object)
0x1cc: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1cd: Call2 0x435

0x1ce: Pop(1)
0x1cf: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1d0: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1d2: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1d3: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1d4: Return(); Pop(2)

0x1d5: PushEmpty()
0x1d6: Push((int) 10)
0x1d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1d9: PushEmpty(bool)
0x1da: Call2 0x1c6

0x1db: Pop(0)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1dd: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1de: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1df: PushEmpty(object)
0x1e0: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1e1: Call2 0x5a6

0x1e2: Pop(1)
0x1e3: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1e4: GOTO 0x1eb

0x1e5: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1e6: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e7: Push("head")
0x1e8: @ UnlookAsync(Stack[-1])
0x1e9: Pop(1)
0x1ea: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1eb: Return(); Pop(0)

0x1ec: PushEmpty()
0x1ed: Call2 0x24b

0x1ee: Pop(0)
0x1ef: Push((int) 10)
0x1f0: @ KillTimer(Stack[-1])
0x1f1: Pop(1)
0x1f2: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f4: Push("head")
0x1f5: @ UnlookAsync(Stack[-1])
0x1f6: Pop(1)
0x1f7: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1f8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1f9: Return(); Pop(0)

0x1fa: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1fb: @ WaitForAnimEnd()
0x1fc: Pop(0)
0x1fd: PushEmpty(bool)
0x1fe: Call2 0x52b

0x1ff: Pop(0)
0x200: Pop(1); Push((bool) Stack[-1] == 0)
0x201: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x202: Return(); Pop(14)

0x203: PushEmpty(int)
0x204: Call2 0x666

0x205: Stack[-8] = Stack[-1]
0x206: Pop(1)
0x207: Stack[-6] = (int) 0
0x208: PushEmpty(bool)
0x209: Stack[-1] = (bool) 0
0x20a: Push((int) 5)
0x20b: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x20d: PushEmpty(bool)
0x20e: Call2 0x52b

0x20f: Pop(0)
0x210: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x211: Stack[-1] = (bool) 1
0x212: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x213: Push((int) 3)
0x214: @ irand(Stack[-6], Stack[-1])
0x215: Pop(1)
0x216: Push((int) 0)
0x217: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x219: Push(Stack[-7])
0x21a: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x21b: @ irand(Stack[-4], Stack[-7])
0x21c: Pop(0)
0x21d: Push("all")
0x21e: PushEmpty(string, int)
0x21f: Stack[-1] = Stack[-7]
0x220: Call2 0x65f

0x221: Pop(1)
0x222: @ PlayAnimation(Stack[-2], Stack[-1])
0x223: Pop(2)
0x224: @ WaitForAnimEnd(Stack[-3])
0x225: Pop(0)
0x226: Pop(0); Push((bool) Stack[-3] == 0)
0x227: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x228: GOTO 0x246

0x229: GOTO 0x23b

0x22a: Push((int) 1)
0x22b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x22c: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x22d: Push((int) 4)
0x22e: @ rand(Stack[-3], Stack[-1])
0x22f: Pop(1)
0x230: Push((int) 1)
0x231: Pop(1); Push(Stack[-3] + Stack[-1]);
0x232: @ Sleep(Stack[-1], Stack[-2])
0x233: Pop(1)
0x234: Pop(0); Push((bool) Stack[-1] == 0)
0x235: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x236: GOTO 0x246

0x237: GOTO 0x23b

0x238: Push(Stack[-6])
0x239: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x23a: GOTO 0x246

0x23b: PushEmpty(bool)
0x23c: Call2 0x249

0x23d: Pop(0)
0x23e: Pop(1); Push((bool) Stack[-1] == 0)
0x23f: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x240: GOTO 0x246

0x241: @ ResetAAS()
0x242: Pop(0)
0x243: Push((int) 1)
0x244: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x245: GOTO 0x208

0x246: @ ResetAAS()
0x247: Pop(0)
0x248: Return(); Pop(14)

0x249: Stack[-1] = (bool) 1
0x24a: Return(); Pop(0)

0x24b: @ StopAnimation()
0x24c: Pop(0)
0x24d: @ StopGroup0()
0x24e: Pop(0)
0x24f: Return(); Pop(0)

0x250: PushEmpty(object, object)
0x251: @ GetScene(Stack[-1])
0x252: Pop(0)
0x253: PushEmpty(object)
0x254: Call2 0x5e1

0x255: Pop(0)
0x256: @@ RemoveStationaryActor(Stack[-1])
0x257: Pop(1)
0x258: Push("pt_k6q03_albinos_path")
0x259: @ GetVariable(Stack[-1], Stack[-1])
0x25a: Pop(1)
0x25b: Push((int) -1)
0x25c: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] != Stack[-1])
0x25d: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x25e: PushEmpty(bool, string, int, bool)
0x25f: Stack[-3] = "pt_k6q03_albinos_path"
0x260: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x261: Stack[-1] = (bool) 1
0x262: Call2 0x27e

0x263: Pop(4)
0x264: PushEmpty()
0x265: Push(-0, 5); TaskCall(2)
0x266: Call2 0x17c

0x267: Pop(-0, 5); TaskReturn
0x268: Pop(0)
0x269: Return(); Pop(2)

0x26a: Stack[-1] = 0
0x26b: PushEmpty()
0x26c: Return(); Pop(0)

0x26d: PushEmpty()
0x26e: PushEmpty()
0x26f: Call2 0x2b3

0x270: Pop(0)
0x271: PushEmpty(object)
0x272: Stack[-1] = Stack[-2]
0x273: Call2 0x709

0x274: Pop(1)
0x275: Return(); Pop(0)

0x276: PushEmpty(bool, string, string)
0x277: Stack[-2] = "quest_k6_03"
0x278: Stack[-1] = "abinos_unload"
0x279: Call2 0x649

0x27a: Pop(3)
0x27b: @ Hold()
0x27c: Pop(0)
0x27d: Return(); Pop(0)

0x27e: PushEmpty(object, cvector, bool, bool, cvector, cvector, bool, object, cvector, bool, bool, cvector, cvector, bool)
0x27f: @ GetScene(Stack[-7])
0x280: Pop(0)
0x281: Push((int) 1)
0x282: Pop(1); Push(Stack[-17] + Stack[-1]);
0x283: Pop(1); Push(Stack[-18] + Stack[-1]);
0x284: @@ GetLocator(Stack[-1], Stack[-5], Stack[-4], Stack[-3])
0x285: Pop(1)
0x286: Pop(0); Push((bool) Stack[-4] == 0)
0x287: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x288: GOTO 0x29c

0x289: Stack[-6] = Stack[-2]
0x28a: @ MovePoint(Stack[-3], Stack[-15], Stack[-5])
0x28b: Pop(0)
0x28c: Push(Stack[-5])
0x28d: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x28e: PushEmpty(int, cvector, cvector)
0x28f: Stack[-3] = Stack[-19]
0x290: Stack[-2] = Stack[-6]
0x291: Stack[-1] = Stack[-5]
0x292: Call2 0x2b9

0x293: Pop(3)
0x294: Push((int) 1)
0x295: Stack[-17] = Stack[-17] + Stack[-1]; Pop(1);
0x296: GOTO 0x29b

0x297: Push( Stack[0 + Tasks[-1].StackPointer] )
0x298: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x299: Stack[-18] = (bool) 0
0x29a: Return(); Pop(14)

0x29b: GOTO 0x281

0x29c: @ WaitForAnimEnd(Stack[-5])
0x29d: Pop(0)
0x29e: Pop(0); Push((bool) Stack[-5] == 0)
0x29f: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a0: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a2: Stack[-18] = (bool) 0
0x2a3: Return(); Pop(14)

0x2a4: Push(CvectorIndex(Stack[-6], 0))
0x2a5: Push(CvectorIndex(Stack[-7], 2))
0x2a6: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2a7: Pop(2)
0x2a8: Push(Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2aa: GOTO 0x2b0

0x2ab: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2ac: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ad: Stack[-18] = (bool) 0
0x2ae: Return(); Pop(14)

0x2af: GOTO 0x2a4

0x2b0: Stack[-18] = (bool) 1
0x2b1: Return(); Pop(14)

0x2b2: Stack[-7] = 0
0x2b3: @ Stop()
0x2b4: Pop(0)
0x2b5: @ StopAnimation()
0x2b6: Pop(0)
0x2b7: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2b8: Return(); Pop(0)

0x2b9: PushEmpty()
0x2ba: Return(); Pop(0)

0x2bb: PushEmpty()
0x2bc: Push(Stack[-1])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2be: Push((int) 100)
0x2bf: Push((float)1.0)
0x2c0: @ SetTimer(Stack[-2], Stack[-1])
0x2c1: Pop(2)
0x2c2: PushEmpty(object)
0x2c3: Stack[-1] = Stack[-3]
0x2c4: Call2 0x2fa

0x2c5: Pop(1)
0x2c6: Return(); Pop(0)

0x2c7: PushEmpty(bool, string, string)
0x2c8: Stack[-2] = "quest_k6_03"
0x2c9: Stack[-1] = "albinos_retreated"
0x2ca: Call2 0x649

0x2cb: Pop(3)
0x2cc: @ Hold()
0x2cd: Pop(0)
0x2ce: Return(); Pop(0)

0x2cf: PushEmpty()
0x2d0: Push((int) 100)
0x2d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d3: PushEmpty()
0x2d4: Call2 0x6c8

0x2d5: Pop(0)
0x2d6: GOTO 0x2db

0x2d7: PushEmpty(int)
0x2d8: Stack[-1] = Stack[-2]
0x2d9: Call2 0x343

0x2da: Pop(1)
0x2db: Return(); Pop(0)

0x2dc: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x2dd: @ GetPosition(Stack[-6])
0x2de: Pop(0)
0x2df: @@ GetPosition(Stack[-5])
0x2e0: Pop(0)
0x2e1: @ GetDirection(Stack[-4])
0x2e2: Pop(0)
0x2e3: PushEmpty(cvector, cvector)
0x2e4: PushEmpty(cvector, cvector)
0x2e5: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x2e6: Call2 0x5e7

0x2e7: Pop(1)
0x2e8: Push((float)0.75)
0x2e9: Pop(1); Push(Stack[-8] * Stack[-1]);
0x2ea: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x2eb: Call2 0x5e7

0x2ec: Stack[-5] = Stack[-2]
0x2ed: Pop(2)
0x2ee: Push((int) 32)
0x2ef: Push((float)7000.0)
0x2f0: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x2f1: Pop(2)
0x2f2: Push((int) 100)
0x2f3: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x2f4: Push((int) 0)
0x2f5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f7: Stack[-1] = (int) 0
0x2f8: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x2f9: Return(); Pop(12)

0x2fa: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x2fb: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x2fc: PushEmpty(cvector, float)
0x2fd: Stack[-1] = (float) 1.74533
0x2fe: Call2 0x2dc

0x2ff: Stack[-7] = Stack[-2]
0x300: Pop(2)
0x301: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x302: Push((float)2500.0)
0x303: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x304: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x305: PushEmpty(cvector, float)
0x306: Stack[-1] = (float) 2.61799
0x307: Call2 0x2dc

0x308: Stack[-7] = Stack[-2]
0x309: Pop(2)
0x30a: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x30b: Push((float)2500.0)
0x30c: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x30d: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x30e: Push("Can't retreat, distance: ")
0x30f: Pop(0); Push(Sqrt(Stack[-5]))
0x310: Pop(2); Push(Stack[-2] + Stack[-1]);
0x311: @ Trace(Stack[-1])
0x312: Pop(1)
0x313: Push((float)0.5)
0x314: @ Sleep(Stack[-1])
0x315: Pop(1)
0x316: Return(); Pop(10)

0x317: Push(CvectorIndex(Stack[-5], 0))
0x318: Push(CvectorIndex(Stack[-6], 2))
0x319: @ Rotate(Stack[-2], Stack[-1])
0x31a: Pop(2)
0x31b: PushEmpty(cvector)
0x31c: Call2 0x429

0x31d: Pop(0)
0x31e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x31f: Push((int) 120)
0x320: Push((float)0.5)
0x321: @ SetTimer(Stack[-2], Stack[-1])
0x322: Pop(2)
0x323: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x324: Push((int) 1)
0x325: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x326: Pop(1)
0x327: Push(Stack[-3])
0x328: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x329: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x32a: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32b: GOTO 0x342

0x32c: GOTO 0x340

0x32d: PushEmpty(cvector, float)
0x32e: Stack[-1] = (float) 2.61799
0x32f: Call2 0x2dc

0x330: Stack[-4] = Stack[-2]
0x331: Pop(2)
0x332: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x333: Push((float)2500.0)
0x334: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x335: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x336: PushEmpty(cvector)
0x337: Call2 0x429

0x338: Pop(0)
0x339: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x33a: Push((int) 120)
0x33b: Push((float)0.5)
0x33c: @ SetTimer(Stack[-2], Stack[-1])
0x33d: Pop(2)
0x33e: GOTO 0x340

0x33f: GOTO 0x342

0x340: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x341: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x342: Return(); Pop(10)

0x343: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x344: Push((int) 120)
0x345: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x346: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x347: Return(); Pop(8)

0x348: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x349: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x34a: @ Stop()
0x34b: Pop(0)
0x34c: Push((int) 1)
0x34d: @ KillTimer(Stack[-1])
0x34e: Pop(1)
0x34f: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x350: GOTO 0x376

0x351: @ GetDirection(Stack[-4])
0x352: Pop(0)
0x353: Push((float)7000.0)
0x354: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x355: Pop(1)
0x356: PushEmpty(cvector, float)
0x357: Stack[-1] = (float) 1.74533
0x358: Call2 0x2dc

0x359: Stack[-4] = Stack[-2]
0x35a: Pop(2)
0x35b: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x35c: PushEmpty(bool)
0x35d: Stack[-1] = (bool) 0
0x35e: Push((float)2500.0)
0x35f: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x360: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x361: PushEmpty(bool)
0x362: Stack[-1] = (bool) 1
0x363: Pop(0); Push(Stack[-5] * Stack[-5]);
0x364: Push((float)2.25)
0x365: Pop(2); Push(Stack[-2] * Stack[-1]);
0x366: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x367: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x368: PushEmpty(bool)
0x369: Call2 0x387

0x36a: Pop(0)
0x36b: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x36c: Stack[-1] = (bool) 0
0x36d: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36e: Stack[-1] = (bool) 1
0x36f: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x370: @ Stop()
0x371: Pop(0)
0x372: PushEmpty(cvector)
0x373: Call2 0x429

0x374: Pop(0)
0x375: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x376: Return(); Pop(8)

0x377: @ Stop()
0x378: Pop(0)
0x379: Push((int) 120)
0x37a: @ KillTimer(Stack[-1])
0x37b: Pop(1)
0x37c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x37d: Return(); Pop(0)

0x37e: PushEmpty()
0x37f: PushEmpty()
0x380: Call2 0x377

0x381: Pop(0)
0x382: PushEmpty(object)
0x383: Stack[-1] = Stack[-2]
0x384: Call2 0x709

0x385: Pop(1)
0x386: Return(); Pop(0)

0x387: PushEmpty(cvector, cvector, cvector, cvector)
0x388: @ GetDirection(Stack[-2])
0x389: Pop(0)
0x38a: PushEmpty(cvector, object)
0x38b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38c: Call2 0x42e

0x38d: Stack[-3] = Stack[-2]
0x38e: Pop(2)
0x38f: PushEmpty(float, cvector, cvector)
0x390: Stack[-2] = Stack[-5]
0x391: Stack[-1] = Stack[-4]
0x392: Call2 0x603

0x393: Pop(2)
0x394: Push((float)-0.34202)
0x395: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x396: Return(); Pop(4)

0x397: PushEmpty()
0x398: PushEmpty(object)
0x399: Stack[-1] = Stack[-2]
0x39a: Call2 0x3a0

0x39b: Pop(1)
0x39c: @ Hold()
0x39d: Pop(0)
0x39e: GOTO 0x39c

0x39f: Return(); Pop(0)

0x3a0: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x3a1: Pop(0); Push((bool) Stack[-21] == 0)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a3: PushEmpty(string)
0x3a4: Stack[-1] = "fdie"
0x3a5: Call2 0x3fb

0x3a6: Pop(1)
0x3a7: GOTO 0x3fa

0x3a8: @@ GetPosition(Stack[-10])
0x3a9: Pop(0)
0x3aa: @ GetPosition(Stack[-9])
0x3ab: Pop(0)
0x3ac: @ GetDirection(Stack[-8])
0x3ad: Pop(0)
0x3ae: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x3af: Push(CvectorIndex(Stack[-7], 0))
0x3b0: Push(CvectorIndex(Stack[-9], 0))
0x3b1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3b2: Push(CvectorIndex(Stack[-8], 2))
0x3b3: Push(CvectorIndex(Stack[-10], 2))
0x3b4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3b5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3b6: Push((int) 0)
0x3b7: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x3b8: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b9: Stack[-6] = "fdie"
0x3ba: GOTO 0x3bc

0x3bb: Stack[-6] = "bdie"
0x3bc: @ RemoveRTEnvelope()
0x3bd: Pop(0)
0x3be: @ SetDeathState()
0x3bf: Pop(0)
0x3c0: @ Stop()
0x3c1: Pop(0)
0x3c2: @ StopAsync()
0x3c3: Pop(0)
0x3c4: Stack[-5] = Stack[-21]
0x3c5: Push("GetScriptProperty")
0x3c6: Push((int) 2)
0x3c7: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x3c8: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3c9: Push("Owner")
0x3ca: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x3cb: Pop(1)
0x3cc: Push(Stack[-4])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3ce: Push("Owner")
0x3cf: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x3d0: Pop(1)
0x3d1: Pop(0); Push((bool) Stack[-5] == 0)
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3d3: Stack[-5] = Stack[-21]
0x3d4: Push("@GetEyesHeight")
0x3d5: Push((int) 1)
0x3d6: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x3d7: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3d8: @@ GetEyesHeight(Stack[-2])
0x3d9: Pop(0)
0x3da: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x3db: Push(CvectorIndex(Stack[-1], 1))
0x3dc: Stack[-1] = Stack[-3]
0x3dd: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x3de: Push("head")
0x3df: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x3e0: Pop(1)
0x3e1: Stack[-3] = (bool) 1
0x3e2: GOTO 0x3e4

0x3e3: Stack[-3] = (bool) 0
0x3e4: PushEmpty(string)
0x3e5: Stack[-1] = Stack[-7]
0x3e6: Call2 0x5b8

0x3e7: Pop(1)
0x3e8: Push("all")
0x3e9: @ PlayAnimation(Stack[-1], Stack[-7])
0x3ea: Pop(1)
0x3eb: @ WaitForAnimEnd()
0x3ec: Pop(0)
0x3ed: Push(Stack[-3])
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3ef: @ StopAsync()
0x3f0: Pop(0)
0x3f1: Push("head")
0x3f2: @ UnlookAsync(Stack[-1])
0x3f3: Pop(1)
0x3f4: Push("all")
0x3f5: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x3f6: Pop(1)
0x3f7: @ RemoveEnvelope()
0x3f8: Pop(0)
0x3f9: Stack[-5] = 0
0x3fa: Return(); Pop(20)

0x3fb: PushEmpty()
0x3fc: @ RemoveRTEnvelope()
0x3fd: Pop(0)
0x3fe: @ SetDeathState()
0x3ff: Pop(0)
0x400: @ Stop()
0x401: Pop(0)
0x402: @ StopAsync()
0x403: Pop(0)
0x404: @ StopSecondaryAnimation()
0x405: Pop(0)
0x406: PushEmpty(string)
0x407: Stack[-1] = Stack[-2]
0x408: Call2 0x5b8

0x409: Pop(1)
0x40a: Push("all")
0x40b: @ PlayAnimation(Stack[-1], Stack[-2])
0x40c: Pop(1)
0x40d: @ WaitForAnimEnd()
0x40e: Pop(0)
0x40f: Push("all")
0x410: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x411: Pop(1)
0x412: @ RemoveEnvelope()
0x413: Pop(0)
0x414: Return(); Pop(0)

0x415: PushEmpty()
0x416: Return(); Pop(0)

0x417: PushEmpty()
0x418: Return(); Pop(0)

0x419: PushEmpty()
0x41a: Return(); Pop(0)

0x41b: PushEmpty()
0x41c: Push((int) 2)
0x41d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41e: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x41f: Stack[-2] = "fire"
0x420: Return(); Pop(0)

0x421: GOTO 0x427

0x422: Push((int) 1)
0x423: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x424: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x425: Stack[-2] = "bullet"
0x426: Return(); Pop(0)

0x427: Stack[-2] = "phys"
0x428: Return(); Pop(0)

0x429: PushEmpty(cvector, cvector)
0x42a: @ GetPosition(Stack[-1])
0x42b: Pop(0)
0x42c: Stack[-3] = Stack[-1]
0x42d: Return(); Pop(2)

0x42e: PushEmpty(cvector, cvector, cvector, cvector)
0x42f: @ GetPosition(Stack[-2])
0x430: Pop(0)
0x431: @@ GetPosition(Stack[-1])
0x432: Pop(0)
0x433: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x434: Return(); Pop(4)

0x435: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x436: @ GetPosition(Stack[-3])
0x437: Pop(0)
0x438: @@ GetPosition(Stack[-2])
0x439: Pop(0)
0x43a: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x43b: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x43c: Return(); Pop(6)

0x43d: PushEmpty(bool, bool)
0x43e: @ IsPlayerActor(Stack[-3], Stack[-1])
0x43f: Pop(0)
0x440: Stack[-4] = Stack[-1]
0x441: Return(); Pop(2)

0x442: PushEmpty(bool, bool)
0x443: Push("HasProperty")
0x444: Push((int) 2)
0x445: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x446: Pop(1); Push((bool) Stack[-1] == 0)
0x447: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x448: Stack[-5] = (bool) 0
0x449: Return(); Pop(2)

0x44a: @@ HasProperty(Stack[-3], Stack[-1])
0x44b: Pop(0)
0x44c: Stack[-5] = Stack[-1]
0x44d: Return(); Pop(2)

0x44e: PushEmpty(float, float)
0x44f: PushEmpty(bool, object, string)
0x450: Stack[-2] = Stack[-10]
0x451: Stack[-1] = Stack[-9]
0x452: Call2 0x442

0x453: Pop(2)
0x454: Pop(1); Push((bool) Stack[-1] == 0)
0x455: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x456: Stack[-8] = (bool) 0
0x457: Return(); Pop(2)

0x458: @@ GetProperty(Stack[-6], Stack[-1])
0x459: Pop(0)
0x45a: PushEmpty(float, float, float, float)
0x45b: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x45c: Stack[-2] = Stack[-8]
0x45d: Stack[-1] = Stack[-7]
0x45e: Call2 0x5f8

0x45f: Pop(3)
0x460: @@ SetProperty(Stack[-7], Stack[-1])
0x461: Pop(1)
0x462: Stack[-8] = (bool) 1
0x463: Return(); Pop(2)

0x464: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x465: PushEmpty(bool, object, string)
0x466: Stack[-2] = Stack[-18]
0x467: Stack[-1] = "health"
0x468: Call2 0x442

0x469: Pop(2)
0x46a: Pop(1); Push((bool) Stack[-1] == 0)
0x46b: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x46c: Stack[-16] = (float) 0.0
0x46d: Return(); Pop(12)

0x46e: PushEmpty(bool, object, string)
0x46f: Stack[-2] = Stack[-18]
0x470: Stack[-1] = "armor"
0x471: Call2 0x442

0x472: Pop(2)
0x473: Pop(1); Push((bool) Stack[-1] == 0)
0x474: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x475: Stack[-6] = (int) 0
0x476: GOTO 0x47a

0x477: Push("armor")
0x478: @@ GetProperty(Stack[-1], Stack[-7])
0x479: Pop(1)
0x47a: Push("armor_")
0x47b: PushEmpty(string, int)
0x47c: Stack[-1] = Stack[-16]
0x47d: Call2 0x41b

0x47e: Pop(1)
0x47f: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x480: PushEmpty(bool, object, string)
0x481: Stack[-2] = Stack[-18]
0x482: Stack[-1] = Stack[-8]
0x483: Call2 0x442

0x484: Pop(2)
0x485: Pop(1); Push((bool) Stack[-1] == 0)
0x486: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x487: Stack[-4] = (int) 0
0x488: GOTO 0x48b

0x489: @@ GetProperty(Stack[-5], Stack[-4])
0x48a: Pop(0)
0x48b: PushEmpty(float, float, float)
0x48c: Pop(0); Push(Stack[-9] + Stack[-7]);
0x48d: Push((float)100.0)
0x48e: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x48f: Stack[-1] = (int) 1
0x490: Call2 0x5f1

0x491: Stack[-6] = Stack[-3]
0x492: Pop(3)
0x493: Push("health")
0x494: @@ GetProperty(Stack[-1], Stack[-3])
0x495: Pop(1)
0x496: Push((int) 1)
0x497: Pop(1); Push(Stack[-1] - Stack[-4]);
0x498: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x499: Push("health")
0x49a: PushEmpty(float, float, float, float)
0x49b: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x49c: Stack[-2] = (int) 0
0x49d: Stack[-1] = (int) 1
0x49e: Call2 0x5f8

0x49f: Pop(3)
0x4a0: @@ SetProperty(Stack[-2], Stack[-1])
0x4a1: Pop(2)
0x4a2: PushEmpty(bool, object)
0x4a3: Stack[-1] = Stack[-17]
0x4a4: Call2 0x43d

0x4a5: Pop(1)
0x4a6: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a7: PushEmpty(float)
0x4a8: Stack[-1] = -Stack[-2]; Pop(0);
0x4a9: Call2 0x62e

0x4aa: Pop(1)
0x4ab: Stack[-16] = Stack[-1]
0x4ac: Return(); Pop(12)

0x4ad: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x4ae: Pop(0); Push((bool) Stack[-15] == 0)
0x4af: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4b0: Return(); Pop(14)

0x4b1: @ IsDead(Stack[-7])
0x4b2: Pop(0)
0x4b3: Push(Stack[-7])
0x4b4: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b5: Return(); Pop(14)

0x4b6: @ GetSecondaryAnimationType(Stack[-6])
0x4b7: Pop(0)
0x4b8: Push((int) 0)
0x4b9: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x4ba: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4bb: Return(); Pop(14)

0x4bc: @@ GetPosition(Stack[-5])
0x4bd: Pop(0)
0x4be: @ GetPosition(Stack[-4])
0x4bf: Pop(0)
0x4c0: @ GetDirection(Stack[-3])
0x4c1: Pop(0)
0x4c2: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x4c3: Push(CvectorIndex(Stack[-2], 0))
0x4c4: Push(CvectorIndex(Stack[-4], 0))
0x4c5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4c6: Push(CvectorIndex(Stack[-3], 2))
0x4c7: Push(CvectorIndex(Stack[-5], 2))
0x4c8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4c9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4ca: Push((int) 0)
0x4cb: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4cc: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4cd: Stack[-1] = "fhit"
0x4ce: GOTO 0x4d0

0x4cf: Stack[-1] = "bhit"
0x4d0: Push("hit_react")
0x4d1: Push("1")
0x4d2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4d3: Push("2")
0x4d4: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4d5: Push((int) -10)
0x4d6: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4d7: Pop(4)
0x4d8: Return(); Pop(14)

0x4d9: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x4da: PushEmpty(bool)
0x4db: Stack[-1] = (bool) 0
0x4dc: PushEmpty(bool)
0x4dd: Stack[-1] = (bool) 0
0x4de: Push(Stack[-23])
0x4df: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e0: Push((int) 4)
0x4e1: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e3: Stack[-1] = (bool) 1
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e5: Push((int) 5)
0x4e6: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x4e7: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e8: Stack[-1] = (bool) 1
0x4e9: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x4ea: PushEmpty(cvector, cvector)
0x4eb: PushEmpty(cvector, object)
0x4ec: Stack[-1] = Stack[-25]
0x4ed: Call2 0x42e

0x4ee: Stack[-3] = Stack[-2]
0x4ef: Pop(2)
0x4f0: Call2 0x5e7

0x4f1: Stack[-11] = Stack[-2]
0x4f2: Pop(2)
0x4f3: @ CreateVectorVector(Stack[-8])
0x4f4: Pop(0)
0x4f5: Stack[-7] = (int) 1
0x4f6: Push("hit")
0x4f7: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4f8: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x4f9: Pop(1)
0x4fa: Pop(0); Push((bool) Stack[-6] == 0)
0x4fb: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4fc: GOTO 0x506

0x4fd: Pop(0); Push(Stack[-4] | Stack[-9]);
0x4fe: Push((float)0.70711)
0x4ff: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x500: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x501: @@ add(Stack[-5])
0x502: Pop(0)
0x503: Push((int) 1)
0x504: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x505: GOTO 0x4f6

0x506: @@ size(Stack[-3])
0x507: Pop(0)
0x508: Push(Stack[-3])
0x509: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x50a: @ irand(Stack[-2], Stack[-3])
0x50b: Pop(0)
0x50c: @@ get(Stack[-1], Stack[-2])
0x50d: Pop(0)
0x50e: PushEmpty(object, int, float, cvector, cvector)
0x50f: Stack[-5] = Stack[-26]
0x510: Stack[-4] = Stack[-25]
0x511: Stack[-3] = Stack[-24]
0x512: Stack[-2] = Stack[-6]
0x513: Stack[-1] = -Stack[-14]; Pop(0);
0x514: Call2 0x51d

0x515: Pop(5)
0x516: Return(); Pop(18)

0x517: Stack[-8] = 0
0x518: PushEmpty(object)
0x519: Stack[-1] = Stack[-22]
0x51a: Call2 0x4ad

0x51b: Pop(1)
0x51c: Return(); Pop(18)

0x51d: PushEmpty(object, object, object, object)
0x51e: @ GetScene(Stack[-2])
0x51f: Pop(0)
0x520: Push("scripted")
0x521: Push("blood_dir.xml")
0x522: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x523: Pop(2)
0x524: PushEmpty(object)
0x525: Stack[-1] = Stack[-10]
0x526: Call2 0x4ad

0x527: Pop(1)
0x528: Return(); Pop(4)

0x529: Stack[-1] = 0
0x52a: Stack[-2] = 0
0x52b: PushEmpty(bool, bool)
0x52c: @ IsLoaded(Stack[-1])
0x52d: Pop(0)
0x52e: Stack[-3] = Stack[-1]
0x52f: Return(); Pop(2)

0x530: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x531: @@ GetPosition(Stack[-8])
0x532: Pop(0)
0x533: @@ GetEyesHeight(Stack[-9])
0x534: Pop(0)
0x535: Push(CvectorIndex(Stack[-8], 1))
0x536: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x537: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x538: @ GetPosition(Stack[-7])
0x539: Pop(0)
0x53a: @ GetEyesHeight(Stack[-9])
0x53b: Pop(0)
0x53c: Push(CvectorIndex(Stack[-7], 1))
0x53d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x53e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x53f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x540: Push(CvectorIndex(Stack[-6], 1))
0x541: Stack[-1] = (int) 0
0x542: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x543: Pop(0); Push(Stack[-6] | Stack[-6]);
0x544: Pop(1); Push(Sqrt(Stack[-1]))
0x545: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x546: Stack[-5] = -Stack[-6]; Pop(0);
0x547: Pop(0); Push(Stack[-6] * Stack[-19]);
0x548: PushEmpty(cvector, cvector)
0x549: Push(CVector(0.0, 1.0, 0.0))
0x54a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x54b: Call2 0x5e7

0x54c: Pop(1)
0x54d: Push((int) 25)
0x54e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x54f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x550: Push(CVector(0.0, 10.0, 0.0))
0x551: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x552: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x553: @ IsOverrideActive(Stack[-2])
0x554: Pop(0)
0x555: Push(Stack[-2])
0x556: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x557: Stack[-21] = (bool) 0
0x558: Return(); Pop(18)

0x559: @ StopWorld()
0x55a: Pop(0)
0x55b: Push((bool) 1)
0x55c: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x55d: Pop(1)
0x55e: Push(CvectorIndex(Stack[-4], 0))
0x55f: Push(CvectorIndex(Stack[-5], 2))
0x560: @ Rotate(Stack[-2], Stack[-1])
0x561: Pop(2)
0x562: PushEmpty(bool)
0x563: Call2 0x65d

0x564: Pop(0)
0x565: IF (Stack[-1] == 0) GOTO 0x567; Pop(1)

0x566: GOTO 0x56f

0x567: Push("head")
0x568: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x569: Pop(1)
0x56a: Push(Stack[-1])
0x56b: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x56c: Push("head")
0x56d: @ LookAsyncCamera(Stack[-1])
0x56e: Pop(1)
0x56f: @ CameraWaitForPlayFinish()
0x570: Pop(0)
0x571: @ ResumeWorld()
0x572: Pop(0)
0x573: Stack[-21] = (bool) 1
0x574: Return(); Pop(18)

0x575: PushEmpty(bool, bool)
0x576: Push((bool) 1)
0x577: @ CameraSwitchToNormal(Stack[-1])
0x578: Pop(1)
0x579: PushEmpty(bool)
0x57a: Call2 0x65d

0x57b: Pop(0)
0x57c: IF (Stack[-1] == 0) GOTO 0x57e; Pop(1)

0x57d: GOTO 0x586

0x57e: Push("head")
0x57f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x580: Pop(1)
0x581: Push(Stack[-1])
0x582: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x583: Push("head")
0x584: @ UnlookAsync(Stack[-1])
0x585: Pop(1)
0x586: Return(); Pop(2)

0x587: PushEmpty(bool, float, float, bool, float, float)
0x588: @ lshHasAnimation(Stack[-3], Stack[-7])
0x589: Pop(0)
0x58a: Push(Stack[-3])
0x58b: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x58c: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x58d: Pop(0)
0x58e: Push((bool) 0)
0x58f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x590: Pop(1)
0x591: GOTO 0x596

0x592: Push("Can't find lsh animation : ")
0x593: Pop(1); Push(Stack[-1] + Stack[-8]);
0x594: @ Trace(Stack[-1])
0x595: Pop(1)
0x596: Return(); Pop(6)

0x597: PushEmpty(bool, float, float, bool, float, float)
0x598: @ lshHasAnimation(Stack[-3], Stack[-8])
0x599: Pop(0)
0x59a: Push(Stack[-3])
0x59b: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x59c: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x59d: Pop(0)
0x59e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x59f: Pop(0)
0x5a0: GOTO 0x5a5

0x5a1: Push("Can't find lsh animation : ")
0x5a2: Pop(1); Push(Stack[-1] + Stack[-9]);
0x5a3: @ Trace(Stack[-1])
0x5a4: Pop(1)
0x5a5: Return(); Pop(6)

0x5a6: PushEmpty(float, cvector, float, cvector)
0x5a7: @@ GetEyesHeight(Stack[-2])
0x5a8: Pop(0)
0x5a9: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x5aa: Push(CvectorIndex(Stack[-1], 1))
0x5ab: Stack[-1] = Stack[-3]
0x5ac: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5ad: Push("head")
0x5ae: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x5af: Pop(1)
0x5b0: Return(); Pop(4)

0x5b1: PushEmpty(bool)
0x5b2: Call2 0x65d

0x5b3: Pop(0)
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b7; Pop(1)

0x5b5: @ lshStopSpeech()
0x5b6: Pop(0)
0x5b7: Return(); Pop(0)

0x5b8: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x5b9: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x5ba: Pop(0)
0x5bb: Pop(0); Push((bool) Stack[-8] == 0)
0x5bc: IF (Stack[-1] == 0) GOTO 0x5d1; Pop(1)

0x5bd: Stack[-7] = (int) 0
0x5be: Push((int) 1)
0x5bf: Pop(1); Push(Stack[-8] + Stack[-1]);
0x5c0: Pop(1); Push(Stack[-18] + Stack[-1]);
0x5c1: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x5c2: Pop(1)
0x5c3: Pop(0); Push((bool) Stack[-6] == 0)
0x5c4: IF (Stack[-1] == 0) GOTO 0x5c6; Pop(1)

0x5c5: GOTO 0x5c9

0x5c6: Push((int) 1)
0x5c7: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x5c8: GOTO 0x5be

0x5c9: Pop(0); Push((bool) Stack[-7] == 0)
0x5ca: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5cb: Return(); Pop(16)

0x5cc: @ irand(Stack[-5], Stack[-7])
0x5cd: Pop(0)
0x5ce: Push((int) 1)
0x5cf: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5d0: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x5d1: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x5d2: Pop(0)
0x5d3: Push(Stack[-4])
0x5d4: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5d5: @ GetEyesHeight(Stack[-3])
0x5d6: Pop(0)
0x5d7: @ GetDirection(Stack[-2])
0x5d8: Pop(0)
0x5d9: Push((int) 50)
0x5da: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x5db: Push(CvectorIndex(Stack[-1], 1))
0x5dc: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x5dd: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5de: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x5df: Pop(0)
0x5e0: Return(); Pop(16)

0x5e1: PushEmpty(object, object)
0x5e2: @ self(Stack[-1])
0x5e3: Pop(0)
0x5e4: Stack[-3] = Stack[-1]
0x5e5: Return(); Pop(2)

0x5e6: Stack[-1] = 0
0x5e7: PushEmpty(float, float)
0x5e8: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5e9: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5ea: Push((float)0.0)
0x5eb: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5ec: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5ed: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5ee: Return(); Pop(2)

0x5ef: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5f0: Return(); Pop(2)

0x5f1: PushEmpty()
0x5f2: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x5f3: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5f4: Stack[-3] = Stack[-2]
0x5f5: GOTO 0x5f7

0x5f6: Stack[-3] = Stack[-1]
0x5f7: Return(); Pop(0)

0x5f8: PushEmpty()
0x5f9: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5fa: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5fb: Stack[-4] = Stack[-2]
0x5fc: Return(); Pop(0)

0x5fd: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5fe: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x5ff: Stack[-4] = Stack[-1]
0x600: Return(); Pop(0)

0x601: Stack[-4] = Stack[-3]
0x602: Return(); Pop(0)

0x603: PushEmpty()
0x604: Pop(0); Push(Stack[-2] | Stack[-1]);
0x605: Pop(0); Push(Stack[-3] | Stack[-3]);
0x606: Pop(0); Push(Stack[-3] | Stack[-3]);
0x607: Pop(2); Push(Stack[-2] * Stack[-1]);
0x608: Pop(1); Push(Sqrt(Stack[-1]))
0x609: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x60a: Return(); Pop(0)

0x60b: PushEmpty()
0x60c: Pop(0); Push((bool) Stack[-2] == 0)
0x60d: IF (Stack[-1] == 0) GOTO 0x610; Pop(1)

0x60e: Stack[-3] = (bool) 0
0x60f: Return(); Pop(0)

0x610: Push((int) 0)
0x611: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x612: IF (Stack[-1] == 0) GOTO 0x617; Pop(1)

0x613: Push((int) 8)
0x614: @ SendWorldWndMessage(Stack[-1])
0x615: Pop(1)
0x616: GOTO 0x620

0x617: Push((int) 0)
0x618: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x619: IF (Stack[-1] == 0) GOTO 0x61e; Pop(1)

0x61a: Push((int) 9)
0x61b: @ SendWorldWndMessage(Stack[-1])
0x61c: Pop(1)
0x61d: GOTO 0x620

0x61e: Stack[-3] = (bool) 0
0x61f: Return(); Pop(0)

0x620: PushEmpty(float)
0x621: Stack[-1] = Stack[-2]
0x622: Call2 0x63f

0x623: Pop(1)
0x624: PushEmpty(bool, object, string, float, float, float)
0x625: Stack[-5] = Stack[-8]
0x626: Stack[-4] = "reputation"
0x627: Stack[-3] = Stack[-7]
0x628: Stack[-2] = (int) 0
0x629: Stack[-1] = (int) 1
0x62a: Call2 0x44e

0x62b: Pop(6)
0x62c: Stack[-3] = (bool) 1
0x62d: Return(); Pop(0)

0x62e: PushEmpty(object, object)
0x62f: @ CreateFloatVector(Stack[-1])
0x630: Pop(0)
0x631: @@ add(Stack[-3])
0x632: Pop(0)
0x633: Push((int) 0)
0x634: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x635: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x636: Push((float)0.7)
0x637: Push((int) 500)
0x638: @ RumblePlay(Stack[-2], Stack[-1])
0x639: Pop(2)
0x63a: Push((int) 15)
0x63b: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x63c: Pop(1)
0x63d: Return(); Pop(2)

0x63e: Stack[-1] = 0
0x63f: PushEmpty(object, object)
0x640: @ CreateFloatVector(Stack[-1])
0x641: Pop(0)
0x642: @@ add(Stack[-3])
0x643: Pop(0)
0x644: Push((int) 16)
0x645: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x646: Pop(1)
0x647: Return(); Pop(2)

0x648: Stack[-1] = 0
0x649: PushEmpty(object, object)
0x64a: @ FindActor(Stack[-1], Stack[-4])
0x64b: Pop(0)
0x64c: Pop(0); Push((bool) Stack[-1] == 0)
0x64d: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64e: Stack[-5] = (bool) 0
0x64f: Return(); Pop(2)

0x650: @ Trigger(Stack[-1], Stack[-3])
0x651: Pop(0)
0x652: Stack[-5] = (bool) 1
0x653: Return(); Pop(2)

0x654: Stack[-1] = 0
0x655: Stack[-1] = (int) 515595
0x656: Return(); Pop(0)

0x657: Stack[-1] = (int) 512611
0x658: Return(); Pop(0)

0x659: Stack[-1] = "ui/NPC_Albinos.png"
0x65a: Return(); Pop(0)

0x65b: Stack[-1] = "ui/NPC_Albinos_b.png"
0x65c: Return(); Pop(0)

0x65d: Stack[-1] = (bool) 0
0x65e: Return(); Pop(0)

0x65f: PushEmpty(string, string)
0x660: Stack[-1] = "idle"
0x661: Push(Stack[-3])
0x662: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x663: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x664: Stack[-4] = Stack[-1]
0x665: Return(); Pop(2)

0x666: PushEmpty(int, bool, int, bool)
0x667: Stack[-2] = (int) 0
0x668: Push("all")
0x669: PushEmpty(string, int)
0x66a: Stack[-1] = Stack[-5]
0x66b: Call2 0x65f

0x66c: Pop(1)
0x66d: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x66e: Pop(2)
0x66f: Pop(0); Push((bool) Stack[-1] == 0)
0x670: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x671: GOTO 0x675

0x672: Push((int) 1)
0x673: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x674: GOTO 0x668

0x675: Stack[-5] = Stack[-2]
0x676: Return(); Pop(4)

0x677: PushEmpty()
0x678: PushEmpty()
0x679: Call2 0x681

0x67a: Pop(0)
0x67b: PushEmpty(bool, string, string)
0x67c: Stack[-2] = "quest_k6_03"
0x67d: Stack[-1] = "completed"
0x67e: Call2 0x649

0x67f: Pop(3)
0x680: Return(); Pop(0)

0x681: PushEmpty(object, object)
0x682: Push((int) 750)
0x683: Push((int) 2)
0x684: Push((int) 539629)
0x685: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x686: Pop(3)
0x687: PushEmpty(bool, object, int)
0x688: Stack[-2] = Stack[-4]
0x689: Stack[-1] = (int) 748
0x68a: Call2 0x69b

0x68b: Pop(3)
0x68c: Return(); Pop(2)

0x68d: Stack[-1] = 0
0x68e: PushEmpty(object, object)
0x68f: @ GetDiaryRoot(Stack[-1])
0x690: Pop(0)
0x691: Pop(0); Push((bool) Stack[-1] == 0)
0x692: IF (Stack[-1] == 0) GOTO 0x698; Pop(1)

0x693: Push("Can't retrieve diary root")
0x694: @ Trace(Stack[-1])
0x695: Pop(1)
0x696: Stack[-3] = (bool) 0
0x697: Return(); Pop(2)

0x698: Stack[-3] = Stack[-1]
0x699: Return(); Pop(2)

0x69a: Stack[-1] = 0
0x69b: PushEmpty(object, object, int, object, object, int)
0x69c: PushEmpty(object)
0x69d: Call2 0x68e

0x69e: Stack[-4] = Stack[-1]
0x69f: Pop(1)
0x6a0: @@ Find(Stack[-7], Stack[-2])
0x6a1: Pop(0)
0x6a2: Pop(0); Push((bool) Stack[-2] == 0)
0x6a3: IF (Stack[-1] == 0) GOTO 0x6aa; Pop(1)

0x6a4: Push("Can't find diary parent with id: ")
0x6a5: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6a6: @ Trace(Stack[-1])
0x6a7: Pop(1)
0x6a8: Stack[-9] = (bool) 0
0x6a9: Return(); Pop(6)

0x6aa: @@ AddChild(Stack[-8])
0x6ab: Pop(0)
0x6ac: Push((int) 7)
0x6ad: @ SendWorldWndMessage(Stack[-1])
0x6ae: Pop(1)
0x6af: @@ GetCategory(Stack[-1])
0x6b0: Pop(0)
0x6b1: @ SetDiarySection(Stack[-1])
0x6b2: Pop(0)
0x6b3: Stack[-9] = (bool) 0
0x6b4: Return(); Pop(6)

0x6b5: Stack[-2] = 0
0x6b6: Stack[-3] = 0
0x6b7: PushEmpty(int, int)
0x6b8: Push("branch")
0x6b9: @ GetVariable(Stack[-1], Stack[-2])
0x6ba: Pop(1)
0x6bb: Push((int) 0)
0x6bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6bd: IF (Stack[-1] == 0) GOTO 0x6c1; Pop(1)

0x6be: Stack[-3] = (int) 1
0x6bf: Return(); Pop(2)

0x6c0: GOTO 0x6c6

0x6c1: Push((int) 1)
0x6c2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6c3: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x6c4: Stack[-3] = (int) 2
0x6c5: Return(); Pop(2)

0x6c6: Stack[-3] = (int) 3
0x6c7: Return(); Pop(2)

0x6c8: PushEmpty(object, float, object, float)
0x6c9: Push("player")
0x6ca: @ FindActor(Stack[-3], Stack[-1])
0x6cb: Pop(1)
0x6cc: Push(Stack[-2])
0x6cd: IF (Stack[-1] == 0) GOTO 0x6e0; Pop(1)

0x6ce: PushEmpty(float, object)
0x6cf: Stack[-1] = Stack[-4]
0x6d0: Call2 0x435

0x6d1: Pop(1)
0x6d2: Push((float)640000.0)
0x6d3: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x6d4: IF (Stack[-1] == 0) GOTO 0x6e0; Pop(1)

0x6d5: PushEmpty(float, object, float, int)
0x6d6: Stack[-3] = Stack[-6]
0x6d7: Stack[-2] = (float) 0.05
0x6d8: Stack[-1] = (int) 0
0x6d9: Call2 0x464

0x6da: Stack[-5] = Stack[-4]
0x6db: Pop(4)
0x6dc: Push((int) 6)
0x6dd: Push((float)0.05)
0x6de: @ ReportHit(Stack[-4], Stack[-2], Stack[-3], Stack[-1])
0x6df: Pop(2)
0x6e0: Return(); Pop(4)

0x6e1: Stack[-2] = 0
0x6e2: PushEmpty()
0x6e3: PushEmpty(object)
0x6e4: Stack[-1] = Stack[-2]
0x6e5: Push(-1, 0); TaskCall(5)
0x6e6: Call2 0x397

0x6e7: Pop(-1, 0); TaskReturn
0x6e8: Pop(1)
0x6e9: Return(); Pop(0)

0x6ea: PushEmpty()
0x6eb: PushEmpty(object, int, float)
0x6ec: Stack[-3] = Stack[-7]
0x6ed: Stack[-2] = Stack[-6]
0x6ee: Stack[-1] = Stack[-5]
0x6ef: Call2 0x4d9

0x6f0: Pop(3)
0x6f1: Return(); Pop(0)

0x6f2: PushEmpty()
0x6f3: PushEmpty(object, int, float, cvector, cvector)
0x6f4: Stack[-5] = Stack[-11]
0x6f5: Stack[-4] = Stack[-10]
0x6f6: Stack[-3] = Stack[-9]
0x6f7: Stack[-2] = Stack[-7]
0x6f8: Stack[-1] = Stack[-6]
0x6f9: Call2 0x51d

0x6fa: Pop(5)
0x6fb: Return(); Pop(0)

0x6fc: PushEmpty(float, float)
0x6fd: Push("health")
0x6fe: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6ff: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x700: Push("health")
0x701: @ GetProperty(Stack[-1], Stack[-2])
0x702: Pop(1)
0x703: Push((int) 0)
0x704: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x705: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x706: @ SignalDeath(Stack[-4])
0x707: Pop(0)
0x708: Return(); Pop(2)

0x709: PushEmpty()
0x70a: PushEmpty(bool, object)
0x70b: Stack[-1] = Stack[-3]
0x70c: Call2 0x43d

0x70d: Pop(1)
0x70e: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x70f: PushEmpty(bool, object, float)
0x710: Stack[-2] = Stack[-4]
0x711: Stack[-1] = (float) -0.1
0x712: Call2 0x60b

0x713: Pop(3)
0x714: PushEmpty(object)
0x715: Stack[-1] = Stack[-2]
0x716: Call2 0x6e2

0x717: Pop(1)
0x718: Return(); Pop(0)

