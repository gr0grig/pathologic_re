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
	quest_d6_03
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
	head
	fire
	bullet
	phys
	HasProperty
	HasProperty
	health
	armor
	GetProperty
	armor_
	SetProperty
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
	voice_common
	c
	m
	Can't find lsh animation : 
	d6q03
	ood6Albinos1
	branch
	ui/NPC_Albinos.png
	ui/NPC_Albinos_b.png
	albinos_dead
	player

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
	SetTimer (2 args)
	Sleep (1 args)
	IsPlayerActor (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	Hold (0 args)
	GetPosition (1 args)
	GetDirection (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
	Stop (0 args)
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
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	GetScene (1 args)
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
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	ReportHit (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x166
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xba Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_17 Op = 0x172 Vars = (object)
		EVENT_0 Op = 0x17e Vars = (object)
		EVENT_7 Op = 0x189 Vars = (int)
	GTASK_3 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x1e7 Vars = ()
		EVENT_7 Op = 0x1ef Vars = (int)
		EVENT_41 Op = 0x29e Vars = (object)
	GTASK_4  Params = 1
		EVENT_22 Op = 0x335 Vars = (object, int, float, float)
		EVENT_16 Op = 0x337 Vars = (object, string)
		EVENT_41 Op = 0x339 Vars = (object)

Events:
EVENT_22 Op = 0x643 Vars = (object, int, float, float)
EVENT_43 Op = 0x64b Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x655 Vars = (object, string)
EVENT_41 Op = 0x662 Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x43a

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x611

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x60f

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x613

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x615

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x5fe

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
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0x579

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x491

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x47f

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x5f2

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Neutral"
0x5e: Call2 0xa4

0x5f: Pop(1)
0x60: Push((int) 512071)
0x61: @@ SetMessage(Stack[-1])
0x62: Pop(1)
0x63: @@ ClearReplies()
0x64: Pop(0)
0x65: Push((int) 512072)
0x66: Push((int) 13294)
0x67: Push((int) 13293)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 512083)
0x6b: Push((int) 13294)
0x6c: Push((int) 13306)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x86

0x70: PushEmpty(string)
0x71: Stack[-1] = "Neutral"
0x72: Call2 0xa4

0x73: Pop(1)
0x74: Push((int) 513029)
0x75: @@ SetMessage(Stack[-1])
0x76: Pop(1)
0x77: @@ ClearReplies()
0x78: Pop(0)
0x79: Push((int) 513030)
0x7a: Push((int) -1)
0x7b: Push((int) 14237)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: Push((int) 536131)
0x7f: Push((int) -1)
0x80: Push((int) 37890)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: GOTO 0x86

0x84: Return(); Pop(0)

0x85: GOTO 0x55

0x86: PushEmpty(bool)
0x87: Call2 0x617

0x88: Pop(0)
0x89: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8a: @ lshWaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: PushEmpty(string)
0x90: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x91: Call2 0x51b

0x92: Pop(1)
0x93: GOTO 0x8a

0x94: GOTO 0xa3

0x95: Push("all")
0x96: Push("idle")
0x97: @ PlayAnimation(Stack[-2], Stack[-1])
0x98: Pop(2)
0x99: @ WaitForAnimEnd()
0x9a: Pop(0)
0x9b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: GOTO 0xa3

0x9e: Push("all")
0x9f: Push("idle")
0xa0: @ PlayAnimation(Stack[-2], Stack[-1])
0xa1: Pop(2)
0xa2: GOTO 0x99

0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: PushEmpty(bool)
0xa6: Call2 0x617

0xa7: Pop(0)
0xa8: Pop(1); Push((bool) Stack[-1] == 0)
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: Return(); Pop(0)

0xab: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: Return(); Pop(0)

0xae: PushEmpty(string, bool)
0xaf: Stack[-2] = Stack[-3]
0xb0: Push("")
0xb1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb3: Stack[-1] = (bool) 0
0xb4: GOTO 0xb6

0xb5: Stack[-1] = (bool) 1
0xb6: Call2 0x52b

0xb7: Pop(2)
0xb8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb9: Return(); Pop(0)

0xba: PushEmpty()
0xbb: Push((int) 1)
0xbc: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0xbd: PushEmpty()
0xbe: Call2 0x549

0xbf: Pop(0)
0xc0: Push((int) 13311)
0xc1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc3: PushEmpty(object, object)
0xc4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6: Call2 0x5e6

0xc7: Pop(2)
0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x5ec

0xcc: Pop(2)
0xcd: Push((int) 13292)
0xce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xd0: PushEmpty(bool, object)
0xd1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Call2 0x5f2

0xd3: Pop(1)
0xd4: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xd5: PushEmpty(string)
0xd6: Stack[-1] = "Neutral"
0xd7: Call2 0xa4

0xd8: Pop(1)
0xd9: Push((int) 512071)
0xda: @@ SetMessage(Stack[-1])
0xdb: Pop(1)
0xdc: @@ ClearReplies()
0xdd: Pop(0)
0xde: Push((int) 512072)
0xdf: Push((int) 13294)
0xe0: Push((int) 13293)
0xe1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe2: Pop(3)
0xe3: Push((int) 512083)
0xe4: Push((int) 13294)
0xe5: Push((int) 13306)
0xe6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7: Pop(3)
0xe8: Return(); Pop(0)

0xe9: PushEmpty(string)
0xea: Stack[-1] = "Neutral"
0xeb: Call2 0xa4

0xec: Pop(1)
0xed: Push((int) 513029)
0xee: @@ SetMessage(Stack[-1])
0xef: Pop(1)
0xf0: @@ ClearReplies()
0xf1: Pop(0)
0xf2: Push((int) 513030)
0xf3: Push((int) -1)
0xf4: Push((int) 14237)
0xf5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6: Pop(3)
0xf7: Push((int) 536131)
0xf8: Push((int) -1)
0xf9: Push((int) 37890)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: Return(); Pop(0)

0xfd: Push((int) 13294)
0xfe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x100: PushEmpty(string)
0x101: Stack[-1] = "Neutral"
0x102: Call2 0xa4

0x103: Pop(1)
0x104: Push((int) 512073)
0x105: @@ SetMessage(Stack[-1])
0x106: Pop(1)
0x107: @@ ClearReplies()
0x108: Pop(0)
0x109: Push((int) 512074)
0x10a: Push((int) 13298)
0x10b: Push((int) 13295)
0x10c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d: Pop(3)
0x10e: Push((int) 512075)
0x10f: Push((int) 13298)
0x110: Push((int) 13296)
0x111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112: Pop(3)
0x113: Push((int) 512076)
0x114: Push((int) 13298)
0x115: Push((int) 13297)
0x116: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x117: Pop(3)
0x118: Return(); Pop(0)

0x119: Push((int) 13298)
0x11a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x11c: PushEmpty(string)
0x11d: Stack[-1] = "Neutral"
0x11e: Call2 0xa4

0x11f: Pop(1)
0x120: Push((int) 512077)
0x121: @@ SetMessage(Stack[-1])
0x122: Pop(1)
0x123: @@ ClearReplies()
0x124: Pop(0)
0x125: Push((int) 512078)
0x126: Push((int) 13302)
0x127: Push((int) 13301)
0x128: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129: Pop(3)
0x12a: Push((int) 512082)
0x12b: Push((int) 13302)
0x12c: Push((int) 13305)
0x12d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12e: Pop(3)
0x12f: Return(); Pop(0)

0x130: Push((int) 13302)
0x131: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x132: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x133: PushEmpty(string)
0x134: Stack[-1] = "Neutral"
0x135: Call2 0xa4

0x136: Pop(1)
0x137: Push((int) 512079)
0x138: @@ SetMessage(Stack[-1])
0x139: Pop(1)
0x13a: @@ ClearReplies()
0x13b: Pop(0)
0x13c: Push((int) 512080)
0x13d: Push((int) 13304)
0x13e: Push((int) 13303)
0x13f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x140: Pop(3)
0x141: Push((int) 512084)
0x142: Push((int) 13304)
0x143: Push((int) 13309)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: Return(); Pop(0)

0x147: Push((int) 13304)
0x148: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x14a: PushEmpty(string)
0x14b: Stack[-1] = "Neutral"
0x14c: Call2 0xa4

0x14d: Pop(1)
0x14e: Push((int) 512081)
0x14f: @@ SetMessage(Stack[-1])
0x150: Pop(1)
0x151: @@ ClearReplies()
0x152: Pop(0)
0x153: Push((int) 512085)
0x154: Push((int) -1)
0x155: Push((int) 13311)
0x156: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x157: Pop(3)
0x158: Return(); Pop(0)

0x159: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x15a: PushEmpty(bool)
0x15b: Call2 0x617

0x15c: Pop(0)
0x15d: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15e: @ lshStopAnimation()
0x15f: Pop(0)
0x160: GOTO 0x163

0x161: @ StopAnimation()
0x162: Pop(0)
0x163: Return(); Pop(0)

0x164: GOTO 0xbb

0x165: Return(); Pop(0)

0x166: Push((int) 100)
0x167: Push((float)1.0)
0x168: @ SetTimer(Stack[-2], Stack[-1])
0x169: Pop(2)
0x16a: Push((int) 3)
0x16b: @ Sleep(Stack[-1])
0x16c: Pop(1)
0x16d: PushEmpty()
0x16e: Call2 0x191

0x16f: Pop(0)
0x170: GOTO 0x16a

0x171: Return(); Pop(0)

0x172: PushEmpty(bool, bool)
0x173: @ IsPlayerActor(Stack[-3], Stack[-1])
0x174: Pop(0)
0x175: Push(Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x177: PushEmpty(object)
0x178: Stack[-1] = Stack[-4]
0x179: Push(-1, 3); TaskCall(3)
0x17a: Call2 0x21a

0x17b: Pop(-1, 3); TaskReturn
0x17c: Pop(1)
0x17d: Return(); Pop(2)

0x17e: PushEmpty()
0x17f: PushEmpty()
0x180: Call2 0x1e2

0x181: Pop(0)
0x182: PushEmpty(int, object)
0x183: Stack[-1] = Stack[-3]
0x184: Push(-2, 1); TaskCall(0)
0x185: Call2 0x0

0x186: Pop(-2, 1); TaskReturn
0x187: Pop(2)
0x188: Return(); Pop(0)

0x189: PushEmpty()
0x18a: Push((int) 100)
0x18b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18d: PushEmpty()
0x18e: Call2 0x629

0x18f: Pop(0)
0x190: Return(); Pop(0)

0x191: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x192: @ WaitForAnimEnd()
0x193: Pop(0)
0x194: PushEmpty(bool)
0x195: Call2 0x435

0x196: Pop(0)
0x197: Pop(1); Push((bool) Stack[-1] == 0)
0x198: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x199: Return(); Pop(14)

0x19a: PushEmpty(int)
0x19b: Call2 0x5d5

0x19c: Stack[-8] = Stack[-1]
0x19d: Pop(1)
0x19e: Stack[-6] = (int) 0
0x19f: PushEmpty(bool)
0x1a0: Stack[-1] = (bool) 0
0x1a1: Push((int) 5)
0x1a2: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a4: PushEmpty(bool)
0x1a5: Call2 0x435

0x1a6: Pop(0)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a8: Stack[-1] = (bool) 1
0x1a9: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1aa: Push((int) 3)
0x1ab: @ irand(Stack[-6], Stack[-1])
0x1ac: Pop(1)
0x1ad: Push((int) 0)
0x1ae: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1b0: Push(Stack[-7])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1b2: @ irand(Stack[-4], Stack[-7])
0x1b3: Pop(0)
0x1b4: Push("all")
0x1b5: PushEmpty(string, int)
0x1b6: Stack[-1] = Stack[-7]
0x1b7: Call2 0x5ce

0x1b8: Pop(1)
0x1b9: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ba: Pop(2)
0x1bb: @ WaitForAnimEnd(Stack[-3])
0x1bc: Pop(0)
0x1bd: Pop(0); Push((bool) Stack[-3] == 0)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bf: GOTO 0x1dd

0x1c0: GOTO 0x1d2

0x1c1: Push((int) 1)
0x1c2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1c4: Push((int) 4)
0x1c5: @ rand(Stack[-3], Stack[-1])
0x1c6: Pop(1)
0x1c7: Push((int) 1)
0x1c8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1c9: @ Sleep(Stack[-1], Stack[-2])
0x1ca: Pop(1)
0x1cb: Pop(0); Push((bool) Stack[-1] == 0)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cd: GOTO 0x1dd

0x1ce: GOTO 0x1d2

0x1cf: Push(Stack[-6])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d1: GOTO 0x1dd

0x1d2: PushEmpty(bool)
0x1d3: Call2 0x1e0

0x1d4: Pop(0)
0x1d5: Pop(1); Push((bool) Stack[-1] == 0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d7: GOTO 0x1dd

0x1d8: @ ResetAAS()
0x1d9: Pop(0)
0x1da: Push((int) 1)
0x1db: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1dc: GOTO 0x19f

0x1dd: @ ResetAAS()
0x1de: Pop(0)
0x1df: Return(); Pop(14)

0x1e0: Stack[-1] = (bool) 1
0x1e1: Return(); Pop(0)

0x1e2: @ StopAnimation()
0x1e3: Pop(0)
0x1e4: @ StopGroup0()
0x1e5: Pop(0)
0x1e6: Return(); Pop(0)

0x1e7: PushEmpty(bool, string, string)
0x1e8: Stack[-2] = "quest_d6_03"
0x1e9: Stack[-1] = "albinos_retreated"
0x1ea: Call2 0x5b9

0x1eb: Pop(3)
0x1ec: @ Hold()
0x1ed: Pop(0)
0x1ee: Return(); Pop(0)

0x1ef: PushEmpty()
0x1f0: Push((int) 100)
0x1f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f3: PushEmpty()
0x1f4: Call2 0x629

0x1f5: Pop(0)
0x1f6: GOTO 0x1fb

0x1f7: PushEmpty(int)
0x1f8: Stack[-1] = Stack[-2]
0x1f9: Call2 0x263

0x1fa: Pop(1)
0x1fb: Return(); Pop(0)

0x1fc: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x1fd: @ GetPosition(Stack[-6])
0x1fe: Pop(0)
0x1ff: @@ GetPosition(Stack[-5])
0x200: Pop(0)
0x201: @ GetDirection(Stack[-4])
0x202: Pop(0)
0x203: PushEmpty(cvector, cvector)
0x204: PushEmpty(cvector, cvector)
0x205: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x206: Call2 0x57f

0x207: Pop(1)
0x208: Push((float)0.75)
0x209: Pop(1); Push(Stack[-8] * Stack[-1]);
0x20a: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x20b: Call2 0x57f

0x20c: Stack[-5] = Stack[-2]
0x20d: Pop(2)
0x20e: Push((int) 32)
0x20f: Push((float)7000.0)
0x210: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x211: Pop(2)
0x212: Push((int) 100)
0x213: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x214: Push((int) 0)
0x215: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x216: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x217: Stack[-1] = (int) 0
0x218: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x219: Return(); Pop(12)

0x21a: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x21b: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x21c: PushEmpty(cvector, float)
0x21d: Stack[-1] = (float) 1.74533
0x21e: Call2 0x1fc

0x21f: Stack[-7] = Stack[-2]
0x220: Pop(2)
0x221: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x222: Push((float)2500.0)
0x223: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x224: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x225: PushEmpty(cvector, float)
0x226: Stack[-1] = (float) 2.61799
0x227: Call2 0x1fc

0x228: Stack[-7] = Stack[-2]
0x229: Pop(2)
0x22a: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x22b: Push((float)2500.0)
0x22c: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x22e: Push("Can't retreat, distance: ")
0x22f: Pop(0); Push(Sqrt(Stack[-5]))
0x230: Pop(2); Push(Stack[-2] + Stack[-1]);
0x231: @ Trace(Stack[-1])
0x232: Pop(1)
0x233: Push((float)0.5)
0x234: @ Sleep(Stack[-1])
0x235: Pop(1)
0x236: Return(); Pop(10)

0x237: Push(CvectorIndex(Stack[-5], 0))
0x238: Push(CvectorIndex(Stack[-6], 2))
0x239: @ Rotate(Stack[-2], Stack[-1])
0x23a: Pop(2)
0x23b: PushEmpty(cvector)
0x23c: Call2 0x349

0x23d: Pop(0)
0x23e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x23f: Push((int) 120)
0x240: Push((float)0.5)
0x241: @ SetTimer(Stack[-2], Stack[-1])
0x242: Pop(2)
0x243: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x244: Push((int) 1)
0x245: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x246: Pop(1)
0x247: Push(Stack[-3])
0x248: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x249: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x24a: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24b: GOTO 0x262

0x24c: GOTO 0x260

0x24d: PushEmpty(cvector, float)
0x24e: Stack[-1] = (float) 2.61799
0x24f: Call2 0x1fc

0x250: Stack[-4] = Stack[-2]
0x251: Pop(2)
0x252: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x253: Push((float)2500.0)
0x254: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x255: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x256: PushEmpty(cvector)
0x257: Call2 0x349

0x258: Pop(0)
0x259: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x25a: Push((int) 120)
0x25b: Push((float)0.5)
0x25c: @ SetTimer(Stack[-2], Stack[-1])
0x25d: Pop(2)
0x25e: GOTO 0x260

0x25f: GOTO 0x262

0x260: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x261: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x262: Return(); Pop(10)

0x263: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x264: Push((int) 120)
0x265: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x266: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x267: Return(); Pop(8)

0x268: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x269: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x26a: @ Stop()
0x26b: Pop(0)
0x26c: Push((int) 1)
0x26d: @ KillTimer(Stack[-1])
0x26e: Pop(1)
0x26f: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x270: GOTO 0x296

0x271: @ GetDirection(Stack[-4])
0x272: Pop(0)
0x273: Push((float)7000.0)
0x274: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x275: Pop(1)
0x276: PushEmpty(cvector, float)
0x277: Stack[-1] = (float) 1.74533
0x278: Call2 0x1fc

0x279: Stack[-4] = Stack[-2]
0x27a: Pop(2)
0x27b: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x27c: PushEmpty(bool)
0x27d: Stack[-1] = (bool) 0
0x27e: Push((float)2500.0)
0x27f: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x280: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x281: PushEmpty(bool)
0x282: Stack[-1] = (bool) 1
0x283: Pop(0); Push(Stack[-5] * Stack[-5]);
0x284: Push((float)2.25)
0x285: Pop(2); Push(Stack[-2] * Stack[-1]);
0x286: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x288: PushEmpty(bool)
0x289: Call2 0x2a7

0x28a: Pop(0)
0x28b: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x28c: Stack[-1] = (bool) 0
0x28d: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28e: Stack[-1] = (bool) 1
0x28f: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x290: @ Stop()
0x291: Pop(0)
0x292: PushEmpty(cvector)
0x293: Call2 0x349

0x294: Pop(0)
0x295: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x296: Return(); Pop(8)

0x297: @ Stop()
0x298: Pop(0)
0x299: Push((int) 120)
0x29a: @ KillTimer(Stack[-1])
0x29b: Pop(1)
0x29c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x29d: Return(); Pop(0)

0x29e: PushEmpty()
0x29f: PushEmpty()
0x2a0: Call2 0x297

0x2a1: Pop(0)
0x2a2: PushEmpty(object)
0x2a3: Stack[-1] = Stack[-2]
0x2a4: Call2 0x662

0x2a5: Pop(1)
0x2a6: Return(); Pop(0)

0x2a7: PushEmpty(cvector, cvector, cvector, cvector)
0x2a8: @ GetDirection(Stack[-2])
0x2a9: Pop(0)
0x2aa: PushEmpty(cvector, object)
0x2ab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ac: Call2 0x34e

0x2ad: Stack[-3] = Stack[-2]
0x2ae: Pop(2)
0x2af: PushEmpty(float, cvector, cvector)
0x2b0: Stack[-2] = Stack[-5]
0x2b1: Stack[-1] = Stack[-4]
0x2b2: Call2 0x59b

0x2b3: Pop(2)
0x2b4: Push((float)-0.34202)
0x2b5: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x2b6: Return(); Pop(4)

0x2b7: PushEmpty()
0x2b8: PushEmpty(object)
0x2b9: Stack[-1] = Stack[-2]
0x2ba: Call2 0x2c0

0x2bb: Pop(1)
0x2bc: @ Hold()
0x2bd: Pop(0)
0x2be: GOTO 0x2bc

0x2bf: Return(); Pop(0)

0x2c0: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x2c1: Pop(0); Push((bool) Stack[-21] == 0)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c3: PushEmpty(string)
0x2c4: Stack[-1] = "fdie"
0x2c5: Call2 0x31b

0x2c6: Pop(1)
0x2c7: GOTO 0x31a

0x2c8: @@ GetPosition(Stack[-10])
0x2c9: Pop(0)
0x2ca: @ GetPosition(Stack[-9])
0x2cb: Pop(0)
0x2cc: @ GetDirection(Stack[-8])
0x2cd: Pop(0)
0x2ce: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x2cf: Push(CvectorIndex(Stack[-7], 0))
0x2d0: Push(CvectorIndex(Stack[-9], 0))
0x2d1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2d2: Push(CvectorIndex(Stack[-8], 2))
0x2d3: Push(CvectorIndex(Stack[-10], 2))
0x2d4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2d5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d6: Push((int) 0)
0x2d7: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d9: Stack[-6] = "fdie"
0x2da: GOTO 0x2dc

0x2db: Stack[-6] = "bdie"
0x2dc: @ RemoveRTEnvelope()
0x2dd: Pop(0)
0x2de: @ SetDeathState()
0x2df: Pop(0)
0x2e0: @ Stop()
0x2e1: Pop(0)
0x2e2: @ StopAsync()
0x2e3: Pop(0)
0x2e4: Stack[-5] = Stack[-21]
0x2e5: Push("GetScriptProperty")
0x2e6: Push((int) 2)
0x2e7: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x2e8: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2e9: Push("Owner")
0x2ea: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x2eb: Pop(1)
0x2ec: Push(Stack[-4])
0x2ed: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2ee: Push("Owner")
0x2ef: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x2f0: Pop(1)
0x2f1: Pop(0); Push((bool) Stack[-5] == 0)
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f3: Stack[-5] = Stack[-21]
0x2f4: Push("@GetEyesHeight")
0x2f5: Push((int) 1)
0x2f6: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x2f7: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x2f8: @@ GetEyesHeight(Stack[-2])
0x2f9: Pop(0)
0x2fa: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2fb: Push(CvectorIndex(Stack[-1], 1))
0x2fc: Stack[-1] = Stack[-3]
0x2fd: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2fe: Push("head")
0x2ff: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x300: Pop(1)
0x301: Stack[-3] = (bool) 1
0x302: GOTO 0x304

0x303: Stack[-3] = (bool) 0
0x304: PushEmpty(string)
0x305: Stack[-1] = Stack[-7]
0x306: Call2 0x550

0x307: Pop(1)
0x308: Push("all")
0x309: @ PlayAnimation(Stack[-1], Stack[-7])
0x30a: Pop(1)
0x30b: @ WaitForAnimEnd()
0x30c: Pop(0)
0x30d: Push(Stack[-3])
0x30e: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30f: @ StopAsync()
0x310: Pop(0)
0x311: Push("head")
0x312: @ UnlookAsync(Stack[-1])
0x313: Pop(1)
0x314: Push("all")
0x315: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x316: Pop(1)
0x317: @ RemoveEnvelope()
0x318: Pop(0)
0x319: Stack[-5] = 0
0x31a: Return(); Pop(20)

0x31b: PushEmpty()
0x31c: @ RemoveRTEnvelope()
0x31d: Pop(0)
0x31e: @ SetDeathState()
0x31f: Pop(0)
0x320: @ Stop()
0x321: Pop(0)
0x322: @ StopAsync()
0x323: Pop(0)
0x324: @ StopSecondaryAnimation()
0x325: Pop(0)
0x326: PushEmpty(string)
0x327: Stack[-1] = Stack[-2]
0x328: Call2 0x550

0x329: Pop(1)
0x32a: Push("all")
0x32b: @ PlayAnimation(Stack[-1], Stack[-2])
0x32c: Pop(1)
0x32d: @ WaitForAnimEnd()
0x32e: Pop(0)
0x32f: Push("all")
0x330: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x331: Pop(1)
0x332: @ RemoveEnvelope()
0x333: Pop(0)
0x334: Return(); Pop(0)

0x335: PushEmpty()
0x336: Return(); Pop(0)

0x337: PushEmpty()
0x338: Return(); Pop(0)

0x339: PushEmpty()
0x33a: Return(); Pop(0)

0x33b: PushEmpty()
0x33c: Push((int) 2)
0x33d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x33e: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x33f: Stack[-2] = "fire"
0x340: Return(); Pop(0)

0x341: GOTO 0x347

0x342: Push((int) 1)
0x343: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x345: Stack[-2] = "bullet"
0x346: Return(); Pop(0)

0x347: Stack[-2] = "phys"
0x348: Return(); Pop(0)

0x349: PushEmpty(cvector, cvector)
0x34a: @ GetPosition(Stack[-1])
0x34b: Pop(0)
0x34c: Stack[-3] = Stack[-1]
0x34d: Return(); Pop(2)

0x34e: PushEmpty(cvector, cvector, cvector, cvector)
0x34f: @ GetPosition(Stack[-2])
0x350: Pop(0)
0x351: @@ GetPosition(Stack[-1])
0x352: Pop(0)
0x353: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x354: Return(); Pop(4)

0x355: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x356: @ GetPosition(Stack[-3])
0x357: Pop(0)
0x358: @@ GetPosition(Stack[-2])
0x359: Pop(0)
0x35a: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x35b: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x35c: Return(); Pop(6)

0x35d: PushEmpty(bool, bool)
0x35e: @ IsPlayerActor(Stack[-3], Stack[-1])
0x35f: Pop(0)
0x360: Stack[-4] = Stack[-1]
0x361: Return(); Pop(2)

0x362: PushEmpty(bool, bool)
0x363: Push("HasProperty")
0x364: Push((int) 2)
0x365: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x366: Pop(1); Push((bool) Stack[-1] == 0)
0x367: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x368: Stack[-5] = (bool) 0
0x369: Return(); Pop(2)

0x36a: @@ HasProperty(Stack[-3], Stack[-1])
0x36b: Pop(0)
0x36c: Stack[-5] = Stack[-1]
0x36d: Return(); Pop(2)

0x36e: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x36f: PushEmpty(bool, object, string)
0x370: Stack[-2] = Stack[-18]
0x371: Stack[-1] = "health"
0x372: Call2 0x362

0x373: Pop(2)
0x374: Pop(1); Push((bool) Stack[-1] == 0)
0x375: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x376: Stack[-16] = (float) 0.0
0x377: Return(); Pop(12)

0x378: PushEmpty(bool, object, string)
0x379: Stack[-2] = Stack[-18]
0x37a: Stack[-1] = "armor"
0x37b: Call2 0x362

0x37c: Pop(2)
0x37d: Pop(1); Push((bool) Stack[-1] == 0)
0x37e: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x37f: Stack[-6] = (int) 0
0x380: GOTO 0x384

0x381: Push("armor")
0x382: @@ GetProperty(Stack[-1], Stack[-7])
0x383: Pop(1)
0x384: Push("armor_")
0x385: PushEmpty(string, int)
0x386: Stack[-1] = Stack[-16]
0x387: Call2 0x33b

0x388: Pop(1)
0x389: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x38a: PushEmpty(bool, object, string)
0x38b: Stack[-2] = Stack[-18]
0x38c: Stack[-1] = Stack[-8]
0x38d: Call2 0x362

0x38e: Pop(2)
0x38f: Pop(1); Push((bool) Stack[-1] == 0)
0x390: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x391: Stack[-4] = (int) 0
0x392: GOTO 0x395

0x393: @@ GetProperty(Stack[-5], Stack[-4])
0x394: Pop(0)
0x395: PushEmpty(float, float, float)
0x396: Pop(0); Push(Stack[-9] + Stack[-7]);
0x397: Push((float)100.0)
0x398: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x399: Stack[-1] = (int) 1
0x39a: Call2 0x589

0x39b: Stack[-6] = Stack[-3]
0x39c: Pop(3)
0x39d: Push("health")
0x39e: @@ GetProperty(Stack[-1], Stack[-3])
0x39f: Pop(1)
0x3a0: Push((int) 1)
0x3a1: Pop(1); Push(Stack[-1] - Stack[-4]);
0x3a2: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x3a3: Push("health")
0x3a4: PushEmpty(float, float, float, float)
0x3a5: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x3a6: Stack[-2] = (int) 0
0x3a7: Stack[-1] = (int) 1
0x3a8: Call2 0x590

0x3a9: Pop(3)
0x3aa: @@ SetProperty(Stack[-2], Stack[-1])
0x3ab: Pop(2)
0x3ac: PushEmpty(bool, object)
0x3ad: Stack[-1] = Stack[-17]
0x3ae: Call2 0x35d

0x3af: Pop(1)
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b1: PushEmpty(float)
0x3b2: Stack[-1] = -Stack[-2]; Pop(0);
0x3b3: Call2 0x5a8

0x3b4: Pop(1)
0x3b5: Stack[-16] = Stack[-1]
0x3b6: Return(); Pop(12)

0x3b7: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x3b8: Pop(0); Push((bool) Stack[-15] == 0)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3ba: Return(); Pop(14)

0x3bb: @ IsDead(Stack[-7])
0x3bc: Pop(0)
0x3bd: Push(Stack[-7])
0x3be: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bf: Return(); Pop(14)

0x3c0: @ GetSecondaryAnimationType(Stack[-6])
0x3c1: Pop(0)
0x3c2: Push((int) 0)
0x3c3: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x3c4: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c5: Return(); Pop(14)

0x3c6: @@ GetPosition(Stack[-5])
0x3c7: Pop(0)
0x3c8: @ GetPosition(Stack[-4])
0x3c9: Pop(0)
0x3ca: @ GetDirection(Stack[-3])
0x3cb: Pop(0)
0x3cc: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x3cd: Push(CvectorIndex(Stack[-2], 0))
0x3ce: Push(CvectorIndex(Stack[-4], 0))
0x3cf: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3d0: Push(CvectorIndex(Stack[-3], 2))
0x3d1: Push(CvectorIndex(Stack[-5], 2))
0x3d2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3d3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3d4: Push((int) 0)
0x3d5: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x3d6: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d7: Stack[-1] = "fhit"
0x3d8: GOTO 0x3da

0x3d9: Stack[-1] = "bhit"
0x3da: Push("hit_react")
0x3db: Push("1")
0x3dc: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3dd: Push("2")
0x3de: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3df: Push((int) -10)
0x3e0: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3e1: Pop(4)
0x3e2: Return(); Pop(14)

0x3e3: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x3e4: PushEmpty(bool)
0x3e5: Stack[-1] = (bool) 0
0x3e6: PushEmpty(bool)
0x3e7: Stack[-1] = (bool) 0
0x3e8: Push(Stack[-23])
0x3e9: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3ea: Push((int) 4)
0x3eb: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x3ec: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3ed: Stack[-1] = (bool) 1
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3ef: Push((int) 5)
0x3f0: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f2: Stack[-1] = (bool) 1
0x3f3: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x3f4: PushEmpty(cvector, cvector)
0x3f5: PushEmpty(cvector, object)
0x3f6: Stack[-1] = Stack[-25]
0x3f7: Call2 0x34e

0x3f8: Stack[-3] = Stack[-2]
0x3f9: Pop(2)
0x3fa: Call2 0x57f

0x3fb: Stack[-11] = Stack[-2]
0x3fc: Pop(2)
0x3fd: @ CreateVectorVector(Stack[-8])
0x3fe: Pop(0)
0x3ff: Stack[-7] = (int) 1
0x400: Push("hit")
0x401: Pop(1); Push(Stack[-1] + Stack[-8]);
0x402: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x403: Pop(1)
0x404: Pop(0); Push((bool) Stack[-6] == 0)
0x405: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x406: GOTO 0x410

0x407: Pop(0); Push(Stack[-4] | Stack[-9]);
0x408: Push((float)0.70711)
0x409: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x40a: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40b: @@ add(Stack[-5])
0x40c: Pop(0)
0x40d: Push((int) 1)
0x40e: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x40f: GOTO 0x400

0x410: @@ size(Stack[-3])
0x411: Pop(0)
0x412: Push(Stack[-3])
0x413: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x414: @ irand(Stack[-2], Stack[-3])
0x415: Pop(0)
0x416: @@ get(Stack[-1], Stack[-2])
0x417: Pop(0)
0x418: PushEmpty(object, int, float, cvector, cvector)
0x419: Stack[-5] = Stack[-26]
0x41a: Stack[-4] = Stack[-25]
0x41b: Stack[-3] = Stack[-24]
0x41c: Stack[-2] = Stack[-6]
0x41d: Stack[-1] = -Stack[-14]; Pop(0);
0x41e: Call2 0x427

0x41f: Pop(5)
0x420: Return(); Pop(18)

0x421: Stack[-8] = 0
0x422: PushEmpty(object)
0x423: Stack[-1] = Stack[-22]
0x424: Call2 0x3b7

0x425: Pop(1)
0x426: Return(); Pop(18)

0x427: PushEmpty(object, object, object, object)
0x428: @ GetScene(Stack[-2])
0x429: Pop(0)
0x42a: Push("scripted")
0x42b: Push("blood_dir.xml")
0x42c: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x42d: Pop(2)
0x42e: PushEmpty(object)
0x42f: Stack[-1] = Stack[-10]
0x430: Call2 0x3b7

0x431: Pop(1)
0x432: Return(); Pop(4)

0x433: Stack[-1] = 0
0x434: Stack[-2] = 0
0x435: PushEmpty(bool, bool)
0x436: @ IsLoaded(Stack[-1])
0x437: Pop(0)
0x438: Stack[-3] = Stack[-1]
0x439: Return(); Pop(2)

0x43a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x43b: @@ GetPosition(Stack[-8])
0x43c: Pop(0)
0x43d: @@ GetEyesHeight(Stack[-9])
0x43e: Pop(0)
0x43f: Push(CvectorIndex(Stack[-8], 1))
0x440: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x441: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x442: @ GetPosition(Stack[-7])
0x443: Pop(0)
0x444: @ GetEyesHeight(Stack[-9])
0x445: Pop(0)
0x446: Push(CvectorIndex(Stack[-7], 1))
0x447: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x448: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x449: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x44a: Push(CvectorIndex(Stack[-6], 1))
0x44b: Stack[-1] = (int) 0
0x44c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x44d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x44e: Pop(1); Push(Sqrt(Stack[-1]))
0x44f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x450: Stack[-5] = -Stack[-6]; Pop(0);
0x451: Pop(0); Push(Stack[-6] * Stack[-19]);
0x452: PushEmpty(cvector, cvector)
0x453: Push(CVector(0.0, 1.0, 0.0))
0x454: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x455: Call2 0x57f

0x456: Pop(1)
0x457: Push((int) 25)
0x458: Pop(2); Push(Stack[-2] * Stack[-1]);
0x459: Pop(2); Push(Stack[-2] + Stack[-1]);
0x45a: Push(CVector(0.0, 10.0, 0.0))
0x45b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x45c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x45d: @ IsOverrideActive(Stack[-2])
0x45e: Pop(0)
0x45f: Push(Stack[-2])
0x460: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x461: Stack[-21] = (bool) 0
0x462: Return(); Pop(18)

0x463: @ StopWorld()
0x464: Pop(0)
0x465: Push((bool) 1)
0x466: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x467: Pop(1)
0x468: Push(CvectorIndex(Stack[-4], 0))
0x469: Push(CvectorIndex(Stack[-5], 2))
0x46a: @ Rotate(Stack[-2], Stack[-1])
0x46b: Pop(2)
0x46c: PushEmpty(bool)
0x46d: Call2 0x617

0x46e: Pop(0)
0x46f: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x470: GOTO 0x479

0x471: Push("head")
0x472: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x473: Pop(1)
0x474: Push(Stack[-1])
0x475: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x476: Push("head")
0x477: @ LookAsyncCamera(Stack[-1])
0x478: Pop(1)
0x479: @ CameraWaitForPlayFinish()
0x47a: Pop(0)
0x47b: @ ResumeWorld()
0x47c: Pop(0)
0x47d: Stack[-21] = (bool) 1
0x47e: Return(); Pop(18)

0x47f: PushEmpty(bool, bool)
0x480: Push((bool) 1)
0x481: @ CameraSwitchToNormal(Stack[-1])
0x482: Pop(1)
0x483: PushEmpty(bool)
0x484: Call2 0x617

0x485: Pop(0)
0x486: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x487: GOTO 0x490

0x488: Push("head")
0x489: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x48a: Pop(1)
0x48b: Push(Stack[-1])
0x48c: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48d: Push("head")
0x48e: @ UnlookAsync(Stack[-1])
0x48f: Pop(1)
0x490: Return(); Pop(2)

0x491: PushEmpty(int, int, int, int)
0x492: Push("voice_common")
0x493: @ GetVariable(Stack[-1], Stack[-3])
0x494: Pop(1)
0x495: Push(Stack[-2])
0x496: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x497: PushEmpty(bool, object)
0x498: Stack[-1] = Stack[-7]
0x499: Call2 0x4cb

0x49a: Pop(1)
0x49b: Pop(1); Push((bool) Stack[-1] == 0)
0x49c: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x49d: PushEmpty(bool, object)
0x49e: Stack[-1] = Stack[-7]
0x49f: Call2 0x4f0

0x4a0: Pop(1)
0x4a1: Pop(1); Push((bool) Stack[-1] == 0)
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x4a3: Stack[-6] = (bool) 0
0x4a4: Return(); Pop(4)

0x4a5: Push((int) 2)
0x4a6: @ irand(Stack[-2], Stack[-1])
0x4a7: Pop(1)
0x4a8: Push(Stack[-1])
0x4a9: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4aa: Push("voice_common")
0x4ab: Push((int) 1)
0x4ac: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4ad: Push((int) 3)
0x4ae: Pop(2); Push(Stack[-2] % Stack[-1]);
0x4af: @ SetVariable(Stack[-2], Stack[-1])
0x4b0: Pop(2)
0x4b1: GOTO 0x4b6

0x4b2: Push("voice_common")
0x4b3: Push((int) 0)
0x4b4: @ SetVariable(Stack[-2], Stack[-1])
0x4b5: Pop(2)
0x4b6: GOTO 0x4c9

0x4b7: PushEmpty(bool, object)
0x4b8: Stack[-1] = Stack[-7]
0x4b9: Call2 0x4f0

0x4ba: Pop(1)
0x4bb: Pop(1); Push((bool) Stack[-1] == 0)
0x4bc: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4bd: PushEmpty(bool, object)
0x4be: Stack[-1] = Stack[-7]
0x4bf: Call2 0x4cb

0x4c0: Pop(1)
0x4c1: Pop(1); Push((bool) Stack[-1] == 0)
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c3: Stack[-6] = (bool) 0
0x4c4: Return(); Pop(4)

0x4c5: Push("voice_common")
0x4c6: Push((int) 1)
0x4c7: @ SetVariable(Stack[-2], Stack[-1])
0x4c8: Pop(2)
0x4c9: Stack[-6] = (bool) 1
0x4ca: Return(); Pop(4)

0x4cb: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x4cc: Stack[-5] = "c"
0x4cd: Stack[-4] = (int) 0
0x4ce: Push((int) 1)
0x4cf: IF (Stack[-1] == 0) GOTO 0x4db; Pop(1)

0x4d0: Push((int) 1)
0x4d1: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4d2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4d3: @@ HasProperty(Stack[-1], Stack[-4])
0x4d4: Pop(1)
0x4d5: Pop(0); Push((bool) Stack[-3] == 0)
0x4d6: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d7: GOTO 0x4db

0x4d8: Push((int) 1)
0x4d9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4da: GOTO 0x4ce

0x4db: Pop(0); Push((bool) Stack[-4] == 0)
0x4dc: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4dd: Stack[-12] = (bool) 0
0x4de: Return(); Pop(10)

0x4df: Stack[-2] = (int) 0
0x4e0: Push((int) 1)
0x4e1: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4e3: @ irand(Stack[-2], Stack[-4])
0x4e4: Pop(0)
0x4e5: Push((int) 1)
0x4e6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4e7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4e8: @@ GetProperty(Stack[-1], Stack[-2])
0x4e9: Pop(1)
0x4ea: PushEmpty(bool, string)
0x4eb: Stack[-1] = Stack[-3]
0x4ec: Call2 0x53a

0x4ed: Stack[-14] = Stack[-2]
0x4ee: Pop(2)
0x4ef: Return(); Pop(10)

0x4f0: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x4f1: Push("d")
0x4f2: PushEmpty(int)
0x4f3: Call2 0x5c5

0x4f4: Pop(0)
0x4f5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4f6: Push("m")
0x4f7: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4f8: Stack[-4] = (int) 0
0x4f9: Push((int) 1)
0x4fa: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x4fb: Push((int) 1)
0x4fc: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4fd: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4fe: @@ HasProperty(Stack[-1], Stack[-4])
0x4ff: Pop(1)
0x500: Pop(0); Push((bool) Stack[-3] == 0)
0x501: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x502: GOTO 0x506

0x503: Push((int) 1)
0x504: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x505: GOTO 0x4f9

0x506: Pop(0); Push((bool) Stack[-4] == 0)
0x507: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x508: Stack[-12] = (bool) 0
0x509: Return(); Pop(10)

0x50a: Stack[-2] = (int) 0
0x50b: Push((int) 1)
0x50c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x50d: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50e: @ irand(Stack[-2], Stack[-4])
0x50f: Pop(0)
0x510: Push((int) 1)
0x511: Pop(1); Push(Stack[-3] + Stack[-1]);
0x512: Pop(1); Push(Stack[-6] + Stack[-1]);
0x513: @@ GetProperty(Stack[-1], Stack[-2])
0x514: Pop(1)
0x515: PushEmpty(bool, string)
0x516: Stack[-1] = Stack[-3]
0x517: Call2 0x53a

0x518: Stack[-14] = Stack[-2]
0x519: Pop(2)
0x51a: Return(); Pop(10)

0x51b: PushEmpty(bool, float, float, bool, float, float)
0x51c: @ lshHasAnimation(Stack[-3], Stack[-7])
0x51d: Pop(0)
0x51e: Push(Stack[-3])
0x51f: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x520: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x521: Pop(0)
0x522: Push((bool) 0)
0x523: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x524: Pop(1)
0x525: GOTO 0x52a

0x526: Push("Can't find lsh animation : ")
0x527: Pop(1); Push(Stack[-1] + Stack[-8]);
0x528: @ Trace(Stack[-1])
0x529: Pop(1)
0x52a: Return(); Pop(6)

0x52b: PushEmpty(bool, float, float, bool, float, float)
0x52c: @ lshHasAnimation(Stack[-3], Stack[-8])
0x52d: Pop(0)
0x52e: Push(Stack[-3])
0x52f: IF (Stack[-1] == 0) GOTO 0x535; Pop(1)

0x530: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x531: Pop(0)
0x532: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x533: Pop(0)
0x534: GOTO 0x539

0x535: Push("Can't find lsh animation : ")
0x536: Pop(1); Push(Stack[-1] + Stack[-9]);
0x537: @ Trace(Stack[-1])
0x538: Pop(1)
0x539: Return(); Pop(6)

0x53a: PushEmpty(bool, bool)
0x53b: PushEmpty(bool)
0x53c: Call2 0x617

0x53d: Pop(0)
0x53e: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x53f: @ lshHasSpeech(Stack[-1], Stack[-3])
0x540: Pop(0)
0x541: Push(Stack[-1])
0x542: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x543: @ lshPlaySpeech(Stack[-3])
0x544: Pop(0)
0x545: Stack[-4] = (bool) 1
0x546: Return(); Pop(2)

0x547: Stack[-4] = (bool) 0
0x548: Return(); Pop(2)

0x549: PushEmpty(bool)
0x54a: Call2 0x617

0x54b: Pop(0)
0x54c: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x54d: @ lshStopSpeech()
0x54e: Pop(0)
0x54f: Return(); Pop(0)

0x550: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x551: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x552: Pop(0)
0x553: Pop(0); Push((bool) Stack[-8] == 0)
0x554: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x555: Stack[-7] = (int) 0
0x556: Push((int) 1)
0x557: Pop(1); Push(Stack[-8] + Stack[-1]);
0x558: Pop(1); Push(Stack[-18] + Stack[-1]);
0x559: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x55a: Pop(1)
0x55b: Pop(0); Push((bool) Stack[-6] == 0)
0x55c: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x55d: GOTO 0x561

0x55e: Push((int) 1)
0x55f: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x560: GOTO 0x556

0x561: Pop(0); Push((bool) Stack[-7] == 0)
0x562: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x563: Return(); Pop(16)

0x564: @ irand(Stack[-5], Stack[-7])
0x565: Pop(0)
0x566: Push((int) 1)
0x567: Pop(1); Push(Stack[-6] + Stack[-1]);
0x568: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x569: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x56a: Pop(0)
0x56b: Push(Stack[-4])
0x56c: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x56d: @ GetEyesHeight(Stack[-3])
0x56e: Pop(0)
0x56f: @ GetDirection(Stack[-2])
0x570: Pop(0)
0x571: Push((int) 50)
0x572: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x573: Push(CvectorIndex(Stack[-1], 1))
0x574: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x575: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x576: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x577: Pop(0)
0x578: Return(); Pop(16)

0x579: PushEmpty(object, object)
0x57a: @ self(Stack[-1])
0x57b: Pop(0)
0x57c: Stack[-3] = Stack[-1]
0x57d: Return(); Pop(2)

0x57e: Stack[-1] = 0
0x57f: PushEmpty(float, float)
0x580: Pop(0); Push(Stack[-3] | Stack[-3]);
0x581: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x582: Push((float)0.0)
0x583: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x584: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x585: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x586: Return(); Pop(2)

0x587: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x588: Return(); Pop(2)

0x589: PushEmpty()
0x58a: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x58b: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x58c: Stack[-3] = Stack[-2]
0x58d: GOTO 0x58f

0x58e: Stack[-3] = Stack[-1]
0x58f: Return(); Pop(0)

0x590: PushEmpty()
0x591: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x592: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x593: Stack[-4] = Stack[-2]
0x594: Return(); Pop(0)

0x595: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x596: IF (Stack[-1] == 0) GOTO 0x599; Pop(1)

0x597: Stack[-4] = Stack[-1]
0x598: Return(); Pop(0)

0x599: Stack[-4] = Stack[-3]
0x59a: Return(); Pop(0)

0x59b: PushEmpty()
0x59c: Pop(0); Push(Stack[-2] | Stack[-1]);
0x59d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x59e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x59f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5a0: Pop(1); Push(Sqrt(Stack[-1]))
0x5a1: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x5a2: Return(); Pop(0)

0x5a3: PushEmpty(int, int)
0x5a4: @ GetVariable(Stack[-3], Stack[-1])
0x5a5: Pop(0)
0x5a6: Stack[-4] = Stack[-1]
0x5a7: Return(); Pop(2)

0x5a8: PushEmpty(object, object)
0x5a9: @ CreateFloatVector(Stack[-1])
0x5aa: Pop(0)
0x5ab: @@ add(Stack[-3])
0x5ac: Pop(0)
0x5ad: Push((int) 0)
0x5ae: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x5af: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5b0: Push((float)0.7)
0x5b1: Push((int) 500)
0x5b2: @ RumblePlay(Stack[-2], Stack[-1])
0x5b3: Pop(2)
0x5b4: Push((int) 15)
0x5b5: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x5b6: Pop(1)
0x5b7: Return(); Pop(2)

0x5b8: Stack[-1] = 0
0x5b9: PushEmpty(object, object)
0x5ba: @ FindActor(Stack[-1], Stack[-4])
0x5bb: Pop(0)
0x5bc: Pop(0); Push((bool) Stack[-1] == 0)
0x5bd: IF (Stack[-1] == 0) GOTO 0x5c0; Pop(1)

0x5be: Stack[-5] = (bool) 0
0x5bf: Return(); Pop(2)

0x5c0: @ Trigger(Stack[-1], Stack[-3])
0x5c1: Pop(0)
0x5c2: Stack[-5] = (bool) 1
0x5c3: Return(); Pop(2)

0x5c4: Stack[-1] = 0
0x5c5: PushEmpty(float, float)
0x5c6: @ GetGameTime(Stack[-1])
0x5c7: Pop(0)
0x5c8: Push((int) 1)
0x5c9: PushEmpty(int)
0x5ca: Push((int) 24)
0x5cb: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x5cc: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5cd: Return(); Pop(2)

0x5ce: PushEmpty(string, string)
0x5cf: Stack[-1] = "idle"
0x5d0: Push(Stack[-3])
0x5d1: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5d2: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x5d3: Stack[-4] = Stack[-1]
0x5d4: Return(); Pop(2)

0x5d5: PushEmpty(int, bool, int, bool)
0x5d6: Stack[-2] = (int) 0
0x5d7: Push("all")
0x5d8: PushEmpty(string, int)
0x5d9: Stack[-1] = Stack[-5]
0x5da: Call2 0x5ce

0x5db: Pop(1)
0x5dc: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5dd: Pop(2)
0x5de: Pop(0); Push((bool) Stack[-1] == 0)
0x5df: IF (Stack[-1] == 0) GOTO 0x5e1; Pop(1)

0x5e0: GOTO 0x5e4

0x5e1: Push((int) 1)
0x5e2: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x5e3: GOTO 0x5d7

0x5e4: Stack[-5] = Stack[-2]
0x5e5: Return(); Pop(4)

0x5e6: PushEmpty()
0x5e7: Push("d6q03")
0x5e8: Push((int) 2)
0x5e9: @ SetVariable(Stack[-2], Stack[-1])
0x5ea: Pop(2)
0x5eb: Return(); Pop(0)

0x5ec: PushEmpty()
0x5ed: Push("ood6Albinos1")
0x5ee: Push((int) 1)
0x5ef: @ SetVariable(Stack[-2], Stack[-1])
0x5f0: Pop(2)
0x5f1: Return(); Pop(0)

0x5f2: PushEmpty()
0x5f3: PushEmpty(int, string)
0x5f4: Stack[-1] = "ood6Albinos1"
0x5f5: Call2 0x5a3

0x5f6: Pop(1)
0x5f7: Push((int) 0)
0x5f8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5f9: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5fa: Stack[-2] = (bool) 1
0x5fb: Return(); Pop(0)

0x5fc: Stack[-2] = (bool) 0
0x5fd: Return(); Pop(0)

0x5fe: PushEmpty(int, int)
0x5ff: Push("branch")
0x600: @ GetVariable(Stack[-1], Stack[-2])
0x601: Pop(1)
0x602: Push((int) 0)
0x603: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x604: IF (Stack[-1] == 0) GOTO 0x608; Pop(1)

0x605: Stack[-3] = (int) 1
0x606: Return(); Pop(2)

0x607: GOTO 0x60d

0x608: Push((int) 1)
0x609: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x60a: IF (Stack[-1] == 0) GOTO 0x60d; Pop(1)

0x60b: Stack[-3] = (int) 2
0x60c: Return(); Pop(2)

0x60d: Stack[-3] = (int) 3
0x60e: Return(); Pop(2)

0x60f: Stack[-1] = (int) 515595
0x610: Return(); Pop(0)

0x611: Stack[-1] = (int) 512611
0x612: Return(); Pop(0)

0x613: Stack[-1] = "ui/NPC_Albinos.png"
0x614: Return(); Pop(0)

0x615: Stack[-1] = "ui/NPC_Albinos_b.png"
0x616: Return(); Pop(0)

0x617: Stack[-1] = (bool) 0
0x618: Return(); Pop(0)

0x619: PushEmpty()
0x61a: Push((int) 100)
0x61b: @ KillTimer(Stack[-1])
0x61c: Pop(1)
0x61d: PushEmpty(bool, string, string)
0x61e: Stack[-2] = "quest_d6_03"
0x61f: Stack[-1] = "albinos_dead"
0x620: Call2 0x5b9

0x621: Pop(3)
0x622: PushEmpty(object)
0x623: Stack[-1] = Stack[-2]
0x624: Push(-1, 0); TaskCall(4)
0x625: Call2 0x2b7

0x626: Pop(-1, 0); TaskReturn
0x627: Pop(1)
0x628: Return(); Pop(0)

0x629: PushEmpty(object, float, object, float)
0x62a: Push("player")
0x62b: @ FindActor(Stack[-3], Stack[-1])
0x62c: Pop(1)
0x62d: Push(Stack[-2])
0x62e: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x62f: PushEmpty(float, object)
0x630: Stack[-1] = Stack[-4]
0x631: Call2 0x355

0x632: Pop(1)
0x633: Push((float)640000.0)
0x634: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x635: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x636: PushEmpty(float, object, float, int)
0x637: Stack[-3] = Stack[-6]
0x638: Stack[-2] = (float) 0.05
0x639: Stack[-1] = (int) 0
0x63a: Call2 0x36e

0x63b: Stack[-5] = Stack[-4]
0x63c: Pop(4)
0x63d: Push((int) 6)
0x63e: Push((float)0.05)
0x63f: @ ReportHit(Stack[-4], Stack[-2], Stack[-3], Stack[-1])
0x640: Pop(2)
0x641: Return(); Pop(4)

0x642: Stack[-2] = 0
0x643: PushEmpty()
0x644: PushEmpty(object, int, float)
0x645: Stack[-3] = Stack[-7]
0x646: Stack[-2] = Stack[-6]
0x647: Stack[-1] = Stack[-5]
0x648: Call2 0x3e3

0x649: Pop(3)
0x64a: Return(); Pop(0)

0x64b: PushEmpty()
0x64c: PushEmpty(object, int, float, cvector, cvector)
0x64d: Stack[-5] = Stack[-11]
0x64e: Stack[-4] = Stack[-10]
0x64f: Stack[-3] = Stack[-9]
0x650: Stack[-2] = Stack[-7]
0x651: Stack[-1] = Stack[-6]
0x652: Call2 0x427

0x653: Pop(5)
0x654: Return(); Pop(0)

0x655: PushEmpty(float, float)
0x656: Push("health")
0x657: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x658: IF (Stack[-1] == 0) GOTO 0x661; Pop(1)

0x659: Push("health")
0x65a: @ GetProperty(Stack[-1], Stack[-2])
0x65b: Pop(1)
0x65c: Push((int) 0)
0x65d: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x65e: IF (Stack[-1] == 0) GOTO 0x661; Pop(1)

0x65f: @ SignalDeath(Stack[-4])
0x660: Pop(0)
0x661: Return(); Pop(2)

0x662: PushEmpty()
0x663: PushEmpty(object)
0x664: Stack[-1] = Stack[-2]
0x665: Call2 0x619

0x666: Pop(1)
0x667: Return(); Pop(0)

