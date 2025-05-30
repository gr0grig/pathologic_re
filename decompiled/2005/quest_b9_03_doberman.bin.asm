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
	quest_b9_03
	doberman_attack
	cleanup
	player
	head
	samopal_ammo
	fdie
	GetPosition
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
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
	b9q03DobermanGotoFollower
	pt_b9q03_follower
	AddMark
	ShowMap
	oob9DobermanSpi4ka1_1
	place_follower
	init_bonefires
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	SetItemName
	Organ
	SetProperty
	GetItemID
	liver
	kidney
	heart
	blood
	branch
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png
	doberman_dead
	health

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
	SensePlayerOnly (1 args)
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	GetPosition (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	Stop (0 args)
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
	GetScene (1 args)
	AddActorByType (6 args)
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
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	AddItem (4 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	GetVariable (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	HasAnimation (3 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x13c
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x145 Vars = (object)
		EVENT_17 Op = 0x14e Vars = (object)
		EVENT_26 Op = 0x15a Vars = (string)
		EVENT_6 Op = 0x192 Vars = ()
		EVENT_7 Op = 0x1d3 Vars = (int)
	GTASK_3  Params = 1
		EVENT_6 Op = 0x25e Vars = ()
		EVENT_0 Op = 0x273 Vars = (object)
		EVENT_22 Op = 0x2f2 Vars = (object, int, float, float)
		EVENT_16 Op = 0x2f4 Vars = (object, string)
		EVENT_41 Op = 0x2f6 Vars = (object)

Events:
EVENT_22 Op = 0x5bf Vars = (object, int, float, float)
EVENT_43 Op = 0x5c7 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x5d1 Vars = (object, string)
EVENT_41 Op = 0x5de Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x38f

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x5aa

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x5a8

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x5ac

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x5ae

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x579

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
0x41: Call2 0x3d3

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
0x4f: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x4cf

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x49e

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0x9d

0x5d: Pop(1)
0x5e: Push((int) 530309)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 530310)
0x64: Push((int) 31698)
0x65: Push((int) 31697)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 531024)
0x69: Push((int) 31698)
0x6a: Push((int) 32353)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x7f

0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral"
0x70: Call2 0x9d

0x71: Pop(1)
0x72: Push((int) 530314)
0x73: @@ SetMessage(Stack[-1])
0x74: Pop(1)
0x75: @@ ClearReplies()
0x76: Pop(0)
0x77: Push((int) 530315)
0x78: Push((int) -1)
0x79: Push((int) 31702)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x4e

0x7f: PushEmpty(bool)
0x80: Call2 0x5b0

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x3e4

0x8b: Pop(1)
0x8c: GOTO 0x83

0x8d: GOTO 0x9c

0x8e: Push("all")
0x8f: Push("idle")
0x90: @ PlayAnimation(Stack[-2], Stack[-1])
0x91: Pop(2)
0x92: @ WaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: Push("all")
0x98: Push("idle")
0x99: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: GOTO 0x92

0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: PushEmpty(bool)
0x9f: Call2 0x5b0

0xa0: Pop(0)
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Return(); Pop(0)

0xa4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Return(); Pop(0)

0xa7: PushEmpty(string, bool)
0xa8: Stack[-2] = Stack[-3]
0xa9: Push("")
0xaa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xac: Stack[-1] = (bool) 0
0xad: GOTO 0xaf

0xae: Stack[-1] = (bool) 1
0xaf: Call2 0x3f4

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x40e

0xb8: Pop(0)
0xb9: Push((int) 31699)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x478

0xc0: Pop(2)
0xc1: Push((int) 31700)
0xc2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call2 0x4a4

0xc8: Pop(2)
0xc9: Push((int) 32356)
0xca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xcc: PushEmpty(object, object)
0xcd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcf: Call2 0x478

0xd0: Pop(2)
0xd1: Push((int) 31696)
0xd2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xd4: PushEmpty(bool, object)
0xd5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd6: Call2 0x4cf

0xd7: Pop(1)
0xd8: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xd9: PushEmpty(object, object)
0xda: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdc: Call2 0x49e

0xdd: Pop(2)
0xde: PushEmpty(string)
0xdf: Stack[-1] = "Neutral"
0xe0: Call2 0x9d

0xe1: Pop(1)
0xe2: Push((int) 530309)
0xe3: @@ SetMessage(Stack[-1])
0xe4: Pop(1)
0xe5: @@ ClearReplies()
0xe6: Pop(0)
0xe7: Push((int) 530310)
0xe8: Push((int) 31698)
0xe9: Push((int) 31697)
0xea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(3)
0xec: Push((int) 531024)
0xed: Push((int) 31698)
0xee: Push((int) 32353)
0xef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0: Pop(3)
0xf1: Return(); Pop(0)

0xf2: PushEmpty(string)
0xf3: Stack[-1] = "Neutral"
0xf4: Call2 0x9d

0xf5: Pop(1)
0xf6: Push((int) 530314)
0xf7: @@ SetMessage(Stack[-1])
0xf8: Pop(1)
0xf9: @@ ClearReplies()
0xfa: Pop(0)
0xfb: Push((int) 530315)
0xfc: Push((int) -1)
0xfd: Push((int) 31702)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Return(); Pop(0)

0x101: Push((int) 31698)
0x102: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x104: PushEmpty(string)
0x105: Stack[-1] = "Neutral"
0x106: Call2 0x9d

0x107: Pop(1)
0x108: Push((int) 530311)
0x109: @@ SetMessage(Stack[-1])
0x10a: Pop(1)
0x10b: @@ ClearReplies()
0x10c: Pop(0)
0x10d: Push((int) 531025)
0x10e: Push((int) 32355)
0x10f: Push((int) 32354)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Push((int) 531027)
0x113: Push((int) -1)
0x114: Push((int) 32356)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: Return(); Pop(0)

0x118: Push((int) 32355)
0x119: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x11b: PushEmpty(string)
0x11c: Stack[-1] = "Neutral"
0x11d: Call2 0x9d

0x11e: Pop(1)
0x11f: Push((int) 531026)
0x120: @@ SetMessage(Stack[-1])
0x121: Pop(1)
0x122: @@ ClearReplies()
0x123: Pop(0)
0x124: Push((int) 530312)
0x125: Push((int) -1)
0x126: Push((int) 31699)
0x127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(3)
0x129: Push((int) 530313)
0x12a: Push((int) -1)
0x12b: Push((int) 31700)
0x12c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d: Pop(3)
0x12e: Return(); Pop(0)

0x12f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x130: PushEmpty(bool)
0x131: Call2 0x5b0

0x132: Pop(0)
0x133: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x134: @ lshStopAnimation()
0x135: Pop(0)
0x136: GOTO 0x139

0x137: @ StopAnimation()
0x138: Pop(0)
0x139: Return(); Pop(0)

0x13a: GOTO 0xb4

0x13b: Return(); Pop(0)

0x13c: Push((bool) 1)
0x13d: @ SensePlayerOnly(Stack[-1])
0x13e: Pop(1)
0x13f: PushEmpty(float, float)
0x140: Stack[-2] = (int) 300
0x141: Stack[-1] = (int) 100
0x142: Call2 0x164

0x143: Pop(2)
0x144: Return(); Pop(0)

0x145: PushEmpty()
0x146: PushEmpty()
0x147: Call2 0x1ea

0x148: Pop(0)
0x149: PushEmpty(object)
0x14a: Stack[-1] = Stack[-2]
0x14b: Call2 0x5e4

0x14c: Pop(1)
0x14d: Return(); Pop(0)

0x14e: PushEmpty()
0x14f: PushEmpty(bool, object)
0x150: Stack[-1] = Stack[-3]
0x151: Call2 0x307

0x152: Pop(1)
0x153: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x154: PushEmpty(bool, string, string)
0x155: Stack[-2] = "quest_b9_03"
0x156: Stack[-1] = "doberman_attack"
0x157: Call2 0x467

0x158: Pop(3)
0x159: Return(); Pop(0)

0x15a: PushEmpty()
0x15b: Push("attack")
0x15c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15d: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15e: GOTO 0x163

0x15f: PushEmpty(string)
0x160: Stack[-1] = Stack[-2]
0x161: Call2 0x18a

0x162: Pop(1)
0x163: Return(); Pop(0)

0x164: PushEmpty(float, bool, float, bool)
0x165: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x166: Push((int) 3)
0x167: @ rand(Stack[-3], Stack[-1])
0x168: Pop(1)
0x169: Push((int) 3)
0x16a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x16b: @ Sleep(Stack[-1], Stack[-2])
0x16c: Pop(1)
0x16d: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x16e: PushEmpty(float, float)
0x16f: Stack[-2] = Stack[-8]
0x170: Stack[-1] = Stack[-7]
0x171: Call2 0x1a9

0x172: Pop(2)
0x173: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x174: GOTO 0x166

0x175: Return(); Pop(4)

0x176: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x177: PushEmpty(bool)
0x178: Stack[-1] = (bool) 0
0x179: PushEmpty(bool)
0x17a: Call2 0x38a

0x17b: Pop(0)
0x17c: Pop(1); Push((bool) Stack[-1] == 0)
0x17d: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x17e: PushEmpty(bool)
0x17f: Call2 0x1a7

0x180: Pop(0)
0x181: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x182: Stack[-1] = (bool) 1
0x183: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x184: PushEmpty(object)
0x185: Call2 0x44d

0x186: Pop(0)
0x187: @ RemoveActor(Stack[-1])
0x188: Pop(1)
0x189: Return(); Pop(0)

0x18a: PushEmpty()
0x18b: Push("cleanup")
0x18c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18e: PushEmpty()
0x18f: Call2 0x176

0x190: Pop(0)
0x191: Return(); Pop(0)

0x192: Push( Stack[6 + Tasks[-1].StackPointer] )
0x193: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x194: PushEmpty()
0x195: Call2 0x1ea

0x196: Pop(0)
0x197: PushEmpty(bool)
0x198: Stack[-1] = (bool) 0
0x199: Push( Stack[5 + Tasks[-1].StackPointer] )
0x19a: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19b: PushEmpty(bool)
0x19c: Call2 0x1a7

0x19d: Pop(0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19f: Stack[-1] = (bool) 1
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a1: PushEmpty(object)
0x1a2: Call2 0x44d

0x1a3: Pop(0)
0x1a4: @ RemoveActor(Stack[-1])
0x1a5: Pop(1)
0x1a6: Return(); Pop(0)

0x1a7: Stack[-1] = (bool) 1
0x1a8: Return(); Pop(0)

0x1a9: PushEmpty()
0x1aa: PushEmpty(bool)
0x1ab: Call2 0x38a

0x1ac: Pop(0)
0x1ad: Pop(1); Push((bool) Stack[-1] == 0)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1af: Return(); Pop(0)

0x1b0: Push("player")
0x1b1: @ FindActor(Stack[-4], Stack[-1])
0x1b2: Pop(1)
0x1b3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1b4: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1b5: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1b6: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1b7: Push((int) 10)
0x1b8: Push((float)1.0)
0x1b9: @ SetTimer(Stack[-2], Stack[-1])
0x1ba: Pop(2)
0x1bb: PushEmpty()
0x1bc: Call2 0x1f8

0x1bd: Pop(0)
0x1be: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c0: Push((int) 10)
0x1c1: @ KillTimer(Stack[-1])
0x1c2: Pop(1)
0x1c3: Return(); Pop(0)

0x1c4: PushEmpty(float, float)
0x1c5: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1c6: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c7: Stack[-3] = (bool) 0
0x1c8: Return(); Pop(2)

0x1c9: PushEmpty(float, object)
0x1ca: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1cb: Call2 0x2ff

0x1cc: Pop(1)
0x1cd: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1ce: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1d0: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1d1: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1d2: Return(); Pop(2)

0x1d3: PushEmpty()
0x1d4: Push((int) 10)
0x1d5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1d7: PushEmpty(bool)
0x1d8: Call2 0x1c4

0x1d9: Pop(0)
0x1da: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1db: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1dd: PushEmpty(object)
0x1de: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1df: Call2 0x403

0x1e0: Pop(1)
0x1e1: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1e2: GOTO 0x1e9

0x1e3: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e5: Push("head")
0x1e6: @ UnlookAsync(Stack[-1])
0x1e7: Pop(1)
0x1e8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1e9: Return(); Pop(0)

0x1ea: PushEmpty()
0x1eb: Call2 0x249

0x1ec: Pop(0)
0x1ed: Push((int) 10)
0x1ee: @ KillTimer(Stack[-1])
0x1ef: Pop(1)
0x1f0: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f2: Push("head")
0x1f3: @ UnlookAsync(Stack[-1])
0x1f4: Pop(1)
0x1f5: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1f6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1f7: Return(); Pop(0)

0x1f8: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1f9: @ WaitForAnimEnd()
0x1fa: Pop(0)
0x1fb: PushEmpty(bool)
0x1fc: Call2 0x38a

0x1fd: Pop(0)
0x1fe: Pop(1); Push((bool) Stack[-1] == 0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x200: Return(); Pop(14)

0x201: PushEmpty(int)
0x202: Call2 0x597

0x203: Stack[-8] = Stack[-1]
0x204: Pop(1)
0x205: Stack[-6] = (int) 0
0x206: PushEmpty(bool)
0x207: Stack[-1] = (bool) 0
0x208: Push((int) 5)
0x209: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20b: PushEmpty(bool)
0x20c: Call2 0x38a

0x20d: Pop(0)
0x20e: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20f: Stack[-1] = (bool) 1
0x210: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x211: Push((int) 3)
0x212: @ irand(Stack[-6], Stack[-1])
0x213: Pop(1)
0x214: Push((int) 0)
0x215: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x216: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x217: Push(Stack[-7])
0x218: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x219: @ irand(Stack[-4], Stack[-7])
0x21a: Pop(0)
0x21b: Push("all")
0x21c: PushEmpty(string, int)
0x21d: Stack[-1] = Stack[-7]
0x21e: Call2 0x590

0x21f: Pop(1)
0x220: @ PlayAnimation(Stack[-2], Stack[-1])
0x221: Pop(2)
0x222: @ WaitForAnimEnd(Stack[-3])
0x223: Pop(0)
0x224: Pop(0); Push((bool) Stack[-3] == 0)
0x225: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x226: GOTO 0x244

0x227: GOTO 0x239

0x228: Push((int) 1)
0x229: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x22a: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x22b: Push((int) 4)
0x22c: @ rand(Stack[-3], Stack[-1])
0x22d: Pop(1)
0x22e: Push((int) 1)
0x22f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x230: @ Sleep(Stack[-1], Stack[-2])
0x231: Pop(1)
0x232: Pop(0); Push((bool) Stack[-1] == 0)
0x233: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x234: GOTO 0x244

0x235: GOTO 0x239

0x236: Push(Stack[-6])
0x237: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x238: GOTO 0x244

0x239: PushEmpty(bool)
0x23a: Call2 0x247

0x23b: Pop(0)
0x23c: Pop(1); Push((bool) Stack[-1] == 0)
0x23d: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23e: GOTO 0x244

0x23f: @ ResetAAS()
0x240: Pop(0)
0x241: Push((int) 1)
0x242: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x243: GOTO 0x206

0x244: @ ResetAAS()
0x245: Pop(0)
0x246: Return(); Pop(14)

0x247: Stack[-1] = (bool) 1
0x248: Return(); Pop(0)

0x249: @ StopAnimation()
0x24a: Pop(0)
0x24b: @ StopGroup0()
0x24c: Pop(0)
0x24d: Return(); Pop(0)

0x24e: PushEmpty()
0x24f: PushEmpty(string, int, int, int)
0x250: Stack[-4] = "samopal_ammo"
0x251: Stack[-3] = (int) 1
0x252: Stack[-2] = (int) 1
0x253: Stack[-1] = (int) 4
0x254: Call2 0x415

0x255: Pop(4)
0x256: PushEmpty()
0x257: Call2 0x561

0x258: Pop(0)
0x259: PushEmpty(object)
0x25a: Stack[-1] = Stack[-2]
0x25b: Call2 0x264

0x25c: Pop(1)
0x25d: Return(); Pop(0)

0x25e: PushEmpty(object)
0x25f: Call2 0x44d

0x260: Pop(0)
0x261: @ RemoveActor(Stack[-1])
0x262: Pop(1)
0x263: Return(); Pop(0)

0x264: PushEmpty()
0x265: EventDisable(0)
0x266: PushEmpty(object)
0x267: Stack[-1] = Stack[-2]
0x268: Call2 0x27d

0x269: Pop(1)
0x26a: Push((int) 50)
0x26b: Push((int) 40)
0x26c: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x26d: Pop(2)
0x26e: EventEnable(0)
0x26f: @ Hold()
0x270: Pop(0)
0x271: GOTO 0x26f

0x272: Return(); Pop(0)

0x273: PushEmpty(bool, bool)
0x274: @ IsOverrideActive(Stack[-1])
0x275: Pop(0)
0x276: Pop(0); Push((bool) Stack[-1] == 0)
0x277: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x278: PushEmpty(object)
0x279: Stack[-1] = Stack[-4]
0x27a: Call2 0x543

0x27b: Pop(1)
0x27c: Return(); Pop(2)

0x27d: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x27e: Pop(0); Push((bool) Stack[-21] == 0)
0x27f: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x280: PushEmpty(string)
0x281: Stack[-1] = "fdie"
0x282: Call2 0x2d8

0x283: Pop(1)
0x284: GOTO 0x2d7

0x285: @@ GetPosition(Stack[-10])
0x286: Pop(0)
0x287: @ GetPosition(Stack[-9])
0x288: Pop(0)
0x289: @ GetDirection(Stack[-8])
0x28a: Pop(0)
0x28b: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x28c: Push(CvectorIndex(Stack[-7], 0))
0x28d: Push(CvectorIndex(Stack[-9], 0))
0x28e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x28f: Push(CvectorIndex(Stack[-8], 2))
0x290: Push(CvectorIndex(Stack[-10], 2))
0x291: Pop(2); Push(Stack[-2] * Stack[-1]);
0x292: Pop(2); Push(Stack[-2] + Stack[-1]);
0x293: Push((int) 0)
0x294: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x295: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x296: Stack[-6] = "fdie"
0x297: GOTO 0x299

0x298: Stack[-6] = "bdie"
0x299: @ RemoveRTEnvelope()
0x29a: Pop(0)
0x29b: @ SetDeathState()
0x29c: Pop(0)
0x29d: @ Stop()
0x29e: Pop(0)
0x29f: @ StopAsync()
0x2a0: Pop(0)
0x2a1: Stack[-5] = Stack[-21]
0x2a2: Push("GetScriptProperty")
0x2a3: Push((int) 2)
0x2a4: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x2a5: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2a6: Push("Owner")
0x2a7: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x2a8: Pop(1)
0x2a9: Push(Stack[-4])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2ab: Push("Owner")
0x2ac: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x2ad: Pop(1)
0x2ae: Pop(0); Push((bool) Stack[-5] == 0)
0x2af: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2b0: Stack[-5] = Stack[-21]
0x2b1: Push("@GetEyesHeight")
0x2b2: Push((int) 1)
0x2b3: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x2b4: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2b5: @@ GetEyesHeight(Stack[-2])
0x2b6: Pop(0)
0x2b7: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2b8: Push(CvectorIndex(Stack[-1], 1))
0x2b9: Stack[-1] = Stack[-3]
0x2ba: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2bb: Push("head")
0x2bc: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x2bd: Pop(1)
0x2be: Stack[-3] = (bool) 1
0x2bf: GOTO 0x2c1

0x2c0: Stack[-3] = (bool) 0
0x2c1: PushEmpty(string)
0x2c2: Stack[-1] = Stack[-7]
0x2c3: Call2 0x424

0x2c4: Pop(1)
0x2c5: Push("all")
0x2c6: @ PlayAnimation(Stack[-1], Stack[-7])
0x2c7: Pop(1)
0x2c8: @ WaitForAnimEnd()
0x2c9: Pop(0)
0x2ca: Push(Stack[-3])
0x2cb: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2cc: @ StopAsync()
0x2cd: Pop(0)
0x2ce: Push("head")
0x2cf: @ UnlookAsync(Stack[-1])
0x2d0: Pop(1)
0x2d1: Push("all")
0x2d2: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x2d3: Pop(1)
0x2d4: @ RemoveEnvelope()
0x2d5: Pop(0)
0x2d6: Stack[-5] = 0
0x2d7: Return(); Pop(20)

0x2d8: PushEmpty()
0x2d9: @ RemoveRTEnvelope()
0x2da: Pop(0)
0x2db: @ SetDeathState()
0x2dc: Pop(0)
0x2dd: @ Stop()
0x2de: Pop(0)
0x2df: @ StopAsync()
0x2e0: Pop(0)
0x2e1: @ StopSecondaryAnimation()
0x2e2: Pop(0)
0x2e3: PushEmpty(string)
0x2e4: Stack[-1] = Stack[-2]
0x2e5: Call2 0x424

0x2e6: Pop(1)
0x2e7: Push("all")
0x2e8: @ PlayAnimation(Stack[-1], Stack[-2])
0x2e9: Pop(1)
0x2ea: @ WaitForAnimEnd()
0x2eb: Pop(0)
0x2ec: Push("all")
0x2ed: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x2ee: Pop(1)
0x2ef: @ RemoveEnvelope()
0x2f0: Pop(0)
0x2f1: Return(); Pop(0)

0x2f2: PushEmpty()
0x2f3: Return(); Pop(0)

0x2f4: PushEmpty()
0x2f5: Return(); Pop(0)

0x2f6: PushEmpty()
0x2f7: Return(); Pop(0)

0x2f8: PushEmpty(cvector, cvector, cvector, cvector)
0x2f9: @ GetPosition(Stack[-2])
0x2fa: Pop(0)
0x2fb: @@ GetPosition(Stack[-1])
0x2fc: Pop(0)
0x2fd: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x2fe: Return(); Pop(4)

0x2ff: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x300: @ GetPosition(Stack[-3])
0x301: Pop(0)
0x302: @@ GetPosition(Stack[-2])
0x303: Pop(0)
0x304: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x305: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x306: Return(); Pop(6)

0x307: PushEmpty(bool, bool)
0x308: @ IsPlayerActor(Stack[-3], Stack[-1])
0x309: Pop(0)
0x30a: Stack[-4] = Stack[-1]
0x30b: Return(); Pop(2)

0x30c: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x30d: Pop(0); Push((bool) Stack[-15] == 0)
0x30e: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30f: Return(); Pop(14)

0x310: @ IsDead(Stack[-7])
0x311: Pop(0)
0x312: Push(Stack[-7])
0x313: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x314: Return(); Pop(14)

0x315: @ GetSecondaryAnimationType(Stack[-6])
0x316: Pop(0)
0x317: Push((int) 0)
0x318: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x319: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x31a: Return(); Pop(14)

0x31b: @@ GetPosition(Stack[-5])
0x31c: Pop(0)
0x31d: @ GetPosition(Stack[-4])
0x31e: Pop(0)
0x31f: @ GetDirection(Stack[-3])
0x320: Pop(0)
0x321: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x322: Push(CvectorIndex(Stack[-2], 0))
0x323: Push(CvectorIndex(Stack[-4], 0))
0x324: Pop(2); Push(Stack[-2] * Stack[-1]);
0x325: Push(CvectorIndex(Stack[-3], 2))
0x326: Push(CvectorIndex(Stack[-5], 2))
0x327: Pop(2); Push(Stack[-2] * Stack[-1]);
0x328: Pop(2); Push(Stack[-2] + Stack[-1]);
0x329: Push((int) 0)
0x32a: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x32b: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32c: Stack[-1] = "fhit"
0x32d: GOTO 0x32f

0x32e: Stack[-1] = "bhit"
0x32f: Push("hit_react")
0x330: Push("1")
0x331: Pop(1); Push(Stack[-3] + Stack[-1]);
0x332: Push("2")
0x333: Pop(1); Push(Stack[-4] + Stack[-1]);
0x334: Push((int) -10)
0x335: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x336: Pop(4)
0x337: Return(); Pop(14)

0x338: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x339: PushEmpty(bool)
0x33a: Stack[-1] = (bool) 0
0x33b: PushEmpty(bool)
0x33c: Stack[-1] = (bool) 0
0x33d: Push(Stack[-23])
0x33e: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x33f: Push((int) 4)
0x340: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x342: Stack[-1] = (bool) 1
0x343: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x344: Push((int) 5)
0x345: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x346: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x347: Stack[-1] = (bool) 1
0x348: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x349: PushEmpty(cvector, cvector)
0x34a: PushEmpty(cvector, object)
0x34b: Stack[-1] = Stack[-25]
0x34c: Call2 0x2f8

0x34d: Stack[-3] = Stack[-2]
0x34e: Pop(2)
0x34f: Call2 0x453

0x350: Stack[-11] = Stack[-2]
0x351: Pop(2)
0x352: @ CreateVectorVector(Stack[-8])
0x353: Pop(0)
0x354: Stack[-7] = (int) 1
0x355: Push("hit")
0x356: Pop(1); Push(Stack[-1] + Stack[-8]);
0x357: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x358: Pop(1)
0x359: Pop(0); Push((bool) Stack[-6] == 0)
0x35a: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x35b: GOTO 0x365

0x35c: Pop(0); Push(Stack[-4] | Stack[-9]);
0x35d: Push((float)0.70711)
0x35e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x35f: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x360: @@ add(Stack[-5])
0x361: Pop(0)
0x362: Push((int) 1)
0x363: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x364: GOTO 0x355

0x365: @@ size(Stack[-3])
0x366: Pop(0)
0x367: Push(Stack[-3])
0x368: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x369: @ irand(Stack[-2], Stack[-3])
0x36a: Pop(0)
0x36b: @@ get(Stack[-1], Stack[-2])
0x36c: Pop(0)
0x36d: PushEmpty(object, int, float, cvector, cvector)
0x36e: Stack[-5] = Stack[-26]
0x36f: Stack[-4] = Stack[-25]
0x370: Stack[-3] = Stack[-24]
0x371: Stack[-2] = Stack[-6]
0x372: Stack[-1] = -Stack[-14]; Pop(0);
0x373: Call2 0x37c

0x374: Pop(5)
0x375: Return(); Pop(18)

0x376: Stack[-8] = 0
0x377: PushEmpty(object)
0x378: Stack[-1] = Stack[-22]
0x379: Call2 0x30c

0x37a: Pop(1)
0x37b: Return(); Pop(18)

0x37c: PushEmpty(object, object, object, object)
0x37d: @ GetScene(Stack[-2])
0x37e: Pop(0)
0x37f: Push("scripted")
0x380: Push("blood_dir.xml")
0x381: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x382: Pop(2)
0x383: PushEmpty(object)
0x384: Stack[-1] = Stack[-10]
0x385: Call2 0x30c

0x386: Pop(1)
0x387: Return(); Pop(4)

0x388: Stack[-1] = 0
0x389: Stack[-2] = 0
0x38a: PushEmpty(bool, bool)
0x38b: @ IsLoaded(Stack[-1])
0x38c: Pop(0)
0x38d: Stack[-3] = Stack[-1]
0x38e: Return(); Pop(2)

0x38f: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x390: @@ GetPosition(Stack[-8])
0x391: Pop(0)
0x392: @@ GetEyesHeight(Stack[-9])
0x393: Pop(0)
0x394: Push(CvectorIndex(Stack[-8], 1))
0x395: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x396: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x397: @ GetPosition(Stack[-7])
0x398: Pop(0)
0x399: @ GetEyesHeight(Stack[-9])
0x39a: Pop(0)
0x39b: Push(CvectorIndex(Stack[-7], 1))
0x39c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x39d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x39e: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x39f: Push(CvectorIndex(Stack[-6], 1))
0x3a0: Stack[-1] = (int) 0
0x3a1: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3a2: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3a3: Pop(1); Push(Sqrt(Stack[-1]))
0x3a4: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3a5: Stack[-5] = -Stack[-6]; Pop(0);
0x3a6: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3a7: PushEmpty(cvector, cvector)
0x3a8: Push(CVector(0.0, 1.0, 0.0))
0x3a9: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3aa: Call2 0x453

0x3ab: Pop(1)
0x3ac: Push((int) 25)
0x3ad: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3ae: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3af: Push(CVector(0.0, 10.0, 0.0))
0x3b0: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3b1: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3b2: @ IsOverrideActive(Stack[-2])
0x3b3: Pop(0)
0x3b4: Push(Stack[-2])
0x3b5: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b6: Stack[-21] = (bool) 0
0x3b7: Return(); Pop(18)

0x3b8: @ StopWorld()
0x3b9: Pop(0)
0x3ba: @ CameraTransit(Stack[-3], Stack[-5])
0x3bb: Pop(0)
0x3bc: Push(CvectorIndex(Stack[-4], 0))
0x3bd: Push(CvectorIndex(Stack[-5], 2))
0x3be: @ Rotate(Stack[-2], Stack[-1])
0x3bf: Pop(2)
0x3c0: PushEmpty(bool)
0x3c1: Call2 0x5b0

0x3c2: Pop(0)
0x3c3: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c4: GOTO 0x3cd

0x3c5: Push("head")
0x3c6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3c7: Pop(1)
0x3c8: Push(Stack[-1])
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3ca: Push("head")
0x3cb: @ LookAsyncCamera(Stack[-1])
0x3cc: Pop(1)
0x3cd: @ CameraWaitForPlayFinish()
0x3ce: Pop(0)
0x3cf: @ ResumeWorld()
0x3d0: Pop(0)
0x3d1: Stack[-21] = (bool) 1
0x3d2: Return(); Pop(18)

0x3d3: PushEmpty(bool, bool)
0x3d4: @ CameraSwitchToNormal()
0x3d5: Pop(0)
0x3d6: PushEmpty(bool)
0x3d7: Call2 0x5b0

0x3d8: Pop(0)
0x3d9: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3da: GOTO 0x3e3

0x3db: Push("head")
0x3dc: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3dd: Pop(1)
0x3de: Push(Stack[-1])
0x3df: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e0: Push("head")
0x3e1: @ UnlookAsync(Stack[-1])
0x3e2: Pop(1)
0x3e3: Return(); Pop(2)

0x3e4: PushEmpty(bool, float, float, bool, float, float)
0x3e5: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3e6: Pop(0)
0x3e7: Push(Stack[-3])
0x3e8: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3e9: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3ea: Pop(0)
0x3eb: Push((bool) 0)
0x3ec: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3ed: Pop(1)
0x3ee: GOTO 0x3f3

0x3ef: Push("Can't find lsh animation : ")
0x3f0: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3f1: @ Trace(Stack[-1])
0x3f2: Pop(1)
0x3f3: Return(); Pop(6)

0x3f4: PushEmpty(bool, float, float, bool, float, float)
0x3f5: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3f6: Pop(0)
0x3f7: Push(Stack[-3])
0x3f8: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3f9: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3fa: Pop(0)
0x3fb: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3fc: Pop(0)
0x3fd: GOTO 0x402

0x3fe: Push("Can't find lsh animation : ")
0x3ff: Pop(1); Push(Stack[-1] + Stack[-9]);
0x400: @ Trace(Stack[-1])
0x401: Pop(1)
0x402: Return(); Pop(6)

0x403: PushEmpty(float, cvector, float, cvector)
0x404: @@ GetEyesHeight(Stack[-2])
0x405: Pop(0)
0x406: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x407: Push(CvectorIndex(Stack[-1], 1))
0x408: Stack[-1] = Stack[-3]
0x409: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x40a: Push("head")
0x40b: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x40c: Pop(1)
0x40d: Return(); Pop(4)

0x40e: PushEmpty(bool)
0x40f: Call2 0x5b0

0x410: Pop(0)
0x411: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x412: @ lshStopSpeech()
0x413: Pop(0)
0x414: Return(); Pop(0)

0x415: PushEmpty(int, bool, int, bool)
0x416: PushEmpty(bool, int, int)
0x417: Stack[-2] = Stack[-10]
0x418: Stack[-1] = Stack[-9]
0x419: Call2 0x45d

0x41a: Pop(2)
0x41b: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x41c: @ irand(Stack[-2], Stack[-5])
0x41d: Pop(0)
0x41e: Push((int) 0)
0x41f: Push((int) 1)
0x420: Pop(1); Push(Stack[-4] + Stack[-1]);
0x421: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x422: Pop(2)
0x423: Return(); Pop(4)

0x424: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x425: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x426: Pop(0)
0x427: Pop(0); Push((bool) Stack[-8] == 0)
0x428: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x429: Stack[-7] = (int) 0
0x42a: Push((int) 1)
0x42b: Pop(1); Push(Stack[-8] + Stack[-1]);
0x42c: Pop(1); Push(Stack[-18] + Stack[-1]);
0x42d: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x42e: Pop(1)
0x42f: Pop(0); Push((bool) Stack[-6] == 0)
0x430: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x431: GOTO 0x435

0x432: Push((int) 1)
0x433: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x434: GOTO 0x42a

0x435: Pop(0); Push((bool) Stack[-7] == 0)
0x436: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x437: Return(); Pop(16)

0x438: @ irand(Stack[-5], Stack[-7])
0x439: Pop(0)
0x43a: Push((int) 1)
0x43b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x43c: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x43d: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x43e: Pop(0)
0x43f: Push(Stack[-4])
0x440: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x441: @ GetEyesHeight(Stack[-3])
0x442: Pop(0)
0x443: @ GetDirection(Stack[-2])
0x444: Pop(0)
0x445: Push((int) 50)
0x446: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x447: Push(CvectorIndex(Stack[-1], 1))
0x448: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x449: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x44a: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x44b: Pop(0)
0x44c: Return(); Pop(16)

0x44d: PushEmpty(object, object)
0x44e: @ self(Stack[-1])
0x44f: Pop(0)
0x450: Stack[-3] = Stack[-1]
0x451: Return(); Pop(2)

0x452: Stack[-1] = 0
0x453: PushEmpty(float, float)
0x454: Pop(0); Push(Stack[-3] | Stack[-3]);
0x455: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x456: Push((float)0.0)
0x457: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x458: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x459: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x45a: Return(); Pop(2)

0x45b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x45c: Return(); Pop(2)

0x45d: PushEmpty(int, int)
0x45e: @ irand(Stack[-1], Stack[-3])
0x45f: Pop(0)
0x460: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x461: Return(); Pop(2)

0x462: PushEmpty(int, int)
0x463: @ GetVariable(Stack[-3], Stack[-1])
0x464: Pop(0)
0x465: Stack[-4] = Stack[-1]
0x466: Return(); Pop(2)

0x467: PushEmpty(object, object)
0x468: @ FindActor(Stack[-1], Stack[-4])
0x469: Pop(0)
0x46a: Pop(0); Push((bool) Stack[-1] == 0)
0x46b: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x46c: Stack[-5] = (bool) 0
0x46d: Return(); Pop(2)

0x46e: @ Trigger(Stack[-1], Stack[-3])
0x46f: Pop(0)
0x470: Stack[-5] = (bool) 1
0x471: Return(); Pop(2)

0x472: Stack[-1] = 0
0x473: PushEmpty(float, float)
0x474: @ GetGameTime(Stack[-1])
0x475: Pop(0)
0x476: Stack[-3] = Stack[-1]
0x477: Return(); Pop(2)

0x478: PushEmpty(object, object)
0x479: PushEmpty(object)
0x47a: Call2 0x511

0x47b: Stack[-2] = Stack[-1]
0x47c: Pop(1)
0x47d: Push("b9q03DobermanGotoFollower")
0x47e: Push("pt_b9q03_follower")
0x47f: Push((int) 0)
0x480: Push((int) 530343)
0x481: PushEmpty(float)
0x482: Call2 0x473

0x483: Pop(0)
0x484: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x485: Pop(5)
0x486: PushEmpty()
0x487: Call2 0x4db

0x488: Pop(0)
0x489: PushEmpty(bool, string, string)
0x48a: Stack[-2] = "quest_b9_03"
0x48b: Stack[-1] = "doberman_attack"
0x48c: Call2 0x467

0x48d: Pop(3)
0x48e: PushEmpty(object, string, float)
0x48f: PushEmpty(object)
0x490: Call2 0x511

0x491: Stack[-4] = Stack[-1]
0x492: Pop(1)
0x493: Stack[-2] = "pt_b9q03_follower"
0x494: Stack[-1] = (int) 2
0x495: Call2 0x522

0x496: Pop(3)
0x497: PushEmpty(object)
0x498: Call2 0x511

0x499: Pop(0)
0x49a: @@ ShowMap(Stack[-1])
0x49b: Pop(1)
0x49c: Return(); Pop(2)

0x49d: Stack[-1] = 0
0x49e: PushEmpty()
0x49f: Push("oob9DobermanSpi4ka1_1")
0x4a0: Push((int) 1)
0x4a1: @ SetVariable(Stack[-2], Stack[-1])
0x4a2: Pop(2)
0x4a3: Return(); Pop(0)

0x4a4: PushEmpty(object, object)
0x4a5: PushEmpty(object)
0x4a6: Call2 0x511

0x4a7: Stack[-2] = Stack[-1]
0x4a8: Pop(1)
0x4a9: Push("b9q03DobermanGotoFollower")
0x4aa: Push("pt_b9q03_follower")
0x4ab: Push((int) 0)
0x4ac: Push((int) 530343)
0x4ad: PushEmpty(float)
0x4ae: Call2 0x473

0x4af: Pop(0)
0x4b0: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4b1: Pop(5)
0x4b2: PushEmpty()
0x4b3: Call2 0x4db

0x4b4: Pop(0)
0x4b5: PushEmpty(bool, string, string)
0x4b6: Stack[-2] = "quest_b9_03"
0x4b7: Stack[-1] = "place_follower"
0x4b8: Call2 0x467

0x4b9: Pop(3)
0x4ba: PushEmpty(bool, string, string)
0x4bb: Stack[-2] = "quest_b9_03"
0x4bc: Stack[-1] = "init_bonefires"
0x4bd: Call2 0x467

0x4be: Pop(3)
0x4bf: PushEmpty(object, string, float)
0x4c0: PushEmpty(object)
0x4c1: Call2 0x511

0x4c2: Stack[-4] = Stack[-1]
0x4c3: Pop(1)
0x4c4: Stack[-2] = "pt_b9q03_follower"
0x4c5: Stack[-1] = (int) 2
0x4c6: Call2 0x522

0x4c7: Pop(3)
0x4c8: PushEmpty(object)
0x4c9: Call2 0x511

0x4ca: Pop(0)
0x4cb: @@ ShowMap(Stack[-1])
0x4cc: Pop(1)
0x4cd: Return(); Pop(2)

0x4ce: Stack[-1] = 0
0x4cf: PushEmpty()
0x4d0: PushEmpty(int, string)
0x4d1: Stack[-1] = "oob9DobermanSpi4ka1_1"
0x4d2: Call2 0x462

0x4d3: Pop(1)
0x4d4: Push((int) 0)
0x4d5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4d6: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d7: Stack[-2] = (bool) 1
0x4d8: Return(); Pop(0)

0x4d9: Stack[-2] = (bool) 0
0x4da: Return(); Pop(0)

0x4db: PushEmpty(object, object)
0x4dc: Push((int) 542)
0x4dd: Push((int) 2)
0x4de: Push((int) 530354)
0x4df: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4e0: Pop(3)
0x4e1: PushEmpty(bool, object, int)
0x4e2: Stack[-2] = Stack[-4]
0x4e3: Stack[-1] = (int) 532
0x4e4: Call2 0x4f5

0x4e5: Pop(3)
0x4e6: Return(); Pop(2)

0x4e7: Stack[-1] = 0
0x4e8: PushEmpty(object, object)
0x4e9: @ GetDiaryRoot(Stack[-1])
0x4ea: Pop(0)
0x4eb: Pop(0); Push((bool) Stack[-1] == 0)
0x4ec: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4ed: Push("Can't retrieve diary root")
0x4ee: @ Trace(Stack[-1])
0x4ef: Pop(1)
0x4f0: Stack[-3] = (bool) 0
0x4f1: Return(); Pop(2)

0x4f2: Stack[-3] = Stack[-1]
0x4f3: Return(); Pop(2)

0x4f4: Stack[-1] = 0
0x4f5: PushEmpty(object, object, int, object, object, int)
0x4f6: PushEmpty(object)
0x4f7: Call2 0x4e8

0x4f8: Stack[-4] = Stack[-1]
0x4f9: Pop(1)
0x4fa: @@ Find(Stack[-7], Stack[-2])
0x4fb: Pop(0)
0x4fc: Pop(0); Push((bool) Stack[-2] == 0)
0x4fd: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x4fe: Push("Can't find diary parent with id: ")
0x4ff: Pop(1); Push(Stack[-1] + Stack[-8]);
0x500: @ Trace(Stack[-1])
0x501: Pop(1)
0x502: Stack[-9] = (bool) 0
0x503: Return(); Pop(6)

0x504: @@ AddChild(Stack[-8])
0x505: Pop(0)
0x506: Push((int) 7)
0x507: @ SendWorldWndMessage(Stack[-1])
0x508: Pop(1)
0x509: @@ GetCategory(Stack[-1])
0x50a: Pop(0)
0x50b: @ SetDiarySection(Stack[-1])
0x50c: Pop(0)
0x50d: Stack[-9] = (bool) 0
0x50e: Return(); Pop(6)

0x50f: Stack[-2] = 0
0x510: Stack[-3] = 0
0x511: PushEmpty(object, object, object, object)
0x512: @ GetMainOutdoorScene(Stack[-2])
0x513: Pop(0)
0x514: Pop(0); Push((bool) Stack[-2] == 0)
0x515: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x516: Push("Can't find main outdoor scene")
0x517: @ Trace(Stack[-1])
0x518: Pop(1)
0x519: Stack[-1] = 0
0x51a: Stack[-5] = Stack[-1]
0x51b: Return(); Pop(4)

0x51c: @@ GetMap(Stack[-1])
0x51d: Pop(0)
0x51e: Stack[-5] = Stack[-1]
0x51f: Return(); Pop(4)

0x520: Stack[-1] = 0
0x521: Stack[-2] = 0
0x522: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x523: @ GetMainOutdoorScene(Stack[-2])
0x524: Pop(0)
0x525: Pop(0); Push((bool) Stack[-2] == 0)
0x526: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x527: Push("Can't find main outdoor scene")
0x528: @ Trace(Stack[-1])
0x529: Pop(1)
0x52a: Return(); Pop(8)

0x52b: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x52c: Pop(0)
0x52d: Pop(0); Push((bool) Stack[-1] == 0)
0x52e: IF (Stack[-1] == 0) GOTO 0x535; Pop(1)

0x52f: Push("Warning: outdoor scene locator ")
0x530: Pop(1); Push(Stack[-1] + Stack[-11]);
0x531: Push(" doesnt exist")
0x532: Pop(2); Push(Stack[-2] + Stack[-1]);
0x533: @ Trace(Stack[-1])
0x534: Pop(1)
0x535: @@ GetMap(Stack[-11])
0x536: Pop(0)
0x537: Pop(0); Push((bool) Stack[-11] == 0)
0x538: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x539: Push("Can't find map")
0x53a: @ Trace(Stack[-1])
0x53b: Pop(1)
0x53c: Return(); Pop(8)

0x53d: Push(CvectorIndex(Stack[-4], 0))
0x53e: Push(CvectorIndex(Stack[-5], 2))
0x53f: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x540: Pop(2)
0x541: Return(); Pop(8)

0x542: Stack[-2] = 0
0x543: PushEmpty()
0x544: PushEmpty(int)
0x545: Call2 0x58a

0x546: Pop(0)
0x547: Push((int) 1)
0x548: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x549: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x54a: @ WorkWithCorpse(Stack[-1])
0x54b: Pop(0)
0x54c: GOTO 0x54f

0x54d: @ Barter(Stack[-1])
0x54e: Pop(0)
0x54f: Return(); Pop(0)

0x550: PushEmpty(object, int, bool, object, int, bool)
0x551: @ CreateInvItem(Stack[-3])
0x552: Pop(0)
0x553: @@ SetItemName(Stack[-7])
0x554: Pop(0)
0x555: Push("Organ")
0x556: Push((int) 1)
0x557: @@ SetProperty(Stack[-2], Stack[-1])
0x558: Pop(2)
0x559: @@ GetItemID(Stack[-2])
0x55a: Pop(0)
0x55b: Push((int) 0)
0x55c: Push((int) 1)
0x55d: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x55e: Pop(2)
0x55f: Return(); Pop(6)

0x560: Stack[-3] = 0
0x561: PushEmpty(int)
0x562: Call2 0x58a

0x563: Pop(0)
0x564: Push((int) 1)
0x565: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x566: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x567: Return(); Pop(0)

0x568: PushEmpty(string)
0x569: Stack[-1] = "liver"
0x56a: Call2 0x550

0x56b: Pop(1)
0x56c: PushEmpty(string)
0x56d: Stack[-1] = "kidney"
0x56e: Call2 0x550

0x56f: Pop(1)
0x570: PushEmpty(string)
0x571: Stack[-1] = "heart"
0x572: Call2 0x550

0x573: Pop(1)
0x574: PushEmpty(string)
0x575: Stack[-1] = "blood"
0x576: Call2 0x550

0x577: Pop(1)
0x578: Return(); Pop(0)

0x579: PushEmpty(int, int)
0x57a: Push("branch")
0x57b: @ GetVariable(Stack[-1], Stack[-2])
0x57c: Pop(1)
0x57d: Push((int) 0)
0x57e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x57f: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x580: Stack[-3] = (int) 1
0x581: Return(); Pop(2)

0x582: GOTO 0x588

0x583: Push((int) 1)
0x584: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x585: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x586: Stack[-3] = (int) 2
0x587: Return(); Pop(2)

0x588: Stack[-3] = (int) 3
0x589: Return(); Pop(2)

0x58a: PushEmpty(int, int)
0x58b: Push("branch")
0x58c: @ GetVariable(Stack[-1], Stack[-2])
0x58d: Pop(1)
0x58e: Stack[-3] = Stack[-1]
0x58f: Return(); Pop(2)

0x590: PushEmpty(string, string)
0x591: Stack[-1] = "idle"
0x592: Push(Stack[-3])
0x593: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x594: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x595: Stack[-4] = Stack[-1]
0x596: Return(); Pop(2)

0x597: PushEmpty(int, bool, int, bool)
0x598: Stack[-2] = (int) 0
0x599: Push("all")
0x59a: PushEmpty(string, int)
0x59b: Stack[-1] = Stack[-5]
0x59c: Call2 0x590

0x59d: Pop(1)
0x59e: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x59f: Pop(2)
0x5a0: Pop(0); Push((bool) Stack[-1] == 0)
0x5a1: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x5a2: GOTO 0x5a6

0x5a3: Push((int) 1)
0x5a4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x5a5: GOTO 0x599

0x5a6: Stack[-5] = Stack[-2]
0x5a7: Return(); Pop(4)

0x5a8: Stack[-1] = (int) 518097
0x5a9: Return(); Pop(0)

0x5aa: Stack[-1] = (int) 518096
0x5ab: Return(); Pop(0)

0x5ac: Stack[-1] = "ui/NPC_Citizen2.png"
0x5ad: Return(); Pop(0)

0x5ae: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x5af: Return(); Pop(0)

0x5b0: Stack[-1] = (bool) 0
0x5b1: Return(); Pop(0)

0x5b2: PushEmpty()
0x5b3: PushEmpty(bool, string, string)
0x5b4: Stack[-2] = "quest_b9_03"
0x5b5: Stack[-1] = "doberman_dead"
0x5b6: Call2 0x467

0x5b7: Pop(3)
0x5b8: PushEmpty(object)
0x5b9: Stack[-1] = Stack[-2]
0x5ba: Push(-1, 0); TaskCall(3)
0x5bb: Call2 0x24e

0x5bc: Pop(-1, 0); TaskReturn
0x5bd: Pop(1)
0x5be: Return(); Pop(0)

0x5bf: PushEmpty()
0x5c0: PushEmpty(object, int, float)
0x5c1: Stack[-3] = Stack[-7]
0x5c2: Stack[-2] = Stack[-6]
0x5c3: Stack[-1] = Stack[-5]
0x5c4: Call2 0x338

0x5c5: Pop(3)
0x5c6: Return(); Pop(0)

0x5c7: PushEmpty()
0x5c8: PushEmpty(object, int, float, cvector, cvector)
0x5c9: Stack[-5] = Stack[-11]
0x5ca: Stack[-4] = Stack[-10]
0x5cb: Stack[-3] = Stack[-9]
0x5cc: Stack[-2] = Stack[-7]
0x5cd: Stack[-1] = Stack[-6]
0x5ce: Call2 0x37c

0x5cf: Pop(5)
0x5d0: Return(); Pop(0)

0x5d1: PushEmpty(float, float)
0x5d2: Push("health")
0x5d3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5d4: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5d5: Push("health")
0x5d6: @ GetProperty(Stack[-1], Stack[-2])
0x5d7: Pop(1)
0x5d8: Push((int) 0)
0x5d9: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x5da: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5db: @ SignalDeath(Stack[-4])
0x5dc: Pop(0)
0x5dd: Return(); Pop(2)

0x5de: PushEmpty()
0x5df: PushEmpty(object)
0x5e0: Stack[-1] = Stack[-2]
0x5e1: Call2 0x5b2

0x5e2: Pop(1)
0x5e3: Return(); Pop(0)

0x5e4: PushEmpty()
0x5e5: PushEmpty(int, object)
0x5e6: Stack[-1] = Stack[-3]
0x5e7: Push(-2, 1); TaskCall(0)
0x5e8: Call2 0x0

0x5e9: Pop(-2, 1); TaskReturn
0x5ea: Pop(2)
0x5eb: Return(); Pop(0)

