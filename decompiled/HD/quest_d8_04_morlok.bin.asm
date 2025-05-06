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
	quest_d8_04
	attack
	@GetAttackDistance
	GetAttackDistance
	GetPFPosition
	attack_on
	attack_stay
	fjump
	attack_off
	attack_begin
	bjump
	attack_middle
	_
	attack_end
	IsAttacking
	IsAttacking
	head
	GetPosition
	walk
	run
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
	player
	HasProperty
	HasProperty
	health
	armor
	GetProperty
	armor_
	SetProperty
	IsDead
	IsDead
	GetScene
	noaccess
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
	battle
	SetReturnValue
	d8q04
	fail
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Morlok.png
	ui/NPC_Morlok_b.png
	death

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
	IsPlayerActor (2 args)
	Hold (0 args)
	rand (2 args)
	Sleep (1 args)
	StopGroup0 (0 args)
	RemoveActor (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	StopAsync (0 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	Stop (0 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetAnimationOffset (3 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	GetScene (1 args)
	FindDirLength (3 args)
	Speak (1 args)
	SetTimer (2 args)
	CanSee (2 args)
	UnlookAsync (1 args)
	KillTimer (1 args)
	GetPosition (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	RequestClearPath (1 args)
	SetRTEnvelope (2 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	FindActor (2 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	RotateAsync (2 args)
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
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	GetVariable (2 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	BroadcastMessage (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x1b3
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa4 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x184 Vars = (object)
		EVENT_17 Op = 0x197 Vars = (object)
		EVENT_26 Op = 0x1a2 Vars = (string)
		EVENT_5 Op = 0x1c8 Vars = ()
		EVENT_6 Op = 0x1cd Vars = ()
	GTASK_3 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_4 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x50e Vars = (int)
		EVENT_1 Op = 0x529 Vars = (object)
		EVENT_2 Op = 0x538 Vars = (object)
		EVENT_10 Op = 0x5be Vars = (object)
		EVENT_41 Op = 0x5c9 Vars = (object)
	GTASK_5  Params = 1
		EVENT_0 Op = 0x5ec Vars = (object)
		EVENT_22 Op = 0x66b Vars = (object, int, float, float)
		EVENT_16 Op = 0x66d Vars = (object, string)
		EVENT_41 Op = 0x66f Vars = (object)

Events:
EVENT_22 Op = 0x974 Vars = (object, int, float, float)
EVENT_43 Op = 0x97c Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x986 Vars = (object, string)
EVENT_41 Op = 0x993 Vars = (object)
EVENT_6 Op = 0x99e Vars = ()

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 110.0
0x5: Call2 0x7b6

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x964

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x962

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x966

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x968

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x93e

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
0x41: Call2 0x7fb

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

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x8e

0x53: Pop(1)
0x54: Push((int) 533328)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x8ef

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 533329)
0x5f: Push((int) 37766)
0x60: Push((int) 34833)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 533336)
0x64: Push((int) -1)
0x65: Push((int) 34840)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 536033)
0x69: Push((int) -1)
0x6a: Push((int) 37770)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x70

0x6e: Return(); Pop(0)

0x6f: GOTO 0x4e

0x70: PushEmpty(bool)
0x71: Call2 0x96a

0x72: Pop(0)
0x73: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x74: @ lshWaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: PushEmpty(string)
0x7a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7b: Call2 0x80d

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
0x90: Call2 0x96a

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
0xa0: Call2 0x81d

0xa1: Pop(2)
0xa2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Push((int) 1)
0xa6: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0x837

0xa9: Pop(0)
0xaa: Push((int) 34838)
0xab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x8dc

0xb1: Pop(2)
0xb2: PushEmpty(object, object)
0xb3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb5: Call2 0x8d7

0xb6: Pop(2)
0xb7: Push((int) 34839)
0xb8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xba: PushEmpty(object, object)
0xbb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd: Call2 0x8dc

0xbe: Pop(2)
0xbf: Push((int) 34836)
0xc0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc2: PushEmpty(object, object)
0xc3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc5: Call2 0x8e5

0xc6: Pop(2)
0xc7: PushEmpty(object, object)
0xc8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xca: Call2 0x8d7

0xcb: Pop(2)
0xcc: Push((int) 34832)
0xcd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xcf: PushEmpty(string)
0xd0: Stack[-1] = "Neutral"
0xd1: Call2 0x8e

0xd2: Pop(1)
0xd3: Push((int) 533328)
0xd4: @@ SetMessage(Stack[-1])
0xd5: Pop(1)
0xd6: @@ ClearReplies()
0xd7: Pop(0)
0xd8: PushEmpty(bool, object)
0xd9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xda: Call2 0x8ef

0xdb: Pop(1)
0xdc: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xdd: Push((int) 533329)
0xde: Push((int) 37766)
0xdf: Push((int) 34833)
0xe0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1: Pop(3)
0xe2: Push((int) 533336)
0xe3: Push((int) -1)
0xe4: Push((int) 34840)
0xe5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe6: Pop(3)
0xe7: Push((int) 536033)
0xe8: Push((int) -1)
0xe9: Push((int) 37770)
0xea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(3)
0xec: Return(); Pop(0)

0xed: Push((int) 37766)
0xee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xf0: PushEmpty(string)
0xf1: Stack[-1] = "Neutral"
0xf2: Call2 0x8e

0xf3: Pop(1)
0xf4: Push((int) 536029)
0xf5: @@ SetMessage(Stack[-1])
0xf6: Pop(1)
0xf7: @@ ClearReplies()
0xf8: Pop(0)
0xf9: Push((int) 536030)
0xfa: Push((int) 37768)
0xfb: Push((int) 37767)
0xfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd: Pop(3)
0xfe: Push((int) 536034)
0xff: Push((int) 37768)
0x100: Push((int) 37771)
0x101: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x102: Pop(3)
0x103: Return(); Pop(0)

0x104: Push((int) 37768)
0x105: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x107: PushEmpty(string)
0x108: Stack[-1] = "Neutral"
0x109: Call2 0x8e

0x10a: Pop(1)
0x10b: Push((int) 536031)
0x10c: @@ SetMessage(Stack[-1])
0x10d: Pop(1)
0x10e: @@ ClearReplies()
0x10f: Pop(0)
0x110: Push((int) 536032)
0x111: Push((int) 34834)
0x112: Push((int) 37769)
0x113: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x114: Pop(3)
0x115: Push((int) 536035)
0x116: Push((int) 34834)
0x117: Push((int) 37773)
0x118: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119: Pop(3)
0x11a: Push((int) 533332)
0x11b: Push((int) -1)
0x11c: Push((int) 34836)
0x11d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: Push((int) 34834)
0x121: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x123: PushEmpty(string)
0x124: Stack[-1] = "Neutral"
0x125: Call2 0x8e

0x126: Pop(1)
0x127: Push((int) 533330)
0x128: @@ SetMessage(Stack[-1])
0x129: Pop(1)
0x12a: @@ ClearReplies()
0x12b: Pop(0)
0x12c: Push((int) 533331)
0x12d: Push((int) 34837)
0x12e: Push((int) 34835)
0x12f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x130: Pop(3)
0x131: Push((int) 536036)
0x132: Push((int) 37776)
0x133: Push((int) 37775)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Return(); Pop(0)

0x137: Push((int) 37776)
0x138: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x13a: PushEmpty(string)
0x13b: Stack[-1] = "Neutral"
0x13c: Call2 0x8e

0x13d: Pop(1)
0x13e: Push((int) 536037)
0x13f: @@ SetMessage(Stack[-1])
0x140: Pop(1)
0x141: @@ ClearReplies()
0x142: Pop(0)
0x143: Push((int) 536038)
0x144: Push((int) 37778)
0x145: Push((int) 37777)
0x146: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x147: Pop(3)
0x148: Push((int) 536040)
0x149: Push((int) 34837)
0x14a: Push((int) 37779)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Return(); Pop(0)

0x14e: Push((int) 37778)
0x14f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x151: PushEmpty(string)
0x152: Stack[-1] = "Neutral"
0x153: Call2 0x8e

0x154: Pop(1)
0x155: Push((int) 536039)
0x156: @@ SetMessage(Stack[-1])
0x157: Pop(1)
0x158: @@ ClearReplies()
0x159: Pop(0)
0x15a: Push((int) 536041)
0x15b: Push((int) 34837)
0x15c: Push((int) 37781)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: Return(); Pop(0)

0x160: Push((int) 34837)
0x161: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x163: PushEmpty(string)
0x164: Stack[-1] = "Neutral"
0x165: Call2 0x8e

0x166: Pop(1)
0x167: Push((int) 533333)
0x168: @@ SetMessage(Stack[-1])
0x169: Pop(1)
0x16a: @@ ClearReplies()
0x16b: Pop(0)
0x16c: Push((int) 533334)
0x16d: Push((int) -1)
0x16e: Push((int) 34838)
0x16f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x170: Pop(3)
0x171: Push((int) 533335)
0x172: Push((int) -1)
0x173: Push((int) 34839)
0x174: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x175: Pop(3)
0x176: Return(); Pop(0)

0x177: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x178: PushEmpty(bool)
0x179: Call2 0x96a

0x17a: Pop(0)
0x17b: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17c: @ lshStopAnimation()
0x17d: Pop(0)
0x17e: GOTO 0x181

0x17f: @ StopAnimation()
0x180: Pop(0)
0x181: Return(); Pop(0)

0x182: GOTO 0xa5

0x183: Return(); Pop(0)

0x184: PushEmpty()
0x185: PushEmpty()
0x186: Call2 0x230

0x187: Pop(0)
0x188: Push((int) -1)
0x189: PushEmpty(int, object)
0x18a: Stack[-1] = Stack[-4]
0x18b: Push(-2, 1); TaskCall(0)
0x18c: Call2 0x0

0x18d: Pop(-2, 1); TaskReturn
0x18e: Pop(1)
0x18f: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x191: PushEmpty(bool, string, string)
0x192: Stack[-2] = "quest_d8_04"
0x193: Stack[-1] = "attack"
0x194: Call2 0x89f

0x195: Pop(3)
0x196: Return(); Pop(0)

0x197: PushEmpty(bool, bool)
0x198: @ IsPlayerActor(Stack[-3], Stack[-1])
0x199: Pop(0)
0x19a: Push(Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19c: PushEmpty(bool, string, string)
0x19d: Stack[-2] = "quest_d8_04"
0x19e: Stack[-1] = "attack"
0x19f: Call2 0x89f

0x1a0: Pop(3)
0x1a1: Return(); Pop(2)

0x1a2: PushEmpty()
0x1a3: Push("attack")
0x1a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1a6: PushEmpty()
0x1a7: Call2 0x230

0x1a8: Pop(0)
0x1a9: PushEmpty(object)
0x1aa: PushEmpty(object)
0x1ab: Call2 0x686

0x1ac: Stack[-2] = Stack[-1]
0x1ad: Pop(1)
0x1ae: Push(-1, 6); TaskCall(3)
0x1af: Call2 0x235

0x1b0: Pop(-1, 6); TaskReturn
0x1b1: Pop(1)
0x1b2: Return(); Pop(0)

0x1b3: PushEmpty(float, float)
0x1b4: PushEmpty(bool)
0x1b5: Call2 0x7b1

0x1b6: Pop(0)
0x1b7: Pop(1); Push((bool) Stack[-1] == 0)
0x1b8: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1b9: @ Hold()
0x1ba: Pop(0)
0x1bb: GOTO 0x1b4

0x1bc: Push((int) 3)
0x1bd: @ rand(Stack[-2], Stack[-1])
0x1be: Pop(1)
0x1bf: Push((int) 3)
0x1c0: Pop(1); Push(Stack[-2] + Stack[-1]);
0x1c1: @ Sleep(Stack[-1])
0x1c2: Pop(1)
0x1c3: PushEmpty()
0x1c4: Call2 0x1df

0x1c5: Pop(0)
0x1c6: GOTO 0x1b4

0x1c7: Return(); Pop(2)

0x1c8: @ StopGroup0()
0x1c9: Pop(0)
0x1ca: @ sync()
0x1cb: Pop(0)
0x1cc: Return(); Pop(0)

0x1cd: PushEmpty(bool)
0x1ce: Stack[-1] = (bool) 0
0x1cf: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d1: PushEmpty(bool)
0x1d2: Call2 0x1dd

0x1d3: Pop(0)
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d5: Stack[-1] = (bool) 1
0x1d6: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d7: PushEmpty(object)
0x1d8: Call2 0x867

0x1d9: Pop(0)
0x1da: @ RemoveActor(Stack[-1])
0x1db: Pop(1)
0x1dc: Return(); Pop(0)

0x1dd: Stack[-1] = (bool) 1
0x1de: Return(); Pop(0)

0x1df: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1e0: @ WaitForAnimEnd()
0x1e1: Pop(0)
0x1e2: PushEmpty(bool)
0x1e3: Call2 0x7b1

0x1e4: Pop(0)
0x1e5: Pop(1); Push((bool) Stack[-1] == 0)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e7: Return(); Pop(14)

0x1e8: PushEmpty(int)
0x1e9: Call2 0x8c6

0x1ea: Stack[-8] = Stack[-1]
0x1eb: Pop(1)
0x1ec: Stack[-6] = (int) 0
0x1ed: PushEmpty(bool)
0x1ee: Stack[-1] = (bool) 0
0x1ef: Push((int) 5)
0x1f0: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f2: PushEmpty(bool)
0x1f3: Call2 0x7b1

0x1f4: Pop(0)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f6: Stack[-1] = (bool) 1
0x1f7: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x1f8: Push((int) 3)
0x1f9: @ irand(Stack[-6], Stack[-1])
0x1fa: Pop(1)
0x1fb: Push((int) 0)
0x1fc: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x1fe: Push(Stack[-7])
0x1ff: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x200: @ irand(Stack[-4], Stack[-7])
0x201: Pop(0)
0x202: Push("all")
0x203: PushEmpty(string, int)
0x204: Stack[-1] = Stack[-7]
0x205: Call2 0x8bf

0x206: Pop(1)
0x207: @ PlayAnimation(Stack[-2], Stack[-1])
0x208: Pop(2)
0x209: @ WaitForAnimEnd(Stack[-3])
0x20a: Pop(0)
0x20b: Pop(0); Push((bool) Stack[-3] == 0)
0x20c: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x20d: GOTO 0x22b

0x20e: GOTO 0x220

0x20f: Push((int) 1)
0x210: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x212: Push((int) 4)
0x213: @ rand(Stack[-3], Stack[-1])
0x214: Pop(1)
0x215: Push((int) 1)
0x216: Pop(1); Push(Stack[-3] + Stack[-1]);
0x217: @ Sleep(Stack[-1], Stack[-2])
0x218: Pop(1)
0x219: Pop(0); Push((bool) Stack[-1] == 0)
0x21a: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x21b: GOTO 0x22b

0x21c: GOTO 0x220

0x21d: Push(Stack[-6])
0x21e: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21f: GOTO 0x22b

0x220: PushEmpty(bool)
0x221: Call2 0x22e

0x222: Pop(0)
0x223: Pop(1); Push((bool) Stack[-1] == 0)
0x224: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x225: GOTO 0x22b

0x226: @ ResetAAS()
0x227: Pop(0)
0x228: Push((int) 1)
0x229: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x22a: GOTO 0x1ed

0x22b: @ ResetAAS()
0x22c: Pop(0)
0x22d: Return(); Pop(14)

0x22e: Stack[-1] = (bool) 1
0x22f: Return(); Pop(0)

0x230: @ StopAnimation()
0x231: Pop(0)
0x232: @ StopGroup0()
0x233: Pop(0)
0x234: Return(); Pop(0)

0x235: PushEmpty()
0x236: PushEmpty(object, bool, float)
0x237: Stack[-3] = Stack[-4]
0x238: Stack[-2] = (bool) 1
0x239: Stack[-1] = (float) 180.0
0x23a: Call2 0x247

0x23b: Pop(3)
0x23c: Push((int) 1)
0x23d: @ Sleep(Stack[-1])
0x23e: Pop(1)
0x23f: GOTO 0x236

0x240: Return(); Pop(0)

0x241: PushEmpty()
0x242: Stack[-3] = (float) 0.1
0x243: Return(); Pop(0)

0x244: PushEmpty()
0x245: Stack[-3] = (int) 0
0x246: Return(); Pop(0)

0x247: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x248: PushEmpty()
0x249: Call2 0x32c

0x24a: Pop(0)
0x24b: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x24c: Push("@GetAttackDistance")
0x24d: Push((int) 1)
0x24e: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x24f: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x250: @@ GetAttackDistance(Stack[-11])
0x251: Pop(0)
0x252: Push((int) 50)
0x253: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x254: GOTO 0x256

0x255: Stack[-11] = Stack[-23]
0x256: Push((int) 150)
0x257: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x259: Stack[-11] = (int) 150
0x25a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x25b: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x25c: @ IsPlayerActor(Stack[-0], Stack[-8])
0x25d: Pop(0)
0x25e: Push(Stack[-8])
0x25f: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x260: Push("attack")
0x261: @ PlayGlobalMusic(Stack[-1])
0x262: Pop(1)
0x263: PushEmpty(object)
0x264: Call2 0x867

0x265: Pop(0)
0x266: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x267: Pop(1)
0x268: Push(Stack[-24])
0x269: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26a: Stack[-7] = (bool) 0
0x26b: GOTO 0x26d

0x26c: Stack[-7] = (bool) 1
0x26d: Push((float)400.0)
0x26e: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x26f: PushEmpty(bool)
0x270: Stack[-1] = (bool) 0
0x271: PushEmpty(bool, object)
0x272: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x273: Call2 0x710

0x274: Pop(1)
0x275: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x276: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x277: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x278: Stack[-1] = (bool) 1
0x279: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x27a: PushEmpty()
0x27b: Call2 0x4c9

0x27c: Pop(0)
0x27d: @@ GetPFPosition(Stack[-10])
0x27e: Pop(0)
0x27f: @ GetPFPosition(Stack[-9])
0x280: Pop(0)
0x281: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x282: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x283: Pop(0); Push(Stack[-6] * Stack[-6]);
0x284: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x285: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x286: PushEmpty(bool, object, float, float, bool, bool)
0x287: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x288: Stack[-4] = Stack[-17]
0x289: Stack[-3] = (float) 10000.0
0x28a: Stack[-2] = (bool) 1
0x28b: Stack[-1] = (bool) 0
0x28c: Push(-6, 3); TaskCall(4)
0x28d: Call2 0x4dd

0x28e: Pop(-6, 3); TaskReturn
0x28f: Pop(5)
0x290: Pop(1); Push((bool) Stack[-1] == 0)
0x291: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x292: GOTO 0x31b

0x293: Stack[-7] = (bool) 0
0x294: GOTO 0x31a

0x295: Pop(0); Push(Stack[-23] * Stack[-23]);
0x296: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x297: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x298: @@ GetPFPosition(Stack[-3])
0x299: Pop(0)
0x29a: @ CanReachByPF(Stack[-2], Stack[-3])
0x29b: Pop(0)
0x29c: Pop(0); Push((bool) Stack[-2] == 0)
0x29d: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x29e: PushEmpty(bool, object, float, float, bool, bool)
0x29f: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x2a0: Stack[-4] = Stack[-17]
0x2a1: Stack[-3] = (float) 10000.0
0x2a2: Stack[-2] = (bool) 1
0x2a3: Stack[-1] = (bool) 0
0x2a4: Push(-6, 3); TaskCall(4)
0x2a5: Call2 0x4dd

0x2a6: Pop(-6, 3); TaskReturn
0x2a7: Pop(5)
0x2a8: Pop(1); Push((bool) Stack[-1] == 0)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2aa: GOTO 0x31b

0x2ab: Stack[-7] = (bool) 0
0x2ac: GOTO 0x26f

0x2ad: Pop(0); Push((bool) Stack[-7] == 0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2af: PushEmpty(object)
0x2b0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b1: Call2 0x7a6

0x2b2: Pop(1)
0x2b3: Push("all")
0x2b4: Push("attack_on")
0x2b5: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b6: Pop(2)
0x2b7: @ WaitForAnimEnd()
0x2b8: Pop(0)
0x2b9: PushEmpty()
0x2ba: Call2 0x4c9

0x2bb: Pop(0)
0x2bc: @ StopAsync()
0x2bd: Pop(0)
0x2be: Stack[-7] = (bool) 1
0x2bf: PushEmpty(bool, object)
0x2c0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c1: Call2 0x710

0x2c2: Pop(1)
0x2c3: Pop(1); Push((bool) Stack[-1] == 0)
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c5: GOTO 0x31b

0x2c6: @ rand(Stack[-1])
0x2c7: Pop(0)
0x2c8: PushEmpty(bool)
0x2c9: Stack[-1] = (bool) 1
0x2ca: Push((float)0.25)
0x2cb: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2cc: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2cd: PushEmpty(bool)
0x2ce: Call2 0x49e

0x2cf: Pop(0)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2d1: Stack[-1] = (bool) 0
0x2d2: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2d3: @ Face(Stack[-0])
0x2d4: Pop(0)
0x2d5: PushEmpty()
0x2d6: Call2 0x4d0

0x2d7: Pop(0)
0x2d8: Push("all")
0x2d9: Push("attack_stay")
0x2da: @ PlayAnimation(Stack[-2], Stack[-1])
0x2db: Pop(2)
0x2dc: PushEmpty(bool, float)
0x2dd: Stack[-1] = Stack[-25]
0x2de: Call2 0x41a

0x2df: Pop(2)
0x2e0: @ StopAsync()
0x2e1: Pop(0)
0x2e2: GOTO 0x311

0x2e3: @ Face(Stack[-0])
0x2e4: Pop(0)
0x2e5: Push("all")
0x2e6: Push("fjump")
0x2e7: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e8: Pop(2)
0x2e9: @ WaitForAnimEnd()
0x2ea: Pop(0)
0x2eb: PushEmpty()
0x2ec: Call2 0x4c9

0x2ed: Pop(0)
0x2ee: Push(CVector(0.0, 0.0, 0.0))
0x2ef: @ SetSpeed(Stack[-1])
0x2f0: Pop(1)
0x2f1: @ Stop()
0x2f2: Pop(0)
0x2f3: @ StopAsync()
0x2f4: Pop(0)
0x2f5: PushEmpty(bool)
0x2f6: Call2 0x49e

0x2f7: Pop(0)
0x2f8: Pop(1); Push((bool) Stack[-1] == 0)
0x2f9: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x2fa: PushEmpty(bool, object)
0x2fb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fc: Call2 0x710

0x2fd: Pop(1)
0x2fe: Pop(1); Push((bool) Stack[-1] == 0)
0x2ff: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x300: GOTO 0x31b

0x301: @@ GetPFPosition(Stack[-10])
0x302: Pop(0)
0x303: @ GetPFPosition(Stack[-9])
0x304: Pop(0)
0x305: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x306: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x307: Pop(0); Push(Stack[-23] * Stack[-23]);
0x308: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x309: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x30a: PushEmpty(bool, float)
0x30b: Stack[-1] = Stack[-25]
0x30c: Call2 0x376

0x30d: Pop(1)
0x30e: Pop(1); Push((bool) Stack[-1] == 0)
0x30f: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x310: GOTO 0x31b

0x311: GOTO 0x31a

0x312: PushEmpty(bool, float)
0x313: Stack[-1] = Stack[-25]
0x314: Call2 0x376

0x315: Pop(1)
0x316: Pop(1); Push((bool) Stack[-1] == 0)
0x317: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x318: GOTO 0x31b

0x319: Stack[-7] = (bool) 1
0x31a: GOTO 0x26f

0x31b: @ WaitForAnimEnd()
0x31c: Pop(0)
0x31d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x31e: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31f: Return(); Pop(22)

0x320: Push("all")
0x321: Push("attack_off")
0x322: @ PlayAnimation(Stack[-2], Stack[-1])
0x323: Pop(2)
0x324: @ WaitForAnimEnd()
0x325: Pop(0)
0x326: Push(Stack[-8])
0x327: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x328: Push((float)2.0)
0x329: @ Sleep(Stack[-1])
0x32a: Pop(1)
0x32b: Return(); Pop(22)

0x32c: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x32d: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x32e: Push("all")
0x32f: Push("attack_begin")
0x330: Push((int) 1)
0x331: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x332: Pop(2); Push(Stack[-2] + Stack[-1]);
0x333: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x334: Pop(2)
0x335: Pop(0); Push((bool) Stack[-3] == 0)
0x336: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x337: GOTO 0x33b

0x338: Push((int) 1)
0x339: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x33a: GOTO 0x32e

0x33b: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x33c: Push("attack")
0x33d: Push((int) 1)
0x33e: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x33f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x340: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x341: Pop(1)
0x342: Pop(0); Push((bool) Stack[-2] == 0)
0x343: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x344: GOTO 0x348

0x345: Push((int) 1)
0x346: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x347: GOTO 0x33c

0x348: Push("all")
0x349: Push("bjump")
0x34a: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x34b: Pop(2)
0x34c: Push(CvectorIndex(Stack[-1], 2))
0x34d: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x34e: Return(); Pop(6)

0x34f: PushEmpty(object, float, float, object, float, float)
0x350: Push((float)0.9)
0x351: Pop(1); Push(Stack[-9] * Stack[-1]);
0x352: @ GetVictim(Stack[-1], Stack[-4])
0x353: Pop(1)
0x354: @ ReportAttack(Stack[-0])
0x355: Pop(0)
0x356: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x357: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x358: PushEmpty(float, object, int)
0x359: Stack[-2] = Stack[-6]
0x35a: Stack[-1] = Stack[-10]
0x35b: Call2 0x241

0x35c: Stack[-5] = Stack[-3]
0x35d: Pop(3)
0x35e: PushEmpty(float, object, float, int)
0x35f: Stack[-3] = Stack[-7]
0x360: Stack[-2] = Stack[-6]
0x361: PushEmpty(int, object, int)
0x362: Stack[-2] = Stack[-10]
0x363: Stack[-1] = Stack[-14]
0x364: Call2 0x244

0x365: Stack[-4] = Stack[-3]
0x366: Pop(3)
0x367: Call2 0x69e

0x368: Stack[-5] = Stack[-4]
0x369: Pop(4)
0x36a: PushEmpty(int)
0x36b: Call2 0x4ce

0x36c: Pop(0)
0x36d: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x36e: Pop(1)
0x36f: PushEmpty(object, float)
0x370: Stack[-2] = Stack[-5]
0x371: Stack[-1] = Stack[-3]
0x372: Call2 0x4d5

0x373: Pop(2)
0x374: Return(); Pop(6)

0x375: Stack[-3] = 0
0x376: PushEmpty(int, bool, int, string, int, bool, int, string)
0x377: PushEmpty()
0x378: Call2 0x4c9

0x379: Pop(0)
0x37a: @ irand(Stack[-4], Stack[-1])
0x37b: Pop(0)
0x37c: Push((int) 1)
0x37d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x37e: @ Face(Stack[-0])
0x37f: Pop(0)
0x380: Push((bool) 1)
0x381: @ SetAttackState(Stack[-1])
0x382: Pop(1)
0x383: PushEmpty()
0x384: Call2 0x8b4

0x385: Pop(0)
0x386: Push("all")
0x387: Push("attack_begin")
0x388: Pop(1); Push(Stack[-1] + Stack[-6]);
0x389: @ PlayAnimation(Stack[-2], Stack[-1])
0x38a: Pop(2)
0x38b: @ WaitForAnimEnd()
0x38c: Pop(0)
0x38d: PushEmpty()
0x38e: Call2 0x4a9

0x38f: Pop(0)
0x390: PushEmpty(bool, object)
0x391: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x392: Call2 0x710

0x393: Pop(1)
0x394: Pop(1); Push((bool) Stack[-1] == 0)
0x395: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x396: @ StopAsync()
0x397: Pop(0)
0x398: Stack[-10] = (bool) 0
0x399: Return(); Pop(8)

0x39a: PushEmpty(float, int)
0x39b: Stack[-2] = Stack[-11]
0x39c: Stack[-1] = Stack[-6]
0x39d: Call2 0x34f

0x39e: Pop(2)
0x39f: Push("all")
0x3a0: Push("attack_middle")
0x3a1: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3a2: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x3a3: Pop(2)
0x3a4: Push(Stack[-3])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3a6: PushEmpty()
0x3a7: Call2 0x8b4

0x3a8: Pop(0)
0x3a9: Push("all")
0x3aa: Push("attack_middle")
0x3ab: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3ac: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ad: Pop(2)
0x3ae: @ WaitForAnimEnd()
0x3af: Pop(0)
0x3b0: PushEmpty()
0x3b1: Call2 0x4c9

0x3b2: Pop(0)
0x3b3: PushEmpty(bool, object)
0x3b4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3b5: Call2 0x710

0x3b6: Pop(1)
0x3b7: Pop(1); Push((bool) Stack[-1] == 0)
0x3b8: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3b9: @ StopAsync()
0x3ba: Pop(0)
0x3bb: Stack[-10] = (bool) 0
0x3bc: Return(); Pop(8)

0x3bd: PushEmpty(float, int)
0x3be: Stack[-2] = Stack[-11]
0x3bf: Stack[-1] = Stack[-6]
0x3c0: Call2 0x34f

0x3c1: Pop(2)
0x3c2: Stack[-2] = (int) 1
0x3c3: Push("attack_middle")
0x3c4: Pop(1); Push(Stack[-1] + Stack[-5]);
0x3c5: Push("_")
0x3c6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3c7: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x3c8: Push("all")
0x3c9: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x3ca: Pop(1)
0x3cb: Pop(0); Push((bool) Stack[-3] == 0)
0x3cc: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cd: GOTO 0x3eb

0x3ce: PushEmpty()
0x3cf: Call2 0x8b4

0x3d0: Pop(0)
0x3d1: Push("all")
0x3d2: @ PlayAnimation(Stack[-1], Stack[-2])
0x3d3: Pop(1)
0x3d4: @ WaitForAnimEnd()
0x3d5: Pop(0)
0x3d6: PushEmpty()
0x3d7: Call2 0x4c9

0x3d8: Pop(0)
0x3d9: PushEmpty(bool, object)
0x3da: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3db: Call2 0x710

0x3dc: Pop(1)
0x3dd: Pop(1); Push((bool) Stack[-1] == 0)
0x3de: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3df: @ StopAsync()
0x3e0: Pop(0)
0x3e1: Stack[-10] = (bool) 0
0x3e2: Return(); Pop(8)

0x3e3: PushEmpty(float, int)
0x3e4: Stack[-2] = Stack[-11]
0x3e5: Stack[-1] = Stack[-6]
0x3e6: Call2 0x34f

0x3e7: Pop(2)
0x3e8: Push((int) 1)
0x3e9: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3ea: GOTO 0x3c3

0x3eb: Push((bool) 0)
0x3ec: @ SetAttackState(Stack[-1])
0x3ed: Pop(1)
0x3ee: Push("all")
0x3ef: Push("attack_end")
0x3f0: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3f1: @ PlayAnimation(Stack[-2], Stack[-1])
0x3f2: Pop(2)
0x3f3: PushEmpty(bool)
0x3f4: Call2 0x4d7

0x3f5: Pop(0)
0x3f6: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3f7: PushEmpty(bool, float)
0x3f8: Stack[-1] = (float) 0.75
0x3f9: Call2 0x3ff

0x3fa: Pop(2)
0x3fb: @ StopAsync()
0x3fc: Pop(0)
0x3fd: Stack[-10] = (bool) 1
0x3fe: Return(); Pop(8)

0x3ff: PushEmpty(float, bool, float, bool)
0x400: @ rand(Stack[-2])
0x401: Pop(0)
0x402: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x403: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x404: @ IsAnimationPlaying(Stack[-1])
0x405: Pop(0)
0x406: Pop(0); Push((bool) Stack[-1] == 0)
0x407: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x408: GOTO 0x412

0x409: PushEmpty(bool)
0x40a: Call2 0x461

0x40b: Pop(0)
0x40c: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x40d: Stack[-6] = (bool) 1
0x40e: Return(); Pop(4)

0x40f: @ sync()
0x410: Pop(0)
0x411: GOTO 0x404

0x412: GOTO 0x418

0x413: @ WaitForAnimEnd()
0x414: Pop(0)
0x415: PushEmpty()
0x416: Call2 0x4c9

0x417: Pop(0)
0x418: Stack[-6] = (bool) 0
0x419: Return(); Pop(4)

0x41a: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x41b: @ IsAnimationPlaying(Stack[-5])
0x41c: Pop(0)
0x41d: Pop(0); Push((bool) Stack[-5] == 0)
0x41e: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41f: GOTO 0x440

0x420: PushEmpty(bool)
0x421: Call2 0x461

0x422: Pop(0)
0x423: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x424: Stack[-12] = (bool) 1
0x425: Return(); Pop(10)

0x426: PushEmpty(bool, object)
0x427: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x428: Call2 0x710

0x429: Pop(1)
0x42a: Pop(1); Push((bool) Stack[-1] == 0)
0x42b: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x42c: Stack[-12] = (bool) 0
0x42d: Return(); Pop(10)

0x42e: @@ GetPFPosition(Stack[-4])
0x42f: Pop(0)
0x430: @ GetPFPosition(Stack[-3])
0x431: Pop(0)
0x432: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x433: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x434: Pop(0); Push(Stack[-11] * Stack[-11]);
0x435: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x436: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x437: PushEmpty(bool, float)
0x438: Stack[-1] = Stack[-13]
0x439: Call2 0x376

0x43a: Pop(2)
0x43b: Stack[-12] = (bool) 1
0x43c: Return(); Pop(10)

0x43d: @ sync()
0x43e: Pop(0)
0x43f: GOTO 0x41b

0x440: PushEmpty()
0x441: Call2 0x4c9

0x442: Pop(0)
0x443: Stack[-12] = (bool) 0
0x444: Return(); Pop(10)

0x445: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x446: PushEmpty(bool, object)
0x447: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x448: Call2 0x710

0x449: Pop(1)
0x44a: Pop(1); Push((bool) Stack[-1] == 0)
0x44b: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44c: Stack[-11] = (bool) 0
0x44d: Return(); Pop(10)

0x44e: PushEmpty(bool)
0x44f: Call2 0x49e

0x450: Pop(0)
0x451: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x452: @@ GetPFPosition(Stack[-5])
0x453: Pop(0)
0x454: @ GetPFPosition(Stack[-4])
0x455: Pop(0)
0x456: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x457: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x458: @@ GetAttackDistance(Stack[-1])
0x459: Pop(0)
0x45a: Push((int) 50)
0x45b: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x45c: Pop(0); Push(Stack[-1] * Stack[-1]);
0x45d: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x45e: Return(); Pop(10)

0x45f: Stack[-11] = (bool) 0
0x460: Return(); Pop(10)

0x461: PushEmpty(bool)
0x462: Stack[-1] = (bool) 0
0x463: PushEmpty(bool)
0x464: Call2 0x445

0x465: Pop(0)
0x466: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x467: PushEmpty(bool)
0x468: Call2 0x471

0x469: Pop(0)
0x46a: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x46b: Stack[-1] = (bool) 1
0x46c: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46d: Stack[-1] = (bool) 1
0x46e: Return(); Pop(0)

0x46f: Stack[-1] = (bool) 0
0x470: Return(); Pop(0)

0x471: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x472: @ GetScene(Stack[-5])
0x473: Pop(0)
0x474: Stack[-4] = (bool) 0
0x475: PushEmpty(cvector, object)
0x476: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x477: Call2 0x67f

0x478: Pop(1)
0x479: Pop(1); Push(( -Stack[-1])
0x47a: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x47b: Pop(1)
0x47c: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x47d: IF (Stack[-1] == 0) GOTO 0x47f; Pop(1)

0x47e: GOTO 0x49b

0x47f: @ Face(Stack[-0])
0x480: Pop(0)
0x481: Push("all")
0x482: Push("bjump")
0x483: @ PlayAnimation(Stack[-2], Stack[-1])
0x484: Pop(2)
0x485: @@ GetPFPosition(Stack[-2])
0x486: Pop(0)
0x487: @ GetPFPosition(Stack[-1])
0x488: Pop(0)
0x489: @ WaitForAnimEnd()
0x48a: Pop(0)
0x48b: PushEmpty()
0x48c: Call2 0x4c9

0x48d: Pop(0)
0x48e: @ StopAsync()
0x48f: Pop(0)
0x490: Push(CVector(0.0, 0.0, 0.0))
0x491: @ SetSpeed(Stack[-1])
0x492: Pop(1)
0x493: Stack[-4] = (bool) 1
0x494: PushEmpty(bool)
0x495: Call2 0x445

0x496: Pop(0)
0x497: Pop(1); Push((bool) Stack[-1] == 0)
0x498: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x499: GOTO 0x49b

0x49a: GOTO 0x475

0x49b: Stack[-11] = Stack[-4]
0x49c: Return(); Pop(10)

0x49d: Stack[-5] = 0
0x49e: PushEmpty(bool, bool)
0x49f: Push("IsAttacking")
0x4a0: Push((int) 1)
0x4a1: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a3: @@ IsAttacking(Stack[-1])
0x4a4: Pop(0)
0x4a5: Stack[-3] = Stack[-1]
0x4a6: Return(); Pop(2)

0x4a7: Stack[-3] = (bool) 0
0x4a8: Return(); Pop(2)

0x4a9: PushEmpty(float, int, float, int)
0x4aa: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4ab: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4ac: Return(); Pop(4)

0x4ad: Push( Stack[5 + Tasks[-1].StackPointer] )
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4af: Push((int) -1)
0x4b0: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x4b1: Push((int) 0)
0x4b2: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x4b3: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b4: Return(); Pop(4)

0x4b5: @ rand(Stack[-2])
0x4b6: Pop(0)
0x4b7: PushEmpty(float)
0x4b8: Call2 0x4db

0x4b9: Pop(0)
0x4ba: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x4bb: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4bc: @ irand(Stack[-1], Stack[-2])
0x4bd: Pop(0)
0x4be: Push((int) 1)
0x4bf: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x4c0: Push("attack")
0x4c1: Pop(1); Push(Stack[-1] + Stack[-2]);
0x4c2: @ Speak(Stack[-1])
0x4c3: Pop(1)
0x4c4: PushEmpty(int)
0x4c5: Call2 0x4d9

0x4c6: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x4c7: Pop(1)
0x4c8: Return(); Pop(4)

0x4c9: PushEmpty(object)
0x4ca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4cb: Call2 0x8ab

0x4cc: Pop(1)
0x4cd: Return(); Pop(0)

0x4ce: Stack[-1] = (int) 0
0x4cf: Return(); Pop(0)

0x4d0: PushEmpty(string)
0x4d1: Stack[-1] = "attack_stay"
0x4d2: Call2 0x83e

0x4d3: Pop(1)
0x4d4: Return(); Pop(0)

0x4d5: PushEmpty()
0x4d6: Return(); Pop(0)

0x4d7: Stack[-1] = (bool) 1
0x4d8: Return(); Pop(0)

0x4d9: Stack[-1] = (int) 1
0x4da: Return(); Pop(0)

0x4db: Stack[-1] = (float) 0.5
0x4dc: Return(); Pop(0)

0x4dd: PushEmpty(bool, bool, bool, bool)
0x4de: PushEmpty(object)
0x4df: Stack[-1] = Stack[-10]
0x4e0: Call2 0x8ab

0x4e1: Pop(1)
0x4e2: Push((int) 1)
0x4e3: Push((int) 5)
0x4e4: @ SetTimer(Stack[-2], Stack[-1])
0x4e5: Pop(2)
0x4e6: @ CanSee(Stack[-2], Stack[-9])
0x4e7: Pop(0)
0x4e8: Push(Stack[-2])
0x4e9: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x4ea: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4eb: PushEmpty(object)
0x4ec: Stack[-1] = Stack[-10]
0x4ed: Call2 0x82c

0x4ee: Pop(1)
0x4ef: GOTO 0x4f1

0x4f0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4f1: PushEmpty(bool, object)
0x4f2: Stack[-1] = Stack[-11]
0x4f3: Call2 0x68d

0x4f4: Pop(1)
0x4f5: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4f6: PushEmpty(object)
0x4f7: Call2 0x867

0x4f8: Pop(0)
0x4f9: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x4fa: Pop(1)
0x4fb: PushEmpty(bool, object, float, float, bool, bool)
0x4fc: Stack[-5] = Stack[-15]
0x4fd: Stack[-4] = Stack[-14]
0x4fe: Stack[-3] = Stack[-13]
0x4ff: Stack[-2] = Stack[-12]
0x500: Stack[-1] = Stack[-11]
0x501: Call2 0x546

0x502: Stack[-7] = Stack[-6]
0x503: Pop(6)
0x504: Push( Stack[2 + Tasks[-1].StackPointer] )
0x505: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x506: Push("head")
0x507: @ UnlookAsync(Stack[-1])
0x508: Pop(1)
0x509: Push((int) 1)
0x50a: @ KillTimer(Stack[-1])
0x50b: Pop(1)
0x50c: Stack[-10] = Stack[-1]
0x50d: Return(); Pop(4)

0x50e: PushEmpty()
0x50f: Push((int) 1)
0x510: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x511: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x512: PushEmpty(object)
0x513: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x514: Call2 0x8ab

0x515: Pop(1)
0x516: GOTO 0x51b

0x517: PushEmpty(int)
0x518: Stack[-1] = Stack[-2]
0x519: Call2 0x5ac

0x51a: Pop(1)
0x51b: Return(); Pop(0)

0x51c: Push((int) 1)
0x51d: @ KillTimer(Stack[-1])
0x51e: Pop(1)
0x51f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x520: IF (Stack[-1] == 0) GOTO 0x525; Pop(1)

0x521: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x522: Push("head")
0x523: @ UnlookAsync(Stack[-1])
0x524: Pop(1)
0x525: PushEmpty()
0x526: Call2 0x5c2

0x527: Pop(0)
0x528: Return(); Pop(0)

0x529: PushEmpty()
0x52a: PushEmpty(bool)
0x52b: Stack[-1] = (bool) 0
0x52c: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x52d: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x52e: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x52f: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x530: Stack[-1] = (bool) 1
0x531: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x532: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x533: PushEmpty(object)
0x534: Stack[-1] = Stack[-2]
0x535: Call2 0x82c

0x536: Pop(1)
0x537: Return(); Pop(0)

0x538: PushEmpty()
0x539: PushEmpty(bool)
0x53a: Stack[-1] = (bool) 0
0x53b: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x53c: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x53e: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53f: Stack[-1] = (bool) 1
0x540: IF (Stack[-1] == 0) GOTO 0x545; Pop(1)

0x541: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x542: Push("head")
0x543: @ UnlookAsync(Stack[-1])
0x544: Pop(1)
0x545: Return(); Pop(0)

0x546: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x547: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x548: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x549: Stack[-7] = Stack[-17]
0x54a: PushEmpty(bool, object)
0x54b: Stack[-1] = Stack[-23]
0x54c: Call2 0x5d2

0x54d: Pop(1)
0x54e: Pop(1); Push((bool) Stack[-1] == 0)
0x54f: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x550: Stack[-22] = (bool) 0
0x551: Return(); Pop(16)

0x552: @@ GetPosition(Stack[-5])
0x553: Pop(0)
0x554: @ GetPosition(Stack[-4])
0x555: Pop(0)
0x556: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x557: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x558: PushEmpty(bool)
0x559: Stack[-1] = (bool) 0
0x55a: Push((int) 0)
0x55b: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x55c: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x55d: Pop(0); Push(Stack[-20] * Stack[-20]);
0x55e: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x55f: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x560: Stack[-1] = (bool) 1
0x561: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x562: @ Stop()
0x563: Pop(0)
0x564: Stack[-22] = (bool) 0
0x565: Return(); Pop(16)

0x566: Pop(0); Push(Stack[-20] * Stack[-20]);
0x567: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x568: IF (Stack[-1] == 0) GOTO 0x5a4; Pop(1)

0x569: @@ GetPFPosition(Stack[-5])
0x56a: Pop(0)
0x56b: @ FindPathTo(Stack[-1], Stack[-5])
0x56c: Pop(0)
0x56d: Pop(0); Push(( Stack[-1] != 0 )
0x56e: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56f: Stack[-6] = Stack[-1]
0x570: Stack[-1] = 0
0x571: Pop(0); Push(( Stack[-6] != 0 )
0x572: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x573: Push(Stack[-7])
0x574: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x575: Stack[-7] = (bool) 0
0x576: @ RotatePath(Stack[-6], Stack[-8])
0x577: Pop(0)
0x578: Pop(0); Push((bool) Stack[-8] == 0)
0x579: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x57a: GOTO 0x5aa

0x57b: Push((int) 0)
0x57c: Push((float)0.3)
0x57d: @ SetTimer(Stack[-2], Stack[-1])
0x57e: Pop(2)
0x57f: PushEmpty(string)
0x580: Call2 0x5d9

0x581: Pop(0)
0x582: PushEmpty(string)
0x583: Call2 0x5db

0x584: Pop(0)
0x585: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x586: Pop(2)
0x587: Pop(0); Push((bool) Stack[-8] == 0)
0x588: IF (Stack[-1] == 0) GOTO 0x590; Pop(1)

0x589: Push( Stack[0 + Tasks[-1].StackPointer] )
0x58a: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x58b: Stack[-6] = 0
0x58c: GOTO 0x5aa

0x58d: GOTO 0x58f

0x58e: GOTO 0x5a9

0x58f: GOTO 0x591

0x590: Stack[-6] = 0
0x591: GOTO 0x5a2

0x592: Push((int) 0)
0x593: @ KillTimer(Stack[-1])
0x594: Pop(1)
0x595: Push((float)0.5)
0x596: @ Sleep(Stack[-1], Stack[-9])
0x597: Pop(1)
0x598: Pop(0); Push((bool) Stack[-8] == 0)
0x599: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x59a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x59b: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x59c: Stack[-6] = 0
0x59d: GOTO 0x5aa

0x59e: Push((int) 0)
0x59f: Push((float)0.3)
0x5a0: @ SetTimer(Stack[-2], Stack[-1])
0x5a1: Pop(2)
0x5a2: Stack[-1] = 0
0x5a3: GOTO 0x5a8

0x5a4: Push((int) 0)
0x5a5: @ KillTimer(Stack[-1])
0x5a6: Pop(1)
0x5a7: GOTO 0x5aa

0x5a8: Stack[-6] = 0
0x5a9: GOTO 0x54a

0x5aa: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x5ab: Return(); Pop(16)

0x5ac: PushEmpty()
0x5ad: Push((int) 0)
0x5ae: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x5af: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5b0: Return(); Pop(0)

0x5b1: PushEmpty(bool, object)
0x5b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b3: Call2 0x5d2

0x5b4: Pop(1)
0x5b5: Pop(1); Push((bool) Stack[-1] == 0)
0x5b6: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5b7: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5b8: Push((int) 0)
0x5b9: @ KillTimer(Stack[-1])
0x5ba: Pop(1)
0x5bb: @ Stop()
0x5bc: Pop(0)
0x5bd: Return(); Pop(0)

0x5be: PushEmpty()
0x5bf: @ RequestClearPath(Stack[-1])
0x5c0: Pop(0)
0x5c1: Return(); Pop(0)

0x5c2: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5c3: Push((int) 0)
0x5c4: @ KillTimer(Stack[-1])
0x5c5: Pop(1)
0x5c6: @ Stop()
0x5c7: Pop(0)
0x5c8: Return(); Pop(0)

0x5c9: PushEmpty()
0x5ca: PushEmpty()
0x5cb: Call2 0x51c

0x5cc: Pop(0)
0x5cd: PushEmpty(object)
0x5ce: Stack[-1] = Stack[-2]
0x5cf: Call2 0x993

0x5d0: Pop(1)
0x5d1: Return(); Pop(0)

0x5d2: PushEmpty()
0x5d3: PushEmpty(bool, object)
0x5d4: Stack[-1] = Stack[-3]
0x5d5: Call2 0x710

0x5d6: Stack[-4] = Stack[-2]
0x5d7: Pop(2)
0x5d8: Return(); Pop(0)

0x5d9: Stack[-1] = "walk"
0x5da: Return(); Pop(0)

0x5db: Stack[-1] = "run"
0x5dc: Return(); Pop(0)

0x5dd: PushEmpty()
0x5de: EventDisable(0)
0x5df: PushEmpty(object)
0x5e0: Stack[-1] = Stack[-2]
0x5e1: Call2 0x5f6

0x5e2: Pop(1)
0x5e3: Push((int) 50)
0x5e4: Push((int) 40)
0x5e5: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x5e6: Pop(2)
0x5e7: EventEnable(0)
0x5e8: @ Hold()
0x5e9: Pop(0)
0x5ea: GOTO 0x5e8

0x5eb: Return(); Pop(0)

0x5ec: PushEmpty(bool, bool)
0x5ed: @ IsOverrideActive(Stack[-1])
0x5ee: Pop(0)
0x5ef: Pop(0); Push((bool) Stack[-1] == 0)
0x5f0: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5f1: PushEmpty(object)
0x5f2: Stack[-1] = Stack[-4]
0x5f3: Call2 0x955

0x5f4: Pop(1)
0x5f5: Return(); Pop(2)

0x5f6: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x5f7: Pop(0); Push((bool) Stack[-21] == 0)
0x5f8: IF (Stack[-1] == 0) GOTO 0x5fe; Pop(1)

0x5f9: PushEmpty(string)
0x5fa: Stack[-1] = "fdie"
0x5fb: Call2 0x651

0x5fc: Pop(1)
0x5fd: GOTO 0x650

0x5fe: @@ GetPosition(Stack[-10])
0x5ff: Pop(0)
0x600: @ GetPosition(Stack[-9])
0x601: Pop(0)
0x602: @ GetDirection(Stack[-8])
0x603: Pop(0)
0x604: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x605: Push(CvectorIndex(Stack[-7], 0))
0x606: Push(CvectorIndex(Stack[-9], 0))
0x607: Pop(2); Push(Stack[-2] * Stack[-1]);
0x608: Push(CvectorIndex(Stack[-8], 2))
0x609: Push(CvectorIndex(Stack[-10], 2))
0x60a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x60b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x60c: Push((int) 0)
0x60d: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x60e: IF (Stack[-1] == 0) GOTO 0x611; Pop(1)

0x60f: Stack[-6] = "fdie"
0x610: GOTO 0x612

0x611: Stack[-6] = "bdie"
0x612: @ RemoveRTEnvelope()
0x613: Pop(0)
0x614: @ SetDeathState()
0x615: Pop(0)
0x616: @ Stop()
0x617: Pop(0)
0x618: @ StopAsync()
0x619: Pop(0)
0x61a: Stack[-5] = Stack[-21]
0x61b: Push("GetScriptProperty")
0x61c: Push((int) 2)
0x61d: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x61e: IF (Stack[-1] == 0) GOTO 0x62a; Pop(1)

0x61f: Push("Owner")
0x620: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x621: Pop(1)
0x622: Push(Stack[-4])
0x623: IF (Stack[-1] == 0) GOTO 0x62a; Pop(1)

0x624: Push("Owner")
0x625: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x626: Pop(1)
0x627: Pop(0); Push((bool) Stack[-5] == 0)
0x628: IF (Stack[-1] == 0) GOTO 0x62a; Pop(1)

0x629: Stack[-5] = Stack[-21]
0x62a: Push("@GetEyesHeight")
0x62b: Push((int) 1)
0x62c: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x62d: IF (Stack[-1] == 0) GOTO 0x639; Pop(1)

0x62e: @@ GetEyesHeight(Stack[-2])
0x62f: Pop(0)
0x630: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x631: Push(CvectorIndex(Stack[-1], 1))
0x632: Stack[-1] = Stack[-3]
0x633: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x634: Push("head")
0x635: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x636: Pop(1)
0x637: Stack[-3] = (bool) 1
0x638: GOTO 0x63a

0x639: Stack[-3] = (bool) 0
0x63a: PushEmpty(string)
0x63b: Stack[-1] = Stack[-7]
0x63c: Call2 0x83e

0x63d: Pop(1)
0x63e: Push("all")
0x63f: @ PlayAnimation(Stack[-1], Stack[-7])
0x640: Pop(1)
0x641: @ WaitForAnimEnd()
0x642: Pop(0)
0x643: Push(Stack[-3])
0x644: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x645: @ StopAsync()
0x646: Pop(0)
0x647: Push("head")
0x648: @ UnlookAsync(Stack[-1])
0x649: Pop(1)
0x64a: Push("all")
0x64b: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x64c: Pop(1)
0x64d: @ RemoveEnvelope()
0x64e: Pop(0)
0x64f: Stack[-5] = 0
0x650: Return(); Pop(20)

0x651: PushEmpty()
0x652: @ RemoveRTEnvelope()
0x653: Pop(0)
0x654: @ SetDeathState()
0x655: Pop(0)
0x656: @ Stop()
0x657: Pop(0)
0x658: @ StopAsync()
0x659: Pop(0)
0x65a: @ StopSecondaryAnimation()
0x65b: Pop(0)
0x65c: PushEmpty(string)
0x65d: Stack[-1] = Stack[-2]
0x65e: Call2 0x83e

0x65f: Pop(1)
0x660: Push("all")
0x661: @ PlayAnimation(Stack[-1], Stack[-2])
0x662: Pop(1)
0x663: @ WaitForAnimEnd()
0x664: Pop(0)
0x665: Push("all")
0x666: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x667: Pop(1)
0x668: @ RemoveEnvelope()
0x669: Pop(0)
0x66a: Return(); Pop(0)

0x66b: PushEmpty()
0x66c: Return(); Pop(0)

0x66d: PushEmpty()
0x66e: Return(); Pop(0)

0x66f: PushEmpty()
0x670: Return(); Pop(0)

0x671: PushEmpty()
0x672: Push((int) 2)
0x673: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x674: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x675: Stack[-2] = "fire"
0x676: Return(); Pop(0)

0x677: GOTO 0x67d

0x678: Push((int) 1)
0x679: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x67a: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x67b: Stack[-2] = "bullet"
0x67c: Return(); Pop(0)

0x67d: Stack[-2] = "phys"
0x67e: Return(); Pop(0)

0x67f: PushEmpty(cvector, cvector, cvector, cvector)
0x680: @ GetPosition(Stack[-2])
0x681: Pop(0)
0x682: @@ GetPosition(Stack[-1])
0x683: Pop(0)
0x684: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x685: Return(); Pop(4)

0x686: PushEmpty(object, object)
0x687: Push("player")
0x688: @ FindActor(Stack[-2], Stack[-1])
0x689: Pop(1)
0x68a: Stack[-3] = Stack[-1]
0x68b: Return(); Pop(2)

0x68c: Stack[-1] = 0
0x68d: PushEmpty(bool, bool)
0x68e: @ IsPlayerActor(Stack[-3], Stack[-1])
0x68f: Pop(0)
0x690: Stack[-4] = Stack[-1]
0x691: Return(); Pop(2)

0x692: PushEmpty(bool, bool)
0x693: Push("HasProperty")
0x694: Push((int) 2)
0x695: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x696: Pop(1); Push((bool) Stack[-1] == 0)
0x697: IF (Stack[-1] == 0) GOTO 0x69a; Pop(1)

0x698: Stack[-5] = (bool) 0
0x699: Return(); Pop(2)

0x69a: @@ HasProperty(Stack[-3], Stack[-1])
0x69b: Pop(0)
0x69c: Stack[-5] = Stack[-1]
0x69d: Return(); Pop(2)

0x69e: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x69f: PushEmpty(bool, object, string)
0x6a0: Stack[-2] = Stack[-18]
0x6a1: Stack[-1] = "health"
0x6a2: Call2 0x692

0x6a3: Pop(2)
0x6a4: Pop(1); Push((bool) Stack[-1] == 0)
0x6a5: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x6a6: Stack[-16] = (float) 0.0
0x6a7: Return(); Pop(12)

0x6a8: PushEmpty(bool, object, string)
0x6a9: Stack[-2] = Stack[-18]
0x6aa: Stack[-1] = "armor"
0x6ab: Call2 0x692

0x6ac: Pop(2)
0x6ad: Pop(1); Push((bool) Stack[-1] == 0)
0x6ae: IF (Stack[-1] == 0) GOTO 0x6b1; Pop(1)

0x6af: Stack[-6] = (int) 0
0x6b0: GOTO 0x6b4

0x6b1: Push("armor")
0x6b2: @@ GetProperty(Stack[-1], Stack[-7])
0x6b3: Pop(1)
0x6b4: Push("armor_")
0x6b5: PushEmpty(string, int)
0x6b6: Stack[-1] = Stack[-16]
0x6b7: Call2 0x671

0x6b8: Pop(1)
0x6b9: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x6ba: PushEmpty(bool, object, string)
0x6bb: Stack[-2] = Stack[-18]
0x6bc: Stack[-1] = Stack[-8]
0x6bd: Call2 0x692

0x6be: Pop(2)
0x6bf: Pop(1); Push((bool) Stack[-1] == 0)
0x6c0: IF (Stack[-1] == 0) GOTO 0x6c3; Pop(1)

0x6c1: Stack[-4] = (int) 0
0x6c2: GOTO 0x6c5

0x6c3: @@ GetProperty(Stack[-5], Stack[-4])
0x6c4: Pop(0)
0x6c5: PushEmpty(float, float, float)
0x6c6: Pop(0); Push(Stack[-9] + Stack[-7]);
0x6c7: Push((float)100.0)
0x6c8: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x6c9: Stack[-1] = (int) 1
0x6ca: Call2 0x877

0x6cb: Stack[-6] = Stack[-3]
0x6cc: Pop(3)
0x6cd: Push("health")
0x6ce: @@ GetProperty(Stack[-1], Stack[-3])
0x6cf: Pop(1)
0x6d0: Push((int) 1)
0x6d1: Pop(1); Push(Stack[-1] - Stack[-4]);
0x6d2: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x6d3: Push("health")
0x6d4: PushEmpty(float, float, float, float)
0x6d5: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x6d6: Stack[-2] = (int) 0
0x6d7: Stack[-1] = (int) 1
0x6d8: Call2 0x87e

0x6d9: Pop(3)
0x6da: @@ SetProperty(Stack[-2], Stack[-1])
0x6db: Pop(2)
0x6dc: PushEmpty(bool, object)
0x6dd: Stack[-1] = Stack[-17]
0x6de: Call2 0x68d

0x6df: Pop(1)
0x6e0: IF (Stack[-1] == 0) GOTO 0x6e5; Pop(1)

0x6e1: PushEmpty(float)
0x6e2: Stack[-1] = -Stack[-2]; Pop(0);
0x6e3: Call2 0x88e

0x6e4: Pop(1)
0x6e5: Stack[-16] = Stack[-1]
0x6e6: Return(); Pop(12)

0x6e7: PushEmpty(bool, bool)
0x6e8: @@ IsDead(Stack[-1])
0x6e9: Pop(0)
0x6ea: Stack[-4] = Stack[-1]
0x6eb: Return(); Pop(2)

0x6ec: PushEmpty(object, object, object, object)
0x6ed: Pop(0); Push((bool) Stack[-5] == 0)
0x6ee: IF (Stack[-1] == 0) GOTO 0x6f1; Pop(1)

0x6ef: Stack[-6] = (bool) 0
0x6f0: Return(); Pop(4)

0x6f1: PushEmpty(bool)
0x6f2: Stack[-1] = (bool) 0
0x6f3: Push("IsDead")
0x6f4: Push((int) 1)
0x6f5: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x6f6: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6f7: PushEmpty(bool, object)
0x6f8: Stack[-1] = Stack[-8]
0x6f9: Call2 0x6e7

0x6fa: Pop(1)
0x6fb: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6fc: Stack[-1] = (bool) 1
0x6fd: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6fe: Stack[-6] = (bool) 0
0x6ff: Return(); Pop(4)

0x700: @ GetScene(Stack[-2])
0x701: Pop(0)
0x702: Pop(0); Push((bool) Stack[-2] == 0)
0x703: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x704: Stack[-6] = (bool) 0
0x705: Return(); Pop(4)

0x706: @@ GetScene(Stack[-1])
0x707: Pop(0)
0x708: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x709: IF (Stack[-1] == 0) GOTO 0x70c; Pop(1)

0x70a: Stack[-6] = (bool) 0
0x70b: Return(); Pop(4)

0x70c: Stack[-6] = (bool) 1
0x70d: Return(); Pop(4)

0x70e: Stack[-1] = 0
0x70f: Stack[-2] = 0
0x710: PushEmpty(int, int)
0x711: PushEmpty(bool, object)
0x712: Stack[-1] = Stack[-5]
0x713: Call2 0x6ec

0x714: Pop(1)
0x715: Pop(1); Push((bool) Stack[-1] == 0)
0x716: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x717: Stack[-4] = (bool) 0
0x718: Return(); Pop(2)

0x719: PushEmpty(bool, object, string)
0x71a: Stack[-2] = Stack[-6]
0x71b: Stack[-1] = "noaccess"
0x71c: Call2 0x692

0x71d: Pop(2)
0x71e: Pop(1); Push((bool) Stack[-1] == 0)
0x71f: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x720: Stack[-4] = (bool) 1
0x721: Return(); Pop(2)

0x722: Push("noaccess")
0x723: @@ GetProperty(Stack[-1], Stack[-2])
0x724: Pop(1)
0x725: Push((int) 0)
0x726: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x727: Return(); Pop(2)

0x728: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x729: Pop(0); Push((bool) Stack[-15] == 0)
0x72a: IF (Stack[-1] == 0) GOTO 0x72c; Pop(1)

0x72b: Return(); Pop(14)

0x72c: @ IsDead(Stack[-7])
0x72d: Pop(0)
0x72e: Push(Stack[-7])
0x72f: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x730: Return(); Pop(14)

0x731: @ GetSecondaryAnimationType(Stack[-6])
0x732: Pop(0)
0x733: Push((int) 0)
0x734: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x735: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x736: Return(); Pop(14)

0x737: @@ GetPosition(Stack[-5])
0x738: Pop(0)
0x739: @ GetPosition(Stack[-4])
0x73a: Pop(0)
0x73b: @ GetDirection(Stack[-3])
0x73c: Pop(0)
0x73d: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x73e: Push(CvectorIndex(Stack[-2], 0))
0x73f: Push(CvectorIndex(Stack[-4], 0))
0x740: Pop(2); Push(Stack[-2] * Stack[-1]);
0x741: Push(CvectorIndex(Stack[-3], 2))
0x742: Push(CvectorIndex(Stack[-5], 2))
0x743: Pop(2); Push(Stack[-2] * Stack[-1]);
0x744: Pop(2); Push(Stack[-2] + Stack[-1]);
0x745: Push((int) 0)
0x746: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x747: IF (Stack[-1] == 0) GOTO 0x74a; Pop(1)

0x748: Stack[-1] = "fhit"
0x749: GOTO 0x74b

0x74a: Stack[-1] = "bhit"
0x74b: Push("hit_react")
0x74c: Push("1")
0x74d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x74e: Push("2")
0x74f: Pop(1); Push(Stack[-4] + Stack[-1]);
0x750: Push((int) -10)
0x751: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x752: Pop(4)
0x753: Return(); Pop(14)

0x754: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x755: PushEmpty(bool)
0x756: Stack[-1] = (bool) 0
0x757: PushEmpty(bool)
0x758: Stack[-1] = (bool) 0
0x759: Push(Stack[-23])
0x75a: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x75b: Push((int) 4)
0x75c: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x75d: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x75e: Stack[-1] = (bool) 1
0x75f: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x760: Push((int) 5)
0x761: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x762: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x763: Stack[-1] = (bool) 1
0x764: IF (Stack[-1] == 0) GOTO 0x793; Pop(1)

0x765: PushEmpty(cvector, cvector)
0x766: PushEmpty(cvector, object)
0x767: Stack[-1] = Stack[-25]
0x768: Call2 0x67f

0x769: Stack[-3] = Stack[-2]
0x76a: Pop(2)
0x76b: Call2 0x86d

0x76c: Stack[-11] = Stack[-2]
0x76d: Pop(2)
0x76e: @ CreateVectorVector(Stack[-8])
0x76f: Pop(0)
0x770: Stack[-7] = (int) 1
0x771: Push("hit")
0x772: Pop(1); Push(Stack[-1] + Stack[-8]);
0x773: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x774: Pop(1)
0x775: Pop(0); Push((bool) Stack[-6] == 0)
0x776: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x777: GOTO 0x781

0x778: Pop(0); Push(Stack[-4] | Stack[-9]);
0x779: Push((float)0.70711)
0x77a: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x77b: IF (Stack[-1] == 0) GOTO 0x77e; Pop(1)

0x77c: @@ add(Stack[-5])
0x77d: Pop(0)
0x77e: Push((int) 1)
0x77f: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x780: GOTO 0x771

0x781: @@ size(Stack[-3])
0x782: Pop(0)
0x783: Push(Stack[-3])
0x784: IF (Stack[-1] == 0) GOTO 0x792; Pop(1)

0x785: @ irand(Stack[-2], Stack[-3])
0x786: Pop(0)
0x787: @@ get(Stack[-1], Stack[-2])
0x788: Pop(0)
0x789: PushEmpty(object, int, float, cvector, cvector)
0x78a: Stack[-5] = Stack[-26]
0x78b: Stack[-4] = Stack[-25]
0x78c: Stack[-3] = Stack[-24]
0x78d: Stack[-2] = Stack[-6]
0x78e: Stack[-1] = -Stack[-14]; Pop(0);
0x78f: Call2 0x798

0x790: Pop(5)
0x791: Return(); Pop(18)

0x792: Stack[-8] = 0
0x793: PushEmpty(object)
0x794: Stack[-1] = Stack[-22]
0x795: Call2 0x728

0x796: Pop(1)
0x797: Return(); Pop(18)

0x798: PushEmpty(object, object, object, object)
0x799: @ GetScene(Stack[-2])
0x79a: Pop(0)
0x79b: Push("scripted")
0x79c: Push("blood_dir.xml")
0x79d: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x79e: Pop(2)
0x79f: PushEmpty(object)
0x7a0: Stack[-1] = Stack[-10]
0x7a1: Call2 0x728

0x7a2: Pop(1)
0x7a3: Return(); Pop(4)

0x7a4: Stack[-1] = 0
0x7a5: Stack[-2] = 0
0x7a6: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x7a7: @@ GetPosition(Stack[-3])
0x7a8: Pop(0)
0x7a9: @ GetPosition(Stack[-2])
0x7aa: Pop(0)
0x7ab: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x7ac: Push(CvectorIndex(Stack[-1], 0))
0x7ad: Push(CvectorIndex(Stack[-2], 2))
0x7ae: @ RotateAsync(Stack[-2], Stack[-1])
0x7af: Pop(2)
0x7b0: Return(); Pop(6)

0x7b1: PushEmpty(bool, bool)
0x7b2: @ IsLoaded(Stack[-1])
0x7b3: Pop(0)
0x7b4: Stack[-3] = Stack[-1]
0x7b5: Return(); Pop(2)

0x7b6: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x7b7: @@ GetPosition(Stack[-8])
0x7b8: Pop(0)
0x7b9: @@ GetEyesHeight(Stack[-9])
0x7ba: Pop(0)
0x7bb: Push(CvectorIndex(Stack[-8], 1))
0x7bc: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x7bd: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x7be: @ GetPosition(Stack[-7])
0x7bf: Pop(0)
0x7c0: @ GetEyesHeight(Stack[-9])
0x7c1: Pop(0)
0x7c2: Push(CvectorIndex(Stack[-7], 1))
0x7c3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x7c4: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x7c5: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x7c6: Push(CvectorIndex(Stack[-6], 1))
0x7c7: Stack[-1] = (int) 0
0x7c8: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x7c9: Pop(0); Push(Stack[-6] | Stack[-6]);
0x7ca: Pop(1); Push(Sqrt(Stack[-1]))
0x7cb: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x7cc: Stack[-5] = -Stack[-6]; Pop(0);
0x7cd: Pop(0); Push(Stack[-6] * Stack[-19]);
0x7ce: PushEmpty(cvector, cvector)
0x7cf: Push(CVector(0.0, 1.0, 0.0))
0x7d0: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x7d1: Call2 0x86d

0x7d2: Pop(1)
0x7d3: Push((int) 25)
0x7d4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7d5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7d6: Push(CVector(0.0, 10.0, 0.0))
0x7d7: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x7d8: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x7d9: @ IsOverrideActive(Stack[-2])
0x7da: Pop(0)
0x7db: Push(Stack[-2])
0x7dc: IF (Stack[-1] == 0) GOTO 0x7df; Pop(1)

0x7dd: Stack[-21] = (bool) 0
0x7de: Return(); Pop(18)

0x7df: @ StopWorld()
0x7e0: Pop(0)
0x7e1: Push((bool) 1)
0x7e2: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x7e3: Pop(1)
0x7e4: Push(CvectorIndex(Stack[-4], 0))
0x7e5: Push(CvectorIndex(Stack[-5], 2))
0x7e6: @ Rotate(Stack[-2], Stack[-1])
0x7e7: Pop(2)
0x7e8: PushEmpty(bool)
0x7e9: Call2 0x96a

0x7ea: Pop(0)
0x7eb: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7ec: GOTO 0x7f5

0x7ed: Push("head")
0x7ee: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x7ef: Pop(1)
0x7f0: Push(Stack[-1])
0x7f1: IF (Stack[-1] == 0) GOTO 0x7f5; Pop(1)

0x7f2: Push("head")
0x7f3: @ LookAsyncCamera(Stack[-1])
0x7f4: Pop(1)
0x7f5: @ CameraWaitForPlayFinish()
0x7f6: Pop(0)
0x7f7: @ ResumeWorld()
0x7f8: Pop(0)
0x7f9: Stack[-21] = (bool) 1
0x7fa: Return(); Pop(18)

0x7fb: PushEmpty(bool, bool)
0x7fc: Push((bool) 1)
0x7fd: @ CameraSwitchToNormal(Stack[-1])
0x7fe: Pop(1)
0x7ff: PushEmpty(bool)
0x800: Call2 0x96a

0x801: Pop(0)
0x802: IF (Stack[-1] == 0) GOTO 0x804; Pop(1)

0x803: GOTO 0x80c

0x804: Push("head")
0x805: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x806: Pop(1)
0x807: Push(Stack[-1])
0x808: IF (Stack[-1] == 0) GOTO 0x80c; Pop(1)

0x809: Push("head")
0x80a: @ UnlookAsync(Stack[-1])
0x80b: Pop(1)
0x80c: Return(); Pop(2)

0x80d: PushEmpty(bool, float, float, bool, float, float)
0x80e: @ lshHasAnimation(Stack[-3], Stack[-7])
0x80f: Pop(0)
0x810: Push(Stack[-3])
0x811: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x812: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x813: Pop(0)
0x814: Push((bool) 0)
0x815: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x816: Pop(1)
0x817: GOTO 0x81c

0x818: Push("Can't find lsh animation : ")
0x819: Pop(1); Push(Stack[-1] + Stack[-8]);
0x81a: @ Trace(Stack[-1])
0x81b: Pop(1)
0x81c: Return(); Pop(6)

0x81d: PushEmpty(bool, float, float, bool, float, float)
0x81e: @ lshHasAnimation(Stack[-3], Stack[-8])
0x81f: Pop(0)
0x820: Push(Stack[-3])
0x821: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x822: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x823: Pop(0)
0x824: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x825: Pop(0)
0x826: GOTO 0x82b

0x827: Push("Can't find lsh animation : ")
0x828: Pop(1); Push(Stack[-1] + Stack[-9]);
0x829: @ Trace(Stack[-1])
0x82a: Pop(1)
0x82b: Return(); Pop(6)

0x82c: PushEmpty(float, cvector, float, cvector)
0x82d: @@ GetEyesHeight(Stack[-2])
0x82e: Pop(0)
0x82f: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x830: Push(CvectorIndex(Stack[-1], 1))
0x831: Stack[-1] = Stack[-3]
0x832: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x833: Push("head")
0x834: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x835: Pop(1)
0x836: Return(); Pop(4)

0x837: PushEmpty(bool)
0x838: Call2 0x96a

0x839: Pop(0)
0x83a: IF (Stack[-1] == 0) GOTO 0x83d; Pop(1)

0x83b: @ lshStopSpeech()
0x83c: Pop(0)
0x83d: Return(); Pop(0)

0x83e: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x83f: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x840: Pop(0)
0x841: Pop(0); Push((bool) Stack[-8] == 0)
0x842: IF (Stack[-1] == 0) GOTO 0x857; Pop(1)

0x843: Stack[-7] = (int) 0
0x844: Push((int) 1)
0x845: Pop(1); Push(Stack[-8] + Stack[-1]);
0x846: Pop(1); Push(Stack[-18] + Stack[-1]);
0x847: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x848: Pop(1)
0x849: Pop(0); Push((bool) Stack[-6] == 0)
0x84a: IF (Stack[-1] == 0) GOTO 0x84c; Pop(1)

0x84b: GOTO 0x84f

0x84c: Push((int) 1)
0x84d: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x84e: GOTO 0x844

0x84f: Pop(0); Push((bool) Stack[-7] == 0)
0x850: IF (Stack[-1] == 0) GOTO 0x852; Pop(1)

0x851: Return(); Pop(16)

0x852: @ irand(Stack[-5], Stack[-7])
0x853: Pop(0)
0x854: Push((int) 1)
0x855: Pop(1); Push(Stack[-6] + Stack[-1]);
0x856: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x857: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x858: Pop(0)
0x859: Push(Stack[-4])
0x85a: IF (Stack[-1] == 0) GOTO 0x866; Pop(1)

0x85b: @ GetEyesHeight(Stack[-3])
0x85c: Pop(0)
0x85d: @ GetDirection(Stack[-2])
0x85e: Pop(0)
0x85f: Push((int) 50)
0x860: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x861: Push(CvectorIndex(Stack[-1], 1))
0x862: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x863: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x864: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x865: Pop(0)
0x866: Return(); Pop(16)

0x867: PushEmpty(object, object)
0x868: @ self(Stack[-1])
0x869: Pop(0)
0x86a: Stack[-3] = Stack[-1]
0x86b: Return(); Pop(2)

0x86c: Stack[-1] = 0
0x86d: PushEmpty(float, float)
0x86e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x86f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x870: Push((float)0.0)
0x871: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x872: IF (Stack[-1] == 0) GOTO 0x875; Pop(1)

0x873: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x874: Return(); Pop(2)

0x875: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x876: Return(); Pop(2)

0x877: PushEmpty()
0x878: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x879: IF (Stack[-1] == 0) GOTO 0x87c; Pop(1)

0x87a: Stack[-3] = Stack[-2]
0x87b: GOTO 0x87d

0x87c: Stack[-3] = Stack[-1]
0x87d: Return(); Pop(0)

0x87e: PushEmpty()
0x87f: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x880: IF (Stack[-1] == 0) GOTO 0x883; Pop(1)

0x881: Stack[-4] = Stack[-2]
0x882: Return(); Pop(0)

0x883: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x884: IF (Stack[-1] == 0) GOTO 0x887; Pop(1)

0x885: Stack[-4] = Stack[-1]
0x886: Return(); Pop(0)

0x887: Stack[-4] = Stack[-3]
0x888: Return(); Pop(0)

0x889: PushEmpty(int, int)
0x88a: @ GetVariable(Stack[-3], Stack[-1])
0x88b: Pop(0)
0x88c: Stack[-4] = Stack[-1]
0x88d: Return(); Pop(2)

0x88e: PushEmpty(object, object)
0x88f: @ CreateFloatVector(Stack[-1])
0x890: Pop(0)
0x891: @@ add(Stack[-3])
0x892: Pop(0)
0x893: Push((int) 0)
0x894: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x895: IF (Stack[-1] == 0) GOTO 0x89a; Pop(1)

0x896: Push((float)0.7)
0x897: Push((int) 500)
0x898: @ RumblePlay(Stack[-2], Stack[-1])
0x899: Pop(2)
0x89a: Push((int) 15)
0x89b: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x89c: Pop(1)
0x89d: Return(); Pop(2)

0x89e: Stack[-1] = 0
0x89f: PushEmpty(object, object)
0x8a0: @ FindActor(Stack[-1], Stack[-4])
0x8a1: Pop(0)
0x8a2: Pop(0); Push((bool) Stack[-1] == 0)
0x8a3: IF (Stack[-1] == 0) GOTO 0x8a6; Pop(1)

0x8a4: Stack[-5] = (bool) 0
0x8a5: Return(); Pop(2)

0x8a6: @ Trigger(Stack[-1], Stack[-3])
0x8a7: Pop(0)
0x8a8: Stack[-5] = (bool) 1
0x8a9: Return(); Pop(2)

0x8aa: Stack[-1] = 0
0x8ab: PushEmpty(bool, bool)
0x8ac: @ IsPlayerActor(Stack[-3], Stack[-1])
0x8ad: Pop(0)
0x8ae: Push(Stack[-1])
0x8af: IF (Stack[-1] == 0) GOTO 0x8b3; Pop(1)

0x8b0: Push("attack")
0x8b1: @ PlayGlobalMusic(Stack[-1])
0x8b2: Pop(1)
0x8b3: Return(); Pop(2)

0x8b4: PushEmpty(object, object)
0x8b5: @ GetScene(Stack[-1])
0x8b6: Pop(0)
0x8b7: Push("battle")
0x8b8: PushEmpty(object)
0x8b9: Call2 0x867

0x8ba: Pop(0)
0x8bb: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x8bc: Pop(2)
0x8bd: Return(); Pop(2)

0x8be: Stack[-1] = 0
0x8bf: PushEmpty(string, string)
0x8c0: Stack[-1] = "idle"
0x8c1: Push(Stack[-3])
0x8c2: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8c3: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x8c4: Stack[-4] = Stack[-1]
0x8c5: Return(); Pop(2)

0x8c6: PushEmpty(int, bool, int, bool)
0x8c7: Stack[-2] = (int) 0
0x8c8: Push("all")
0x8c9: PushEmpty(string, int)
0x8ca: Stack[-1] = Stack[-5]
0x8cb: Call2 0x8bf

0x8cc: Pop(1)
0x8cd: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x8ce: Pop(2)
0x8cf: Pop(0); Push((bool) Stack[-1] == 0)
0x8d0: IF (Stack[-1] == 0) GOTO 0x8d2; Pop(1)

0x8d1: GOTO 0x8d5

0x8d2: Push((int) 1)
0x8d3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x8d4: GOTO 0x8c8

0x8d5: Stack[-5] = Stack[-2]
0x8d6: Return(); Pop(4)

0x8d7: PushEmpty()
0x8d8: Push((int) 1)
0x8d9: @@ SetReturnValue(Stack[-1])
0x8da: Pop(1)
0x8db: Return(); Pop(0)

0x8dc: PushEmpty()
0x8dd: Push("d8q04")
0x8de: Push((int) 2)
0x8df: @ SetVariable(Stack[-2], Stack[-1])
0x8e0: Pop(2)
0x8e1: PushEmpty()
0x8e2: Call2 0x908

0x8e3: Pop(0)
0x8e4: Return(); Pop(0)

0x8e5: PushEmpty()
0x8e6: PushEmpty()
0x8e7: Call2 0x8fb

0x8e8: Pop(0)
0x8e9: PushEmpty(bool, string, string)
0x8ea: Stack[-2] = "quest_d8_04"
0x8eb: Stack[-1] = "fail"
0x8ec: Call2 0x89f

0x8ed: Pop(3)
0x8ee: Return(); Pop(0)

0x8ef: PushEmpty()
0x8f0: PushEmpty(int, string)
0x8f1: Stack[-1] = "d8q04"
0x8f2: Call2 0x889

0x8f3: Pop(1)
0x8f4: Push((int) 1)
0x8f5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8f6: IF (Stack[-1] == 0) GOTO 0x8f9; Pop(1)

0x8f7: Stack[-2] = (bool) 1
0x8f8: Return(); Pop(0)

0x8f9: Stack[-2] = (bool) 0
0x8fa: Return(); Pop(0)

0x8fb: PushEmpty(object, object)
0x8fc: Push((int) 654)
0x8fd: Push((int) 2)
0x8fe: Push((int) 533367)
0x8ff: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x900: Pop(3)
0x901: PushEmpty(bool, object, int)
0x902: Stack[-2] = Stack[-4]
0x903: Stack[-1] = (int) 649
0x904: Call2 0x922

0x905: Pop(3)
0x906: Return(); Pop(2)

0x907: Stack[-1] = 0
0x908: PushEmpty(object, object)
0x909: Push((int) 651)
0x90a: Push((int) 2)
0x90b: Push((int) 533364)
0x90c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x90d: Pop(3)
0x90e: PushEmpty(bool, object, int)
0x90f: Stack[-2] = Stack[-4]
0x910: Stack[-1] = (int) 649
0x911: Call2 0x922

0x912: Pop(3)
0x913: Return(); Pop(2)

0x914: Stack[-1] = 0
0x915: PushEmpty(object, object)
0x916: @ GetDiaryRoot(Stack[-1])
0x917: Pop(0)
0x918: Pop(0); Push((bool) Stack[-1] == 0)
0x919: IF (Stack[-1] == 0) GOTO 0x91f; Pop(1)

0x91a: Push("Can't retrieve diary root")
0x91b: @ Trace(Stack[-1])
0x91c: Pop(1)
0x91d: Stack[-3] = (bool) 0
0x91e: Return(); Pop(2)

0x91f: Stack[-3] = Stack[-1]
0x920: Return(); Pop(2)

0x921: Stack[-1] = 0
0x922: PushEmpty(object, object, int, object, object, int)
0x923: PushEmpty(object)
0x924: Call2 0x915

0x925: Stack[-4] = Stack[-1]
0x926: Pop(1)
0x927: @@ Find(Stack[-7], Stack[-2])
0x928: Pop(0)
0x929: Pop(0); Push((bool) Stack[-2] == 0)
0x92a: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x92b: Push("Can't find diary parent with id: ")
0x92c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x92d: @ Trace(Stack[-1])
0x92e: Pop(1)
0x92f: Stack[-9] = (bool) 0
0x930: Return(); Pop(6)

0x931: @@ AddChild(Stack[-8])
0x932: Pop(0)
0x933: Push((int) 7)
0x934: @ SendWorldWndMessage(Stack[-1])
0x935: Pop(1)
0x936: @@ GetCategory(Stack[-1])
0x937: Pop(0)
0x938: @ SetDiarySection(Stack[-1])
0x939: Pop(0)
0x93a: Stack[-9] = (bool) 0
0x93b: Return(); Pop(6)

0x93c: Stack[-2] = 0
0x93d: Stack[-3] = 0
0x93e: PushEmpty(int, int)
0x93f: Push("branch")
0x940: @ GetVariable(Stack[-1], Stack[-2])
0x941: Pop(1)
0x942: Push((int) 0)
0x943: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x944: IF (Stack[-1] == 0) GOTO 0x948; Pop(1)

0x945: Stack[-3] = (int) 1
0x946: Return(); Pop(2)

0x947: GOTO 0x94d

0x948: Push((int) 1)
0x949: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x94a: IF (Stack[-1] == 0) GOTO 0x94d; Pop(1)

0x94b: Stack[-3] = (int) 2
0x94c: Return(); Pop(2)

0x94d: Stack[-3] = (int) 3
0x94e: Return(); Pop(2)

0x94f: PushEmpty(int, int)
0x950: Push("branch")
0x951: @ GetVariable(Stack[-1], Stack[-2])
0x952: Pop(1)
0x953: Stack[-3] = Stack[-1]
0x954: Return(); Pop(2)

0x955: PushEmpty()
0x956: PushEmpty(int)
0x957: Call2 0x94f

0x958: Pop(0)
0x959: Push((int) 1)
0x95a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x95b: IF (Stack[-1] == 0) GOTO 0x95f; Pop(1)

0x95c: @ WorkWithCorpse(Stack[-1])
0x95d: Pop(0)
0x95e: GOTO 0x961

0x95f: @ Barter(Stack[-1])
0x960: Pop(0)
0x961: Return(); Pop(0)

0x962: Stack[-1] = (int) 521048
0x963: Return(); Pop(0)

0x964: Stack[-1] = (int) 521047
0x965: Return(); Pop(0)

0x966: Stack[-1] = "ui/NPC_Morlok.png"
0x967: Return(); Pop(0)

0x968: Stack[-1] = "ui/NPC_Morlok_b.png"
0x969: Return(); Pop(0)

0x96a: Stack[-1] = (bool) 0
0x96b: Return(); Pop(0)

0x96c: PushEmpty()
0x96d: PushEmpty(object)
0x96e: Stack[-1] = Stack[-2]
0x96f: Push(-1, 0); TaskCall(5)
0x970: Call2 0x5dd

0x971: Pop(-1, 0); TaskReturn
0x972: Pop(1)
0x973: Return(); Pop(0)

0x974: PushEmpty()
0x975: PushEmpty(object, int, float)
0x976: Stack[-3] = Stack[-7]
0x977: Stack[-2] = Stack[-6]
0x978: Stack[-1] = Stack[-5]
0x979: Call2 0x754

0x97a: Pop(3)
0x97b: Return(); Pop(0)

0x97c: PushEmpty()
0x97d: PushEmpty(object, int, float, cvector, cvector)
0x97e: Stack[-5] = Stack[-11]
0x97f: Stack[-4] = Stack[-10]
0x980: Stack[-3] = Stack[-9]
0x981: Stack[-2] = Stack[-7]
0x982: Stack[-1] = Stack[-6]
0x983: Call2 0x798

0x984: Pop(5)
0x985: Return(); Pop(0)

0x986: PushEmpty(float, float)
0x987: Push("health")
0x988: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x989: IF (Stack[-1] == 0) GOTO 0x992; Pop(1)

0x98a: Push("health")
0x98b: @ GetProperty(Stack[-1], Stack[-2])
0x98c: Pop(1)
0x98d: Push((int) 0)
0x98e: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x98f: IF (Stack[-1] == 0) GOTO 0x992; Pop(1)

0x990: @ SignalDeath(Stack[-4])
0x991: Pop(0)
0x992: Return(); Pop(2)

0x993: PushEmpty()
0x994: PushEmpty(bool, string, string)
0x995: Stack[-2] = "quest_d8_04"
0x996: Stack[-1] = "death"
0x997: Call2 0x89f

0x998: Pop(3)
0x999: PushEmpty(object)
0x99a: Stack[-1] = Stack[-2]
0x99b: Call2 0x96c

0x99c: Pop(1)
0x99d: Return(); Pop(0)

0x99e: PushEmpty(object)
0x99f: Call2 0x867

0x9a0: Pop(0)
0x9a1: @ RemoveActor(Stack[-1])
0x9a2: Pop(1)
0x9a3: @ Hold()
0x9a4: Pop(0)
0x9a5: Return(); Pop(0)

