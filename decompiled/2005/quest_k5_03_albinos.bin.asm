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
	quest_k5_03
	abinos_unload
	player
	head
	RemoveStationaryActor
	pt_k5q03_albinos_path
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
	CameraTransit (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
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
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	ReportHit (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x29a
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa4 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x1d0 Vars = (object)
		EVENT_17 Op = 0x1e2 Vars = (object)
		EVENT_41 Op = 0x1e4 Vars = (object)
		EVENT_6 Op = 0x1ed Vars = ()
		EVENT_7 Op = 0x21f Vars = (int)
	GTASK_3 Vars = (bool, int) Params = 0
		EVENT_17 Op = 0x2b5 Vars = (object)
		EVENT_41 Op = 0x2b7 Vars = (object)
		EVENT_6 Op = 0x2c0 Vars = ()
	GTASK_4 Vars = (object, cvector, bool) Params = 2
		EVENT_6 Op = 0x311 Vars = ()
		EVENT_7 Op = 0x319 Vars = (int)
		EVENT_41 Op = 0x3c8 Vars = (object)
	GTASK_5  Params = 1
		EVENT_22 Op = 0x45f Vars = (object, int, float, float)
		EVENT_16 Op = 0x461 Vars = (object, string)
		EVENT_41 Op = 0x463 Vars = (object)

Events:
EVENT_22 Op = 0x72b Vars = (object, int, float, float)
EVENT_43 Op = 0x733 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x73d Vars = (object, string)
EVENT_41 Op = 0x74a Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x57a

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x698

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x696

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x69a

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x69c

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x6f8

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
0x41: Call2 0x5be

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
0x4f: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x50: PushEmpty(object, object)
0x51: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53: Call2 0x6b8

0x54: Pop(2)
0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x8e

0x58: Pop(1)
0x59: Push((int) 525951)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 525952)
0x5f: Push((int) 27237)
0x60: Push((int) 27236)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 542446)
0x64: Push((int) 27239)
0x65: Push((int) 44835)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 542447)
0x69: Push((int) 27241)
0x6a: Push((int) 44837)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x70

0x6e: Return(); Pop(0)

0x6f: GOTO 0x4e

0x70: PushEmpty(bool)
0x71: Call2 0x69e

0x72: Pop(0)
0x73: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x74: @ lshWaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: PushEmpty(string)
0x7a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7b: Call2 0x5cf

0x7c: Pop(1)
0x7d: GOTO 0x74

0x7e: GOTO 0x8d

0x7f: Push("all")
0x80: Push("idle")
0x81: @ PlayAnimation(Stack[-2], Stack[-1])
0x82: Pop(2)
0x83: @ WaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: Push("all")
0x89: Push("idle")
0x8a: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: GOTO 0x83

0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: PushEmpty(bool)
0x90: Call2 0x69e

0x91: Pop(0)
0x92: Pop(1); Push((bool) Stack[-1] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Return(); Pop(0)

0x98: PushEmpty(string, bool)
0x99: Stack[-2] = Stack[-3]
0x9a: Push("")
0x9b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9d: Stack[-1] = (bool) 0
0x9e: GOTO 0xa0

0x9f: Stack[-1] = (bool) 1
0xa0: Call2 0x5df

0xa1: Pop(2)
0xa2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Push((int) 1)
0xa6: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0x5f9

0xa9: Pop(0)
0xaa: Push((int) 27235)
0xab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x6b8

0xb1: Pop(2)
0xb2: PushEmpty(string)
0xb3: Stack[-1] = "Neutral"
0xb4: Call2 0x8e

0xb5: Pop(1)
0xb6: Push((int) 525951)
0xb7: @@ SetMessage(Stack[-1])
0xb8: Pop(1)
0xb9: @@ ClearReplies()
0xba: Pop(0)
0xbb: Push((int) 525952)
0xbc: Push((int) 27237)
0xbd: Push((int) 27236)
0xbe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf: Pop(3)
0xc0: Push((int) 542446)
0xc1: Push((int) 27239)
0xc2: Push((int) 44835)
0xc3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc4: Pop(3)
0xc5: Push((int) 542447)
0xc6: Push((int) 27241)
0xc7: Push((int) 44837)
0xc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9: Pop(3)
0xca: Return(); Pop(0)

0xcb: Push((int) 27237)
0xcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral"
0xd0: Call2 0x8e

0xd1: Pop(1)
0xd2: Push((int) 525953)
0xd3: @@ SetMessage(Stack[-1])
0xd4: Pop(1)
0xd5: @@ ClearReplies()
0xd6: Pop(0)
0xd7: Push((int) 525954)
0xd8: Push((int) 27239)
0xd9: Push((int) 27238)
0xda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb: Pop(3)
0xdc: Push((int) 542448)
0xdd: Push((int) 44839)
0xde: Push((int) 44838)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: Push((int) 44839)
0xe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xe5: PushEmpty(string)
0xe6: Stack[-1] = "Neutral"
0xe7: Call2 0x8e

0xe8: Pop(1)
0xe9: Push((int) 542449)
0xea: @@ SetMessage(Stack[-1])
0xeb: Pop(1)
0xec: @@ ClearReplies()
0xed: Pop(0)
0xee: Push((int) 542450)
0xef: Push((int) 44841)
0xf0: Push((int) 44840)
0xf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2: Pop(3)
0xf3: Return(); Pop(0)

0xf4: Push((int) 44841)
0xf5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xf7: PushEmpty(string)
0xf8: Stack[-1] = "Neutral"
0xf9: Call2 0x8e

0xfa: Pop(1)
0xfb: Push((int) 542451)
0xfc: @@ SetMessage(Stack[-1])
0xfd: Pop(1)
0xfe: @@ ClearReplies()
0xff: Pop(0)
0x100: Push((int) 542452)
0x101: Push((int) 27239)
0x102: Push((int) 44842)
0x103: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104: Pop(3)
0x105: Push((int) 542453)
0x106: Push((int) 27241)
0x107: Push((int) 44844)
0x108: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109: Pop(3)
0x10a: Return(); Pop(0)

0x10b: Push((int) 27239)
0x10c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x10e: PushEmpty(string)
0x10f: Stack[-1] = "Neutral"
0x110: Call2 0x8e

0x111: Pop(1)
0x112: Push((int) 525955)
0x113: @@ SetMessage(Stack[-1])
0x114: Pop(1)
0x115: @@ ClearReplies()
0x116: Pop(0)
0x117: Push((int) 525956)
0x118: Push((int) 27241)
0x119: Push((int) 27240)
0x11a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b: Pop(3)
0x11c: Push((int) 529036)
0x11d: Push((int) 27241)
0x11e: Push((int) 30476)
0x11f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x120: Pop(3)
0x121: Return(); Pop(0)

0x122: Push((int) 27241)
0x123: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x125: PushEmpty(string)
0x126: Stack[-1] = "Neutral"
0x127: Call2 0x8e

0x128: Pop(1)
0x129: Push((int) 525957)
0x12a: @@ SetMessage(Stack[-1])
0x12b: Pop(1)
0x12c: @@ ClearReplies()
0x12d: Pop(0)
0x12e: Push((int) 525958)
0x12f: Push((int) 27243)
0x130: Push((int) 27242)
0x131: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x132: Pop(3)
0x133: Push((int) 542454)
0x134: Push((int) 44847)
0x135: Push((int) 44846)
0x136: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x137: Pop(3)
0x138: Return(); Pop(0)

0x139: Push((int) 44847)
0x13a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x13c: PushEmpty(string)
0x13d: Stack[-1] = "Neutral"
0x13e: Call2 0x8e

0x13f: Pop(1)
0x140: Push((int) 542455)
0x141: @@ SetMessage(Stack[-1])
0x142: Pop(1)
0x143: @@ ClearReplies()
0x144: Pop(0)
0x145: Push((int) 542456)
0x146: Push((int) 27245)
0x147: Push((int) 44848)
0x148: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x149: Pop(3)
0x14a: Return(); Pop(0)

0x14b: Push((int) 27243)
0x14c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14d: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x14e: PushEmpty(string)
0x14f: Stack[-1] = "Neutral"
0x150: Call2 0x8e

0x151: Pop(1)
0x152: Push((int) 525959)
0x153: @@ SetMessage(Stack[-1])
0x154: Pop(1)
0x155: @@ ClearReplies()
0x156: Pop(0)
0x157: Push((int) 525960)
0x158: Push((int) 27245)
0x159: Push((int) 27244)
0x15a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15b: Pop(3)
0x15c: Return(); Pop(0)

0x15d: Push((int) 27245)
0x15e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x160: PushEmpty(string)
0x161: Stack[-1] = "Neutral"
0x162: Call2 0x8e

0x163: Pop(1)
0x164: Push((int) 525961)
0x165: @@ SetMessage(Stack[-1])
0x166: Pop(1)
0x167: @@ ClearReplies()
0x168: Pop(0)
0x169: Push((int) 525962)
0x16a: Push((int) 27247)
0x16b: Push((int) 27246)
0x16c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16d: Pop(3)
0x16e: Push((int) 542457)
0x16f: Push((int) -1)
0x170: Push((int) 44850)
0x171: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x172: Pop(3)
0x173: Return(); Pop(0)

0x174: Push((int) 27247)
0x175: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x177: PushEmpty(string)
0x178: Stack[-1] = "Neutral"
0x179: Call2 0x8e

0x17a: Pop(1)
0x17b: Push((int) 525963)
0x17c: @@ SetMessage(Stack[-1])
0x17d: Pop(1)
0x17e: @@ ClearReplies()
0x17f: Pop(0)
0x180: Push((int) 525964)
0x181: Push((int) 27249)
0x182: Push((int) 27248)
0x183: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x184: Pop(3)
0x185: Push((int) 542458)
0x186: Push((int) 44852)
0x187: Push((int) 44851)
0x188: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x189: Pop(3)
0x18a: Return(); Pop(0)

0x18b: Push((int) 44852)
0x18c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x18e: PushEmpty(string)
0x18f: Stack[-1] = "Neutral"
0x190: Call2 0x8e

0x191: Pop(1)
0x192: Push((int) 542459)
0x193: @@ SetMessage(Stack[-1])
0x194: Pop(1)
0x195: @@ ClearReplies()
0x196: Pop(0)
0x197: Push((int) 542460)
0x198: Push((int) -1)
0x199: Push((int) 44853)
0x19a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19b: Pop(3)
0x19c: Push((int) 542461)
0x19d: Push((int) -1)
0x19e: Push((int) 44854)
0x19f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a0: Pop(3)
0x1a1: Return(); Pop(0)

0x1a2: Push((int) 27249)
0x1a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1a5: PushEmpty(string)
0x1a6: Stack[-1] = "Neutral"
0x1a7: Call2 0x8e

0x1a8: Pop(1)
0x1a9: Push((int) 525965)
0x1aa: @@ SetMessage(Stack[-1])
0x1ab: Pop(1)
0x1ac: @@ ClearReplies()
0x1ad: Pop(0)
0x1ae: Push((int) 525966)
0x1af: Push((int) -1)
0x1b0: Push((int) 27250)
0x1b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b2: Pop(3)
0x1b3: Push((int) 542462)
0x1b4: Push((int) -1)
0x1b5: Push((int) 44855)
0x1b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b7: Pop(3)
0x1b8: Return(); Pop(0)

0x1b9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1ba: PushEmpty(bool)
0x1bb: Call2 0x69e

0x1bc: Pop(0)
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1be: @ lshStopAnimation()
0x1bf: Pop(0)
0x1c0: GOTO 0x1c3

0x1c1: @ StopAnimation()
0x1c2: Pop(0)
0x1c3: Return(); Pop(0)

0x1c4: GOTO 0xa5

0x1c5: Return(); Pop(0)

0x1c6: PushEmpty(float, float)
0x1c7: Stack[-2] = (int) 300
0x1c8: Stack[-1] = (int) 100
0x1c9: Call2 0x1f5

0x1ca: Pop(2)
0x1cb: Push((int) 3)
0x1cc: @ Sleep(Stack[-1])
0x1cd: Pop(1)
0x1ce: GOTO 0x1c6

0x1cf: Return(); Pop(0)

0x1d0: PushEmpty()
0x1d1: PushEmpty()
0x1d2: Call2 0x236

0x1d3: Pop(0)
0x1d4: PushEmpty(int, object)
0x1d5: Stack[-1] = Stack[-3]
0x1d6: Push(-2, 1); TaskCall(0)
0x1d7: Call2 0x0

0x1d8: Pop(-2, 1); TaskReturn
0x1d9: Pop(2)
0x1da: PushEmpty(object, bool)
0x1db: Stack[-2] = Stack[-3]
0x1dc: Stack[-1] = (bool) 0
0x1dd: Push(-2, 3); TaskCall(4)
0x1de: Call2 0x305

0x1df: Pop(-2, 3); TaskReturn
0x1e0: Pop(2)
0x1e1: Return(); Pop(0)

0x1e2: PushEmpty()
0x1e3: Return(); Pop(0)

0x1e4: PushEmpty()
0x1e5: PushEmpty()
0x1e6: Call2 0x236

0x1e7: Pop(0)
0x1e8: PushEmpty(object)
0x1e9: Stack[-1] = Stack[-2]
0x1ea: Call2 0x74a

0x1eb: Pop(1)
0x1ec: Return(); Pop(0)

0x1ed: PushEmpty(bool, string, string)
0x1ee: Stack[-2] = "quest_k5_03"
0x1ef: Stack[-1] = "abinos_unload"
0x1f0: Call2 0x68a

0x1f1: Pop(3)
0x1f2: @ Hold()
0x1f3: Pop(0)
0x1f4: Return(); Pop(0)

0x1f5: PushEmpty()
0x1f6: PushEmpty(bool)
0x1f7: Call2 0x575

0x1f8: Pop(0)
0x1f9: Pop(1); Push((bool) Stack[-1] == 0)
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1fb: Return(); Pop(0)

0x1fc: Push("player")
0x1fd: @ FindActor(Stack[-4], Stack[-1])
0x1fe: Pop(1)
0x1ff: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x200: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x201: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x202: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x203: Push((int) 10)
0x204: Push((float)1.0)
0x205: @ SetTimer(Stack[-2], Stack[-1])
0x206: Pop(2)
0x207: PushEmpty()
0x208: Call2 0x244

0x209: Pop(0)
0x20a: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x20b: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20c: Push((int) 10)
0x20d: @ KillTimer(Stack[-1])
0x20e: Pop(1)
0x20f: Return(); Pop(0)

0x210: PushEmpty(float, float)
0x211: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x212: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x213: Stack[-3] = (bool) 0
0x214: Return(); Pop(2)

0x215: PushEmpty(float, object)
0x216: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x217: Call2 0x47f

0x218: Pop(1)
0x219: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x21a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x21b: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x21c: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x21d: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x21e: Return(); Pop(2)

0x21f: PushEmpty()
0x220: Push((int) 10)
0x221: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x222: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x223: PushEmpty(bool)
0x224: Call2 0x210

0x225: Pop(0)
0x226: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x227: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x228: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x229: PushEmpty(object)
0x22a: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x22b: Call2 0x5ee

0x22c: Pop(1)
0x22d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x22e: GOTO 0x235

0x22f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x230: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x231: Push("head")
0x232: @ UnlookAsync(Stack[-1])
0x233: Pop(1)
0x234: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x235: Return(); Pop(0)

0x236: PushEmpty()
0x237: Call2 0x295

0x238: Pop(0)
0x239: Push((int) 10)
0x23a: @ KillTimer(Stack[-1])
0x23b: Pop(1)
0x23c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x23d: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x23e: Push("head")
0x23f: @ UnlookAsync(Stack[-1])
0x240: Pop(1)
0x241: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x242: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x243: Return(); Pop(0)

0x244: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x245: @ WaitForAnimEnd()
0x246: Pop(0)
0x247: PushEmpty(bool)
0x248: Call2 0x575

0x249: Pop(0)
0x24a: Pop(1); Push((bool) Stack[-1] == 0)
0x24b: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24c: Return(); Pop(14)

0x24d: PushEmpty(int)
0x24e: Call2 0x6a7

0x24f: Stack[-8] = Stack[-1]
0x250: Pop(1)
0x251: Stack[-6] = (int) 0
0x252: PushEmpty(bool)
0x253: Stack[-1] = (bool) 0
0x254: Push((int) 5)
0x255: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x257: PushEmpty(bool)
0x258: Call2 0x575

0x259: Pop(0)
0x25a: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x25b: Stack[-1] = (bool) 1
0x25c: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x25d: Push((int) 3)
0x25e: @ irand(Stack[-6], Stack[-1])
0x25f: Pop(1)
0x260: Push((int) 0)
0x261: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x262: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x263: Push(Stack[-7])
0x264: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x265: @ irand(Stack[-4], Stack[-7])
0x266: Pop(0)
0x267: Push("all")
0x268: PushEmpty(string, int)
0x269: Stack[-1] = Stack[-7]
0x26a: Call2 0x6a0

0x26b: Pop(1)
0x26c: @ PlayAnimation(Stack[-2], Stack[-1])
0x26d: Pop(2)
0x26e: @ WaitForAnimEnd(Stack[-3])
0x26f: Pop(0)
0x270: Pop(0); Push((bool) Stack[-3] == 0)
0x271: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x272: GOTO 0x290

0x273: GOTO 0x285

0x274: Push((int) 1)
0x275: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x276: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x277: Push((int) 4)
0x278: @ rand(Stack[-3], Stack[-1])
0x279: Pop(1)
0x27a: Push((int) 1)
0x27b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x27c: @ Sleep(Stack[-1], Stack[-2])
0x27d: Pop(1)
0x27e: Pop(0); Push((bool) Stack[-1] == 0)
0x27f: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x280: GOTO 0x290

0x281: GOTO 0x285

0x282: Push(Stack[-6])
0x283: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x284: GOTO 0x290

0x285: PushEmpty(bool)
0x286: Call2 0x293

0x287: Pop(0)
0x288: Pop(1); Push((bool) Stack[-1] == 0)
0x289: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x28a: GOTO 0x290

0x28b: @ ResetAAS()
0x28c: Pop(0)
0x28d: Push((int) 1)
0x28e: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x28f: GOTO 0x252

0x290: @ ResetAAS()
0x291: Pop(0)
0x292: Return(); Pop(14)

0x293: Stack[-1] = (bool) 1
0x294: Return(); Pop(0)

0x295: @ StopAnimation()
0x296: Pop(0)
0x297: @ StopGroup0()
0x298: Pop(0)
0x299: Return(); Pop(0)

0x29a: PushEmpty(object, object)
0x29b: @ GetScene(Stack[-1])
0x29c: Pop(0)
0x29d: PushEmpty(object)
0x29e: Call2 0x629

0x29f: Pop(0)
0x2a0: @@ RemoveStationaryActor(Stack[-1])
0x2a1: Pop(1)
0x2a2: Push("pt_k5q03_albinos_path")
0x2a3: @ GetVariable(Stack[-1], Stack[-1])
0x2a4: Pop(1)
0x2a5: Push((int) -1)
0x2a6: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] != Stack[-1])
0x2a7: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2a8: PushEmpty(bool, string, int, bool)
0x2a9: Stack[-3] = "pt_k5q03_albinos_path"
0x2aa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ab: Stack[-1] = (bool) 1
0x2ac: Call2 0x2c8

0x2ad: Pop(4)
0x2ae: PushEmpty()
0x2af: Push(-0, 5); TaskCall(2)
0x2b0: Call2 0x1c6

0x2b1: Pop(-0, 5); TaskReturn
0x2b2: Pop(0)
0x2b3: Return(); Pop(2)

0x2b4: Stack[-1] = 0
0x2b5: PushEmpty()
0x2b6: Return(); Pop(0)

0x2b7: PushEmpty()
0x2b8: PushEmpty()
0x2b9: Call2 0x2fd

0x2ba: Pop(0)
0x2bb: PushEmpty(object)
0x2bc: Stack[-1] = Stack[-2]
0x2bd: Call2 0x74a

0x2be: Pop(1)
0x2bf: Return(); Pop(0)

0x2c0: PushEmpty(bool, string, string)
0x2c1: Stack[-2] = "quest_k5_03"
0x2c2: Stack[-1] = "abinos_unload"
0x2c3: Call2 0x68a

0x2c4: Pop(3)
0x2c5: @ Hold()
0x2c6: Pop(0)
0x2c7: Return(); Pop(0)

0x2c8: PushEmpty(object, cvector, bool, bool, cvector, cvector, bool, object, cvector, bool, bool, cvector, cvector, bool)
0x2c9: @ GetScene(Stack[-7])
0x2ca: Pop(0)
0x2cb: Push((int) 1)
0x2cc: Pop(1); Push(Stack[-17] + Stack[-1]);
0x2cd: Pop(1); Push(Stack[-18] + Stack[-1]);
0x2ce: @@ GetLocator(Stack[-1], Stack[-5], Stack[-4], Stack[-3])
0x2cf: Pop(1)
0x2d0: Pop(0); Push((bool) Stack[-4] == 0)
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d2: GOTO 0x2e6

0x2d3: Stack[-6] = Stack[-2]
0x2d4: @ MovePoint(Stack[-3], Stack[-15], Stack[-5])
0x2d5: Pop(0)
0x2d6: Push(Stack[-5])
0x2d7: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2d8: PushEmpty(int, cvector, cvector)
0x2d9: Stack[-3] = Stack[-19]
0x2da: Stack[-2] = Stack[-6]
0x2db: Stack[-1] = Stack[-5]
0x2dc: Call2 0x303

0x2dd: Pop(3)
0x2de: Push((int) 1)
0x2df: Stack[-17] = Stack[-17] + Stack[-1]; Pop(1);
0x2e0: GOTO 0x2e5

0x2e1: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e3: Stack[-18] = (bool) 0
0x2e4: Return(); Pop(14)

0x2e5: GOTO 0x2cb

0x2e6: @ WaitForAnimEnd(Stack[-5])
0x2e7: Pop(0)
0x2e8: Pop(0); Push((bool) Stack[-5] == 0)
0x2e9: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ea: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ec: Stack[-18] = (bool) 0
0x2ed: Return(); Pop(14)

0x2ee: Push(CvectorIndex(Stack[-6], 0))
0x2ef: Push(CvectorIndex(Stack[-7], 2))
0x2f0: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2f1: Pop(2)
0x2f2: Push(Stack[-1])
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f4: GOTO 0x2fa

0x2f5: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f7: Stack[-18] = (bool) 0
0x2f8: Return(); Pop(14)

0x2f9: GOTO 0x2ee

0x2fa: Stack[-18] = (bool) 1
0x2fb: Return(); Pop(14)

0x2fc: Stack[-7] = 0
0x2fd: @ Stop()
0x2fe: Pop(0)
0x2ff: @ StopAnimation()
0x300: Pop(0)
0x301: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x302: Return(); Pop(0)

0x303: PushEmpty()
0x304: Return(); Pop(0)

0x305: PushEmpty()
0x306: Push(Stack[-1])
0x307: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x308: Push((int) 100)
0x309: Push((float)1.0)
0x30a: @ SetTimer(Stack[-2], Stack[-1])
0x30b: Pop(2)
0x30c: PushEmpty(object)
0x30d: Stack[-1] = Stack[-3]
0x30e: Call2 0x344

0x30f: Pop(1)
0x310: Return(); Pop(0)

0x311: PushEmpty(bool, string, string)
0x312: Stack[-2] = "quest_k5_03"
0x313: Stack[-1] = "albinos_retreated"
0x314: Call2 0x68a

0x315: Pop(3)
0x316: @ Hold()
0x317: Pop(0)
0x318: Return(); Pop(0)

0x319: PushEmpty()
0x31a: Push((int) 100)
0x31b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31c: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31d: PushEmpty()
0x31e: Call2 0x709

0x31f: Pop(0)
0x320: GOTO 0x325

0x321: PushEmpty(int)
0x322: Stack[-1] = Stack[-2]
0x323: Call2 0x38d

0x324: Pop(1)
0x325: Return(); Pop(0)

0x326: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x327: @ GetPosition(Stack[-6])
0x328: Pop(0)
0x329: @@ GetPosition(Stack[-5])
0x32a: Pop(0)
0x32b: @ GetDirection(Stack[-4])
0x32c: Pop(0)
0x32d: PushEmpty(cvector, cvector)
0x32e: PushEmpty(cvector, cvector)
0x32f: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x330: Call2 0x62f

0x331: Pop(1)
0x332: Push((float)0.75)
0x333: Pop(1); Push(Stack[-8] * Stack[-1]);
0x334: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x335: Call2 0x62f

0x336: Stack[-5] = Stack[-2]
0x337: Pop(2)
0x338: Push((int) 32)
0x339: Push((float)7000.0)
0x33a: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x33b: Pop(2)
0x33c: Push((int) 100)
0x33d: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x33e: Push((int) 0)
0x33f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x340: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x341: Stack[-1] = (int) 0
0x342: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x343: Return(); Pop(12)

0x344: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x345: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x346: PushEmpty(cvector, float)
0x347: Stack[-1] = (float) 1.74533
0x348: Call2 0x326

0x349: Stack[-7] = Stack[-2]
0x34a: Pop(2)
0x34b: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x34c: Push((float)2500.0)
0x34d: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x34e: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x34f: PushEmpty(cvector, float)
0x350: Stack[-1] = (float) 2.61799
0x351: Call2 0x326

0x352: Stack[-7] = Stack[-2]
0x353: Pop(2)
0x354: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x355: Push((float)2500.0)
0x356: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x357: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x358: Push("Can't retreat, distance: ")
0x359: Pop(0); Push(Sqrt(Stack[-5]))
0x35a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x35b: @ Trace(Stack[-1])
0x35c: Pop(1)
0x35d: Push((float)0.5)
0x35e: @ Sleep(Stack[-1])
0x35f: Pop(1)
0x360: Return(); Pop(10)

0x361: Push(CvectorIndex(Stack[-5], 0))
0x362: Push(CvectorIndex(Stack[-6], 2))
0x363: @ Rotate(Stack[-2], Stack[-1])
0x364: Pop(2)
0x365: PushEmpty(cvector)
0x366: Call2 0x473

0x367: Pop(0)
0x368: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x369: Push((int) 120)
0x36a: Push((float)0.5)
0x36b: @ SetTimer(Stack[-2], Stack[-1])
0x36c: Pop(2)
0x36d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x36e: Push((int) 1)
0x36f: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x370: Pop(1)
0x371: Push(Stack[-3])
0x372: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x373: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x374: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x375: GOTO 0x38c

0x376: GOTO 0x38a

0x377: PushEmpty(cvector, float)
0x378: Stack[-1] = (float) 2.61799
0x379: Call2 0x326

0x37a: Stack[-4] = Stack[-2]
0x37b: Pop(2)
0x37c: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x37d: Push((float)2500.0)
0x37e: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x37f: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x380: PushEmpty(cvector)
0x381: Call2 0x473

0x382: Pop(0)
0x383: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x384: Push((int) 120)
0x385: Push((float)0.5)
0x386: @ SetTimer(Stack[-2], Stack[-1])
0x387: Pop(2)
0x388: GOTO 0x38a

0x389: GOTO 0x38c

0x38a: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x38b: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x38c: Return(); Pop(10)

0x38d: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x38e: Push((int) 120)
0x38f: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x390: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x391: Return(); Pop(8)

0x392: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x393: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x394: @ Stop()
0x395: Pop(0)
0x396: Push((int) 1)
0x397: @ KillTimer(Stack[-1])
0x398: Pop(1)
0x399: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x39a: GOTO 0x3c0

0x39b: @ GetDirection(Stack[-4])
0x39c: Pop(0)
0x39d: Push((float)7000.0)
0x39e: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x39f: Pop(1)
0x3a0: PushEmpty(cvector, float)
0x3a1: Stack[-1] = (float) 1.74533
0x3a2: Call2 0x326

0x3a3: Stack[-4] = Stack[-2]
0x3a4: Pop(2)
0x3a5: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x3a6: PushEmpty(bool)
0x3a7: Stack[-1] = (bool) 0
0x3a8: Push((float)2500.0)
0x3a9: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3ab: PushEmpty(bool)
0x3ac: Stack[-1] = (bool) 1
0x3ad: Pop(0); Push(Stack[-5] * Stack[-5]);
0x3ae: Push((float)2.25)
0x3af: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3b0: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b2: PushEmpty(bool)
0x3b3: Call2 0x3d1

0x3b4: Pop(0)
0x3b5: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b6: Stack[-1] = (bool) 0
0x3b7: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3b8: Stack[-1] = (bool) 1
0x3b9: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3ba: @ Stop()
0x3bb: Pop(0)
0x3bc: PushEmpty(cvector)
0x3bd: Call2 0x473

0x3be: Pop(0)
0x3bf: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x3c0: Return(); Pop(8)

0x3c1: @ Stop()
0x3c2: Pop(0)
0x3c3: Push((int) 120)
0x3c4: @ KillTimer(Stack[-1])
0x3c5: Pop(1)
0x3c6: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3c7: Return(); Pop(0)

0x3c8: PushEmpty()
0x3c9: PushEmpty()
0x3ca: Call2 0x3c1

0x3cb: Pop(0)
0x3cc: PushEmpty(object)
0x3cd: Stack[-1] = Stack[-2]
0x3ce: Call2 0x74a

0x3cf: Pop(1)
0x3d0: Return(); Pop(0)

0x3d1: PushEmpty(cvector, cvector, cvector, cvector)
0x3d2: @ GetDirection(Stack[-2])
0x3d3: Pop(0)
0x3d4: PushEmpty(cvector, object)
0x3d5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3d6: Call2 0x478

0x3d7: Stack[-3] = Stack[-2]
0x3d8: Pop(2)
0x3d9: PushEmpty(float, cvector, cvector)
0x3da: Stack[-2] = Stack[-5]
0x3db: Stack[-1] = Stack[-4]
0x3dc: Call2 0x64b

0x3dd: Pop(2)
0x3de: Push((float)-0.34202)
0x3df: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x3e0: Return(); Pop(4)

0x3e1: PushEmpty()
0x3e2: PushEmpty(object)
0x3e3: Stack[-1] = Stack[-2]
0x3e4: Call2 0x3ea

0x3e5: Pop(1)
0x3e6: @ Hold()
0x3e7: Pop(0)
0x3e8: GOTO 0x3e6

0x3e9: Return(); Pop(0)

0x3ea: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x3eb: Pop(0); Push((bool) Stack[-21] == 0)
0x3ec: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3ed: PushEmpty(string)
0x3ee: Stack[-1] = "fdie"
0x3ef: Call2 0x445

0x3f0: Pop(1)
0x3f1: GOTO 0x444

0x3f2: @@ GetPosition(Stack[-10])
0x3f3: Pop(0)
0x3f4: @ GetPosition(Stack[-9])
0x3f5: Pop(0)
0x3f6: @ GetDirection(Stack[-8])
0x3f7: Pop(0)
0x3f8: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x3f9: Push(CvectorIndex(Stack[-7], 0))
0x3fa: Push(CvectorIndex(Stack[-9], 0))
0x3fb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3fc: Push(CvectorIndex(Stack[-8], 2))
0x3fd: Push(CvectorIndex(Stack[-10], 2))
0x3fe: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3ff: Pop(2); Push(Stack[-2] + Stack[-1]);
0x400: Push((int) 0)
0x401: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x402: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x403: Stack[-6] = "fdie"
0x404: GOTO 0x406

0x405: Stack[-6] = "bdie"
0x406: @ RemoveRTEnvelope()
0x407: Pop(0)
0x408: @ SetDeathState()
0x409: Pop(0)
0x40a: @ Stop()
0x40b: Pop(0)
0x40c: @ StopAsync()
0x40d: Pop(0)
0x40e: Stack[-5] = Stack[-21]
0x40f: Push("GetScriptProperty")
0x410: Push((int) 2)
0x411: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x412: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x413: Push("Owner")
0x414: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x415: Pop(1)
0x416: Push(Stack[-4])
0x417: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x418: Push("Owner")
0x419: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x41a: Pop(1)
0x41b: Pop(0); Push((bool) Stack[-5] == 0)
0x41c: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x41d: Stack[-5] = Stack[-21]
0x41e: Push("@GetEyesHeight")
0x41f: Push((int) 1)
0x420: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x421: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x422: @@ GetEyesHeight(Stack[-2])
0x423: Pop(0)
0x424: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x425: Push(CvectorIndex(Stack[-1], 1))
0x426: Stack[-1] = Stack[-3]
0x427: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x428: Push("head")
0x429: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x42a: Pop(1)
0x42b: Stack[-3] = (bool) 1
0x42c: GOTO 0x42e

0x42d: Stack[-3] = (bool) 0
0x42e: PushEmpty(string)
0x42f: Stack[-1] = Stack[-7]
0x430: Call2 0x600

0x431: Pop(1)
0x432: Push("all")
0x433: @ PlayAnimation(Stack[-1], Stack[-7])
0x434: Pop(1)
0x435: @ WaitForAnimEnd()
0x436: Pop(0)
0x437: Push(Stack[-3])
0x438: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x439: @ StopAsync()
0x43a: Pop(0)
0x43b: Push("head")
0x43c: @ UnlookAsync(Stack[-1])
0x43d: Pop(1)
0x43e: Push("all")
0x43f: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x440: Pop(1)
0x441: @ RemoveEnvelope()
0x442: Pop(0)
0x443: Stack[-5] = 0
0x444: Return(); Pop(20)

0x445: PushEmpty()
0x446: @ RemoveRTEnvelope()
0x447: Pop(0)
0x448: @ SetDeathState()
0x449: Pop(0)
0x44a: @ Stop()
0x44b: Pop(0)
0x44c: @ StopAsync()
0x44d: Pop(0)
0x44e: @ StopSecondaryAnimation()
0x44f: Pop(0)
0x450: PushEmpty(string)
0x451: Stack[-1] = Stack[-2]
0x452: Call2 0x600

0x453: Pop(1)
0x454: Push("all")
0x455: @ PlayAnimation(Stack[-1], Stack[-2])
0x456: Pop(1)
0x457: @ WaitForAnimEnd()
0x458: Pop(0)
0x459: Push("all")
0x45a: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x45b: Pop(1)
0x45c: @ RemoveEnvelope()
0x45d: Pop(0)
0x45e: Return(); Pop(0)

0x45f: PushEmpty()
0x460: Return(); Pop(0)

0x461: PushEmpty()
0x462: Return(); Pop(0)

0x463: PushEmpty()
0x464: Return(); Pop(0)

0x465: PushEmpty()
0x466: Push((int) 2)
0x467: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x468: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x469: Stack[-2] = "fire"
0x46a: Return(); Pop(0)

0x46b: GOTO 0x471

0x46c: Push((int) 1)
0x46d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46e: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x46f: Stack[-2] = "bullet"
0x470: Return(); Pop(0)

0x471: Stack[-2] = "phys"
0x472: Return(); Pop(0)

0x473: PushEmpty(cvector, cvector)
0x474: @ GetPosition(Stack[-1])
0x475: Pop(0)
0x476: Stack[-3] = Stack[-1]
0x477: Return(); Pop(2)

0x478: PushEmpty(cvector, cvector, cvector, cvector)
0x479: @ GetPosition(Stack[-2])
0x47a: Pop(0)
0x47b: @@ GetPosition(Stack[-1])
0x47c: Pop(0)
0x47d: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x47e: Return(); Pop(4)

0x47f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x480: @ GetPosition(Stack[-3])
0x481: Pop(0)
0x482: @@ GetPosition(Stack[-2])
0x483: Pop(0)
0x484: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x485: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x486: Return(); Pop(6)

0x487: PushEmpty(bool, bool)
0x488: @ IsPlayerActor(Stack[-3], Stack[-1])
0x489: Pop(0)
0x48a: Stack[-4] = Stack[-1]
0x48b: Return(); Pop(2)

0x48c: PushEmpty(bool, bool)
0x48d: Push("HasProperty")
0x48e: Push((int) 2)
0x48f: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x490: Pop(1); Push((bool) Stack[-1] == 0)
0x491: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x492: Stack[-5] = (bool) 0
0x493: Return(); Pop(2)

0x494: @@ HasProperty(Stack[-3], Stack[-1])
0x495: Pop(0)
0x496: Stack[-5] = Stack[-1]
0x497: Return(); Pop(2)

0x498: PushEmpty(float, float)
0x499: PushEmpty(bool, object, string)
0x49a: Stack[-2] = Stack[-10]
0x49b: Stack[-1] = Stack[-9]
0x49c: Call2 0x48c

0x49d: Pop(2)
0x49e: Pop(1); Push((bool) Stack[-1] == 0)
0x49f: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x4a0: Stack[-8] = (bool) 0
0x4a1: Return(); Pop(2)

0x4a2: @@ GetProperty(Stack[-6], Stack[-1])
0x4a3: Pop(0)
0x4a4: PushEmpty(float, float, float, float)
0x4a5: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x4a6: Stack[-2] = Stack[-8]
0x4a7: Stack[-1] = Stack[-7]
0x4a8: Call2 0x640

0x4a9: Pop(3)
0x4aa: @@ SetProperty(Stack[-7], Stack[-1])
0x4ab: Pop(1)
0x4ac: Stack[-8] = (bool) 1
0x4ad: Return(); Pop(2)

0x4ae: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x4af: PushEmpty(bool, object, string)
0x4b0: Stack[-2] = Stack[-18]
0x4b1: Stack[-1] = "health"
0x4b2: Call2 0x48c

0x4b3: Pop(2)
0x4b4: Pop(1); Push((bool) Stack[-1] == 0)
0x4b5: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4b6: Stack[-16] = (float) 0.0
0x4b7: Return(); Pop(12)

0x4b8: PushEmpty(bool, object, string)
0x4b9: Stack[-2] = Stack[-18]
0x4ba: Stack[-1] = "armor"
0x4bb: Call2 0x48c

0x4bc: Pop(2)
0x4bd: Pop(1); Push((bool) Stack[-1] == 0)
0x4be: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4bf: Stack[-6] = (int) 0
0x4c0: GOTO 0x4c4

0x4c1: Push("armor")
0x4c2: @@ GetProperty(Stack[-1], Stack[-7])
0x4c3: Pop(1)
0x4c4: Push("armor_")
0x4c5: PushEmpty(string, int)
0x4c6: Stack[-1] = Stack[-16]
0x4c7: Call2 0x465

0x4c8: Pop(1)
0x4c9: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4ca: PushEmpty(bool, object, string)
0x4cb: Stack[-2] = Stack[-18]
0x4cc: Stack[-1] = Stack[-8]
0x4cd: Call2 0x48c

0x4ce: Pop(2)
0x4cf: Pop(1); Push((bool) Stack[-1] == 0)
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4d1: Stack[-4] = (int) 0
0x4d2: GOTO 0x4d5

0x4d3: @@ GetProperty(Stack[-5], Stack[-4])
0x4d4: Pop(0)
0x4d5: PushEmpty(float, float, float)
0x4d6: Pop(0); Push(Stack[-9] + Stack[-7]);
0x4d7: Push((float)100.0)
0x4d8: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x4d9: Stack[-1] = (int) 1
0x4da: Call2 0x639

0x4db: Stack[-6] = Stack[-3]
0x4dc: Pop(3)
0x4dd: Push("health")
0x4de: @@ GetProperty(Stack[-1], Stack[-3])
0x4df: Pop(1)
0x4e0: Push((int) 1)
0x4e1: Pop(1); Push(Stack[-1] - Stack[-4]);
0x4e2: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x4e3: Push("health")
0x4e4: PushEmpty(float, float, float, float)
0x4e5: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x4e6: Stack[-2] = (int) 0
0x4e7: Stack[-1] = (int) 1
0x4e8: Call2 0x640

0x4e9: Pop(3)
0x4ea: @@ SetProperty(Stack[-2], Stack[-1])
0x4eb: Pop(2)
0x4ec: PushEmpty(bool, object)
0x4ed: Stack[-1] = Stack[-17]
0x4ee: Call2 0x487

0x4ef: Pop(1)
0x4f0: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4f1: PushEmpty(float)
0x4f2: Stack[-1] = -Stack[-2]; Pop(0);
0x4f3: Call2 0x676

0x4f4: Pop(1)
0x4f5: Stack[-16] = Stack[-1]
0x4f6: Return(); Pop(12)

0x4f7: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x4f8: Pop(0); Push((bool) Stack[-15] == 0)
0x4f9: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4fa: Return(); Pop(14)

0x4fb: @ IsDead(Stack[-7])
0x4fc: Pop(0)
0x4fd: Push(Stack[-7])
0x4fe: IF (Stack[-1] == 0) GOTO 0x500; Pop(1)

0x4ff: Return(); Pop(14)

0x500: @ GetSecondaryAnimationType(Stack[-6])
0x501: Pop(0)
0x502: Push((int) 0)
0x503: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x504: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x505: Return(); Pop(14)

0x506: @@ GetPosition(Stack[-5])
0x507: Pop(0)
0x508: @ GetPosition(Stack[-4])
0x509: Pop(0)
0x50a: @ GetDirection(Stack[-3])
0x50b: Pop(0)
0x50c: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x50d: Push(CvectorIndex(Stack[-2], 0))
0x50e: Push(CvectorIndex(Stack[-4], 0))
0x50f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x510: Push(CvectorIndex(Stack[-3], 2))
0x511: Push(CvectorIndex(Stack[-5], 2))
0x512: Pop(2); Push(Stack[-2] * Stack[-1]);
0x513: Pop(2); Push(Stack[-2] + Stack[-1]);
0x514: Push((int) 0)
0x515: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x516: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x517: Stack[-1] = "fhit"
0x518: GOTO 0x51a

0x519: Stack[-1] = "bhit"
0x51a: Push("hit_react")
0x51b: Push("1")
0x51c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x51d: Push("2")
0x51e: Pop(1); Push(Stack[-4] + Stack[-1]);
0x51f: Push((int) -10)
0x520: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x521: Pop(4)
0x522: Return(); Pop(14)

0x523: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x524: PushEmpty(bool)
0x525: Stack[-1] = (bool) 0
0x526: PushEmpty(bool)
0x527: Stack[-1] = (bool) 0
0x528: Push(Stack[-23])
0x529: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52a: Push((int) 4)
0x52b: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x52c: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52d: Stack[-1] = (bool) 1
0x52e: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x52f: Push((int) 5)
0x530: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x531: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x532: Stack[-1] = (bool) 1
0x533: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x534: PushEmpty(cvector, cvector)
0x535: PushEmpty(cvector, object)
0x536: Stack[-1] = Stack[-25]
0x537: Call2 0x478

0x538: Stack[-3] = Stack[-2]
0x539: Pop(2)
0x53a: Call2 0x62f

0x53b: Stack[-11] = Stack[-2]
0x53c: Pop(2)
0x53d: @ CreateVectorVector(Stack[-8])
0x53e: Pop(0)
0x53f: Stack[-7] = (int) 1
0x540: Push("hit")
0x541: Pop(1); Push(Stack[-1] + Stack[-8]);
0x542: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x543: Pop(1)
0x544: Pop(0); Push((bool) Stack[-6] == 0)
0x545: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x546: GOTO 0x550

0x547: Pop(0); Push(Stack[-4] | Stack[-9]);
0x548: Push((float)0.70711)
0x549: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x54a: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x54b: @@ add(Stack[-5])
0x54c: Pop(0)
0x54d: Push((int) 1)
0x54e: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x54f: GOTO 0x540

0x550: @@ size(Stack[-3])
0x551: Pop(0)
0x552: Push(Stack[-3])
0x553: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x554: @ irand(Stack[-2], Stack[-3])
0x555: Pop(0)
0x556: @@ get(Stack[-1], Stack[-2])
0x557: Pop(0)
0x558: PushEmpty(object, int, float, cvector, cvector)
0x559: Stack[-5] = Stack[-26]
0x55a: Stack[-4] = Stack[-25]
0x55b: Stack[-3] = Stack[-24]
0x55c: Stack[-2] = Stack[-6]
0x55d: Stack[-1] = -Stack[-14]; Pop(0);
0x55e: Call2 0x567

0x55f: Pop(5)
0x560: Return(); Pop(18)

0x561: Stack[-8] = 0
0x562: PushEmpty(object)
0x563: Stack[-1] = Stack[-22]
0x564: Call2 0x4f7

0x565: Pop(1)
0x566: Return(); Pop(18)

0x567: PushEmpty(object, object, object, object)
0x568: @ GetScene(Stack[-2])
0x569: Pop(0)
0x56a: Push("scripted")
0x56b: Push("blood_dir.xml")
0x56c: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x56d: Pop(2)
0x56e: PushEmpty(object)
0x56f: Stack[-1] = Stack[-10]
0x570: Call2 0x4f7

0x571: Pop(1)
0x572: Return(); Pop(4)

0x573: Stack[-1] = 0
0x574: Stack[-2] = 0
0x575: PushEmpty(bool, bool)
0x576: @ IsLoaded(Stack[-1])
0x577: Pop(0)
0x578: Stack[-3] = Stack[-1]
0x579: Return(); Pop(2)

0x57a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x57b: @@ GetPosition(Stack[-8])
0x57c: Pop(0)
0x57d: @@ GetEyesHeight(Stack[-9])
0x57e: Pop(0)
0x57f: Push(CvectorIndex(Stack[-8], 1))
0x580: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x581: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x582: @ GetPosition(Stack[-7])
0x583: Pop(0)
0x584: @ GetEyesHeight(Stack[-9])
0x585: Pop(0)
0x586: Push(CvectorIndex(Stack[-7], 1))
0x587: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x588: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x589: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x58a: Push(CvectorIndex(Stack[-6], 1))
0x58b: Stack[-1] = (int) 0
0x58c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x58d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x58e: Pop(1); Push(Sqrt(Stack[-1]))
0x58f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x590: Stack[-5] = -Stack[-6]; Pop(0);
0x591: Pop(0); Push(Stack[-6] * Stack[-19]);
0x592: PushEmpty(cvector, cvector)
0x593: Push(CVector(0.0, 1.0, 0.0))
0x594: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x595: Call2 0x62f

0x596: Pop(1)
0x597: Push((int) 25)
0x598: Pop(2); Push(Stack[-2] * Stack[-1]);
0x599: Pop(2); Push(Stack[-2] + Stack[-1]);
0x59a: Push(CVector(0.0, 10.0, 0.0))
0x59b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x59c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x59d: @ IsOverrideActive(Stack[-2])
0x59e: Pop(0)
0x59f: Push(Stack[-2])
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x5a1: Stack[-21] = (bool) 0
0x5a2: Return(); Pop(18)

0x5a3: @ StopWorld()
0x5a4: Pop(0)
0x5a5: @ CameraTransit(Stack[-3], Stack[-5])
0x5a6: Pop(0)
0x5a7: Push(CvectorIndex(Stack[-4], 0))
0x5a8: Push(CvectorIndex(Stack[-5], 2))
0x5a9: @ Rotate(Stack[-2], Stack[-1])
0x5aa: Pop(2)
0x5ab: PushEmpty(bool)
0x5ac: Call2 0x69e

0x5ad: Pop(0)
0x5ae: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x5af: GOTO 0x5b8

0x5b0: Push("head")
0x5b1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x5b2: Pop(1)
0x5b3: Push(Stack[-1])
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5b5: Push("head")
0x5b6: @ LookAsyncCamera(Stack[-1])
0x5b7: Pop(1)
0x5b8: @ CameraWaitForPlayFinish()
0x5b9: Pop(0)
0x5ba: @ ResumeWorld()
0x5bb: Pop(0)
0x5bc: Stack[-21] = (bool) 1
0x5bd: Return(); Pop(18)

0x5be: PushEmpty(bool, bool)
0x5bf: @ CameraSwitchToNormal()
0x5c0: Pop(0)
0x5c1: PushEmpty(bool)
0x5c2: Call2 0x69e

0x5c3: Pop(0)
0x5c4: IF (Stack[-1] == 0) GOTO 0x5c6; Pop(1)

0x5c5: GOTO 0x5ce

0x5c6: Push("head")
0x5c7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x5c8: Pop(1)
0x5c9: Push(Stack[-1])
0x5ca: IF (Stack[-1] == 0) GOTO 0x5ce; Pop(1)

0x5cb: Push("head")
0x5cc: @ UnlookAsync(Stack[-1])
0x5cd: Pop(1)
0x5ce: Return(); Pop(2)

0x5cf: PushEmpty(bool, float, float, bool, float, float)
0x5d0: @ lshHasAnimation(Stack[-3], Stack[-7])
0x5d1: Pop(0)
0x5d2: Push(Stack[-3])
0x5d3: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d4: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x5d5: Pop(0)
0x5d6: Push((bool) 0)
0x5d7: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5d8: Pop(1)
0x5d9: GOTO 0x5de

0x5da: Push("Can't find lsh animation : ")
0x5db: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5dc: @ Trace(Stack[-1])
0x5dd: Pop(1)
0x5de: Return(); Pop(6)

0x5df: PushEmpty(bool, float, float, bool, float, float)
0x5e0: @ lshHasAnimation(Stack[-3], Stack[-8])
0x5e1: Pop(0)
0x5e2: Push(Stack[-3])
0x5e3: IF (Stack[-1] == 0) GOTO 0x5e9; Pop(1)

0x5e4: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x5e5: Pop(0)
0x5e6: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x5e7: Pop(0)
0x5e8: GOTO 0x5ed

0x5e9: Push("Can't find lsh animation : ")
0x5ea: Pop(1); Push(Stack[-1] + Stack[-9]);
0x5eb: @ Trace(Stack[-1])
0x5ec: Pop(1)
0x5ed: Return(); Pop(6)

0x5ee: PushEmpty(float, cvector, float, cvector)
0x5ef: @@ GetEyesHeight(Stack[-2])
0x5f0: Pop(0)
0x5f1: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x5f2: Push(CvectorIndex(Stack[-1], 1))
0x5f3: Stack[-1] = Stack[-3]
0x5f4: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5f5: Push("head")
0x5f6: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x5f7: Pop(1)
0x5f8: Return(); Pop(4)

0x5f9: PushEmpty(bool)
0x5fa: Call2 0x69e

0x5fb: Pop(0)
0x5fc: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fd: @ lshStopSpeech()
0x5fe: Pop(0)
0x5ff: Return(); Pop(0)

0x600: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x601: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x602: Pop(0)
0x603: Pop(0); Push((bool) Stack[-8] == 0)
0x604: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x605: Stack[-7] = (int) 0
0x606: Push((int) 1)
0x607: Pop(1); Push(Stack[-8] + Stack[-1]);
0x608: Pop(1); Push(Stack[-18] + Stack[-1]);
0x609: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x60a: Pop(1)
0x60b: Pop(0); Push((bool) Stack[-6] == 0)
0x60c: IF (Stack[-1] == 0) GOTO 0x60e; Pop(1)

0x60d: GOTO 0x611

0x60e: Push((int) 1)
0x60f: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x610: GOTO 0x606

0x611: Pop(0); Push((bool) Stack[-7] == 0)
0x612: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x613: Return(); Pop(16)

0x614: @ irand(Stack[-5], Stack[-7])
0x615: Pop(0)
0x616: Push((int) 1)
0x617: Pop(1); Push(Stack[-6] + Stack[-1]);
0x618: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x619: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x61a: Pop(0)
0x61b: Push(Stack[-4])
0x61c: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x61d: @ GetEyesHeight(Stack[-3])
0x61e: Pop(0)
0x61f: @ GetDirection(Stack[-2])
0x620: Pop(0)
0x621: Push((int) 50)
0x622: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x623: Push(CvectorIndex(Stack[-1], 1))
0x624: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x625: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x626: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x627: Pop(0)
0x628: Return(); Pop(16)

0x629: PushEmpty(object, object)
0x62a: @ self(Stack[-1])
0x62b: Pop(0)
0x62c: Stack[-3] = Stack[-1]
0x62d: Return(); Pop(2)

0x62e: Stack[-1] = 0
0x62f: PushEmpty(float, float)
0x630: Pop(0); Push(Stack[-3] | Stack[-3]);
0x631: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x632: Push((float)0.0)
0x633: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x634: IF (Stack[-1] == 0) GOTO 0x637; Pop(1)

0x635: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x636: Return(); Pop(2)

0x637: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x638: Return(); Pop(2)

0x639: PushEmpty()
0x63a: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x63b: IF (Stack[-1] == 0) GOTO 0x63e; Pop(1)

0x63c: Stack[-3] = Stack[-2]
0x63d: GOTO 0x63f

0x63e: Stack[-3] = Stack[-1]
0x63f: Return(); Pop(0)

0x640: PushEmpty()
0x641: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x642: IF (Stack[-1] == 0) GOTO 0x645; Pop(1)

0x643: Stack[-4] = Stack[-2]
0x644: Return(); Pop(0)

0x645: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x646: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x647: Stack[-4] = Stack[-1]
0x648: Return(); Pop(0)

0x649: Stack[-4] = Stack[-3]
0x64a: Return(); Pop(0)

0x64b: PushEmpty()
0x64c: Pop(0); Push(Stack[-2] | Stack[-1]);
0x64d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x64e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x64f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x650: Pop(1); Push(Sqrt(Stack[-1]))
0x651: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x652: Return(); Pop(0)

0x653: PushEmpty()
0x654: Pop(0); Push((bool) Stack[-2] == 0)
0x655: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x656: Stack[-3] = (bool) 0
0x657: Return(); Pop(0)

0x658: Push((int) 0)
0x659: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x65a: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x65b: Push((int) 8)
0x65c: @ SendWorldWndMessage(Stack[-1])
0x65d: Pop(1)
0x65e: GOTO 0x668

0x65f: Push((int) 0)
0x660: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x661: IF (Stack[-1] == 0) GOTO 0x666; Pop(1)

0x662: Push((int) 9)
0x663: @ SendWorldWndMessage(Stack[-1])
0x664: Pop(1)
0x665: GOTO 0x668

0x666: Stack[-3] = (bool) 0
0x667: Return(); Pop(0)

0x668: PushEmpty(float)
0x669: Stack[-1] = Stack[-2]
0x66a: Call2 0x680

0x66b: Pop(1)
0x66c: PushEmpty(bool, object, string, float, float, float)
0x66d: Stack[-5] = Stack[-8]
0x66e: Stack[-4] = "reputation"
0x66f: Stack[-3] = Stack[-7]
0x670: Stack[-2] = (int) 0
0x671: Stack[-1] = (int) 1
0x672: Call2 0x498

0x673: Pop(6)
0x674: Stack[-3] = (bool) 1
0x675: Return(); Pop(0)

0x676: PushEmpty(object, object)
0x677: @ CreateFloatVector(Stack[-1])
0x678: Pop(0)
0x679: @@ add(Stack[-3])
0x67a: Pop(0)
0x67b: Push((int) 15)
0x67c: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x67d: Pop(1)
0x67e: Return(); Pop(2)

0x67f: Stack[-1] = 0
0x680: PushEmpty(object, object)
0x681: @ CreateFloatVector(Stack[-1])
0x682: Pop(0)
0x683: @@ add(Stack[-3])
0x684: Pop(0)
0x685: Push((int) 16)
0x686: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x687: Pop(1)
0x688: Return(); Pop(2)

0x689: Stack[-1] = 0
0x68a: PushEmpty(object, object)
0x68b: @ FindActor(Stack[-1], Stack[-4])
0x68c: Pop(0)
0x68d: Pop(0); Push((bool) Stack[-1] == 0)
0x68e: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x68f: Stack[-5] = (bool) 0
0x690: Return(); Pop(2)

0x691: @ Trigger(Stack[-1], Stack[-3])
0x692: Pop(0)
0x693: Stack[-5] = (bool) 1
0x694: Return(); Pop(2)

0x695: Stack[-1] = 0
0x696: Stack[-1] = (int) 515595
0x697: Return(); Pop(0)

0x698: Stack[-1] = (int) 512611
0x699: Return(); Pop(0)

0x69a: Stack[-1] = "ui/NPC_Albinos.png"
0x69b: Return(); Pop(0)

0x69c: Stack[-1] = "ui/NPC_Albinos_b.png"
0x69d: Return(); Pop(0)

0x69e: Stack[-1] = (bool) 0
0x69f: Return(); Pop(0)

0x6a0: PushEmpty(string, string)
0x6a1: Stack[-1] = "idle"
0x6a2: Push(Stack[-3])
0x6a3: IF (Stack[-1] == 0) GOTO 0x6a5; Pop(1)

0x6a4: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x6a5: Stack[-4] = Stack[-1]
0x6a6: Return(); Pop(2)

0x6a7: PushEmpty(int, bool, int, bool)
0x6a8: Stack[-2] = (int) 0
0x6a9: Push("all")
0x6aa: PushEmpty(string, int)
0x6ab: Stack[-1] = Stack[-5]
0x6ac: Call2 0x6a0

0x6ad: Pop(1)
0x6ae: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x6af: Pop(2)
0x6b0: Pop(0); Push((bool) Stack[-1] == 0)
0x6b1: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6b2: GOTO 0x6b6

0x6b3: Push((int) 1)
0x6b4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x6b5: GOTO 0x6a9

0x6b6: Stack[-5] = Stack[-2]
0x6b7: Return(); Pop(4)

0x6b8: PushEmpty()
0x6b9: PushEmpty()
0x6ba: Call2 0x6c2

0x6bb: Pop(0)
0x6bc: PushEmpty(bool, string, string)
0x6bd: Stack[-2] = "quest_k5_03"
0x6be: Stack[-1] = "completed"
0x6bf: Call2 0x68a

0x6c0: Pop(3)
0x6c1: Return(); Pop(0)

0x6c2: PushEmpty(object, object)
0x6c3: Push((int) 407)
0x6c4: Push((int) 2)
0x6c5: Push((int) 526025)
0x6c6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6c7: Pop(3)
0x6c8: PushEmpty(bool, object, int)
0x6c9: Stack[-2] = Stack[-4]
0x6ca: Stack[-1] = (int) 405
0x6cb: Call2 0x6dc

0x6cc: Pop(3)
0x6cd: Return(); Pop(2)

0x6ce: Stack[-1] = 0
0x6cf: PushEmpty(object, object)
0x6d0: @ GetDiaryRoot(Stack[-1])
0x6d1: Pop(0)
0x6d2: Pop(0); Push((bool) Stack[-1] == 0)
0x6d3: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6d4: Push("Can't retrieve diary root")
0x6d5: @ Trace(Stack[-1])
0x6d6: Pop(1)
0x6d7: Stack[-3] = (bool) 0
0x6d8: Return(); Pop(2)

0x6d9: Stack[-3] = Stack[-1]
0x6da: Return(); Pop(2)

0x6db: Stack[-1] = 0
0x6dc: PushEmpty(object, object, int, object, object, int)
0x6dd: PushEmpty(object)
0x6de: Call2 0x6cf

0x6df: Stack[-4] = Stack[-1]
0x6e0: Pop(1)
0x6e1: @@ Find(Stack[-7], Stack[-2])
0x6e2: Pop(0)
0x6e3: Pop(0); Push((bool) Stack[-2] == 0)
0x6e4: IF (Stack[-1] == 0) GOTO 0x6eb; Pop(1)

0x6e5: Push("Can't find diary parent with id: ")
0x6e6: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6e7: @ Trace(Stack[-1])
0x6e8: Pop(1)
0x6e9: Stack[-9] = (bool) 0
0x6ea: Return(); Pop(6)

0x6eb: @@ AddChild(Stack[-8])
0x6ec: Pop(0)
0x6ed: Push((int) 7)
0x6ee: @ SendWorldWndMessage(Stack[-1])
0x6ef: Pop(1)
0x6f0: @@ GetCategory(Stack[-1])
0x6f1: Pop(0)
0x6f2: @ SetDiarySection(Stack[-1])
0x6f3: Pop(0)
0x6f4: Stack[-9] = (bool) 0
0x6f5: Return(); Pop(6)

0x6f6: Stack[-2] = 0
0x6f7: Stack[-3] = 0
0x6f8: PushEmpty(int, int)
0x6f9: Push("branch")
0x6fa: @ GetVariable(Stack[-1], Stack[-2])
0x6fb: Pop(1)
0x6fc: Push((int) 0)
0x6fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6fe: IF (Stack[-1] == 0) GOTO 0x702; Pop(1)

0x6ff: Stack[-3] = (int) 1
0x700: Return(); Pop(2)

0x701: GOTO 0x707

0x702: Push((int) 1)
0x703: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x704: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x705: Stack[-3] = (int) 2
0x706: Return(); Pop(2)

0x707: Stack[-3] = (int) 3
0x708: Return(); Pop(2)

0x709: PushEmpty(object, float, object, float)
0x70a: Push("player")
0x70b: @ FindActor(Stack[-3], Stack[-1])
0x70c: Pop(1)
0x70d: Push(Stack[-2])
0x70e: IF (Stack[-1] == 0) GOTO 0x721; Pop(1)

0x70f: PushEmpty(float, object)
0x710: Stack[-1] = Stack[-4]
0x711: Call2 0x47f

0x712: Pop(1)
0x713: Push((float)640000.0)
0x714: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x715: IF (Stack[-1] == 0) GOTO 0x721; Pop(1)

0x716: PushEmpty(float, object, float, int)
0x717: Stack[-3] = Stack[-6]
0x718: Stack[-2] = (float) 0.05
0x719: Stack[-1] = (int) 0
0x71a: Call2 0x4ae

0x71b: Stack[-5] = Stack[-4]
0x71c: Pop(4)
0x71d: Push((int) 6)
0x71e: Push((float)0.05)
0x71f: @ ReportHit(Stack[-4], Stack[-2], Stack[-3], Stack[-1])
0x720: Pop(2)
0x721: Return(); Pop(4)

0x722: Stack[-2] = 0
0x723: PushEmpty()
0x724: PushEmpty(object)
0x725: Stack[-1] = Stack[-2]
0x726: Push(-1, 0); TaskCall(5)
0x727: Call2 0x3e1

0x728: Pop(-1, 0); TaskReturn
0x729: Pop(1)
0x72a: Return(); Pop(0)

0x72b: PushEmpty()
0x72c: PushEmpty(object, int, float)
0x72d: Stack[-3] = Stack[-7]
0x72e: Stack[-2] = Stack[-6]
0x72f: Stack[-1] = Stack[-5]
0x730: Call2 0x523

0x731: Pop(3)
0x732: Return(); Pop(0)

0x733: PushEmpty()
0x734: PushEmpty(object, int, float, cvector, cvector)
0x735: Stack[-5] = Stack[-11]
0x736: Stack[-4] = Stack[-10]
0x737: Stack[-3] = Stack[-9]
0x738: Stack[-2] = Stack[-7]
0x739: Stack[-1] = Stack[-6]
0x73a: Call2 0x567

0x73b: Pop(5)
0x73c: Return(); Pop(0)

0x73d: PushEmpty(float, float)
0x73e: Push("health")
0x73f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x740: IF (Stack[-1] == 0) GOTO 0x749; Pop(1)

0x741: Push("health")
0x742: @ GetProperty(Stack[-1], Stack[-2])
0x743: Pop(1)
0x744: Push((int) 0)
0x745: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x746: IF (Stack[-1] == 0) GOTO 0x749; Pop(1)

0x747: @ SignalDeath(Stack[-4])
0x748: Pop(0)
0x749: Return(); Pop(2)

0x74a: PushEmpty()
0x74b: PushEmpty(bool, object)
0x74c: Stack[-1] = Stack[-3]
0x74d: Call2 0x487

0x74e: Pop(1)
0x74f: IF (Stack[-1] == 0) GOTO 0x755; Pop(1)

0x750: PushEmpty(bool, object, float)
0x751: Stack[-2] = Stack[-4]
0x752: Stack[-1] = (float) -0.1
0x753: Call2 0x653

0x754: Pop(3)
0x755: PushEmpty(object)
0x756: Stack[-1] = Stack[-2]
0x757: Call2 0x723

0x758: Pop(1)
0x759: Return(); Pop(0)

