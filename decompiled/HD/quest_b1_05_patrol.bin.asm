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
	player
	head
	@GetAttackDistance
	GetAttackDistance
	attack
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
	b1q05PatrolGroup
	pt_b1q05_patrol1
	AddMark
	ShowMap
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
	branch
	SetItemName
	Organ
	GetItemID
	liver
	kidney
	heart
	blood
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png
	b1q05ToAttack
	RemoveStationaryActor

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
	Sleep (1 args)
	IsPlayerActor (2 args)
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
	CanSee (2 args)
	GetPosition (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	RequestClearPath (1 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
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
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	GetGameTime (1 args)
	BroadcastMessage (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	AddItem (4 args)
	SetVariable (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x14c
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x155 Vars = (object)
		EVENT_1 Op = 0x173 Vars = (object)
		EVENT_3 Op = 0x18b Vars = (object)
		EVENT_17 Op = 0x1a3 Vars = (object)
		EVENT_7 Op = 0x1db Vars = (int)
	GTASK_3 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_4 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x52f Vars = (int)
		EVENT_1 Op = 0x54a Vars = (object)
		EVENT_2 Op = 0x559 Vars = (object)
		EVENT_10 Op = 0x5df Vars = (object)
		EVENT_41 Op = 0x5ea Vars = (object)
	GTASK_5  Params = 1
		EVENT_0 Op = 0x60d Vars = (object)
		EVENT_22 Op = 0x68c Vars = (object, int, float, float)
		EVENT_16 Op = 0x68e Vars = (object, string)
		EVENT_41 Op = 0x690 Vars = (object)

Events:
EVENT_22 Op = 0x9fe Vars = (object, int, float, float)
EVENT_43 Op = 0xa06 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0xa10 Vars = (object, string)
EVENT_41 Op = 0xa1d Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x7d8

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x9d7

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x9d5

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x9d9

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x9db

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x988

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
0x41: Call2 0x81d

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

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x89

0x53: Pop(1)
0x54: Push((int) 530942)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 530962)
0x5a: Push((int) 32271)
0x5b: Push((int) 32281)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 530960)
0x5f: Push((int) 32280)
0x60: Push((int) 32279)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 530959)
0x64: Push((int) -1)
0x65: Push((int) 32278)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x9dd

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x82f

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
0x8b: Call2 0x9dd

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
0x9b: Call2 0x83f

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x859

0xa4: Pop(0)
0xa5: Push((int) 32276)
0xa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x8ed

0xac: Pop(2)
0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x903

0xb1: Pop(2)
0xb2: Push((int) 32277)
0xb3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xb5: PushEmpty(object, object)
0xb6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8: Call2 0x8ed

0xb9: Pop(2)
0xba: PushEmpty(object, object)
0xbb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd: Call2 0x903

0xbe: Pop(2)
0xbf: Push((int) 32269)
0xc0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xc2: PushEmpty(string)
0xc3: Stack[-1] = "Neutral"
0xc4: Call2 0x89

0xc5: Pop(1)
0xc6: Push((int) 530942)
0xc7: @@ SetMessage(Stack[-1])
0xc8: Pop(1)
0xc9: @@ ClearReplies()
0xca: Pop(0)
0xcb: Push((int) 530962)
0xcc: Push((int) 32271)
0xcd: Push((int) 32281)
0xce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf: Pop(3)
0xd0: Push((int) 530960)
0xd1: Push((int) 32280)
0xd2: Push((int) 32279)
0xd3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4: Pop(3)
0xd5: Push((int) 530959)
0xd6: Push((int) -1)
0xd7: Push((int) 32278)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Return(); Pop(0)

0xdb: Push((int) 32280)
0xdc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xde: PushEmpty(string)
0xdf: Stack[-1] = "Neutral"
0xe0: Call2 0x89

0xe1: Pop(1)
0xe2: Push((int) 530961)
0xe3: @@ SetMessage(Stack[-1])
0xe4: Pop(1)
0xe5: @@ ClearReplies()
0xe6: Pop(0)
0xe7: Push((int) 530943)
0xe8: Push((int) 32271)
0xe9: Push((int) 32270)
0xea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(3)
0xec: Return(); Pop(0)

0xed: Push((int) 32271)
0xee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xf0: PushEmpty(string)
0xf1: Stack[-1] = "Neutral"
0xf2: Call2 0x89

0xf3: Pop(1)
0xf4: Push((int) 530944)
0xf5: @@ SetMessage(Stack[-1])
0xf6: Pop(1)
0xf7: @@ ClearReplies()
0xf8: Pop(0)
0xf9: Push((int) 530965)
0xfa: Push((int) 32273)
0xfb: Push((int) 32285)
0xfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd: Pop(3)
0xfe: Push((int) 530963)
0xff: Push((int) 32284)
0x100: Push((int) 32283)
0x101: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x102: Pop(3)
0x103: Return(); Pop(0)

0x104: Push((int) 32284)
0x105: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x107: PushEmpty(string)
0x108: Stack[-1] = "Neutral"
0x109: Call2 0x89

0x10a: Pop(1)
0x10b: Push((int) 530964)
0x10c: @@ SetMessage(Stack[-1])
0x10d: Pop(1)
0x10e: @@ ClearReplies()
0x10f: Pop(0)
0x110: Push((int) 530945)
0x111: Push((int) 32273)
0x112: Push((int) 32272)
0x113: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x114: Pop(3)
0x115: Return(); Pop(0)

0x116: Push((int) 32273)
0x117: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x119: PushEmpty(string)
0x11a: Stack[-1] = "Neutral"
0x11b: Call2 0x89

0x11c: Pop(1)
0x11d: Push((int) 530946)
0x11e: @@ SetMessage(Stack[-1])
0x11f: Pop(1)
0x120: @@ ClearReplies()
0x121: Pop(0)
0x122: Push((int) 530947)
0x123: Push((int) 32275)
0x124: Push((int) 32274)
0x125: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x126: Pop(3)
0x127: Return(); Pop(0)

0x128: Push((int) 32275)
0x129: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x12b: PushEmpty(string)
0x12c: Stack[-1] = "Neutral"
0x12d: Call2 0x89

0x12e: Pop(1)
0x12f: Push((int) 530948)
0x130: @@ SetMessage(Stack[-1])
0x131: Pop(1)
0x132: @@ ClearReplies()
0x133: Pop(0)
0x134: Push((int) 530949)
0x135: Push((int) -1)
0x136: Push((int) 32276)
0x137: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x138: Pop(3)
0x139: Push((int) 530950)
0x13a: Push((int) -1)
0x13b: Push((int) 32277)
0x13c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13d: Pop(3)
0x13e: Return(); Pop(0)

0x13f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x140: PushEmpty(bool)
0x141: Call2 0x9dd

0x142: Pop(0)
0x143: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x144: @ lshStopAnimation()
0x145: Pop(0)
0x146: GOTO 0x149

0x147: @ StopAnimation()
0x148: Pop(0)
0x149: Return(); Pop(0)

0x14a: GOTO 0xa0

0x14b: Return(); Pop(0)

0x14c: Push((bool) 1)
0x14d: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x14e: PushEmpty(float, float)
0x14f: Stack[-2] = (int) 300
0x150: Stack[-1] = (int) 100
0x151: Call2 0x1b1

0x152: Pop(2)
0x153: GOTO 0x14c

0x154: Return(); Pop(0)

0x155: PushEmpty()
0x156: PushEmpty()
0x157: Call2 0x1f2

0x158: Pop(0)
0x159: PushEmpty(bool)
0x15a: Call2 0x9df

0x15b: Pop(0)
0x15c: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x15d: PushEmpty(object)
0x15e: Stack[-1] = Stack[-2]
0x15f: Push(-1, 6); TaskCall(3)
0x160: Call2 0x256

0x161: Pop(-1, 6); TaskReturn
0x162: Pop(1)
0x163: PushEmpty(int, object)
0x164: Stack[-1] = Stack[-3]
0x165: Push(-2, 1); TaskCall(0)
0x166: Call2 0x0

0x167: Pop(-2, 1); TaskReturn
0x168: Pop(2)
0x169: PushEmpty()
0x16a: Call2 0x9e6

0x16b: Pop(0)
0x16c: PushEmpty(object)
0x16d: Stack[-1] = Stack[-2]
0x16e: Push(-1, 6); TaskCall(3)
0x16f: Call2 0x256

0x170: Pop(-1, 6); TaskReturn
0x171: Pop(1)
0x172: Return(); Pop(0)

0x173: PushEmpty()
0x174: PushEmpty(bool)
0x175: Stack[-1] = (bool) 0
0x176: PushEmpty(bool)
0x177: Call2 0x9df

0x178: Pop(0)
0x179: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17a: PushEmpty(bool, object)
0x17b: Stack[-1] = Stack[-4]
0x17c: Call2 0x6af

0x17d: Pop(1)
0x17e: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17f: Stack[-1] = (bool) 1
0x180: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x181: PushEmpty()
0x182: Call2 0x1f2

0x183: Pop(0)
0x184: PushEmpty(object)
0x185: Stack[-1] = Stack[-2]
0x186: Push(-1, 6); TaskCall(3)
0x187: Call2 0x256

0x188: Pop(-1, 6); TaskReturn
0x189: Pop(1)
0x18a: Return(); Pop(0)

0x18b: PushEmpty()
0x18c: PushEmpty(bool)
0x18d: Stack[-1] = (bool) 0
0x18e: PushEmpty(bool)
0x18f: Call2 0x9df

0x190: Pop(0)
0x191: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x192: PushEmpty(bool, object)
0x193: Stack[-1] = Stack[-4]
0x194: Call2 0x6af

0x195: Pop(1)
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: Stack[-1] = (bool) 1
0x198: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x199: PushEmpty()
0x19a: Call2 0x1f2

0x19b: Pop(0)
0x19c: PushEmpty(object)
0x19d: Stack[-1] = Stack[-2]
0x19e: Push(-1, 6); TaskCall(3)
0x19f: Call2 0x256

0x1a0: Pop(-1, 6); TaskReturn
0x1a1: Pop(1)
0x1a2: Return(); Pop(0)

0x1a3: PushEmpty()
0x1a4: PushEmpty()
0x1a5: Call2 0x1f2

0x1a6: Pop(0)
0x1a7: PushEmpty()
0x1a8: Call2 0x9e6

0x1a9: Pop(0)
0x1aa: PushEmpty(object)
0x1ab: Stack[-1] = Stack[-2]
0x1ac: Push(-1, 6); TaskCall(3)
0x1ad: Call2 0x256

0x1ae: Pop(-1, 6); TaskReturn
0x1af: Pop(1)
0x1b0: Return(); Pop(0)

0x1b1: PushEmpty()
0x1b2: PushEmpty(bool)
0x1b3: Call2 0x7d3

0x1b4: Pop(0)
0x1b5: Pop(1); Push((bool) Stack[-1] == 0)
0x1b6: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b7: Return(); Pop(0)

0x1b8: Push("player")
0x1b9: @ FindActor(Stack[-4], Stack[-1])
0x1ba: Pop(1)
0x1bb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1bc: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1bd: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1be: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1bf: Push((int) 10)
0x1c0: Push((float)1.0)
0x1c1: @ SetTimer(Stack[-2], Stack[-1])
0x1c2: Pop(2)
0x1c3: PushEmpty()
0x1c4: Call2 0x200

0x1c5: Pop(0)
0x1c6: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1c7: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c8: Push((int) 10)
0x1c9: @ KillTimer(Stack[-1])
0x1ca: Pop(1)
0x1cb: Return(); Pop(0)

0x1cc: PushEmpty(float, float)
0x1cd: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1cf: Stack[-3] = (bool) 0
0x1d0: Return(); Pop(2)

0x1d1: PushEmpty(float, object)
0x1d2: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1d3: Call2 0x6a7

0x1d4: Pop(1)
0x1d5: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1d6: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1d7: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d8: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1d9: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1da: Return(); Pop(2)

0x1db: PushEmpty()
0x1dc: Push((int) 10)
0x1dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1df: PushEmpty(bool)
0x1e0: Call2 0x1cc

0x1e1: Pop(0)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e3: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e5: PushEmpty(object)
0x1e6: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1e7: Call2 0x84e

0x1e8: Pop(1)
0x1e9: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1ea: GOTO 0x1f1

0x1eb: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ed: Push("head")
0x1ee: @ UnlookAsync(Stack[-1])
0x1ef: Pop(1)
0x1f0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1f1: Return(); Pop(0)

0x1f2: PushEmpty()
0x1f3: Call2 0x251

0x1f4: Pop(0)
0x1f5: Push((int) 10)
0x1f6: @ KillTimer(Stack[-1])
0x1f7: Pop(1)
0x1f8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1f9: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fa: Push("head")
0x1fb: @ UnlookAsync(Stack[-1])
0x1fc: Pop(1)
0x1fd: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1fe: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1ff: Return(); Pop(0)

0x200: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x201: @ WaitForAnimEnd()
0x202: Pop(0)
0x203: PushEmpty(bool)
0x204: Call2 0x7d3

0x205: Pop(0)
0x206: Pop(1); Push((bool) Stack[-1] == 0)
0x207: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x208: Return(); Pop(14)

0x209: PushEmpty(int)
0x20a: Call2 0x8dc

0x20b: Stack[-8] = Stack[-1]
0x20c: Pop(1)
0x20d: Stack[-6] = (int) 0
0x20e: PushEmpty(bool)
0x20f: Stack[-1] = (bool) 0
0x210: Push((int) 5)
0x211: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x213: PushEmpty(bool)
0x214: Call2 0x7d3

0x215: Pop(0)
0x216: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x217: Stack[-1] = (bool) 1
0x218: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x219: Push((int) 3)
0x21a: @ irand(Stack[-6], Stack[-1])
0x21b: Pop(1)
0x21c: Push((int) 0)
0x21d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x21f: Push(Stack[-7])
0x220: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x221: @ irand(Stack[-4], Stack[-7])
0x222: Pop(0)
0x223: Push("all")
0x224: PushEmpty(string, int)
0x225: Stack[-1] = Stack[-7]
0x226: Call2 0x8d5

0x227: Pop(1)
0x228: @ PlayAnimation(Stack[-2], Stack[-1])
0x229: Pop(2)
0x22a: @ WaitForAnimEnd(Stack[-3])
0x22b: Pop(0)
0x22c: Pop(0); Push((bool) Stack[-3] == 0)
0x22d: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22e: GOTO 0x24c

0x22f: GOTO 0x241

0x230: Push((int) 1)
0x231: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x232: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x233: Push((int) 4)
0x234: @ rand(Stack[-3], Stack[-1])
0x235: Pop(1)
0x236: Push((int) 1)
0x237: Pop(1); Push(Stack[-3] + Stack[-1]);
0x238: @ Sleep(Stack[-1], Stack[-2])
0x239: Pop(1)
0x23a: Pop(0); Push((bool) Stack[-1] == 0)
0x23b: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23c: GOTO 0x24c

0x23d: GOTO 0x241

0x23e: Push(Stack[-6])
0x23f: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x240: GOTO 0x24c

0x241: PushEmpty(bool)
0x242: Call2 0x24f

0x243: Pop(0)
0x244: Pop(1); Push((bool) Stack[-1] == 0)
0x245: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x246: GOTO 0x24c

0x247: @ ResetAAS()
0x248: Pop(0)
0x249: Push((int) 1)
0x24a: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x24b: GOTO 0x20e

0x24c: @ ResetAAS()
0x24d: Pop(0)
0x24e: Return(); Pop(14)

0x24f: Stack[-1] = (bool) 1
0x250: Return(); Pop(0)

0x251: @ StopAnimation()
0x252: Pop(0)
0x253: @ StopGroup0()
0x254: Pop(0)
0x255: Return(); Pop(0)

0x256: PushEmpty()
0x257: PushEmpty(object, bool, float)
0x258: Stack[-3] = Stack[-4]
0x259: Stack[-2] = (bool) 1
0x25a: Stack[-1] = (float) 180.0
0x25b: Call2 0x268

0x25c: Pop(3)
0x25d: Push((int) 1)
0x25e: @ Sleep(Stack[-1])
0x25f: Pop(1)
0x260: GOTO 0x257

0x261: Return(); Pop(0)

0x262: PushEmpty()
0x263: Stack[-3] = (float) 0.1
0x264: Return(); Pop(0)

0x265: PushEmpty()
0x266: Stack[-3] = (int) 0
0x267: Return(); Pop(0)

0x268: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x269: PushEmpty()
0x26a: Call2 0x34d

0x26b: Pop(0)
0x26c: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x26d: Push("@GetAttackDistance")
0x26e: Push((int) 1)
0x26f: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x270: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x271: @@ GetAttackDistance(Stack[-11])
0x272: Pop(0)
0x273: Push((int) 50)
0x274: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x275: GOTO 0x277

0x276: Stack[-11] = Stack[-23]
0x277: Push((int) 150)
0x278: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x27a: Stack[-11] = (int) 150
0x27b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x27c: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x27d: @ IsPlayerActor(Stack[-0], Stack[-8])
0x27e: Pop(0)
0x27f: Push(Stack[-8])
0x280: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x281: Push("attack")
0x282: @ PlayGlobalMusic(Stack[-1])
0x283: Pop(1)
0x284: PushEmpty(object)
0x285: Call2 0x889

0x286: Pop(0)
0x287: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x288: Pop(1)
0x289: Push(Stack[-24])
0x28a: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x28b: Stack[-7] = (bool) 0
0x28c: GOTO 0x28e

0x28d: Stack[-7] = (bool) 1
0x28e: Push((float)400.0)
0x28f: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x290: PushEmpty(bool)
0x291: Stack[-1] = (bool) 0
0x292: PushEmpty(bool, object)
0x293: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x294: Call2 0x732

0x295: Pop(1)
0x296: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x297: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x298: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x299: Stack[-1] = (bool) 1
0x29a: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x29b: PushEmpty()
0x29c: Call2 0x4ea

0x29d: Pop(0)
0x29e: @@ GetPFPosition(Stack[-10])
0x29f: Pop(0)
0x2a0: @ GetPFPosition(Stack[-9])
0x2a1: Pop(0)
0x2a2: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x2a3: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2a4: Pop(0); Push(Stack[-6] * Stack[-6]);
0x2a5: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2a7: PushEmpty(bool, object, float, float, bool, bool)
0x2a8: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x2a9: Stack[-4] = Stack[-17]
0x2aa: Stack[-3] = (float) 10000.0
0x2ab: Stack[-2] = (bool) 1
0x2ac: Stack[-1] = (bool) 0
0x2ad: Push(-6, 3); TaskCall(4)
0x2ae: Call2 0x4fe

0x2af: Pop(-6, 3); TaskReturn
0x2b0: Pop(5)
0x2b1: Pop(1); Push((bool) Stack[-1] == 0)
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2b3: GOTO 0x33c

0x2b4: Stack[-7] = (bool) 0
0x2b5: GOTO 0x33b

0x2b6: Pop(0); Push(Stack[-23] * Stack[-23]);
0x2b7: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x2b8: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x2b9: @@ GetPFPosition(Stack[-3])
0x2ba: Pop(0)
0x2bb: @ CanReachByPF(Stack[-2], Stack[-3])
0x2bc: Pop(0)
0x2bd: Pop(0); Push((bool) Stack[-2] == 0)
0x2be: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2bf: PushEmpty(bool, object, float, float, bool, bool)
0x2c0: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x2c1: Stack[-4] = Stack[-17]
0x2c2: Stack[-3] = (float) 10000.0
0x2c3: Stack[-2] = (bool) 1
0x2c4: Stack[-1] = (bool) 0
0x2c5: Push(-6, 3); TaskCall(4)
0x2c6: Call2 0x4fe

0x2c7: Pop(-6, 3); TaskReturn
0x2c8: Pop(5)
0x2c9: Pop(1); Push((bool) Stack[-1] == 0)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2cb: GOTO 0x33c

0x2cc: Stack[-7] = (bool) 0
0x2cd: GOTO 0x290

0x2ce: Pop(0); Push((bool) Stack[-7] == 0)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2d0: PushEmpty(object)
0x2d1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d2: Call2 0x7c8

0x2d3: Pop(1)
0x2d4: Push("all")
0x2d5: Push("attack_on")
0x2d6: @ PlayAnimation(Stack[-2], Stack[-1])
0x2d7: Pop(2)
0x2d8: @ WaitForAnimEnd()
0x2d9: Pop(0)
0x2da: PushEmpty()
0x2db: Call2 0x4ea

0x2dc: Pop(0)
0x2dd: @ StopAsync()
0x2de: Pop(0)
0x2df: Stack[-7] = (bool) 1
0x2e0: PushEmpty(bool, object)
0x2e1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e2: Call2 0x732

0x2e3: Pop(1)
0x2e4: Pop(1); Push((bool) Stack[-1] == 0)
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e6: GOTO 0x33c

0x2e7: @ rand(Stack[-1])
0x2e8: Pop(0)
0x2e9: PushEmpty(bool)
0x2ea: Stack[-1] = (bool) 1
0x2eb: Push((float)0.25)
0x2ec: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2ed: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2ee: PushEmpty(bool)
0x2ef: Call2 0x4bf

0x2f0: Pop(0)
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f2: Stack[-1] = (bool) 0
0x2f3: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x2f4: @ Face(Stack[-0])
0x2f5: Pop(0)
0x2f6: PushEmpty()
0x2f7: Call2 0x4f1

0x2f8: Pop(0)
0x2f9: Push("all")
0x2fa: Push("attack_stay")
0x2fb: @ PlayAnimation(Stack[-2], Stack[-1])
0x2fc: Pop(2)
0x2fd: PushEmpty(bool, float)
0x2fe: Stack[-1] = Stack[-25]
0x2ff: Call2 0x43b

0x300: Pop(2)
0x301: @ StopAsync()
0x302: Pop(0)
0x303: GOTO 0x332

0x304: @ Face(Stack[-0])
0x305: Pop(0)
0x306: Push("all")
0x307: Push("fjump")
0x308: @ PlayAnimation(Stack[-2], Stack[-1])
0x309: Pop(2)
0x30a: @ WaitForAnimEnd()
0x30b: Pop(0)
0x30c: PushEmpty()
0x30d: Call2 0x4ea

0x30e: Pop(0)
0x30f: Push(CVector(0.0, 0.0, 0.0))
0x310: @ SetSpeed(Stack[-1])
0x311: Pop(1)
0x312: @ Stop()
0x313: Pop(0)
0x314: @ StopAsync()
0x315: Pop(0)
0x316: PushEmpty(bool)
0x317: Call2 0x4bf

0x318: Pop(0)
0x319: Pop(1); Push((bool) Stack[-1] == 0)
0x31a: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x31b: PushEmpty(bool, object)
0x31c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31d: Call2 0x732

0x31e: Pop(1)
0x31f: Pop(1); Push((bool) Stack[-1] == 0)
0x320: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x321: GOTO 0x33c

0x322: @@ GetPFPosition(Stack[-10])
0x323: Pop(0)
0x324: @ GetPFPosition(Stack[-9])
0x325: Pop(0)
0x326: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x327: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x328: Pop(0); Push(Stack[-23] * Stack[-23]);
0x329: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x32b: PushEmpty(bool, float)
0x32c: Stack[-1] = Stack[-25]
0x32d: Call2 0x397

0x32e: Pop(1)
0x32f: Pop(1); Push((bool) Stack[-1] == 0)
0x330: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x331: GOTO 0x33c

0x332: GOTO 0x33b

0x333: PushEmpty(bool, float)
0x334: Stack[-1] = Stack[-25]
0x335: Call2 0x397

0x336: Pop(1)
0x337: Pop(1); Push((bool) Stack[-1] == 0)
0x338: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x339: GOTO 0x33c

0x33a: Stack[-7] = (bool) 1
0x33b: GOTO 0x290

0x33c: @ WaitForAnimEnd()
0x33d: Pop(0)
0x33e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x33f: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x340: Return(); Pop(22)

0x341: Push("all")
0x342: Push("attack_off")
0x343: @ PlayAnimation(Stack[-2], Stack[-1])
0x344: Pop(2)
0x345: @ WaitForAnimEnd()
0x346: Pop(0)
0x347: Push(Stack[-8])
0x348: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x349: Push((float)2.0)
0x34a: @ Sleep(Stack[-1])
0x34b: Pop(1)
0x34c: Return(); Pop(22)

0x34d: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x34e: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x34f: Push("all")
0x350: Push("attack_begin")
0x351: Push((int) 1)
0x352: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x353: Pop(2); Push(Stack[-2] + Stack[-1]);
0x354: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x355: Pop(2)
0x356: Pop(0); Push((bool) Stack[-3] == 0)
0x357: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x358: GOTO 0x35c

0x359: Push((int) 1)
0x35a: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x35b: GOTO 0x34f

0x35c: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x35d: Push("attack")
0x35e: Push((int) 1)
0x35f: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x360: Pop(2); Push(Stack[-2] + Stack[-1]);
0x361: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x362: Pop(1)
0x363: Pop(0); Push((bool) Stack[-2] == 0)
0x364: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x365: GOTO 0x369

0x366: Push((int) 1)
0x367: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x368: GOTO 0x35d

0x369: Push("all")
0x36a: Push("bjump")
0x36b: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x36c: Pop(2)
0x36d: Push(CvectorIndex(Stack[-1], 2))
0x36e: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x36f: Return(); Pop(6)

0x370: PushEmpty(object, float, float, object, float, float)
0x371: Push((float)0.9)
0x372: Pop(1); Push(Stack[-9] * Stack[-1]);
0x373: @ GetVictim(Stack[-1], Stack[-4])
0x374: Pop(1)
0x375: @ ReportAttack(Stack[-0])
0x376: Pop(0)
0x377: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x378: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x379: PushEmpty(float, object, int)
0x37a: Stack[-2] = Stack[-6]
0x37b: Stack[-1] = Stack[-10]
0x37c: Call2 0x262

0x37d: Stack[-5] = Stack[-3]
0x37e: Pop(3)
0x37f: PushEmpty(float, object, float, int)
0x380: Stack[-3] = Stack[-7]
0x381: Stack[-2] = Stack[-6]
0x382: PushEmpty(int, object, int)
0x383: Stack[-2] = Stack[-10]
0x384: Stack[-1] = Stack[-14]
0x385: Call2 0x265

0x386: Stack[-4] = Stack[-3]
0x387: Pop(3)
0x388: Call2 0x6c0

0x389: Stack[-5] = Stack[-4]
0x38a: Pop(4)
0x38b: PushEmpty(int)
0x38c: Call2 0x4ef

0x38d: Pop(0)
0x38e: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x38f: Pop(1)
0x390: PushEmpty(object, float)
0x391: Stack[-2] = Stack[-5]
0x392: Stack[-1] = Stack[-3]
0x393: Call2 0x4f6

0x394: Pop(2)
0x395: Return(); Pop(6)

0x396: Stack[-3] = 0
0x397: PushEmpty(int, bool, int, string, int, bool, int, string)
0x398: PushEmpty()
0x399: Call2 0x4ea

0x39a: Pop(0)
0x39b: @ irand(Stack[-4], Stack[-1])
0x39c: Pop(0)
0x39d: Push((int) 1)
0x39e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x39f: @ Face(Stack[-0])
0x3a0: Pop(0)
0x3a1: Push((bool) 1)
0x3a2: @ SetAttackState(Stack[-1])
0x3a3: Pop(1)
0x3a4: PushEmpty()
0x3a5: Call2 0x8ca

0x3a6: Pop(0)
0x3a7: Push("all")
0x3a8: Push("attack_begin")
0x3a9: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3aa: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ab: Pop(2)
0x3ac: @ WaitForAnimEnd()
0x3ad: Pop(0)
0x3ae: PushEmpty()
0x3af: Call2 0x4ca

0x3b0: Pop(0)
0x3b1: PushEmpty(bool, object)
0x3b2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3b3: Call2 0x732

0x3b4: Pop(1)
0x3b5: Pop(1); Push((bool) Stack[-1] == 0)
0x3b6: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b7: @ StopAsync()
0x3b8: Pop(0)
0x3b9: Stack[-10] = (bool) 0
0x3ba: Return(); Pop(8)

0x3bb: PushEmpty(float, int)
0x3bc: Stack[-2] = Stack[-11]
0x3bd: Stack[-1] = Stack[-6]
0x3be: Call2 0x370

0x3bf: Pop(2)
0x3c0: Push("all")
0x3c1: Push("attack_middle")
0x3c2: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3c3: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x3c4: Pop(2)
0x3c5: Push(Stack[-3])
0x3c6: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x3c7: PushEmpty()
0x3c8: Call2 0x8ca

0x3c9: Pop(0)
0x3ca: Push("all")
0x3cb: Push("attack_middle")
0x3cc: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3cd: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ce: Pop(2)
0x3cf: @ WaitForAnimEnd()
0x3d0: Pop(0)
0x3d1: PushEmpty()
0x3d2: Call2 0x4ea

0x3d3: Pop(0)
0x3d4: PushEmpty(bool, object)
0x3d5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3d6: Call2 0x732

0x3d7: Pop(1)
0x3d8: Pop(1); Push((bool) Stack[-1] == 0)
0x3d9: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3da: @ StopAsync()
0x3db: Pop(0)
0x3dc: Stack[-10] = (bool) 0
0x3dd: Return(); Pop(8)

0x3de: PushEmpty(float, int)
0x3df: Stack[-2] = Stack[-11]
0x3e0: Stack[-1] = Stack[-6]
0x3e1: Call2 0x370

0x3e2: Pop(2)
0x3e3: Stack[-2] = (int) 1
0x3e4: Push("attack_middle")
0x3e5: Pop(1); Push(Stack[-1] + Stack[-5]);
0x3e6: Push("_")
0x3e7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3e8: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x3e9: Push("all")
0x3ea: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x3eb: Pop(1)
0x3ec: Pop(0); Push((bool) Stack[-3] == 0)
0x3ed: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3ee: GOTO 0x40c

0x3ef: PushEmpty()
0x3f0: Call2 0x8ca

0x3f1: Pop(0)
0x3f2: Push("all")
0x3f3: @ PlayAnimation(Stack[-1], Stack[-2])
0x3f4: Pop(1)
0x3f5: @ WaitForAnimEnd()
0x3f6: Pop(0)
0x3f7: PushEmpty()
0x3f8: Call2 0x4ea

0x3f9: Pop(0)
0x3fa: PushEmpty(bool, object)
0x3fb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3fc: Call2 0x732

0x3fd: Pop(1)
0x3fe: Pop(1); Push((bool) Stack[-1] == 0)
0x3ff: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x400: @ StopAsync()
0x401: Pop(0)
0x402: Stack[-10] = (bool) 0
0x403: Return(); Pop(8)

0x404: PushEmpty(float, int)
0x405: Stack[-2] = Stack[-11]
0x406: Stack[-1] = Stack[-6]
0x407: Call2 0x370

0x408: Pop(2)
0x409: Push((int) 1)
0x40a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x40b: GOTO 0x3e4

0x40c: Push((bool) 0)
0x40d: @ SetAttackState(Stack[-1])
0x40e: Pop(1)
0x40f: Push("all")
0x410: Push("attack_end")
0x411: Pop(1); Push(Stack[-1] + Stack[-6]);
0x412: @ PlayAnimation(Stack[-2], Stack[-1])
0x413: Pop(2)
0x414: PushEmpty(bool)
0x415: Call2 0x4f8

0x416: Pop(0)
0x417: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x418: PushEmpty(bool, float)
0x419: Stack[-1] = (float) 0.75
0x41a: Call2 0x420

0x41b: Pop(2)
0x41c: @ StopAsync()
0x41d: Pop(0)
0x41e: Stack[-10] = (bool) 1
0x41f: Return(); Pop(8)

0x420: PushEmpty(float, bool, float, bool)
0x421: @ rand(Stack[-2])
0x422: Pop(0)
0x423: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x424: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x425: @ IsAnimationPlaying(Stack[-1])
0x426: Pop(0)
0x427: Pop(0); Push((bool) Stack[-1] == 0)
0x428: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x429: GOTO 0x433

0x42a: PushEmpty(bool)
0x42b: Call2 0x482

0x42c: Pop(0)
0x42d: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42e: Stack[-6] = (bool) 1
0x42f: Return(); Pop(4)

0x430: @ sync()
0x431: Pop(0)
0x432: GOTO 0x425

0x433: GOTO 0x439

0x434: @ WaitForAnimEnd()
0x435: Pop(0)
0x436: PushEmpty()
0x437: Call2 0x4ea

0x438: Pop(0)
0x439: Stack[-6] = (bool) 0
0x43a: Return(); Pop(4)

0x43b: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x43c: @ IsAnimationPlaying(Stack[-5])
0x43d: Pop(0)
0x43e: Pop(0); Push((bool) Stack[-5] == 0)
0x43f: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x440: GOTO 0x461

0x441: PushEmpty(bool)
0x442: Call2 0x482

0x443: Pop(0)
0x444: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x445: Stack[-12] = (bool) 1
0x446: Return(); Pop(10)

0x447: PushEmpty(bool, object)
0x448: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x449: Call2 0x732

0x44a: Pop(1)
0x44b: Pop(1); Push((bool) Stack[-1] == 0)
0x44c: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44d: Stack[-12] = (bool) 0
0x44e: Return(); Pop(10)

0x44f: @@ GetPFPosition(Stack[-4])
0x450: Pop(0)
0x451: @ GetPFPosition(Stack[-3])
0x452: Pop(0)
0x453: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x454: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x455: Pop(0); Push(Stack[-11] * Stack[-11]);
0x456: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x457: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x458: PushEmpty(bool, float)
0x459: Stack[-1] = Stack[-13]
0x45a: Call2 0x397

0x45b: Pop(2)
0x45c: Stack[-12] = (bool) 1
0x45d: Return(); Pop(10)

0x45e: @ sync()
0x45f: Pop(0)
0x460: GOTO 0x43c

0x461: PushEmpty()
0x462: Call2 0x4ea

0x463: Pop(0)
0x464: Stack[-12] = (bool) 0
0x465: Return(); Pop(10)

0x466: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x467: PushEmpty(bool, object)
0x468: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x469: Call2 0x732

0x46a: Pop(1)
0x46b: Pop(1); Push((bool) Stack[-1] == 0)
0x46c: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46d: Stack[-11] = (bool) 0
0x46e: Return(); Pop(10)

0x46f: PushEmpty(bool)
0x470: Call2 0x4bf

0x471: Pop(0)
0x472: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x473: @@ GetPFPosition(Stack[-5])
0x474: Pop(0)
0x475: @ GetPFPosition(Stack[-4])
0x476: Pop(0)
0x477: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x478: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x479: @@ GetAttackDistance(Stack[-1])
0x47a: Pop(0)
0x47b: Push((int) 50)
0x47c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x47d: Pop(0); Push(Stack[-1] * Stack[-1]);
0x47e: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x47f: Return(); Pop(10)

0x480: Stack[-11] = (bool) 0
0x481: Return(); Pop(10)

0x482: PushEmpty(bool)
0x483: Stack[-1] = (bool) 0
0x484: PushEmpty(bool)
0x485: Call2 0x466

0x486: Pop(0)
0x487: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x488: PushEmpty(bool)
0x489: Call2 0x492

0x48a: Pop(0)
0x48b: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x48c: Stack[-1] = (bool) 1
0x48d: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48e: Stack[-1] = (bool) 1
0x48f: Return(); Pop(0)

0x490: Stack[-1] = (bool) 0
0x491: Return(); Pop(0)

0x492: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x493: @ GetScene(Stack[-5])
0x494: Pop(0)
0x495: Stack[-4] = (bool) 0
0x496: PushEmpty(cvector, object)
0x497: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x498: Call2 0x6a0

0x499: Pop(1)
0x49a: Pop(1); Push(( -Stack[-1])
0x49b: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x49c: Pop(1)
0x49d: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x49e: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49f: GOTO 0x4bc

0x4a0: @ Face(Stack[-0])
0x4a1: Pop(0)
0x4a2: Push("all")
0x4a3: Push("bjump")
0x4a4: @ PlayAnimation(Stack[-2], Stack[-1])
0x4a5: Pop(2)
0x4a6: @@ GetPFPosition(Stack[-2])
0x4a7: Pop(0)
0x4a8: @ GetPFPosition(Stack[-1])
0x4a9: Pop(0)
0x4aa: @ WaitForAnimEnd()
0x4ab: Pop(0)
0x4ac: PushEmpty()
0x4ad: Call2 0x4ea

0x4ae: Pop(0)
0x4af: @ StopAsync()
0x4b0: Pop(0)
0x4b1: Push(CVector(0.0, 0.0, 0.0))
0x4b2: @ SetSpeed(Stack[-1])
0x4b3: Pop(1)
0x4b4: Stack[-4] = (bool) 1
0x4b5: PushEmpty(bool)
0x4b6: Call2 0x466

0x4b7: Pop(0)
0x4b8: Pop(1); Push((bool) Stack[-1] == 0)
0x4b9: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4ba: GOTO 0x4bc

0x4bb: GOTO 0x496

0x4bc: Stack[-11] = Stack[-4]
0x4bd: Return(); Pop(10)

0x4be: Stack[-5] = 0
0x4bf: PushEmpty(bool, bool)
0x4c0: Push("IsAttacking")
0x4c1: Push((int) 1)
0x4c2: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x4c3: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4c4: @@ IsAttacking(Stack[-1])
0x4c5: Pop(0)
0x4c6: Stack[-3] = Stack[-1]
0x4c7: Return(); Pop(2)

0x4c8: Stack[-3] = (bool) 0
0x4c9: Return(); Pop(2)

0x4ca: PushEmpty(float, int, float, int)
0x4cb: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4cc: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4cd: Return(); Pop(4)

0x4ce: Push( Stack[5 + Tasks[-1].StackPointer] )
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d0: Push((int) -1)
0x4d1: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x4d2: Push((int) 0)
0x4d3: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x4d4: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d5: Return(); Pop(4)

0x4d6: @ rand(Stack[-2])
0x4d7: Pop(0)
0x4d8: PushEmpty(float)
0x4d9: Call2 0x4fc

0x4da: Pop(0)
0x4db: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x4dc: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4dd: @ irand(Stack[-1], Stack[-2])
0x4de: Pop(0)
0x4df: Push((int) 1)
0x4e0: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x4e1: Push("attack")
0x4e2: Pop(1); Push(Stack[-1] + Stack[-2]);
0x4e3: @ Speak(Stack[-1])
0x4e4: Pop(1)
0x4e5: PushEmpty(int)
0x4e6: Call2 0x4fa

0x4e7: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x4e8: Pop(1)
0x4e9: Return(); Pop(4)

0x4ea: PushEmpty(object)
0x4eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ec: Call2 0x8c1

0x4ed: Pop(1)
0x4ee: Return(); Pop(0)

0x4ef: Stack[-1] = (int) 0
0x4f0: Return(); Pop(0)

0x4f1: PushEmpty(string)
0x4f2: Stack[-1] = "attack_stay"
0x4f3: Call2 0x860

0x4f4: Pop(1)
0x4f5: Return(); Pop(0)

0x4f6: PushEmpty()
0x4f7: Return(); Pop(0)

0x4f8: Stack[-1] = (bool) 1
0x4f9: Return(); Pop(0)

0x4fa: Stack[-1] = (int) 1
0x4fb: Return(); Pop(0)

0x4fc: Stack[-1] = (float) 0.5
0x4fd: Return(); Pop(0)

0x4fe: PushEmpty(bool, bool, bool, bool)
0x4ff: PushEmpty(object)
0x500: Stack[-1] = Stack[-10]
0x501: Call2 0x8c1

0x502: Pop(1)
0x503: Push((int) 1)
0x504: Push((int) 5)
0x505: @ SetTimer(Stack[-2], Stack[-1])
0x506: Pop(2)
0x507: @ CanSee(Stack[-2], Stack[-9])
0x508: Pop(0)
0x509: Push(Stack[-2])
0x50a: IF (Stack[-1] == 0) GOTO 0x511; Pop(1)

0x50b: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x50c: PushEmpty(object)
0x50d: Stack[-1] = Stack[-10]
0x50e: Call2 0x84e

0x50f: Pop(1)
0x510: GOTO 0x512

0x511: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x512: PushEmpty(bool, object)
0x513: Stack[-1] = Stack[-11]
0x514: Call2 0x6af

0x515: Pop(1)
0x516: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x517: PushEmpty(object)
0x518: Call2 0x889

0x519: Pop(0)
0x51a: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x51b: Pop(1)
0x51c: PushEmpty(bool, object, float, float, bool, bool)
0x51d: Stack[-5] = Stack[-15]
0x51e: Stack[-4] = Stack[-14]
0x51f: Stack[-3] = Stack[-13]
0x520: Stack[-2] = Stack[-12]
0x521: Stack[-1] = Stack[-11]
0x522: Call2 0x567

0x523: Stack[-7] = Stack[-6]
0x524: Pop(6)
0x525: Push( Stack[2 + Tasks[-1].StackPointer] )
0x526: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x527: Push("head")
0x528: @ UnlookAsync(Stack[-1])
0x529: Pop(1)
0x52a: Push((int) 1)
0x52b: @ KillTimer(Stack[-1])
0x52c: Pop(1)
0x52d: Stack[-10] = Stack[-1]
0x52e: Return(); Pop(4)

0x52f: PushEmpty()
0x530: Push((int) 1)
0x531: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x532: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x533: PushEmpty(object)
0x534: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x535: Call2 0x8c1

0x536: Pop(1)
0x537: GOTO 0x53c

0x538: PushEmpty(int)
0x539: Stack[-1] = Stack[-2]
0x53a: Call2 0x5cd

0x53b: Pop(1)
0x53c: Return(); Pop(0)

0x53d: Push((int) 1)
0x53e: @ KillTimer(Stack[-1])
0x53f: Pop(1)
0x540: Push( Stack[2 + Tasks[-1].StackPointer] )
0x541: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x542: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x543: Push("head")
0x544: @ UnlookAsync(Stack[-1])
0x545: Pop(1)
0x546: PushEmpty()
0x547: Call2 0x5e3

0x548: Pop(0)
0x549: Return(); Pop(0)

0x54a: PushEmpty()
0x54b: PushEmpty(bool)
0x54c: Stack[-1] = (bool) 0
0x54d: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x54e: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x54f: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x550: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x551: Stack[-1] = (bool) 1
0x552: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x553: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x554: PushEmpty(object)
0x555: Stack[-1] = Stack[-2]
0x556: Call2 0x84e

0x557: Pop(1)
0x558: Return(); Pop(0)

0x559: PushEmpty()
0x55a: PushEmpty(bool)
0x55b: Stack[-1] = (bool) 0
0x55c: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x55d: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x55e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x55f: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x560: Stack[-1] = (bool) 1
0x561: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x562: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x563: Push("head")
0x564: @ UnlookAsync(Stack[-1])
0x565: Pop(1)
0x566: Return(); Pop(0)

0x567: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x568: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x569: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x56a: Stack[-7] = Stack[-17]
0x56b: PushEmpty(bool, object)
0x56c: Stack[-1] = Stack[-23]
0x56d: Call2 0x5f3

0x56e: Pop(1)
0x56f: Pop(1); Push((bool) Stack[-1] == 0)
0x570: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x571: Stack[-22] = (bool) 0
0x572: Return(); Pop(16)

0x573: @@ GetPosition(Stack[-5])
0x574: Pop(0)
0x575: @ GetPosition(Stack[-4])
0x576: Pop(0)
0x577: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x578: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x579: PushEmpty(bool)
0x57a: Stack[-1] = (bool) 0
0x57b: Push((int) 0)
0x57c: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x57d: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x57e: Pop(0); Push(Stack[-20] * Stack[-20]);
0x57f: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x580: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x581: Stack[-1] = (bool) 1
0x582: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x583: @ Stop()
0x584: Pop(0)
0x585: Stack[-22] = (bool) 0
0x586: Return(); Pop(16)

0x587: Pop(0); Push(Stack[-20] * Stack[-20]);
0x588: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x589: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x58a: @@ GetPFPosition(Stack[-5])
0x58b: Pop(0)
0x58c: @ FindPathTo(Stack[-1], Stack[-5])
0x58d: Pop(0)
0x58e: Pop(0); Push(( Stack[-1] != 0 )
0x58f: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x590: Stack[-6] = Stack[-1]
0x591: Stack[-1] = 0
0x592: Pop(0); Push(( Stack[-6] != 0 )
0x593: IF (Stack[-1] == 0) GOTO 0x5b3; Pop(1)

0x594: Push(Stack[-7])
0x595: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x596: Stack[-7] = (bool) 0
0x597: @ RotatePath(Stack[-6], Stack[-8])
0x598: Pop(0)
0x599: Pop(0); Push((bool) Stack[-8] == 0)
0x59a: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x59b: GOTO 0x5cb

0x59c: Push((int) 0)
0x59d: Push((float)0.3)
0x59e: @ SetTimer(Stack[-2], Stack[-1])
0x59f: Pop(2)
0x5a0: PushEmpty(string)
0x5a1: Call2 0x5fa

0x5a2: Pop(0)
0x5a3: PushEmpty(string)
0x5a4: Call2 0x5fc

0x5a5: Pop(0)
0x5a6: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x5a7: Pop(2)
0x5a8: Pop(0); Push((bool) Stack[-8] == 0)
0x5a9: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5aa: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5ab: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5ac: Stack[-6] = 0
0x5ad: GOTO 0x5cb

0x5ae: GOTO 0x5b0

0x5af: GOTO 0x5ca

0x5b0: GOTO 0x5b2

0x5b1: Stack[-6] = 0
0x5b2: GOTO 0x5c3

0x5b3: Push((int) 0)
0x5b4: @ KillTimer(Stack[-1])
0x5b5: Pop(1)
0x5b6: Push((float)0.5)
0x5b7: @ Sleep(Stack[-1], Stack[-9])
0x5b8: Pop(1)
0x5b9: Pop(0); Push((bool) Stack[-8] == 0)
0x5ba: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5bb: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5bc: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5bd: Stack[-6] = 0
0x5be: GOTO 0x5cb

0x5bf: Push((int) 0)
0x5c0: Push((float)0.3)
0x5c1: @ SetTimer(Stack[-2], Stack[-1])
0x5c2: Pop(2)
0x5c3: Stack[-1] = 0
0x5c4: GOTO 0x5c9

0x5c5: Push((int) 0)
0x5c6: @ KillTimer(Stack[-1])
0x5c7: Pop(1)
0x5c8: GOTO 0x5cb

0x5c9: Stack[-6] = 0
0x5ca: GOTO 0x56b

0x5cb: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x5cc: Return(); Pop(16)

0x5cd: PushEmpty()
0x5ce: Push((int) 0)
0x5cf: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x5d0: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5d1: Return(); Pop(0)

0x5d2: PushEmpty(bool, object)
0x5d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d4: Call2 0x5f3

0x5d5: Pop(1)
0x5d6: Pop(1); Push((bool) Stack[-1] == 0)
0x5d7: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d8: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5d9: Push((int) 0)
0x5da: @ KillTimer(Stack[-1])
0x5db: Pop(1)
0x5dc: @ Stop()
0x5dd: Pop(0)
0x5de: Return(); Pop(0)

0x5df: PushEmpty()
0x5e0: @ RequestClearPath(Stack[-1])
0x5e1: Pop(0)
0x5e2: Return(); Pop(0)

0x5e3: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5e4: Push((int) 0)
0x5e5: @ KillTimer(Stack[-1])
0x5e6: Pop(1)
0x5e7: @ Stop()
0x5e8: Pop(0)
0x5e9: Return(); Pop(0)

0x5ea: PushEmpty()
0x5eb: PushEmpty()
0x5ec: Call2 0x53d

0x5ed: Pop(0)
0x5ee: PushEmpty(object)
0x5ef: Stack[-1] = Stack[-2]
0x5f0: Call2 0xa1d

0x5f1: Pop(1)
0x5f2: Return(); Pop(0)

0x5f3: PushEmpty()
0x5f4: PushEmpty(bool, object)
0x5f5: Stack[-1] = Stack[-3]
0x5f6: Call2 0x732

0x5f7: Stack[-4] = Stack[-2]
0x5f8: Pop(2)
0x5f9: Return(); Pop(0)

0x5fa: Stack[-1] = "walk"
0x5fb: Return(); Pop(0)

0x5fc: Stack[-1] = "run"
0x5fd: Return(); Pop(0)

0x5fe: PushEmpty()
0x5ff: EventDisable(0)
0x600: PushEmpty(object)
0x601: Stack[-1] = Stack[-2]
0x602: Call2 0x617

0x603: Pop(1)
0x604: Push((int) 50)
0x605: Push((int) 40)
0x606: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x607: Pop(2)
0x608: EventEnable(0)
0x609: @ Hold()
0x60a: Pop(0)
0x60b: GOTO 0x609

0x60c: Return(); Pop(0)

0x60d: PushEmpty(bool, bool)
0x60e: @ IsOverrideActive(Stack[-1])
0x60f: Pop(0)
0x610: Pop(0); Push((bool) Stack[-1] == 0)
0x611: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x612: PushEmpty(object)
0x613: Stack[-1] = Stack[-4]
0x614: Call2 0x99f

0x615: Pop(1)
0x616: Return(); Pop(2)

0x617: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x618: Pop(0); Push((bool) Stack[-21] == 0)
0x619: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x61a: PushEmpty(string)
0x61b: Stack[-1] = "fdie"
0x61c: Call2 0x672

0x61d: Pop(1)
0x61e: GOTO 0x671

0x61f: @@ GetPosition(Stack[-10])
0x620: Pop(0)
0x621: @ GetPosition(Stack[-9])
0x622: Pop(0)
0x623: @ GetDirection(Stack[-8])
0x624: Pop(0)
0x625: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x626: Push(CvectorIndex(Stack[-7], 0))
0x627: Push(CvectorIndex(Stack[-9], 0))
0x628: Pop(2); Push(Stack[-2] * Stack[-1]);
0x629: Push(CvectorIndex(Stack[-8], 2))
0x62a: Push(CvectorIndex(Stack[-10], 2))
0x62b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x62c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x62d: Push((int) 0)
0x62e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x62f: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x630: Stack[-6] = "fdie"
0x631: GOTO 0x633

0x632: Stack[-6] = "bdie"
0x633: @ RemoveRTEnvelope()
0x634: Pop(0)
0x635: @ SetDeathState()
0x636: Pop(0)
0x637: @ Stop()
0x638: Pop(0)
0x639: @ StopAsync()
0x63a: Pop(0)
0x63b: Stack[-5] = Stack[-21]
0x63c: Push("GetScriptProperty")
0x63d: Push((int) 2)
0x63e: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x63f: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x640: Push("Owner")
0x641: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x642: Pop(1)
0x643: Push(Stack[-4])
0x644: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x645: Push("Owner")
0x646: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x647: Pop(1)
0x648: Pop(0); Push((bool) Stack[-5] == 0)
0x649: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x64a: Stack[-5] = Stack[-21]
0x64b: Push("@GetEyesHeight")
0x64c: Push((int) 1)
0x64d: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x64e: IF (Stack[-1] == 0) GOTO 0x65a; Pop(1)

0x64f: @@ GetEyesHeight(Stack[-2])
0x650: Pop(0)
0x651: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x652: Push(CvectorIndex(Stack[-1], 1))
0x653: Stack[-1] = Stack[-3]
0x654: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x655: Push("head")
0x656: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x657: Pop(1)
0x658: Stack[-3] = (bool) 1
0x659: GOTO 0x65b

0x65a: Stack[-3] = (bool) 0
0x65b: PushEmpty(string)
0x65c: Stack[-1] = Stack[-7]
0x65d: Call2 0x860

0x65e: Pop(1)
0x65f: Push("all")
0x660: @ PlayAnimation(Stack[-1], Stack[-7])
0x661: Pop(1)
0x662: @ WaitForAnimEnd()
0x663: Pop(0)
0x664: Push(Stack[-3])
0x665: IF (Stack[-1] == 0) GOTO 0x66b; Pop(1)

0x666: @ StopAsync()
0x667: Pop(0)
0x668: Push("head")
0x669: @ UnlookAsync(Stack[-1])
0x66a: Pop(1)
0x66b: Push("all")
0x66c: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x66d: Pop(1)
0x66e: @ RemoveEnvelope()
0x66f: Pop(0)
0x670: Stack[-5] = 0
0x671: Return(); Pop(20)

0x672: PushEmpty()
0x673: @ RemoveRTEnvelope()
0x674: Pop(0)
0x675: @ SetDeathState()
0x676: Pop(0)
0x677: @ Stop()
0x678: Pop(0)
0x679: @ StopAsync()
0x67a: Pop(0)
0x67b: @ StopSecondaryAnimation()
0x67c: Pop(0)
0x67d: PushEmpty(string)
0x67e: Stack[-1] = Stack[-2]
0x67f: Call2 0x860

0x680: Pop(1)
0x681: Push("all")
0x682: @ PlayAnimation(Stack[-1], Stack[-2])
0x683: Pop(1)
0x684: @ WaitForAnimEnd()
0x685: Pop(0)
0x686: Push("all")
0x687: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x688: Pop(1)
0x689: @ RemoveEnvelope()
0x68a: Pop(0)
0x68b: Return(); Pop(0)

0x68c: PushEmpty()
0x68d: Return(); Pop(0)

0x68e: PushEmpty()
0x68f: Return(); Pop(0)

0x690: PushEmpty()
0x691: Return(); Pop(0)

0x692: PushEmpty()
0x693: Push((int) 2)
0x694: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x695: IF (Stack[-1] == 0) GOTO 0x699; Pop(1)

0x696: Stack[-2] = "fire"
0x697: Return(); Pop(0)

0x698: GOTO 0x69e

0x699: Push((int) 1)
0x69a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x69b: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x69c: Stack[-2] = "bullet"
0x69d: Return(); Pop(0)

0x69e: Stack[-2] = "phys"
0x69f: Return(); Pop(0)

0x6a0: PushEmpty(cvector, cvector, cvector, cvector)
0x6a1: @ GetPosition(Stack[-2])
0x6a2: Pop(0)
0x6a3: @@ GetPosition(Stack[-1])
0x6a4: Pop(0)
0x6a5: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x6a6: Return(); Pop(4)

0x6a7: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x6a8: @ GetPosition(Stack[-3])
0x6a9: Pop(0)
0x6aa: @@ GetPosition(Stack[-2])
0x6ab: Pop(0)
0x6ac: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x6ad: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x6ae: Return(); Pop(6)

0x6af: PushEmpty(bool, bool)
0x6b0: @ IsPlayerActor(Stack[-3], Stack[-1])
0x6b1: Pop(0)
0x6b2: Stack[-4] = Stack[-1]
0x6b3: Return(); Pop(2)

0x6b4: PushEmpty(bool, bool)
0x6b5: Push("HasProperty")
0x6b6: Push((int) 2)
0x6b7: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x6b8: Pop(1); Push((bool) Stack[-1] == 0)
0x6b9: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x6ba: Stack[-5] = (bool) 0
0x6bb: Return(); Pop(2)

0x6bc: @@ HasProperty(Stack[-3], Stack[-1])
0x6bd: Pop(0)
0x6be: Stack[-5] = Stack[-1]
0x6bf: Return(); Pop(2)

0x6c0: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x6c1: PushEmpty(bool, object, string)
0x6c2: Stack[-2] = Stack[-18]
0x6c3: Stack[-1] = "health"
0x6c4: Call2 0x6b4

0x6c5: Pop(2)
0x6c6: Pop(1); Push((bool) Stack[-1] == 0)
0x6c7: IF (Stack[-1] == 0) GOTO 0x6ca; Pop(1)

0x6c8: Stack[-16] = (float) 0.0
0x6c9: Return(); Pop(12)

0x6ca: PushEmpty(bool, object, string)
0x6cb: Stack[-2] = Stack[-18]
0x6cc: Stack[-1] = "armor"
0x6cd: Call2 0x6b4

0x6ce: Pop(2)
0x6cf: Pop(1); Push((bool) Stack[-1] == 0)
0x6d0: IF (Stack[-1] == 0) GOTO 0x6d3; Pop(1)

0x6d1: Stack[-6] = (int) 0
0x6d2: GOTO 0x6d6

0x6d3: Push("armor")
0x6d4: @@ GetProperty(Stack[-1], Stack[-7])
0x6d5: Pop(1)
0x6d6: Push("armor_")
0x6d7: PushEmpty(string, int)
0x6d8: Stack[-1] = Stack[-16]
0x6d9: Call2 0x692

0x6da: Pop(1)
0x6db: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x6dc: PushEmpty(bool, object, string)
0x6dd: Stack[-2] = Stack[-18]
0x6de: Stack[-1] = Stack[-8]
0x6df: Call2 0x6b4

0x6e0: Pop(2)
0x6e1: Pop(1); Push((bool) Stack[-1] == 0)
0x6e2: IF (Stack[-1] == 0) GOTO 0x6e5; Pop(1)

0x6e3: Stack[-4] = (int) 0
0x6e4: GOTO 0x6e7

0x6e5: @@ GetProperty(Stack[-5], Stack[-4])
0x6e6: Pop(0)
0x6e7: PushEmpty(float, float, float)
0x6e8: Pop(0); Push(Stack[-9] + Stack[-7]);
0x6e9: Push((float)100.0)
0x6ea: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x6eb: Stack[-1] = (int) 1
0x6ec: Call2 0x899

0x6ed: Stack[-6] = Stack[-3]
0x6ee: Pop(3)
0x6ef: Push("health")
0x6f0: @@ GetProperty(Stack[-1], Stack[-3])
0x6f1: Pop(1)
0x6f2: Push((int) 1)
0x6f3: Pop(1); Push(Stack[-1] - Stack[-4]);
0x6f4: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x6f5: Push("health")
0x6f6: PushEmpty(float, float, float, float)
0x6f7: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x6f8: Stack[-2] = (int) 0
0x6f9: Stack[-1] = (int) 1
0x6fa: Call2 0x8a0

0x6fb: Pop(3)
0x6fc: @@ SetProperty(Stack[-2], Stack[-1])
0x6fd: Pop(2)
0x6fe: PushEmpty(bool, object)
0x6ff: Stack[-1] = Stack[-17]
0x700: Call2 0x6af

0x701: Pop(1)
0x702: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x703: PushEmpty(float)
0x704: Stack[-1] = -Stack[-2]; Pop(0);
0x705: Call2 0x8ab

0x706: Pop(1)
0x707: Stack[-16] = Stack[-1]
0x708: Return(); Pop(12)

0x709: PushEmpty(bool, bool)
0x70a: @@ IsDead(Stack[-1])
0x70b: Pop(0)
0x70c: Stack[-4] = Stack[-1]
0x70d: Return(); Pop(2)

0x70e: PushEmpty(object, object, object, object)
0x70f: Pop(0); Push((bool) Stack[-5] == 0)
0x710: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x711: Stack[-6] = (bool) 0
0x712: Return(); Pop(4)

0x713: PushEmpty(bool)
0x714: Stack[-1] = (bool) 0
0x715: Push("IsDead")
0x716: Push((int) 1)
0x717: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x718: IF (Stack[-1] == 0) GOTO 0x71f; Pop(1)

0x719: PushEmpty(bool, object)
0x71a: Stack[-1] = Stack[-8]
0x71b: Call2 0x709

0x71c: Pop(1)
0x71d: IF (Stack[-1] == 0) GOTO 0x71f; Pop(1)

0x71e: Stack[-1] = (bool) 1
0x71f: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x720: Stack[-6] = (bool) 0
0x721: Return(); Pop(4)

0x722: @ GetScene(Stack[-2])
0x723: Pop(0)
0x724: Pop(0); Push((bool) Stack[-2] == 0)
0x725: IF (Stack[-1] == 0) GOTO 0x728; Pop(1)

0x726: Stack[-6] = (bool) 0
0x727: Return(); Pop(4)

0x728: @@ GetScene(Stack[-1])
0x729: Pop(0)
0x72a: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x72b: IF (Stack[-1] == 0) GOTO 0x72e; Pop(1)

0x72c: Stack[-6] = (bool) 0
0x72d: Return(); Pop(4)

0x72e: Stack[-6] = (bool) 1
0x72f: Return(); Pop(4)

0x730: Stack[-1] = 0
0x731: Stack[-2] = 0
0x732: PushEmpty(int, int)
0x733: PushEmpty(bool, object)
0x734: Stack[-1] = Stack[-5]
0x735: Call2 0x70e

0x736: Pop(1)
0x737: Pop(1); Push((bool) Stack[-1] == 0)
0x738: IF (Stack[-1] == 0) GOTO 0x73b; Pop(1)

0x739: Stack[-4] = (bool) 0
0x73a: Return(); Pop(2)

0x73b: PushEmpty(bool, object, string)
0x73c: Stack[-2] = Stack[-6]
0x73d: Stack[-1] = "noaccess"
0x73e: Call2 0x6b4

0x73f: Pop(2)
0x740: Pop(1); Push((bool) Stack[-1] == 0)
0x741: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x742: Stack[-4] = (bool) 1
0x743: Return(); Pop(2)

0x744: Push("noaccess")
0x745: @@ GetProperty(Stack[-1], Stack[-2])
0x746: Pop(1)
0x747: Push((int) 0)
0x748: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x749: Return(); Pop(2)

0x74a: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x74b: Pop(0); Push((bool) Stack[-15] == 0)
0x74c: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x74d: Return(); Pop(14)

0x74e: @ IsDead(Stack[-7])
0x74f: Pop(0)
0x750: Push(Stack[-7])
0x751: IF (Stack[-1] == 0) GOTO 0x753; Pop(1)

0x752: Return(); Pop(14)

0x753: @ GetSecondaryAnimationType(Stack[-6])
0x754: Pop(0)
0x755: Push((int) 0)
0x756: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x757: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x758: Return(); Pop(14)

0x759: @@ GetPosition(Stack[-5])
0x75a: Pop(0)
0x75b: @ GetPosition(Stack[-4])
0x75c: Pop(0)
0x75d: @ GetDirection(Stack[-3])
0x75e: Pop(0)
0x75f: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x760: Push(CvectorIndex(Stack[-2], 0))
0x761: Push(CvectorIndex(Stack[-4], 0))
0x762: Pop(2); Push(Stack[-2] * Stack[-1]);
0x763: Push(CvectorIndex(Stack[-3], 2))
0x764: Push(CvectorIndex(Stack[-5], 2))
0x765: Pop(2); Push(Stack[-2] * Stack[-1]);
0x766: Pop(2); Push(Stack[-2] + Stack[-1]);
0x767: Push((int) 0)
0x768: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x769: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x76a: Stack[-1] = "fhit"
0x76b: GOTO 0x76d

0x76c: Stack[-1] = "bhit"
0x76d: Push("hit_react")
0x76e: Push("1")
0x76f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x770: Push("2")
0x771: Pop(1); Push(Stack[-4] + Stack[-1]);
0x772: Push((int) -10)
0x773: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x774: Pop(4)
0x775: Return(); Pop(14)

0x776: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x777: PushEmpty(bool)
0x778: Stack[-1] = (bool) 0
0x779: PushEmpty(bool)
0x77a: Stack[-1] = (bool) 0
0x77b: Push(Stack[-23])
0x77c: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x77d: Push((int) 4)
0x77e: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x77f: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x780: Stack[-1] = (bool) 1
0x781: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x782: Push((int) 5)
0x783: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x784: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x785: Stack[-1] = (bool) 1
0x786: IF (Stack[-1] == 0) GOTO 0x7b5; Pop(1)

0x787: PushEmpty(cvector, cvector)
0x788: PushEmpty(cvector, object)
0x789: Stack[-1] = Stack[-25]
0x78a: Call2 0x6a0

0x78b: Stack[-3] = Stack[-2]
0x78c: Pop(2)
0x78d: Call2 0x88f

0x78e: Stack[-11] = Stack[-2]
0x78f: Pop(2)
0x790: @ CreateVectorVector(Stack[-8])
0x791: Pop(0)
0x792: Stack[-7] = (int) 1
0x793: Push("hit")
0x794: Pop(1); Push(Stack[-1] + Stack[-8]);
0x795: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x796: Pop(1)
0x797: Pop(0); Push((bool) Stack[-6] == 0)
0x798: IF (Stack[-1] == 0) GOTO 0x79a; Pop(1)

0x799: GOTO 0x7a3

0x79a: Pop(0); Push(Stack[-4] | Stack[-9]);
0x79b: Push((float)0.70711)
0x79c: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x79d: IF (Stack[-1] == 0) GOTO 0x7a0; Pop(1)

0x79e: @@ add(Stack[-5])
0x79f: Pop(0)
0x7a0: Push((int) 1)
0x7a1: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x7a2: GOTO 0x793

0x7a3: @@ size(Stack[-3])
0x7a4: Pop(0)
0x7a5: Push(Stack[-3])
0x7a6: IF (Stack[-1] == 0) GOTO 0x7b4; Pop(1)

0x7a7: @ irand(Stack[-2], Stack[-3])
0x7a8: Pop(0)
0x7a9: @@ get(Stack[-1], Stack[-2])
0x7aa: Pop(0)
0x7ab: PushEmpty(object, int, float, cvector, cvector)
0x7ac: Stack[-5] = Stack[-26]
0x7ad: Stack[-4] = Stack[-25]
0x7ae: Stack[-3] = Stack[-24]
0x7af: Stack[-2] = Stack[-6]
0x7b0: Stack[-1] = -Stack[-14]; Pop(0);
0x7b1: Call2 0x7ba

0x7b2: Pop(5)
0x7b3: Return(); Pop(18)

0x7b4: Stack[-8] = 0
0x7b5: PushEmpty(object)
0x7b6: Stack[-1] = Stack[-22]
0x7b7: Call2 0x74a

0x7b8: Pop(1)
0x7b9: Return(); Pop(18)

0x7ba: PushEmpty(object, object, object, object)
0x7bb: @ GetScene(Stack[-2])
0x7bc: Pop(0)
0x7bd: Push("scripted")
0x7be: Push("blood_dir.xml")
0x7bf: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x7c0: Pop(2)
0x7c1: PushEmpty(object)
0x7c2: Stack[-1] = Stack[-10]
0x7c3: Call2 0x74a

0x7c4: Pop(1)
0x7c5: Return(); Pop(4)

0x7c6: Stack[-1] = 0
0x7c7: Stack[-2] = 0
0x7c8: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x7c9: @@ GetPosition(Stack[-3])
0x7ca: Pop(0)
0x7cb: @ GetPosition(Stack[-2])
0x7cc: Pop(0)
0x7cd: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x7ce: Push(CvectorIndex(Stack[-1], 0))
0x7cf: Push(CvectorIndex(Stack[-2], 2))
0x7d0: @ RotateAsync(Stack[-2], Stack[-1])
0x7d1: Pop(2)
0x7d2: Return(); Pop(6)

0x7d3: PushEmpty(bool, bool)
0x7d4: @ IsLoaded(Stack[-1])
0x7d5: Pop(0)
0x7d6: Stack[-3] = Stack[-1]
0x7d7: Return(); Pop(2)

0x7d8: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x7d9: @@ GetPosition(Stack[-8])
0x7da: Pop(0)
0x7db: @@ GetEyesHeight(Stack[-9])
0x7dc: Pop(0)
0x7dd: Push(CvectorIndex(Stack[-8], 1))
0x7de: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x7df: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x7e0: @ GetPosition(Stack[-7])
0x7e1: Pop(0)
0x7e2: @ GetEyesHeight(Stack[-9])
0x7e3: Pop(0)
0x7e4: Push(CvectorIndex(Stack[-7], 1))
0x7e5: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x7e6: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x7e7: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x7e8: Push(CvectorIndex(Stack[-6], 1))
0x7e9: Stack[-1] = (int) 0
0x7ea: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x7eb: Pop(0); Push(Stack[-6] | Stack[-6]);
0x7ec: Pop(1); Push(Sqrt(Stack[-1]))
0x7ed: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x7ee: Stack[-5] = -Stack[-6]; Pop(0);
0x7ef: Pop(0); Push(Stack[-6] * Stack[-19]);
0x7f0: PushEmpty(cvector, cvector)
0x7f1: Push(CVector(0.0, 1.0, 0.0))
0x7f2: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x7f3: Call2 0x88f

0x7f4: Pop(1)
0x7f5: Push((int) 25)
0x7f6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7f7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7f8: Push(CVector(0.0, 10.0, 0.0))
0x7f9: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x7fa: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x7fb: @ IsOverrideActive(Stack[-2])
0x7fc: Pop(0)
0x7fd: Push(Stack[-2])
0x7fe: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x7ff: Stack[-21] = (bool) 0
0x800: Return(); Pop(18)

0x801: @ StopWorld()
0x802: Pop(0)
0x803: Push((bool) 1)
0x804: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x805: Pop(1)
0x806: Push(CvectorIndex(Stack[-4], 0))
0x807: Push(CvectorIndex(Stack[-5], 2))
0x808: @ Rotate(Stack[-2], Stack[-1])
0x809: Pop(2)
0x80a: PushEmpty(bool)
0x80b: Call2 0x9dd

0x80c: Pop(0)
0x80d: IF (Stack[-1] == 0) GOTO 0x80f; Pop(1)

0x80e: GOTO 0x817

0x80f: Push("head")
0x810: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x811: Pop(1)
0x812: Push(Stack[-1])
0x813: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x814: Push("head")
0x815: @ LookAsyncCamera(Stack[-1])
0x816: Pop(1)
0x817: @ CameraWaitForPlayFinish()
0x818: Pop(0)
0x819: @ ResumeWorld()
0x81a: Pop(0)
0x81b: Stack[-21] = (bool) 1
0x81c: Return(); Pop(18)

0x81d: PushEmpty(bool, bool)
0x81e: Push((bool) 1)
0x81f: @ CameraSwitchToNormal(Stack[-1])
0x820: Pop(1)
0x821: PushEmpty(bool)
0x822: Call2 0x9dd

0x823: Pop(0)
0x824: IF (Stack[-1] == 0) GOTO 0x826; Pop(1)

0x825: GOTO 0x82e

0x826: Push("head")
0x827: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x828: Pop(1)
0x829: Push(Stack[-1])
0x82a: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x82b: Push("head")
0x82c: @ UnlookAsync(Stack[-1])
0x82d: Pop(1)
0x82e: Return(); Pop(2)

0x82f: PushEmpty(bool, float, float, bool, float, float)
0x830: @ lshHasAnimation(Stack[-3], Stack[-7])
0x831: Pop(0)
0x832: Push(Stack[-3])
0x833: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x834: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x835: Pop(0)
0x836: Push((bool) 0)
0x837: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x838: Pop(1)
0x839: GOTO 0x83e

0x83a: Push("Can't find lsh animation : ")
0x83b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x83c: @ Trace(Stack[-1])
0x83d: Pop(1)
0x83e: Return(); Pop(6)

0x83f: PushEmpty(bool, float, float, bool, float, float)
0x840: @ lshHasAnimation(Stack[-3], Stack[-8])
0x841: Pop(0)
0x842: Push(Stack[-3])
0x843: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x844: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x845: Pop(0)
0x846: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x847: Pop(0)
0x848: GOTO 0x84d

0x849: Push("Can't find lsh animation : ")
0x84a: Pop(1); Push(Stack[-1] + Stack[-9]);
0x84b: @ Trace(Stack[-1])
0x84c: Pop(1)
0x84d: Return(); Pop(6)

0x84e: PushEmpty(float, cvector, float, cvector)
0x84f: @@ GetEyesHeight(Stack[-2])
0x850: Pop(0)
0x851: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x852: Push(CvectorIndex(Stack[-1], 1))
0x853: Stack[-1] = Stack[-3]
0x854: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x855: Push("head")
0x856: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x857: Pop(1)
0x858: Return(); Pop(4)

0x859: PushEmpty(bool)
0x85a: Call2 0x9dd

0x85b: Pop(0)
0x85c: IF (Stack[-1] == 0) GOTO 0x85f; Pop(1)

0x85d: @ lshStopSpeech()
0x85e: Pop(0)
0x85f: Return(); Pop(0)

0x860: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x861: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x862: Pop(0)
0x863: Pop(0); Push((bool) Stack[-8] == 0)
0x864: IF (Stack[-1] == 0) GOTO 0x879; Pop(1)

0x865: Stack[-7] = (int) 0
0x866: Push((int) 1)
0x867: Pop(1); Push(Stack[-8] + Stack[-1]);
0x868: Pop(1); Push(Stack[-18] + Stack[-1]);
0x869: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x86a: Pop(1)
0x86b: Pop(0); Push((bool) Stack[-6] == 0)
0x86c: IF (Stack[-1] == 0) GOTO 0x86e; Pop(1)

0x86d: GOTO 0x871

0x86e: Push((int) 1)
0x86f: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x870: GOTO 0x866

0x871: Pop(0); Push((bool) Stack[-7] == 0)
0x872: IF (Stack[-1] == 0) GOTO 0x874; Pop(1)

0x873: Return(); Pop(16)

0x874: @ irand(Stack[-5], Stack[-7])
0x875: Pop(0)
0x876: Push((int) 1)
0x877: Pop(1); Push(Stack[-6] + Stack[-1]);
0x878: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x879: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x87a: Pop(0)
0x87b: Push(Stack[-4])
0x87c: IF (Stack[-1] == 0) GOTO 0x888; Pop(1)

0x87d: @ GetEyesHeight(Stack[-3])
0x87e: Pop(0)
0x87f: @ GetDirection(Stack[-2])
0x880: Pop(0)
0x881: Push((int) 50)
0x882: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x883: Push(CvectorIndex(Stack[-1], 1))
0x884: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x885: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x886: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x887: Pop(0)
0x888: Return(); Pop(16)

0x889: PushEmpty(object, object)
0x88a: @ self(Stack[-1])
0x88b: Pop(0)
0x88c: Stack[-3] = Stack[-1]
0x88d: Return(); Pop(2)

0x88e: Stack[-1] = 0
0x88f: PushEmpty(float, float)
0x890: Pop(0); Push(Stack[-3] | Stack[-3]);
0x891: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x892: Push((float)0.0)
0x893: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x894: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x895: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x896: Return(); Pop(2)

0x897: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x898: Return(); Pop(2)

0x899: PushEmpty()
0x89a: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x89b: IF (Stack[-1] == 0) GOTO 0x89e; Pop(1)

0x89c: Stack[-3] = Stack[-2]
0x89d: GOTO 0x89f

0x89e: Stack[-3] = Stack[-1]
0x89f: Return(); Pop(0)

0x8a0: PushEmpty()
0x8a1: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x8a2: IF (Stack[-1] == 0) GOTO 0x8a5; Pop(1)

0x8a3: Stack[-4] = Stack[-2]
0x8a4: Return(); Pop(0)

0x8a5: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x8a6: IF (Stack[-1] == 0) GOTO 0x8a9; Pop(1)

0x8a7: Stack[-4] = Stack[-1]
0x8a8: Return(); Pop(0)

0x8a9: Stack[-4] = Stack[-3]
0x8aa: Return(); Pop(0)

0x8ab: PushEmpty(object, object)
0x8ac: @ CreateFloatVector(Stack[-1])
0x8ad: Pop(0)
0x8ae: @@ add(Stack[-3])
0x8af: Pop(0)
0x8b0: Push((int) 0)
0x8b1: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x8b2: IF (Stack[-1] == 0) GOTO 0x8b7; Pop(1)

0x8b3: Push((float)0.7)
0x8b4: Push((int) 500)
0x8b5: @ RumblePlay(Stack[-2], Stack[-1])
0x8b6: Pop(2)
0x8b7: Push((int) 15)
0x8b8: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x8b9: Pop(1)
0x8ba: Return(); Pop(2)

0x8bb: Stack[-1] = 0
0x8bc: PushEmpty(float, float)
0x8bd: @ GetGameTime(Stack[-1])
0x8be: Pop(0)
0x8bf: Stack[-3] = Stack[-1]
0x8c0: Return(); Pop(2)

0x8c1: PushEmpty(bool, bool)
0x8c2: @ IsPlayerActor(Stack[-3], Stack[-1])
0x8c3: Pop(0)
0x8c4: Push(Stack[-1])
0x8c5: IF (Stack[-1] == 0) GOTO 0x8c9; Pop(1)

0x8c6: Push("attack")
0x8c7: @ PlayGlobalMusic(Stack[-1])
0x8c8: Pop(1)
0x8c9: Return(); Pop(2)

0x8ca: PushEmpty(object, object)
0x8cb: @ GetScene(Stack[-1])
0x8cc: Pop(0)
0x8cd: Push("battle")
0x8ce: PushEmpty(object)
0x8cf: Call2 0x889

0x8d0: Pop(0)
0x8d1: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x8d2: Pop(2)
0x8d3: Return(); Pop(2)

0x8d4: Stack[-1] = 0
0x8d5: PushEmpty(string, string)
0x8d6: Stack[-1] = "idle"
0x8d7: Push(Stack[-3])
0x8d8: IF (Stack[-1] == 0) GOTO 0x8da; Pop(1)

0x8d9: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x8da: Stack[-4] = Stack[-1]
0x8db: Return(); Pop(2)

0x8dc: PushEmpty(int, bool, int, bool)
0x8dd: Stack[-2] = (int) 0
0x8de: Push("all")
0x8df: PushEmpty(string, int)
0x8e0: Stack[-1] = Stack[-5]
0x8e1: Call2 0x8d5

0x8e2: Pop(1)
0x8e3: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x8e4: Pop(2)
0x8e5: Pop(0); Push((bool) Stack[-1] == 0)
0x8e6: IF (Stack[-1] == 0) GOTO 0x8e8; Pop(1)

0x8e7: GOTO 0x8eb

0x8e8: Push((int) 1)
0x8e9: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x8ea: GOTO 0x8de

0x8eb: Stack[-5] = Stack[-2]
0x8ec: Return(); Pop(4)

0x8ed: PushEmpty(object, object)
0x8ee: PushEmpty(object)
0x8ef: Call2 0x956

0x8f0: Stack[-2] = Stack[-1]
0x8f1: Pop(1)
0x8f2: Push("b1q05PatrolGroup")
0x8f3: Push("pt_b1q05_patrol1")
0x8f4: Push((int) 0)
0x8f5: Push((int) 530956)
0x8f6: PushEmpty(float)
0x8f7: Call2 0x8bc

0x8f8: Pop(0)
0x8f9: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8fa: Pop(5)
0x8fb: PushEmpty()
0x8fc: Call2 0x913

0x8fd: Pop(0)
0x8fe: PushEmpty()
0x8ff: Call2 0x920

0x900: Pop(0)
0x901: Return(); Pop(2)

0x902: Stack[-1] = 0
0x903: PushEmpty()
0x904: PushEmpty(object, string, float)
0x905: PushEmpty(object)
0x906: Call2 0x956

0x907: Stack[-4] = Stack[-1]
0x908: Pop(1)
0x909: Stack[-2] = "pt_b1q05_patrol1"
0x90a: Stack[-1] = (int) 2
0x90b: Call2 0x967

0x90c: Pop(3)
0x90d: PushEmpty(object)
0x90e: Call2 0x956

0x90f: Pop(0)
0x910: @@ ShowMap(Stack[-1])
0x911: Pop(1)
0x912: Return(); Pop(0)

0x913: PushEmpty(object, object)
0x914: Push((int) 582)
0x915: Push((int) 2)
0x916: Push((int) 530951)
0x917: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x918: Pop(3)
0x919: PushEmpty(bool, object, int)
0x91a: Stack[-2] = Stack[-4]
0x91b: Stack[-1] = (int) -1
0x91c: Call2 0x93a

0x91d: Pop(3)
0x91e: Return(); Pop(2)

0x91f: Stack[-1] = 0
0x920: PushEmpty(object, object)
0x921: Push((int) 583)
0x922: Push((int) 2)
0x923: Push((int) 530952)
0x924: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x925: Pop(3)
0x926: PushEmpty(bool, object, int)
0x927: Stack[-2] = Stack[-4]
0x928: Stack[-1] = (int) 582
0x929: Call2 0x93a

0x92a: Pop(3)
0x92b: Return(); Pop(2)

0x92c: Stack[-1] = 0
0x92d: PushEmpty(object, object)
0x92e: @ GetDiaryRoot(Stack[-1])
0x92f: Pop(0)
0x930: Pop(0); Push((bool) Stack[-1] == 0)
0x931: IF (Stack[-1] == 0) GOTO 0x937; Pop(1)

0x932: Push("Can't retrieve diary root")
0x933: @ Trace(Stack[-1])
0x934: Pop(1)
0x935: Stack[-3] = (bool) 0
0x936: Return(); Pop(2)

0x937: Stack[-3] = Stack[-1]
0x938: Return(); Pop(2)

0x939: Stack[-1] = 0
0x93a: PushEmpty(object, object, int, object, object, int)
0x93b: PushEmpty(object)
0x93c: Call2 0x92d

0x93d: Stack[-4] = Stack[-1]
0x93e: Pop(1)
0x93f: @@ Find(Stack[-7], Stack[-2])
0x940: Pop(0)
0x941: Pop(0); Push((bool) Stack[-2] == 0)
0x942: IF (Stack[-1] == 0) GOTO 0x949; Pop(1)

0x943: Push("Can't find diary parent with id: ")
0x944: Pop(1); Push(Stack[-1] + Stack[-8]);
0x945: @ Trace(Stack[-1])
0x946: Pop(1)
0x947: Stack[-9] = (bool) 0
0x948: Return(); Pop(6)

0x949: @@ AddChild(Stack[-8])
0x94a: Pop(0)
0x94b: Push((int) 7)
0x94c: @ SendWorldWndMessage(Stack[-1])
0x94d: Pop(1)
0x94e: @@ GetCategory(Stack[-1])
0x94f: Pop(0)
0x950: @ SetDiarySection(Stack[-1])
0x951: Pop(0)
0x952: Stack[-9] = (bool) 0
0x953: Return(); Pop(6)

0x954: Stack[-2] = 0
0x955: Stack[-3] = 0
0x956: PushEmpty(object, object, object, object)
0x957: @ GetMainOutdoorScene(Stack[-2])
0x958: Pop(0)
0x959: Pop(0); Push((bool) Stack[-2] == 0)
0x95a: IF (Stack[-1] == 0) GOTO 0x961; Pop(1)

0x95b: Push("Can't find main outdoor scene")
0x95c: @ Trace(Stack[-1])
0x95d: Pop(1)
0x95e: Stack[-1] = 0
0x95f: Stack[-5] = Stack[-1]
0x960: Return(); Pop(4)

0x961: @@ GetMap(Stack[-1])
0x962: Pop(0)
0x963: Stack[-5] = Stack[-1]
0x964: Return(); Pop(4)

0x965: Stack[-1] = 0
0x966: Stack[-2] = 0
0x967: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x968: @ GetMainOutdoorScene(Stack[-2])
0x969: Pop(0)
0x96a: Pop(0); Push((bool) Stack[-2] == 0)
0x96b: IF (Stack[-1] == 0) GOTO 0x970; Pop(1)

0x96c: Push("Can't find main outdoor scene")
0x96d: @ Trace(Stack[-1])
0x96e: Pop(1)
0x96f: Return(); Pop(8)

0x970: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x971: Pop(0)
0x972: Pop(0); Push((bool) Stack[-1] == 0)
0x973: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x974: Push("Warning: outdoor scene locator ")
0x975: Pop(1); Push(Stack[-1] + Stack[-11]);
0x976: Push(" doesnt exist")
0x977: Pop(2); Push(Stack[-2] + Stack[-1]);
0x978: @ Trace(Stack[-1])
0x979: Pop(1)
0x97a: @@ GetMap(Stack[-11])
0x97b: Pop(0)
0x97c: Pop(0); Push((bool) Stack[-11] == 0)
0x97d: IF (Stack[-1] == 0) GOTO 0x982; Pop(1)

0x97e: Push("Can't find map")
0x97f: @ Trace(Stack[-1])
0x980: Pop(1)
0x981: Return(); Pop(8)

0x982: Push(CvectorIndex(Stack[-4], 0))
0x983: Push(CvectorIndex(Stack[-5], 2))
0x984: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x985: Pop(2)
0x986: Return(); Pop(8)

0x987: Stack[-2] = 0
0x988: PushEmpty(int, int)
0x989: Push("branch")
0x98a: @ GetVariable(Stack[-1], Stack[-2])
0x98b: Pop(1)
0x98c: Push((int) 0)
0x98d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x98e: IF (Stack[-1] == 0) GOTO 0x992; Pop(1)

0x98f: Stack[-3] = (int) 1
0x990: Return(); Pop(2)

0x991: GOTO 0x997

0x992: Push((int) 1)
0x993: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x994: IF (Stack[-1] == 0) GOTO 0x997; Pop(1)

0x995: Stack[-3] = (int) 2
0x996: Return(); Pop(2)

0x997: Stack[-3] = (int) 3
0x998: Return(); Pop(2)

0x999: PushEmpty(int, int)
0x99a: Push("branch")
0x99b: @ GetVariable(Stack[-1], Stack[-2])
0x99c: Pop(1)
0x99d: Stack[-3] = Stack[-1]
0x99e: Return(); Pop(2)

0x99f: PushEmpty()
0x9a0: PushEmpty(int)
0x9a1: Call2 0x999

0x9a2: Pop(0)
0x9a3: Push((int) 1)
0x9a4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9a5: IF (Stack[-1] == 0) GOTO 0x9a9; Pop(1)

0x9a6: @ WorkWithCorpse(Stack[-1])
0x9a7: Pop(0)
0x9a8: GOTO 0x9ab

0x9a9: @ Barter(Stack[-1])
0x9aa: Pop(0)
0x9ab: Return(); Pop(0)

0x9ac: PushEmpty(object, int, bool, object, int, bool)
0x9ad: @ CreateInvItem(Stack[-3])
0x9ae: Pop(0)
0x9af: @@ SetItemName(Stack[-7])
0x9b0: Pop(0)
0x9b1: Push("Organ")
0x9b2: Push((int) 1)
0x9b3: @@ SetProperty(Stack[-2], Stack[-1])
0x9b4: Pop(2)
0x9b5: @@ GetItemID(Stack[-2])
0x9b6: Pop(0)
0x9b7: Push((int) 0)
0x9b8: Push((int) 1)
0x9b9: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x9ba: Pop(2)
0x9bb: Return(); Pop(6)

0x9bc: Stack[-3] = 0
0x9bd: PushEmpty(int)
0x9be: Call2 0x999

0x9bf: Pop(0)
0x9c0: Push((int) 1)
0x9c1: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x9c2: IF (Stack[-1] == 0) GOTO 0x9c4; Pop(1)

0x9c3: Return(); Pop(0)

0x9c4: PushEmpty(string)
0x9c5: Stack[-1] = "liver"
0x9c6: Call2 0x9ac

0x9c7: Pop(1)
0x9c8: PushEmpty(string)
0x9c9: Stack[-1] = "kidney"
0x9ca: Call2 0x9ac

0x9cb: Pop(1)
0x9cc: PushEmpty(string)
0x9cd: Stack[-1] = "heart"
0x9ce: Call2 0x9ac

0x9cf: Pop(1)
0x9d0: PushEmpty(string)
0x9d1: Stack[-1] = "blood"
0x9d2: Call2 0x9ac

0x9d3: Pop(1)
0x9d4: Return(); Pop(0)

0x9d5: Stack[-1] = (int) 515572
0x9d6: Return(); Pop(0)

0x9d7: Stack[-1] = (int) 504031
0x9d8: Return(); Pop(0)

0x9d9: Stack[-1] = "ui/NPC_Citizen2.png"
0x9da: Return(); Pop(0)

0x9db: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x9dc: Return(); Pop(0)

0x9dd: Stack[-1] = (bool) 0
0x9de: Return(); Pop(0)

0x9df: PushEmpty(int, int)
0x9e0: Push("b1q05ToAttack")
0x9e1: @ GetVariable(Stack[-1], Stack[-2])
0x9e2: Pop(1)
0x9e3: Push((int) 0)
0x9e4: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x9e5: Return(); Pop(2)

0x9e6: Push("b1q05ToAttack")
0x9e7: Push((int) 1)
0x9e8: @ SetVariable(Stack[-2], Stack[-1])
0x9e9: Pop(2)
0x9ea: Return(); Pop(0)

0x9eb: PushEmpty(object, object)
0x9ec: @ GetScene(Stack[-1])
0x9ed: Pop(0)
0x9ee: PushEmpty(object)
0x9ef: Call2 0x889

0x9f0: Pop(0)
0x9f1: @@ RemoveStationaryActor(Stack[-1])
0x9f2: Pop(1)
0x9f3: PushEmpty()
0x9f4: Call2 0x9bd

0x9f5: Pop(0)
0x9f6: PushEmpty(object)
0x9f7: Stack[-1] = Stack[-4]
0x9f8: Push(-1, 0); TaskCall(5)
0x9f9: Call2 0x5fe

0x9fa: Pop(-1, 0); TaskReturn
0x9fb: Pop(1)
0x9fc: Return(); Pop(2)

0x9fd: Stack[-1] = 0
0x9fe: PushEmpty()
0x9ff: PushEmpty(object, int, float)
0xa00: Stack[-3] = Stack[-7]
0xa01: Stack[-2] = Stack[-6]
0xa02: Stack[-1] = Stack[-5]
0xa03: Call2 0x776

0xa04: Pop(3)
0xa05: Return(); Pop(0)

0xa06: PushEmpty()
0xa07: PushEmpty(object, int, float, cvector, cvector)
0xa08: Stack[-5] = Stack[-11]
0xa09: Stack[-4] = Stack[-10]
0xa0a: Stack[-3] = Stack[-9]
0xa0b: Stack[-2] = Stack[-7]
0xa0c: Stack[-1] = Stack[-6]
0xa0d: Call2 0x7ba

0xa0e: Pop(5)
0xa0f: Return(); Pop(0)

0xa10: PushEmpty(float, float)
0xa11: Push("health")
0xa12: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa13: IF (Stack[-1] == 0) GOTO 0xa1c; Pop(1)

0xa14: Push("health")
0xa15: @ GetProperty(Stack[-1], Stack[-2])
0xa16: Pop(1)
0xa17: Push((int) 0)
0xa18: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xa19: IF (Stack[-1] == 0) GOTO 0xa1c; Pop(1)

0xa1a: @ SignalDeath(Stack[-4])
0xa1b: Pop(0)
0xa1c: Return(); Pop(2)

0xa1d: PushEmpty()
0xa1e: PushEmpty(object)
0xa1f: Stack[-1] = Stack[-2]
0xa20: Call2 0x9eb

0xa21: Pop(1)
0xa22: Return(); Pop(0)

