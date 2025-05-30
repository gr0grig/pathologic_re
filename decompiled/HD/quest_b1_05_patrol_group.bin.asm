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
	quest_b1_05
	attack
	player
	head
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
	b1q05ToAttack1
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
	Trigger (2 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	AddItem (4 args)
	SetVariable (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0xc4
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0xcd Vars = (object)
		EVENT_1 Op = 0xe7 Vars = (object)
		EVENT_3 Op = 0xfb Vars = (object)
		EVENT_17 Op = 0x10f Vars = (object)
		EVENT_26 Op = 0x116 Vars = (string)
		EVENT_7 Op = 0x15a Vars = (int)
	GTASK_3 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_4 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x4ae Vars = (int)
		EVENT_1 Op = 0x4c9 Vars = (object)
		EVENT_2 Op = 0x4d8 Vars = (object)
		EVENT_10 Op = 0x55e Vars = (object)
		EVENT_41 Op = 0x569 Vars = (object)
	GTASK_5  Params = 1
		EVENT_0 Op = 0x58c Vars = (object)
		EVENT_22 Op = 0x60b Vars = (object, int, float, float)
		EVENT_16 Op = 0x60d Vars = (object, string)
		EVENT_41 Op = 0x60f Vars = (object)

Events:
EVENT_22 Op = 0x8e9 Vars = (object, int, float, float)
EVENT_43 Op = 0x8f1 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x8fb Vars = (object, string)
EVENT_41 Op = 0x908 Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x757

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x8c2

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x8c0

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x8c4

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x8c6

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x873

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
0x41: Call2 0x79c

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
0x54: Push((int) 530939)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 530940)
0x5a: Push((int) -1)
0x5b: Push((int) 32267)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 530966)
0x5f: Push((int) -1)
0x60: Push((int) 32287)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x8c8

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x7ae

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
0x86: Call2 0x8c8

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
0x96: Call2 0x7be

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x7d8

0x9f: Pop(0)
0xa0: Push((int) 32266)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral"
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 530939)
0xa8: @@ SetMessage(Stack[-1])
0xa9: Pop(1)
0xaa: @@ ClearReplies()
0xab: Pop(0)
0xac: Push((int) 530940)
0xad: Push((int) -1)
0xae: Push((int) 32267)
0xaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0: Pop(3)
0xb1: Push((int) 530966)
0xb2: Push((int) -1)
0xb3: Push((int) 32287)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb8: PushEmpty(bool)
0xb9: Call2 0x8c8

0xba: Pop(0)
0xbb: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbc: @ lshStopAnimation()
0xbd: Pop(0)
0xbe: GOTO 0xc1

0xbf: @ StopAnimation()
0xc0: Pop(0)
0xc1: Return(); Pop(0)

0xc2: GOTO 0x9b

0xc3: Return(); Pop(0)

0xc4: Push((bool) 1)
0xc5: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc6: PushEmpty(float, float)
0xc7: Stack[-2] = (int) 300
0xc8: Stack[-1] = (int) 100
0xc9: Call2 0x130

0xca: Pop(2)
0xcb: GOTO 0xc4

0xcc: Return(); Pop(0)

0xcd: PushEmpty()
0xce: PushEmpty()
0xcf: Call2 0x171

0xd0: Pop(0)
0xd1: PushEmpty(bool)
0xd2: Call2 0x8ca

0xd3: Pop(0)
0xd4: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd5: PushEmpty(object)
0xd6: Stack[-1] = Stack[-2]
0xd7: Push(-1, 6); TaskCall(3)
0xd8: Call2 0x1d5

0xd9: Pop(-1, 6); TaskReturn
0xda: Pop(1)
0xdb: PushEmpty(int, object)
0xdc: Stack[-1] = Stack[-3]
0xdd: Push(-2, 1); TaskCall(0)
0xde: Call2 0x0

0xdf: Pop(-2, 1); TaskReturn
0xe0: Pop(2)
0xe1: PushEmpty(bool, string, string)
0xe2: Stack[-2] = "quest_b1_05"
0xe3: Stack[-1] = "attack"
0xe4: Call2 0x83b

0xe5: Pop(3)
0xe6: Return(); Pop(0)

0xe7: PushEmpty()
0xe8: PushEmpty(bool)
0xe9: Stack[-1] = (bool) 0
0xea: PushEmpty(bool)
0xeb: Call2 0x8ca

0xec: Pop(0)
0xed: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xee: PushEmpty(bool, object)
0xef: Stack[-1] = Stack[-4]
0xf0: Call2 0x62e

0xf1: Pop(1)
0xf2: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf3: Stack[-1] = (bool) 1
0xf4: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf5: PushEmpty(bool, string, string)
0xf6: Stack[-2] = "quest_b1_05"
0xf7: Stack[-1] = "attack"
0xf8: Call2 0x83b

0xf9: Pop(3)
0xfa: Return(); Pop(0)

0xfb: PushEmpty()
0xfc: PushEmpty(bool)
0xfd: Stack[-1] = (bool) 0
0xfe: PushEmpty(bool)
0xff: Call2 0x8ca

0x100: Pop(0)
0x101: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x102: PushEmpty(bool, object)
0x103: Stack[-1] = Stack[-4]
0x104: Call2 0x62e

0x105: Pop(1)
0x106: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x107: Stack[-1] = (bool) 1
0x108: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x109: PushEmpty(bool, string, string)
0x10a: Stack[-2] = "quest_b1_05"
0x10b: Stack[-1] = "attack"
0x10c: Call2 0x83b

0x10d: Pop(3)
0x10e: Return(); Pop(0)

0x10f: PushEmpty()
0x110: PushEmpty(bool, string, string)
0x111: Stack[-2] = "quest_b1_05"
0x112: Stack[-1] = "attack"
0x113: Call2 0x83b

0x114: Pop(3)
0x115: Return(); Pop(0)

0x116: PushEmpty(object, object)
0x117: Push("attack")
0x118: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x11a: PushEmpty()
0x11b: Call2 0x171

0x11c: Pop(0)
0x11d: PushEmpty()
0x11e: Call2 0x8d1

0x11f: Pop(0)
0x120: Push("player")
0x121: @ FindActor(Stack[-2], Stack[-1])
0x122: Pop(1)
0x123: PushEmpty(bool, object)
0x124: Stack[-1] = Stack[-3]
0x125: Call2 0x6b1

0x126: Pop(1)
0x127: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x128: PushEmpty(object)
0x129: Stack[-1] = Stack[-2]
0x12a: Push(-1, 6); TaskCall(3)
0x12b: Call2 0x1d5

0x12c: Pop(-1, 6); TaskReturn
0x12d: Pop(1)
0x12e: Stack[-1] = 0
0x12f: Return(); Pop(2)

0x130: PushEmpty()
0x131: PushEmpty(bool)
0x132: Call2 0x752

0x133: Pop(0)
0x134: Pop(1); Push((bool) Stack[-1] == 0)
0x135: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x136: Return(); Pop(0)

0x137: Push("player")
0x138: @ FindActor(Stack[-4], Stack[-1])
0x139: Pop(1)
0x13a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x13b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x13c: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x13d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x13e: Push((int) 10)
0x13f: Push((float)1.0)
0x140: @ SetTimer(Stack[-2], Stack[-1])
0x141: Pop(2)
0x142: PushEmpty()
0x143: Call2 0x17f

0x144: Pop(0)
0x145: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x146: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x147: Push((int) 10)
0x148: @ KillTimer(Stack[-1])
0x149: Pop(1)
0x14a: Return(); Pop(0)

0x14b: PushEmpty(float, float)
0x14c: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x14d: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14e: Stack[-3] = (bool) 0
0x14f: Return(); Pop(2)

0x150: PushEmpty(float, object)
0x151: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x152: Call2 0x626

0x153: Pop(1)
0x154: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x155: Push( Stack[2 + Tasks[-1].StackPointer] )
0x156: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x157: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x158: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x159: Return(); Pop(2)

0x15a: PushEmpty()
0x15b: Push((int) 10)
0x15c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15d: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x15e: PushEmpty(bool)
0x15f: Call2 0x14b

0x160: Pop(0)
0x161: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x162: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x163: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x164: PushEmpty(object)
0x165: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x166: Call2 0x7cd

0x167: Pop(1)
0x168: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x169: GOTO 0x170

0x16a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x16b: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16c: Push("head")
0x16d: @ UnlookAsync(Stack[-1])
0x16e: Pop(1)
0x16f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x170: Return(); Pop(0)

0x171: PushEmpty()
0x172: Call2 0x1d0

0x173: Pop(0)
0x174: Push((int) 10)
0x175: @ KillTimer(Stack[-1])
0x176: Pop(1)
0x177: Push( Stack[2 + Tasks[-1].StackPointer] )
0x178: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x179: Push("head")
0x17a: @ UnlookAsync(Stack[-1])
0x17b: Pop(1)
0x17c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x17d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x17e: Return(); Pop(0)

0x17f: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x180: @ WaitForAnimEnd()
0x181: Pop(0)
0x182: PushEmpty(bool)
0x183: Call2 0x752

0x184: Pop(0)
0x185: Pop(1); Push((bool) Stack[-1] == 0)
0x186: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x187: Return(); Pop(14)

0x188: PushEmpty(int)
0x189: Call2 0x862

0x18a: Stack[-8] = Stack[-1]
0x18b: Pop(1)
0x18c: Stack[-6] = (int) 0
0x18d: PushEmpty(bool)
0x18e: Stack[-1] = (bool) 0
0x18f: Push((int) 5)
0x190: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x191: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x192: PushEmpty(bool)
0x193: Call2 0x752

0x194: Pop(0)
0x195: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x196: Stack[-1] = (bool) 1
0x197: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x198: Push((int) 3)
0x199: @ irand(Stack[-6], Stack[-1])
0x19a: Pop(1)
0x19b: Push((int) 0)
0x19c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x19d: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x19e: Push(Stack[-7])
0x19f: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1a0: @ irand(Stack[-4], Stack[-7])
0x1a1: Pop(0)
0x1a2: Push("all")
0x1a3: PushEmpty(string, int)
0x1a4: Stack[-1] = Stack[-7]
0x1a5: Call2 0x85b

0x1a6: Pop(1)
0x1a7: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a8: Pop(2)
0x1a9: @ WaitForAnimEnd(Stack[-3])
0x1aa: Pop(0)
0x1ab: Pop(0); Push((bool) Stack[-3] == 0)
0x1ac: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1ad: GOTO 0x1cb

0x1ae: GOTO 0x1c0

0x1af: Push((int) 1)
0x1b0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1b2: Push((int) 4)
0x1b3: @ rand(Stack[-3], Stack[-1])
0x1b4: Pop(1)
0x1b5: Push((int) 1)
0x1b6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1b7: @ Sleep(Stack[-1], Stack[-2])
0x1b8: Pop(1)
0x1b9: Pop(0); Push((bool) Stack[-1] == 0)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1bb: GOTO 0x1cb

0x1bc: GOTO 0x1c0

0x1bd: Push(Stack[-6])
0x1be: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bf: GOTO 0x1cb

0x1c0: PushEmpty(bool)
0x1c1: Call2 0x1ce

0x1c2: Pop(0)
0x1c3: Pop(1); Push((bool) Stack[-1] == 0)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c5: GOTO 0x1cb

0x1c6: @ ResetAAS()
0x1c7: Pop(0)
0x1c8: Push((int) 1)
0x1c9: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1ca: GOTO 0x18d

0x1cb: @ ResetAAS()
0x1cc: Pop(0)
0x1cd: Return(); Pop(14)

0x1ce: Stack[-1] = (bool) 1
0x1cf: Return(); Pop(0)

0x1d0: @ StopAnimation()
0x1d1: Pop(0)
0x1d2: @ StopGroup0()
0x1d3: Pop(0)
0x1d4: Return(); Pop(0)

0x1d5: PushEmpty()
0x1d6: PushEmpty(object, bool, float)
0x1d7: Stack[-3] = Stack[-4]
0x1d8: Stack[-2] = (bool) 1
0x1d9: Stack[-1] = (float) 180.0
0x1da: Call2 0x1e7

0x1db: Pop(3)
0x1dc: Push((int) 1)
0x1dd: @ Sleep(Stack[-1])
0x1de: Pop(1)
0x1df: GOTO 0x1d6

0x1e0: Return(); Pop(0)

0x1e1: PushEmpty()
0x1e2: Stack[-3] = (float) 0.1
0x1e3: Return(); Pop(0)

0x1e4: PushEmpty()
0x1e5: Stack[-3] = (int) 0
0x1e6: Return(); Pop(0)

0x1e7: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x1e8: PushEmpty()
0x1e9: Call2 0x2cc

0x1ea: Pop(0)
0x1eb: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x1ec: Push("@GetAttackDistance")
0x1ed: Push((int) 1)
0x1ee: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f0: @@ GetAttackDistance(Stack[-11])
0x1f1: Pop(0)
0x1f2: Push((int) 50)
0x1f3: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x1f4: GOTO 0x1f6

0x1f5: Stack[-11] = Stack[-23]
0x1f6: Push((int) 150)
0x1f7: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f9: Stack[-11] = (int) 150
0x1fa: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1fb: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x1fc: @ IsPlayerActor(Stack[-0], Stack[-8])
0x1fd: Pop(0)
0x1fe: Push(Stack[-8])
0x1ff: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x200: Push("attack")
0x201: @ PlayGlobalMusic(Stack[-1])
0x202: Pop(1)
0x203: PushEmpty(object)
0x204: Call2 0x808

0x205: Pop(0)
0x206: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x207: Pop(1)
0x208: Push(Stack[-24])
0x209: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20a: Stack[-7] = (bool) 0
0x20b: GOTO 0x20d

0x20c: Stack[-7] = (bool) 1
0x20d: Push((float)400.0)
0x20e: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x20f: PushEmpty(bool)
0x210: Stack[-1] = (bool) 0
0x211: PushEmpty(bool, object)
0x212: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x213: Call2 0x6b1

0x214: Pop(1)
0x215: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x216: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x217: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x218: Stack[-1] = (bool) 1
0x219: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x21a: PushEmpty()
0x21b: Call2 0x469

0x21c: Pop(0)
0x21d: @@ GetPFPosition(Stack[-10])
0x21e: Pop(0)
0x21f: @ GetPFPosition(Stack[-9])
0x220: Pop(0)
0x221: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x222: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x223: Pop(0); Push(Stack[-6] * Stack[-6]);
0x224: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x225: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x226: PushEmpty(bool, object, float, float, bool, bool)
0x227: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x228: Stack[-4] = Stack[-17]
0x229: Stack[-3] = (float) 10000.0
0x22a: Stack[-2] = (bool) 1
0x22b: Stack[-1] = (bool) 0
0x22c: Push(-6, 3); TaskCall(4)
0x22d: Call2 0x47d

0x22e: Pop(-6, 3); TaskReturn
0x22f: Pop(5)
0x230: Pop(1); Push((bool) Stack[-1] == 0)
0x231: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x232: GOTO 0x2bb

0x233: Stack[-7] = (bool) 0
0x234: GOTO 0x2ba

0x235: Pop(0); Push(Stack[-23] * Stack[-23]);
0x236: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x238: @@ GetPFPosition(Stack[-3])
0x239: Pop(0)
0x23a: @ CanReachByPF(Stack[-2], Stack[-3])
0x23b: Pop(0)
0x23c: Pop(0); Push((bool) Stack[-2] == 0)
0x23d: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x23e: PushEmpty(bool, object, float, float, bool, bool)
0x23f: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x240: Stack[-4] = Stack[-17]
0x241: Stack[-3] = (float) 10000.0
0x242: Stack[-2] = (bool) 1
0x243: Stack[-1] = (bool) 0
0x244: Push(-6, 3); TaskCall(4)
0x245: Call2 0x47d

0x246: Pop(-6, 3); TaskReturn
0x247: Pop(5)
0x248: Pop(1); Push((bool) Stack[-1] == 0)
0x249: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x24a: GOTO 0x2bb

0x24b: Stack[-7] = (bool) 0
0x24c: GOTO 0x20f

0x24d: Pop(0); Push((bool) Stack[-7] == 0)
0x24e: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x24f: PushEmpty(object)
0x250: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x251: Call2 0x747

0x252: Pop(1)
0x253: Push("all")
0x254: Push("attack_on")
0x255: @ PlayAnimation(Stack[-2], Stack[-1])
0x256: Pop(2)
0x257: @ WaitForAnimEnd()
0x258: Pop(0)
0x259: PushEmpty()
0x25a: Call2 0x469

0x25b: Pop(0)
0x25c: @ StopAsync()
0x25d: Pop(0)
0x25e: Stack[-7] = (bool) 1
0x25f: PushEmpty(bool, object)
0x260: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x261: Call2 0x6b1

0x262: Pop(1)
0x263: Pop(1); Push((bool) Stack[-1] == 0)
0x264: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x265: GOTO 0x2bb

0x266: @ rand(Stack[-1])
0x267: Pop(0)
0x268: PushEmpty(bool)
0x269: Stack[-1] = (bool) 1
0x26a: Push((float)0.25)
0x26b: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x26c: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x26d: PushEmpty(bool)
0x26e: Call2 0x43e

0x26f: Pop(0)
0x270: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x271: Stack[-1] = (bool) 0
0x272: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x273: @ Face(Stack[-0])
0x274: Pop(0)
0x275: PushEmpty()
0x276: Call2 0x470

0x277: Pop(0)
0x278: Push("all")
0x279: Push("attack_stay")
0x27a: @ PlayAnimation(Stack[-2], Stack[-1])
0x27b: Pop(2)
0x27c: PushEmpty(bool, float)
0x27d: Stack[-1] = Stack[-25]
0x27e: Call2 0x3ba

0x27f: Pop(2)
0x280: @ StopAsync()
0x281: Pop(0)
0x282: GOTO 0x2b1

0x283: @ Face(Stack[-0])
0x284: Pop(0)
0x285: Push("all")
0x286: Push("fjump")
0x287: @ PlayAnimation(Stack[-2], Stack[-1])
0x288: Pop(2)
0x289: @ WaitForAnimEnd()
0x28a: Pop(0)
0x28b: PushEmpty()
0x28c: Call2 0x469

0x28d: Pop(0)
0x28e: Push(CVector(0.0, 0.0, 0.0))
0x28f: @ SetSpeed(Stack[-1])
0x290: Pop(1)
0x291: @ Stop()
0x292: Pop(0)
0x293: @ StopAsync()
0x294: Pop(0)
0x295: PushEmpty(bool)
0x296: Call2 0x43e

0x297: Pop(0)
0x298: Pop(1); Push((bool) Stack[-1] == 0)
0x299: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x29a: PushEmpty(bool, object)
0x29b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29c: Call2 0x6b1

0x29d: Pop(1)
0x29e: Pop(1); Push((bool) Stack[-1] == 0)
0x29f: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x2a0: GOTO 0x2bb

0x2a1: @@ GetPFPosition(Stack[-10])
0x2a2: Pop(0)
0x2a3: @ GetPFPosition(Stack[-9])
0x2a4: Pop(0)
0x2a5: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x2a6: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2a7: Pop(0); Push(Stack[-23] * Stack[-23]);
0x2a8: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2aa: PushEmpty(bool, float)
0x2ab: Stack[-1] = Stack[-25]
0x2ac: Call2 0x316

0x2ad: Pop(1)
0x2ae: Pop(1); Push((bool) Stack[-1] == 0)
0x2af: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2b0: GOTO 0x2bb

0x2b1: GOTO 0x2ba

0x2b2: PushEmpty(bool, float)
0x2b3: Stack[-1] = Stack[-25]
0x2b4: Call2 0x316

0x2b5: Pop(1)
0x2b6: Pop(1); Push((bool) Stack[-1] == 0)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b8: GOTO 0x2bb

0x2b9: Stack[-7] = (bool) 1
0x2ba: GOTO 0x20f

0x2bb: @ WaitForAnimEnd()
0x2bc: Pop(0)
0x2bd: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2be: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2bf: Return(); Pop(22)

0x2c0: Push("all")
0x2c1: Push("attack_off")
0x2c2: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c3: Pop(2)
0x2c4: @ WaitForAnimEnd()
0x2c5: Pop(0)
0x2c6: Push(Stack[-8])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c8: Push((float)2.0)
0x2c9: @ Sleep(Stack[-1])
0x2ca: Pop(1)
0x2cb: Return(); Pop(22)

0x2cc: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x2cd: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x2ce: Push("all")
0x2cf: Push("attack_begin")
0x2d0: Push((int) 1)
0x2d1: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x2d2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d3: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x2d4: Pop(2)
0x2d5: Pop(0); Push((bool) Stack[-3] == 0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d7: GOTO 0x2db

0x2d8: Push((int) 1)
0x2d9: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x2da: GOTO 0x2ce

0x2db: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x2dc: Push("attack")
0x2dd: Push((int) 1)
0x2de: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x2df: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2e0: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x2e1: Pop(1)
0x2e2: Pop(0); Push((bool) Stack[-2] == 0)
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e4: GOTO 0x2e8

0x2e5: Push((int) 1)
0x2e6: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x2e7: GOTO 0x2dc

0x2e8: Push("all")
0x2e9: Push("bjump")
0x2ea: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x2eb: Pop(2)
0x2ec: Push(CvectorIndex(Stack[-1], 2))
0x2ed: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x2ee: Return(); Pop(6)

0x2ef: PushEmpty(object, float, float, object, float, float)
0x2f0: Push((float)0.9)
0x2f1: Pop(1); Push(Stack[-9] * Stack[-1]);
0x2f2: @ GetVictim(Stack[-1], Stack[-4])
0x2f3: Pop(1)
0x2f4: @ ReportAttack(Stack[-0])
0x2f5: Pop(0)
0x2f6: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x2f7: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x2f8: PushEmpty(float, object, int)
0x2f9: Stack[-2] = Stack[-6]
0x2fa: Stack[-1] = Stack[-10]
0x2fb: Call2 0x1e1

0x2fc: Stack[-5] = Stack[-3]
0x2fd: Pop(3)
0x2fe: PushEmpty(float, object, float, int)
0x2ff: Stack[-3] = Stack[-7]
0x300: Stack[-2] = Stack[-6]
0x301: PushEmpty(int, object, int)
0x302: Stack[-2] = Stack[-10]
0x303: Stack[-1] = Stack[-14]
0x304: Call2 0x1e4

0x305: Stack[-4] = Stack[-3]
0x306: Pop(3)
0x307: Call2 0x63f

0x308: Stack[-5] = Stack[-4]
0x309: Pop(4)
0x30a: PushEmpty(int)
0x30b: Call2 0x46e

0x30c: Pop(0)
0x30d: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x30e: Pop(1)
0x30f: PushEmpty(object, float)
0x310: Stack[-2] = Stack[-5]
0x311: Stack[-1] = Stack[-3]
0x312: Call2 0x475

0x313: Pop(2)
0x314: Return(); Pop(6)

0x315: Stack[-3] = 0
0x316: PushEmpty(int, bool, int, string, int, bool, int, string)
0x317: PushEmpty()
0x318: Call2 0x469

0x319: Pop(0)
0x31a: @ irand(Stack[-4], Stack[-1])
0x31b: Pop(0)
0x31c: Push((int) 1)
0x31d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x31e: @ Face(Stack[-0])
0x31f: Pop(0)
0x320: Push((bool) 1)
0x321: @ SetAttackState(Stack[-1])
0x322: Pop(1)
0x323: PushEmpty()
0x324: Call2 0x850

0x325: Pop(0)
0x326: Push("all")
0x327: Push("attack_begin")
0x328: Pop(1); Push(Stack[-1] + Stack[-6]);
0x329: @ PlayAnimation(Stack[-2], Stack[-1])
0x32a: Pop(2)
0x32b: @ WaitForAnimEnd()
0x32c: Pop(0)
0x32d: PushEmpty()
0x32e: Call2 0x449

0x32f: Pop(0)
0x330: PushEmpty(bool, object)
0x331: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x332: Call2 0x6b1

0x333: Pop(1)
0x334: Pop(1); Push((bool) Stack[-1] == 0)
0x335: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x336: @ StopAsync()
0x337: Pop(0)
0x338: Stack[-10] = (bool) 0
0x339: Return(); Pop(8)

0x33a: PushEmpty(float, int)
0x33b: Stack[-2] = Stack[-11]
0x33c: Stack[-1] = Stack[-6]
0x33d: Call2 0x2ef

0x33e: Pop(2)
0x33f: Push("all")
0x340: Push("attack_middle")
0x341: Pop(1); Push(Stack[-1] + Stack[-6]);
0x342: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x343: Pop(2)
0x344: Push(Stack[-3])
0x345: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x346: PushEmpty()
0x347: Call2 0x850

0x348: Pop(0)
0x349: Push("all")
0x34a: Push("attack_middle")
0x34b: Pop(1); Push(Stack[-1] + Stack[-6]);
0x34c: @ PlayAnimation(Stack[-2], Stack[-1])
0x34d: Pop(2)
0x34e: @ WaitForAnimEnd()
0x34f: Pop(0)
0x350: PushEmpty()
0x351: Call2 0x469

0x352: Pop(0)
0x353: PushEmpty(bool, object)
0x354: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x355: Call2 0x6b1

0x356: Pop(1)
0x357: Pop(1); Push((bool) Stack[-1] == 0)
0x358: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x359: @ StopAsync()
0x35a: Pop(0)
0x35b: Stack[-10] = (bool) 0
0x35c: Return(); Pop(8)

0x35d: PushEmpty(float, int)
0x35e: Stack[-2] = Stack[-11]
0x35f: Stack[-1] = Stack[-6]
0x360: Call2 0x2ef

0x361: Pop(2)
0x362: Stack[-2] = (int) 1
0x363: Push("attack_middle")
0x364: Pop(1); Push(Stack[-1] + Stack[-5]);
0x365: Push("_")
0x366: Pop(2); Push(Stack[-2] + Stack[-1]);
0x367: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x368: Push("all")
0x369: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x36a: Pop(1)
0x36b: Pop(0); Push((bool) Stack[-3] == 0)
0x36c: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x36d: GOTO 0x38b

0x36e: PushEmpty()
0x36f: Call2 0x850

0x370: Pop(0)
0x371: Push("all")
0x372: @ PlayAnimation(Stack[-1], Stack[-2])
0x373: Pop(1)
0x374: @ WaitForAnimEnd()
0x375: Pop(0)
0x376: PushEmpty()
0x377: Call2 0x469

0x378: Pop(0)
0x379: PushEmpty(bool, object)
0x37a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x37b: Call2 0x6b1

0x37c: Pop(1)
0x37d: Pop(1); Push((bool) Stack[-1] == 0)
0x37e: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x37f: @ StopAsync()
0x380: Pop(0)
0x381: Stack[-10] = (bool) 0
0x382: Return(); Pop(8)

0x383: PushEmpty(float, int)
0x384: Stack[-2] = Stack[-11]
0x385: Stack[-1] = Stack[-6]
0x386: Call2 0x2ef

0x387: Pop(2)
0x388: Push((int) 1)
0x389: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x38a: GOTO 0x363

0x38b: Push((bool) 0)
0x38c: @ SetAttackState(Stack[-1])
0x38d: Pop(1)
0x38e: Push("all")
0x38f: Push("attack_end")
0x390: Pop(1); Push(Stack[-1] + Stack[-6]);
0x391: @ PlayAnimation(Stack[-2], Stack[-1])
0x392: Pop(2)
0x393: PushEmpty(bool)
0x394: Call2 0x477

0x395: Pop(0)
0x396: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x397: PushEmpty(bool, float)
0x398: Stack[-1] = (float) 0.75
0x399: Call2 0x39f

0x39a: Pop(2)
0x39b: @ StopAsync()
0x39c: Pop(0)
0x39d: Stack[-10] = (bool) 1
0x39e: Return(); Pop(8)

0x39f: PushEmpty(float, bool, float, bool)
0x3a0: @ rand(Stack[-2])
0x3a1: Pop(0)
0x3a2: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x3a3: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3a4: @ IsAnimationPlaying(Stack[-1])
0x3a5: Pop(0)
0x3a6: Pop(0); Push((bool) Stack[-1] == 0)
0x3a7: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a8: GOTO 0x3b2

0x3a9: PushEmpty(bool)
0x3aa: Call2 0x401

0x3ab: Pop(0)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ad: Stack[-6] = (bool) 1
0x3ae: Return(); Pop(4)

0x3af: @ sync()
0x3b0: Pop(0)
0x3b1: GOTO 0x3a4

0x3b2: GOTO 0x3b8

0x3b3: @ WaitForAnimEnd()
0x3b4: Pop(0)
0x3b5: PushEmpty()
0x3b6: Call2 0x469

0x3b7: Pop(0)
0x3b8: Stack[-6] = (bool) 0
0x3b9: Return(); Pop(4)

0x3ba: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x3bb: @ IsAnimationPlaying(Stack[-5])
0x3bc: Pop(0)
0x3bd: Pop(0); Push((bool) Stack[-5] == 0)
0x3be: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bf: GOTO 0x3e0

0x3c0: PushEmpty(bool)
0x3c1: Call2 0x401

0x3c2: Pop(0)
0x3c3: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c4: Stack[-12] = (bool) 1
0x3c5: Return(); Pop(10)

0x3c6: PushEmpty(bool, object)
0x3c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3c8: Call2 0x6b1

0x3c9: Pop(1)
0x3ca: Pop(1); Push((bool) Stack[-1] == 0)
0x3cb: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cc: Stack[-12] = (bool) 0
0x3cd: Return(); Pop(10)

0x3ce: @@ GetPFPosition(Stack[-4])
0x3cf: Pop(0)
0x3d0: @ GetPFPosition(Stack[-3])
0x3d1: Pop(0)
0x3d2: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x3d3: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x3d4: Pop(0); Push(Stack[-11] * Stack[-11]);
0x3d5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3d6: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3d7: PushEmpty(bool, float)
0x3d8: Stack[-1] = Stack[-13]
0x3d9: Call2 0x316

0x3da: Pop(2)
0x3db: Stack[-12] = (bool) 1
0x3dc: Return(); Pop(10)

0x3dd: @ sync()
0x3de: Pop(0)
0x3df: GOTO 0x3bb

0x3e0: PushEmpty()
0x3e1: Call2 0x469

0x3e2: Pop(0)
0x3e3: Stack[-12] = (bool) 0
0x3e4: Return(); Pop(10)

0x3e5: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x3e6: PushEmpty(bool, object)
0x3e7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e8: Call2 0x6b1

0x3e9: Pop(1)
0x3ea: Pop(1); Push((bool) Stack[-1] == 0)
0x3eb: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3ec: Stack[-11] = (bool) 0
0x3ed: Return(); Pop(10)

0x3ee: PushEmpty(bool)
0x3ef: Call2 0x43e

0x3f0: Pop(0)
0x3f1: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3f2: @@ GetPFPosition(Stack[-5])
0x3f3: Pop(0)
0x3f4: @ GetPFPosition(Stack[-4])
0x3f5: Pop(0)
0x3f6: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3f7: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3f8: @@ GetAttackDistance(Stack[-1])
0x3f9: Pop(0)
0x3fa: Push((int) 50)
0x3fb: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3fc: Pop(0); Push(Stack[-1] * Stack[-1]);
0x3fd: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x3fe: Return(); Pop(10)

0x3ff: Stack[-11] = (bool) 0
0x400: Return(); Pop(10)

0x401: PushEmpty(bool)
0x402: Stack[-1] = (bool) 0
0x403: PushEmpty(bool)
0x404: Call2 0x3e5

0x405: Pop(0)
0x406: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x407: PushEmpty(bool)
0x408: Call2 0x411

0x409: Pop(0)
0x40a: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x40b: Stack[-1] = (bool) 1
0x40c: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x40d: Stack[-1] = (bool) 1
0x40e: Return(); Pop(0)

0x40f: Stack[-1] = (bool) 0
0x410: Return(); Pop(0)

0x411: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x412: @ GetScene(Stack[-5])
0x413: Pop(0)
0x414: Stack[-4] = (bool) 0
0x415: PushEmpty(cvector, object)
0x416: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x417: Call2 0x61f

0x418: Pop(1)
0x419: Pop(1); Push(( -Stack[-1])
0x41a: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x41b: Pop(1)
0x41c: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x41d: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x41e: GOTO 0x43b

0x41f: @ Face(Stack[-0])
0x420: Pop(0)
0x421: Push("all")
0x422: Push("bjump")
0x423: @ PlayAnimation(Stack[-2], Stack[-1])
0x424: Pop(2)
0x425: @@ GetPFPosition(Stack[-2])
0x426: Pop(0)
0x427: @ GetPFPosition(Stack[-1])
0x428: Pop(0)
0x429: @ WaitForAnimEnd()
0x42a: Pop(0)
0x42b: PushEmpty()
0x42c: Call2 0x469

0x42d: Pop(0)
0x42e: @ StopAsync()
0x42f: Pop(0)
0x430: Push(CVector(0.0, 0.0, 0.0))
0x431: @ SetSpeed(Stack[-1])
0x432: Pop(1)
0x433: Stack[-4] = (bool) 1
0x434: PushEmpty(bool)
0x435: Call2 0x3e5

0x436: Pop(0)
0x437: Pop(1); Push((bool) Stack[-1] == 0)
0x438: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x439: GOTO 0x43b

0x43a: GOTO 0x415

0x43b: Stack[-11] = Stack[-4]
0x43c: Return(); Pop(10)

0x43d: Stack[-5] = 0
0x43e: PushEmpty(bool, bool)
0x43f: Push("IsAttacking")
0x440: Push((int) 1)
0x441: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x442: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x443: @@ IsAttacking(Stack[-1])
0x444: Pop(0)
0x445: Stack[-3] = Stack[-1]
0x446: Return(); Pop(2)

0x447: Stack[-3] = (bool) 0
0x448: Return(); Pop(2)

0x449: PushEmpty(float, int, float, int)
0x44a: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x44b: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x44c: Return(); Pop(4)

0x44d: Push( Stack[5 + Tasks[-1].StackPointer] )
0x44e: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x44f: Push((int) -1)
0x450: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x451: Push((int) 0)
0x452: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x453: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x454: Return(); Pop(4)

0x455: @ rand(Stack[-2])
0x456: Pop(0)
0x457: PushEmpty(float)
0x458: Call2 0x47b

0x459: Pop(0)
0x45a: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x45b: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x45c: @ irand(Stack[-1], Stack[-2])
0x45d: Pop(0)
0x45e: Push((int) 1)
0x45f: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x460: Push("attack")
0x461: Pop(1); Push(Stack[-1] + Stack[-2]);
0x462: @ Speak(Stack[-1])
0x463: Pop(1)
0x464: PushEmpty(int)
0x465: Call2 0x479

0x466: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x467: Pop(1)
0x468: Return(); Pop(4)

0x469: PushEmpty(object)
0x46a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x46b: Call2 0x847

0x46c: Pop(1)
0x46d: Return(); Pop(0)

0x46e: Stack[-1] = (int) 0
0x46f: Return(); Pop(0)

0x470: PushEmpty(string)
0x471: Stack[-1] = "attack_stay"
0x472: Call2 0x7df

0x473: Pop(1)
0x474: Return(); Pop(0)

0x475: PushEmpty()
0x476: Return(); Pop(0)

0x477: Stack[-1] = (bool) 1
0x478: Return(); Pop(0)

0x479: Stack[-1] = (int) 1
0x47a: Return(); Pop(0)

0x47b: Stack[-1] = (float) 0.5
0x47c: Return(); Pop(0)

0x47d: PushEmpty(bool, bool, bool, bool)
0x47e: PushEmpty(object)
0x47f: Stack[-1] = Stack[-10]
0x480: Call2 0x847

0x481: Pop(1)
0x482: Push((int) 1)
0x483: Push((int) 5)
0x484: @ SetTimer(Stack[-2], Stack[-1])
0x485: Pop(2)
0x486: @ CanSee(Stack[-2], Stack[-9])
0x487: Pop(0)
0x488: Push(Stack[-2])
0x489: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x48b: PushEmpty(object)
0x48c: Stack[-1] = Stack[-10]
0x48d: Call2 0x7cd

0x48e: Pop(1)
0x48f: GOTO 0x491

0x490: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x491: PushEmpty(bool, object)
0x492: Stack[-1] = Stack[-11]
0x493: Call2 0x62e

0x494: Pop(1)
0x495: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x496: PushEmpty(object)
0x497: Call2 0x808

0x498: Pop(0)
0x499: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x49a: Pop(1)
0x49b: PushEmpty(bool, object, float, float, bool, bool)
0x49c: Stack[-5] = Stack[-15]
0x49d: Stack[-4] = Stack[-14]
0x49e: Stack[-3] = Stack[-13]
0x49f: Stack[-2] = Stack[-12]
0x4a0: Stack[-1] = Stack[-11]
0x4a1: Call2 0x4e6

0x4a2: Stack[-7] = Stack[-6]
0x4a3: Pop(6)
0x4a4: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4a5: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a6: Push("head")
0x4a7: @ UnlookAsync(Stack[-1])
0x4a8: Pop(1)
0x4a9: Push((int) 1)
0x4aa: @ KillTimer(Stack[-1])
0x4ab: Pop(1)
0x4ac: Stack[-10] = Stack[-1]
0x4ad: Return(); Pop(4)

0x4ae: PushEmpty()
0x4af: Push((int) 1)
0x4b0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b2: PushEmpty(object)
0x4b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b4: Call2 0x847

0x4b5: Pop(1)
0x4b6: GOTO 0x4bb

0x4b7: PushEmpty(int)
0x4b8: Stack[-1] = Stack[-2]
0x4b9: Call2 0x54c

0x4ba: Pop(1)
0x4bb: Return(); Pop(0)

0x4bc: Push((int) 1)
0x4bd: @ KillTimer(Stack[-1])
0x4be: Pop(1)
0x4bf: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c1: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4c2: Push("head")
0x4c3: @ UnlookAsync(Stack[-1])
0x4c4: Pop(1)
0x4c5: PushEmpty()
0x4c6: Call2 0x562

0x4c7: Pop(0)
0x4c8: Return(); Pop(0)

0x4c9: PushEmpty()
0x4ca: PushEmpty(bool)
0x4cb: Stack[-1] = (bool) 0
0x4cc: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x4cd: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4ce: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4d0: Stack[-1] = (bool) 1
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4d3: PushEmpty(object)
0x4d4: Stack[-1] = Stack[-2]
0x4d5: Call2 0x7cd

0x4d6: Pop(1)
0x4d7: Return(); Pop(0)

0x4d8: PushEmpty()
0x4d9: PushEmpty(bool)
0x4da: Stack[-1] = (bool) 0
0x4db: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x4dc: IF (Stack[-1] == 0) GOTO 0x4e0; Pop(1)

0x4dd: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4de: IF (Stack[-1] == 0) GOTO 0x4e0; Pop(1)

0x4df: Stack[-1] = (bool) 1
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4e1: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4e2: Push("head")
0x4e3: @ UnlookAsync(Stack[-1])
0x4e4: Pop(1)
0x4e5: Return(); Pop(0)

0x4e6: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x4e7: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4e8: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x4e9: Stack[-7] = Stack[-17]
0x4ea: PushEmpty(bool, object)
0x4eb: Stack[-1] = Stack[-23]
0x4ec: Call2 0x572

0x4ed: Pop(1)
0x4ee: Pop(1); Push((bool) Stack[-1] == 0)
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4f0: Stack[-22] = (bool) 0
0x4f1: Return(); Pop(16)

0x4f2: @@ GetPosition(Stack[-5])
0x4f3: Pop(0)
0x4f4: @ GetPosition(Stack[-4])
0x4f5: Pop(0)
0x4f6: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x4f7: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x4f8: PushEmpty(bool)
0x4f9: Stack[-1] = (bool) 0
0x4fa: Push((int) 0)
0x4fb: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x4fc: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4fd: Pop(0); Push(Stack[-20] * Stack[-20]);
0x4fe: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x4ff: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x500: Stack[-1] = (bool) 1
0x501: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x502: @ Stop()
0x503: Pop(0)
0x504: Stack[-22] = (bool) 0
0x505: Return(); Pop(16)

0x506: Pop(0); Push(Stack[-20] * Stack[-20]);
0x507: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x508: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x509: @@ GetPFPosition(Stack[-5])
0x50a: Pop(0)
0x50b: @ FindPathTo(Stack[-1], Stack[-5])
0x50c: Pop(0)
0x50d: Pop(0); Push(( Stack[-1] != 0 )
0x50e: IF (Stack[-1] == 0) GOTO 0x511; Pop(1)

0x50f: Stack[-6] = Stack[-1]
0x510: Stack[-1] = 0
0x511: Pop(0); Push(( Stack[-6] != 0 )
0x512: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x513: Push(Stack[-7])
0x514: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x515: Stack[-7] = (bool) 0
0x516: @ RotatePath(Stack[-6], Stack[-8])
0x517: Pop(0)
0x518: Pop(0); Push((bool) Stack[-8] == 0)
0x519: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x51a: GOTO 0x54a

0x51b: Push((int) 0)
0x51c: Push((float)0.3)
0x51d: @ SetTimer(Stack[-2], Stack[-1])
0x51e: Pop(2)
0x51f: PushEmpty(string)
0x520: Call2 0x579

0x521: Pop(0)
0x522: PushEmpty(string)
0x523: Call2 0x57b

0x524: Pop(0)
0x525: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x526: Pop(2)
0x527: Pop(0); Push((bool) Stack[-8] == 0)
0x528: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x529: Push( Stack[0 + Tasks[-1].StackPointer] )
0x52a: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52b: Stack[-6] = 0
0x52c: GOTO 0x54a

0x52d: GOTO 0x52f

0x52e: GOTO 0x549

0x52f: GOTO 0x531

0x530: Stack[-6] = 0
0x531: GOTO 0x542

0x532: Push((int) 0)
0x533: @ KillTimer(Stack[-1])
0x534: Pop(1)
0x535: Push((float)0.5)
0x536: @ Sleep(Stack[-1], Stack[-9])
0x537: Pop(1)
0x538: Pop(0); Push((bool) Stack[-8] == 0)
0x539: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x53a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x53b: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x53c: Stack[-6] = 0
0x53d: GOTO 0x54a

0x53e: Push((int) 0)
0x53f: Push((float)0.3)
0x540: @ SetTimer(Stack[-2], Stack[-1])
0x541: Pop(2)
0x542: Stack[-1] = 0
0x543: GOTO 0x548

0x544: Push((int) 0)
0x545: @ KillTimer(Stack[-1])
0x546: Pop(1)
0x547: GOTO 0x54a

0x548: Stack[-6] = 0
0x549: GOTO 0x4ea

0x54a: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x54b: Return(); Pop(16)

0x54c: PushEmpty()
0x54d: Push((int) 0)
0x54e: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x54f: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x550: Return(); Pop(0)

0x551: PushEmpty(bool, object)
0x552: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x553: Call2 0x572

0x554: Pop(1)
0x555: Pop(1); Push((bool) Stack[-1] == 0)
0x556: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x557: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x558: Push((int) 0)
0x559: @ KillTimer(Stack[-1])
0x55a: Pop(1)
0x55b: @ Stop()
0x55c: Pop(0)
0x55d: Return(); Pop(0)

0x55e: PushEmpty()
0x55f: @ RequestClearPath(Stack[-1])
0x560: Pop(0)
0x561: Return(); Pop(0)

0x562: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x563: Push((int) 0)
0x564: @ KillTimer(Stack[-1])
0x565: Pop(1)
0x566: @ Stop()
0x567: Pop(0)
0x568: Return(); Pop(0)

0x569: PushEmpty()
0x56a: PushEmpty()
0x56b: Call2 0x4bc

0x56c: Pop(0)
0x56d: PushEmpty(object)
0x56e: Stack[-1] = Stack[-2]
0x56f: Call2 0x908

0x570: Pop(1)
0x571: Return(); Pop(0)

0x572: PushEmpty()
0x573: PushEmpty(bool, object)
0x574: Stack[-1] = Stack[-3]
0x575: Call2 0x6b1

0x576: Stack[-4] = Stack[-2]
0x577: Pop(2)
0x578: Return(); Pop(0)

0x579: Stack[-1] = "walk"
0x57a: Return(); Pop(0)

0x57b: Stack[-1] = "run"
0x57c: Return(); Pop(0)

0x57d: PushEmpty()
0x57e: EventDisable(0)
0x57f: PushEmpty(object)
0x580: Stack[-1] = Stack[-2]
0x581: Call2 0x596

0x582: Pop(1)
0x583: Push((int) 50)
0x584: Push((int) 40)
0x585: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x586: Pop(2)
0x587: EventEnable(0)
0x588: @ Hold()
0x589: Pop(0)
0x58a: GOTO 0x588

0x58b: Return(); Pop(0)

0x58c: PushEmpty(bool, bool)
0x58d: @ IsOverrideActive(Stack[-1])
0x58e: Pop(0)
0x58f: Pop(0); Push((bool) Stack[-1] == 0)
0x590: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x591: PushEmpty(object)
0x592: Stack[-1] = Stack[-4]
0x593: Call2 0x88a

0x594: Pop(1)
0x595: Return(); Pop(2)

0x596: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x597: Pop(0); Push((bool) Stack[-21] == 0)
0x598: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x599: PushEmpty(string)
0x59a: Stack[-1] = "fdie"
0x59b: Call2 0x5f1

0x59c: Pop(1)
0x59d: GOTO 0x5f0

0x59e: @@ GetPosition(Stack[-10])
0x59f: Pop(0)
0x5a0: @ GetPosition(Stack[-9])
0x5a1: Pop(0)
0x5a2: @ GetDirection(Stack[-8])
0x5a3: Pop(0)
0x5a4: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x5a5: Push(CvectorIndex(Stack[-7], 0))
0x5a6: Push(CvectorIndex(Stack[-9], 0))
0x5a7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5a8: Push(CvectorIndex(Stack[-8], 2))
0x5a9: Push(CvectorIndex(Stack[-10], 2))
0x5aa: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5ab: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5ac: Push((int) 0)
0x5ad: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5ae: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5af: Stack[-6] = "fdie"
0x5b0: GOTO 0x5b2

0x5b1: Stack[-6] = "bdie"
0x5b2: @ RemoveRTEnvelope()
0x5b3: Pop(0)
0x5b4: @ SetDeathState()
0x5b5: Pop(0)
0x5b6: @ Stop()
0x5b7: Pop(0)
0x5b8: @ StopAsync()
0x5b9: Pop(0)
0x5ba: Stack[-5] = Stack[-21]
0x5bb: Push("GetScriptProperty")
0x5bc: Push((int) 2)
0x5bd: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x5be: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5bf: Push("Owner")
0x5c0: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x5c1: Pop(1)
0x5c2: Push(Stack[-4])
0x5c3: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5c4: Push("Owner")
0x5c5: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x5c6: Pop(1)
0x5c7: Pop(0); Push((bool) Stack[-5] == 0)
0x5c8: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5c9: Stack[-5] = Stack[-21]
0x5ca: Push("@GetEyesHeight")
0x5cb: Push((int) 1)
0x5cc: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x5cd: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5ce: @@ GetEyesHeight(Stack[-2])
0x5cf: Pop(0)
0x5d0: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x5d1: Push(CvectorIndex(Stack[-1], 1))
0x5d2: Stack[-1] = Stack[-3]
0x5d3: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5d4: Push("head")
0x5d5: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x5d6: Pop(1)
0x5d7: Stack[-3] = (bool) 1
0x5d8: GOTO 0x5da

0x5d9: Stack[-3] = (bool) 0
0x5da: PushEmpty(string)
0x5db: Stack[-1] = Stack[-7]
0x5dc: Call2 0x7df

0x5dd: Pop(1)
0x5de: Push("all")
0x5df: @ PlayAnimation(Stack[-1], Stack[-7])
0x5e0: Pop(1)
0x5e1: @ WaitForAnimEnd()
0x5e2: Pop(0)
0x5e3: Push(Stack[-3])
0x5e4: IF (Stack[-1] == 0) GOTO 0x5ea; Pop(1)

0x5e5: @ StopAsync()
0x5e6: Pop(0)
0x5e7: Push("head")
0x5e8: @ UnlookAsync(Stack[-1])
0x5e9: Pop(1)
0x5ea: Push("all")
0x5eb: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x5ec: Pop(1)
0x5ed: @ RemoveEnvelope()
0x5ee: Pop(0)
0x5ef: Stack[-5] = 0
0x5f0: Return(); Pop(20)

0x5f1: PushEmpty()
0x5f2: @ RemoveRTEnvelope()
0x5f3: Pop(0)
0x5f4: @ SetDeathState()
0x5f5: Pop(0)
0x5f6: @ Stop()
0x5f7: Pop(0)
0x5f8: @ StopAsync()
0x5f9: Pop(0)
0x5fa: @ StopSecondaryAnimation()
0x5fb: Pop(0)
0x5fc: PushEmpty(string)
0x5fd: Stack[-1] = Stack[-2]
0x5fe: Call2 0x7df

0x5ff: Pop(1)
0x600: Push("all")
0x601: @ PlayAnimation(Stack[-1], Stack[-2])
0x602: Pop(1)
0x603: @ WaitForAnimEnd()
0x604: Pop(0)
0x605: Push("all")
0x606: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x607: Pop(1)
0x608: @ RemoveEnvelope()
0x609: Pop(0)
0x60a: Return(); Pop(0)

0x60b: PushEmpty()
0x60c: Return(); Pop(0)

0x60d: PushEmpty()
0x60e: Return(); Pop(0)

0x60f: PushEmpty()
0x610: Return(); Pop(0)

0x611: PushEmpty()
0x612: Push((int) 2)
0x613: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x614: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x615: Stack[-2] = "fire"
0x616: Return(); Pop(0)

0x617: GOTO 0x61d

0x618: Push((int) 1)
0x619: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x61a: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x61b: Stack[-2] = "bullet"
0x61c: Return(); Pop(0)

0x61d: Stack[-2] = "phys"
0x61e: Return(); Pop(0)

0x61f: PushEmpty(cvector, cvector, cvector, cvector)
0x620: @ GetPosition(Stack[-2])
0x621: Pop(0)
0x622: @@ GetPosition(Stack[-1])
0x623: Pop(0)
0x624: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x625: Return(); Pop(4)

0x626: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x627: @ GetPosition(Stack[-3])
0x628: Pop(0)
0x629: @@ GetPosition(Stack[-2])
0x62a: Pop(0)
0x62b: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x62c: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x62d: Return(); Pop(6)

0x62e: PushEmpty(bool, bool)
0x62f: @ IsPlayerActor(Stack[-3], Stack[-1])
0x630: Pop(0)
0x631: Stack[-4] = Stack[-1]
0x632: Return(); Pop(2)

0x633: PushEmpty(bool, bool)
0x634: Push("HasProperty")
0x635: Push((int) 2)
0x636: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x637: Pop(1); Push((bool) Stack[-1] == 0)
0x638: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x639: Stack[-5] = (bool) 0
0x63a: Return(); Pop(2)

0x63b: @@ HasProperty(Stack[-3], Stack[-1])
0x63c: Pop(0)
0x63d: Stack[-5] = Stack[-1]
0x63e: Return(); Pop(2)

0x63f: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x640: PushEmpty(bool, object, string)
0x641: Stack[-2] = Stack[-18]
0x642: Stack[-1] = "health"
0x643: Call2 0x633

0x644: Pop(2)
0x645: Pop(1); Push((bool) Stack[-1] == 0)
0x646: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x647: Stack[-16] = (float) 0.0
0x648: Return(); Pop(12)

0x649: PushEmpty(bool, object, string)
0x64a: Stack[-2] = Stack[-18]
0x64b: Stack[-1] = "armor"
0x64c: Call2 0x633

0x64d: Pop(2)
0x64e: Pop(1); Push((bool) Stack[-1] == 0)
0x64f: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x650: Stack[-6] = (int) 0
0x651: GOTO 0x655

0x652: Push("armor")
0x653: @@ GetProperty(Stack[-1], Stack[-7])
0x654: Pop(1)
0x655: Push("armor_")
0x656: PushEmpty(string, int)
0x657: Stack[-1] = Stack[-16]
0x658: Call2 0x611

0x659: Pop(1)
0x65a: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x65b: PushEmpty(bool, object, string)
0x65c: Stack[-2] = Stack[-18]
0x65d: Stack[-1] = Stack[-8]
0x65e: Call2 0x633

0x65f: Pop(2)
0x660: Pop(1); Push((bool) Stack[-1] == 0)
0x661: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x662: Stack[-4] = (int) 0
0x663: GOTO 0x666

0x664: @@ GetProperty(Stack[-5], Stack[-4])
0x665: Pop(0)
0x666: PushEmpty(float, float, float)
0x667: Pop(0); Push(Stack[-9] + Stack[-7]);
0x668: Push((float)100.0)
0x669: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x66a: Stack[-1] = (int) 1
0x66b: Call2 0x818

0x66c: Stack[-6] = Stack[-3]
0x66d: Pop(3)
0x66e: Push("health")
0x66f: @@ GetProperty(Stack[-1], Stack[-3])
0x670: Pop(1)
0x671: Push((int) 1)
0x672: Pop(1); Push(Stack[-1] - Stack[-4]);
0x673: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x674: Push("health")
0x675: PushEmpty(float, float, float, float)
0x676: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x677: Stack[-2] = (int) 0
0x678: Stack[-1] = (int) 1
0x679: Call2 0x81f

0x67a: Pop(3)
0x67b: @@ SetProperty(Stack[-2], Stack[-1])
0x67c: Pop(2)
0x67d: PushEmpty(bool, object)
0x67e: Stack[-1] = Stack[-17]
0x67f: Call2 0x62e

0x680: Pop(1)
0x681: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x682: PushEmpty(float)
0x683: Stack[-1] = -Stack[-2]; Pop(0);
0x684: Call2 0x82a

0x685: Pop(1)
0x686: Stack[-16] = Stack[-1]
0x687: Return(); Pop(12)

0x688: PushEmpty(bool, bool)
0x689: @@ IsDead(Stack[-1])
0x68a: Pop(0)
0x68b: Stack[-4] = Stack[-1]
0x68c: Return(); Pop(2)

0x68d: PushEmpty(object, object, object, object)
0x68e: Pop(0); Push((bool) Stack[-5] == 0)
0x68f: IF (Stack[-1] == 0) GOTO 0x692; Pop(1)

0x690: Stack[-6] = (bool) 0
0x691: Return(); Pop(4)

0x692: PushEmpty(bool)
0x693: Stack[-1] = (bool) 0
0x694: Push("IsDead")
0x695: Push((int) 1)
0x696: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x697: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x698: PushEmpty(bool, object)
0x699: Stack[-1] = Stack[-8]
0x69a: Call2 0x688

0x69b: Pop(1)
0x69c: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x69d: Stack[-1] = (bool) 1
0x69e: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x69f: Stack[-6] = (bool) 0
0x6a0: Return(); Pop(4)

0x6a1: @ GetScene(Stack[-2])
0x6a2: Pop(0)
0x6a3: Pop(0); Push((bool) Stack[-2] == 0)
0x6a4: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x6a5: Stack[-6] = (bool) 0
0x6a6: Return(); Pop(4)

0x6a7: @@ GetScene(Stack[-1])
0x6a8: Pop(0)
0x6a9: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x6aa: IF (Stack[-1] == 0) GOTO 0x6ad; Pop(1)

0x6ab: Stack[-6] = (bool) 0
0x6ac: Return(); Pop(4)

0x6ad: Stack[-6] = (bool) 1
0x6ae: Return(); Pop(4)

0x6af: Stack[-1] = 0
0x6b0: Stack[-2] = 0
0x6b1: PushEmpty(int, int)
0x6b2: PushEmpty(bool, object)
0x6b3: Stack[-1] = Stack[-5]
0x6b4: Call2 0x68d

0x6b5: Pop(1)
0x6b6: Pop(1); Push((bool) Stack[-1] == 0)
0x6b7: IF (Stack[-1] == 0) GOTO 0x6ba; Pop(1)

0x6b8: Stack[-4] = (bool) 0
0x6b9: Return(); Pop(2)

0x6ba: PushEmpty(bool, object, string)
0x6bb: Stack[-2] = Stack[-6]
0x6bc: Stack[-1] = "noaccess"
0x6bd: Call2 0x633

0x6be: Pop(2)
0x6bf: Pop(1); Push((bool) Stack[-1] == 0)
0x6c0: IF (Stack[-1] == 0) GOTO 0x6c3; Pop(1)

0x6c1: Stack[-4] = (bool) 1
0x6c2: Return(); Pop(2)

0x6c3: Push("noaccess")
0x6c4: @@ GetProperty(Stack[-1], Stack[-2])
0x6c5: Pop(1)
0x6c6: Push((int) 0)
0x6c7: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x6c8: Return(); Pop(2)

0x6c9: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x6ca: Pop(0); Push((bool) Stack[-15] == 0)
0x6cb: IF (Stack[-1] == 0) GOTO 0x6cd; Pop(1)

0x6cc: Return(); Pop(14)

0x6cd: @ IsDead(Stack[-7])
0x6ce: Pop(0)
0x6cf: Push(Stack[-7])
0x6d0: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6d1: Return(); Pop(14)

0x6d2: @ GetSecondaryAnimationType(Stack[-6])
0x6d3: Pop(0)
0x6d4: Push((int) 0)
0x6d5: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x6d6: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x6d7: Return(); Pop(14)

0x6d8: @@ GetPosition(Stack[-5])
0x6d9: Pop(0)
0x6da: @ GetPosition(Stack[-4])
0x6db: Pop(0)
0x6dc: @ GetDirection(Stack[-3])
0x6dd: Pop(0)
0x6de: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x6df: Push(CvectorIndex(Stack[-2], 0))
0x6e0: Push(CvectorIndex(Stack[-4], 0))
0x6e1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6e2: Push(CvectorIndex(Stack[-3], 2))
0x6e3: Push(CvectorIndex(Stack[-5], 2))
0x6e4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6e5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6e6: Push((int) 0)
0x6e7: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6e8: IF (Stack[-1] == 0) GOTO 0x6eb; Pop(1)

0x6e9: Stack[-1] = "fhit"
0x6ea: GOTO 0x6ec

0x6eb: Stack[-1] = "bhit"
0x6ec: Push("hit_react")
0x6ed: Push("1")
0x6ee: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6ef: Push("2")
0x6f0: Pop(1); Push(Stack[-4] + Stack[-1]);
0x6f1: Push((int) -10)
0x6f2: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6f3: Pop(4)
0x6f4: Return(); Pop(14)

0x6f5: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x6f6: PushEmpty(bool)
0x6f7: Stack[-1] = (bool) 0
0x6f8: PushEmpty(bool)
0x6f9: Stack[-1] = (bool) 0
0x6fa: Push(Stack[-23])
0x6fb: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6fc: Push((int) 4)
0x6fd: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x6fe: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6ff: Stack[-1] = (bool) 1
0x700: IF (Stack[-1] == 0) GOTO 0x705; Pop(1)

0x701: Push((int) 5)
0x702: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x703: IF (Stack[-1] == 0) GOTO 0x705; Pop(1)

0x704: Stack[-1] = (bool) 1
0x705: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x706: PushEmpty(cvector, cvector)
0x707: PushEmpty(cvector, object)
0x708: Stack[-1] = Stack[-25]
0x709: Call2 0x61f

0x70a: Stack[-3] = Stack[-2]
0x70b: Pop(2)
0x70c: Call2 0x80e

0x70d: Stack[-11] = Stack[-2]
0x70e: Pop(2)
0x70f: @ CreateVectorVector(Stack[-8])
0x710: Pop(0)
0x711: Stack[-7] = (int) 1
0x712: Push("hit")
0x713: Pop(1); Push(Stack[-1] + Stack[-8]);
0x714: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x715: Pop(1)
0x716: Pop(0); Push((bool) Stack[-6] == 0)
0x717: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x718: GOTO 0x722

0x719: Pop(0); Push(Stack[-4] | Stack[-9]);
0x71a: Push((float)0.70711)
0x71b: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x71c: IF (Stack[-1] == 0) GOTO 0x71f; Pop(1)

0x71d: @@ add(Stack[-5])
0x71e: Pop(0)
0x71f: Push((int) 1)
0x720: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x721: GOTO 0x712

0x722: @@ size(Stack[-3])
0x723: Pop(0)
0x724: Push(Stack[-3])
0x725: IF (Stack[-1] == 0) GOTO 0x733; Pop(1)

0x726: @ irand(Stack[-2], Stack[-3])
0x727: Pop(0)
0x728: @@ get(Stack[-1], Stack[-2])
0x729: Pop(0)
0x72a: PushEmpty(object, int, float, cvector, cvector)
0x72b: Stack[-5] = Stack[-26]
0x72c: Stack[-4] = Stack[-25]
0x72d: Stack[-3] = Stack[-24]
0x72e: Stack[-2] = Stack[-6]
0x72f: Stack[-1] = -Stack[-14]; Pop(0);
0x730: Call2 0x739

0x731: Pop(5)
0x732: Return(); Pop(18)

0x733: Stack[-8] = 0
0x734: PushEmpty(object)
0x735: Stack[-1] = Stack[-22]
0x736: Call2 0x6c9

0x737: Pop(1)
0x738: Return(); Pop(18)

0x739: PushEmpty(object, object, object, object)
0x73a: @ GetScene(Stack[-2])
0x73b: Pop(0)
0x73c: Push("scripted")
0x73d: Push("blood_dir.xml")
0x73e: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x73f: Pop(2)
0x740: PushEmpty(object)
0x741: Stack[-1] = Stack[-10]
0x742: Call2 0x6c9

0x743: Pop(1)
0x744: Return(); Pop(4)

0x745: Stack[-1] = 0
0x746: Stack[-2] = 0
0x747: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x748: @@ GetPosition(Stack[-3])
0x749: Pop(0)
0x74a: @ GetPosition(Stack[-2])
0x74b: Pop(0)
0x74c: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x74d: Push(CvectorIndex(Stack[-1], 0))
0x74e: Push(CvectorIndex(Stack[-2], 2))
0x74f: @ RotateAsync(Stack[-2], Stack[-1])
0x750: Pop(2)
0x751: Return(); Pop(6)

0x752: PushEmpty(bool, bool)
0x753: @ IsLoaded(Stack[-1])
0x754: Pop(0)
0x755: Stack[-3] = Stack[-1]
0x756: Return(); Pop(2)

0x757: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x758: @@ GetPosition(Stack[-8])
0x759: Pop(0)
0x75a: @@ GetEyesHeight(Stack[-9])
0x75b: Pop(0)
0x75c: Push(CvectorIndex(Stack[-8], 1))
0x75d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x75e: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x75f: @ GetPosition(Stack[-7])
0x760: Pop(0)
0x761: @ GetEyesHeight(Stack[-9])
0x762: Pop(0)
0x763: Push(CvectorIndex(Stack[-7], 1))
0x764: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x765: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x766: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x767: Push(CvectorIndex(Stack[-6], 1))
0x768: Stack[-1] = (int) 0
0x769: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x76a: Pop(0); Push(Stack[-6] | Stack[-6]);
0x76b: Pop(1); Push(Sqrt(Stack[-1]))
0x76c: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x76d: Stack[-5] = -Stack[-6]; Pop(0);
0x76e: Pop(0); Push(Stack[-6] * Stack[-19]);
0x76f: PushEmpty(cvector, cvector)
0x770: Push(CVector(0.0, 1.0, 0.0))
0x771: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x772: Call2 0x80e

0x773: Pop(1)
0x774: Push((int) 25)
0x775: Pop(2); Push(Stack[-2] * Stack[-1]);
0x776: Pop(2); Push(Stack[-2] + Stack[-1]);
0x777: Push(CVector(0.0, 10.0, 0.0))
0x778: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x779: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x77a: @ IsOverrideActive(Stack[-2])
0x77b: Pop(0)
0x77c: Push(Stack[-2])
0x77d: IF (Stack[-1] == 0) GOTO 0x780; Pop(1)

0x77e: Stack[-21] = (bool) 0
0x77f: Return(); Pop(18)

0x780: @ StopWorld()
0x781: Pop(0)
0x782: Push((bool) 1)
0x783: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x784: Pop(1)
0x785: Push(CvectorIndex(Stack[-4], 0))
0x786: Push(CvectorIndex(Stack[-5], 2))
0x787: @ Rotate(Stack[-2], Stack[-1])
0x788: Pop(2)
0x789: PushEmpty(bool)
0x78a: Call2 0x8c8

0x78b: Pop(0)
0x78c: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x78d: GOTO 0x796

0x78e: Push("head")
0x78f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x790: Pop(1)
0x791: Push(Stack[-1])
0x792: IF (Stack[-1] == 0) GOTO 0x796; Pop(1)

0x793: Push("head")
0x794: @ LookAsyncCamera(Stack[-1])
0x795: Pop(1)
0x796: @ CameraWaitForPlayFinish()
0x797: Pop(0)
0x798: @ ResumeWorld()
0x799: Pop(0)
0x79a: Stack[-21] = (bool) 1
0x79b: Return(); Pop(18)

0x79c: PushEmpty(bool, bool)
0x79d: Push((bool) 1)
0x79e: @ CameraSwitchToNormal(Stack[-1])
0x79f: Pop(1)
0x7a0: PushEmpty(bool)
0x7a1: Call2 0x8c8

0x7a2: Pop(0)
0x7a3: IF (Stack[-1] == 0) GOTO 0x7a5; Pop(1)

0x7a4: GOTO 0x7ad

0x7a5: Push("head")
0x7a6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x7a7: Pop(1)
0x7a8: Push(Stack[-1])
0x7a9: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x7aa: Push("head")
0x7ab: @ UnlookAsync(Stack[-1])
0x7ac: Pop(1)
0x7ad: Return(); Pop(2)

0x7ae: PushEmpty(bool, float, float, bool, float, float)
0x7af: @ lshHasAnimation(Stack[-3], Stack[-7])
0x7b0: Pop(0)
0x7b1: Push(Stack[-3])
0x7b2: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7b3: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x7b4: Pop(0)
0x7b5: Push((bool) 0)
0x7b6: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x7b7: Pop(1)
0x7b8: GOTO 0x7bd

0x7b9: Push("Can't find lsh animation : ")
0x7ba: Pop(1); Push(Stack[-1] + Stack[-8]);
0x7bb: @ Trace(Stack[-1])
0x7bc: Pop(1)
0x7bd: Return(); Pop(6)

0x7be: PushEmpty(bool, float, float, bool, float, float)
0x7bf: @ lshHasAnimation(Stack[-3], Stack[-8])
0x7c0: Pop(0)
0x7c1: Push(Stack[-3])
0x7c2: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7c3: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x7c4: Pop(0)
0x7c5: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x7c6: Pop(0)
0x7c7: GOTO 0x7cc

0x7c8: Push("Can't find lsh animation : ")
0x7c9: Pop(1); Push(Stack[-1] + Stack[-9]);
0x7ca: @ Trace(Stack[-1])
0x7cb: Pop(1)
0x7cc: Return(); Pop(6)

0x7cd: PushEmpty(float, cvector, float, cvector)
0x7ce: @@ GetEyesHeight(Stack[-2])
0x7cf: Pop(0)
0x7d0: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x7d1: Push(CvectorIndex(Stack[-1], 1))
0x7d2: Stack[-1] = Stack[-3]
0x7d3: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x7d4: Push("head")
0x7d5: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x7d6: Pop(1)
0x7d7: Return(); Pop(4)

0x7d8: PushEmpty(bool)
0x7d9: Call2 0x8c8

0x7da: Pop(0)
0x7db: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7dc: @ lshStopSpeech()
0x7dd: Pop(0)
0x7de: Return(); Pop(0)

0x7df: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x7e0: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x7e1: Pop(0)
0x7e2: Pop(0); Push((bool) Stack[-8] == 0)
0x7e3: IF (Stack[-1] == 0) GOTO 0x7f8; Pop(1)

0x7e4: Stack[-7] = (int) 0
0x7e5: Push((int) 1)
0x7e6: Pop(1); Push(Stack[-8] + Stack[-1]);
0x7e7: Pop(1); Push(Stack[-18] + Stack[-1]);
0x7e8: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x7e9: Pop(1)
0x7ea: Pop(0); Push((bool) Stack[-6] == 0)
0x7eb: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7ec: GOTO 0x7f0

0x7ed: Push((int) 1)
0x7ee: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x7ef: GOTO 0x7e5

0x7f0: Pop(0); Push((bool) Stack[-7] == 0)
0x7f1: IF (Stack[-1] == 0) GOTO 0x7f3; Pop(1)

0x7f2: Return(); Pop(16)

0x7f3: @ irand(Stack[-5], Stack[-7])
0x7f4: Pop(0)
0x7f5: Push((int) 1)
0x7f6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7f7: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x7f8: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x7f9: Pop(0)
0x7fa: Push(Stack[-4])
0x7fb: IF (Stack[-1] == 0) GOTO 0x807; Pop(1)

0x7fc: @ GetEyesHeight(Stack[-3])
0x7fd: Pop(0)
0x7fe: @ GetDirection(Stack[-2])
0x7ff: Pop(0)
0x800: Push((int) 50)
0x801: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x802: Push(CvectorIndex(Stack[-1], 1))
0x803: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x804: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x805: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x806: Pop(0)
0x807: Return(); Pop(16)

0x808: PushEmpty(object, object)
0x809: @ self(Stack[-1])
0x80a: Pop(0)
0x80b: Stack[-3] = Stack[-1]
0x80c: Return(); Pop(2)

0x80d: Stack[-1] = 0
0x80e: PushEmpty(float, float)
0x80f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x810: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x811: Push((float)0.0)
0x812: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x813: IF (Stack[-1] == 0) GOTO 0x816; Pop(1)

0x814: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x815: Return(); Pop(2)

0x816: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x817: Return(); Pop(2)

0x818: PushEmpty()
0x819: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x81a: IF (Stack[-1] == 0) GOTO 0x81d; Pop(1)

0x81b: Stack[-3] = Stack[-2]
0x81c: GOTO 0x81e

0x81d: Stack[-3] = Stack[-1]
0x81e: Return(); Pop(0)

0x81f: PushEmpty()
0x820: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x821: IF (Stack[-1] == 0) GOTO 0x824; Pop(1)

0x822: Stack[-4] = Stack[-2]
0x823: Return(); Pop(0)

0x824: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x825: IF (Stack[-1] == 0) GOTO 0x828; Pop(1)

0x826: Stack[-4] = Stack[-1]
0x827: Return(); Pop(0)

0x828: Stack[-4] = Stack[-3]
0x829: Return(); Pop(0)

0x82a: PushEmpty(object, object)
0x82b: @ CreateFloatVector(Stack[-1])
0x82c: Pop(0)
0x82d: @@ add(Stack[-3])
0x82e: Pop(0)
0x82f: Push((int) 0)
0x830: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x831: IF (Stack[-1] == 0) GOTO 0x836; Pop(1)

0x832: Push((float)0.7)
0x833: Push((int) 500)
0x834: @ RumblePlay(Stack[-2], Stack[-1])
0x835: Pop(2)
0x836: Push((int) 15)
0x837: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x838: Pop(1)
0x839: Return(); Pop(2)

0x83a: Stack[-1] = 0
0x83b: PushEmpty(object, object)
0x83c: @ FindActor(Stack[-1], Stack[-4])
0x83d: Pop(0)
0x83e: Pop(0); Push((bool) Stack[-1] == 0)
0x83f: IF (Stack[-1] == 0) GOTO 0x842; Pop(1)

0x840: Stack[-5] = (bool) 0
0x841: Return(); Pop(2)

0x842: @ Trigger(Stack[-1], Stack[-3])
0x843: Pop(0)
0x844: Stack[-5] = (bool) 1
0x845: Return(); Pop(2)

0x846: Stack[-1] = 0
0x847: PushEmpty(bool, bool)
0x848: @ IsPlayerActor(Stack[-3], Stack[-1])
0x849: Pop(0)
0x84a: Push(Stack[-1])
0x84b: IF (Stack[-1] == 0) GOTO 0x84f; Pop(1)

0x84c: Push("attack")
0x84d: @ PlayGlobalMusic(Stack[-1])
0x84e: Pop(1)
0x84f: Return(); Pop(2)

0x850: PushEmpty(object, object)
0x851: @ GetScene(Stack[-1])
0x852: Pop(0)
0x853: Push("battle")
0x854: PushEmpty(object)
0x855: Call2 0x808

0x856: Pop(0)
0x857: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x858: Pop(2)
0x859: Return(); Pop(2)

0x85a: Stack[-1] = 0
0x85b: PushEmpty(string, string)
0x85c: Stack[-1] = "idle"
0x85d: Push(Stack[-3])
0x85e: IF (Stack[-1] == 0) GOTO 0x860; Pop(1)

0x85f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x860: Stack[-4] = Stack[-1]
0x861: Return(); Pop(2)

0x862: PushEmpty(int, bool, int, bool)
0x863: Stack[-2] = (int) 0
0x864: Push("all")
0x865: PushEmpty(string, int)
0x866: Stack[-1] = Stack[-5]
0x867: Call2 0x85b

0x868: Pop(1)
0x869: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x86a: Pop(2)
0x86b: Pop(0); Push((bool) Stack[-1] == 0)
0x86c: IF (Stack[-1] == 0) GOTO 0x86e; Pop(1)

0x86d: GOTO 0x871

0x86e: Push((int) 1)
0x86f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x870: GOTO 0x864

0x871: Stack[-5] = Stack[-2]
0x872: Return(); Pop(4)

0x873: PushEmpty(int, int)
0x874: Push("branch")
0x875: @ GetVariable(Stack[-1], Stack[-2])
0x876: Pop(1)
0x877: Push((int) 0)
0x878: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x879: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x87a: Stack[-3] = (int) 1
0x87b: Return(); Pop(2)

0x87c: GOTO 0x882

0x87d: Push((int) 1)
0x87e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x87f: IF (Stack[-1] == 0) GOTO 0x882; Pop(1)

0x880: Stack[-3] = (int) 2
0x881: Return(); Pop(2)

0x882: Stack[-3] = (int) 3
0x883: Return(); Pop(2)

0x884: PushEmpty(int, int)
0x885: Push("branch")
0x886: @ GetVariable(Stack[-1], Stack[-2])
0x887: Pop(1)
0x888: Stack[-3] = Stack[-1]
0x889: Return(); Pop(2)

0x88a: PushEmpty()
0x88b: PushEmpty(int)
0x88c: Call2 0x884

0x88d: Pop(0)
0x88e: Push((int) 1)
0x88f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x890: IF (Stack[-1] == 0) GOTO 0x894; Pop(1)

0x891: @ WorkWithCorpse(Stack[-1])
0x892: Pop(0)
0x893: GOTO 0x896

0x894: @ Barter(Stack[-1])
0x895: Pop(0)
0x896: Return(); Pop(0)

0x897: PushEmpty(object, int, bool, object, int, bool)
0x898: @ CreateInvItem(Stack[-3])
0x899: Pop(0)
0x89a: @@ SetItemName(Stack[-7])
0x89b: Pop(0)
0x89c: Push("Organ")
0x89d: Push((int) 1)
0x89e: @@ SetProperty(Stack[-2], Stack[-1])
0x89f: Pop(2)
0x8a0: @@ GetItemID(Stack[-2])
0x8a1: Pop(0)
0x8a2: Push((int) 0)
0x8a3: Push((int) 1)
0x8a4: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x8a5: Pop(2)
0x8a6: Return(); Pop(6)

0x8a7: Stack[-3] = 0
0x8a8: PushEmpty(int)
0x8a9: Call2 0x884

0x8aa: Pop(0)
0x8ab: Push((int) 1)
0x8ac: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x8ad: IF (Stack[-1] == 0) GOTO 0x8af; Pop(1)

0x8ae: Return(); Pop(0)

0x8af: PushEmpty(string)
0x8b0: Stack[-1] = "liver"
0x8b1: Call2 0x897

0x8b2: Pop(1)
0x8b3: PushEmpty(string)
0x8b4: Stack[-1] = "kidney"
0x8b5: Call2 0x897

0x8b6: Pop(1)
0x8b7: PushEmpty(string)
0x8b8: Stack[-1] = "heart"
0x8b9: Call2 0x897

0x8ba: Pop(1)
0x8bb: PushEmpty(string)
0x8bc: Stack[-1] = "blood"
0x8bd: Call2 0x897

0x8be: Pop(1)
0x8bf: Return(); Pop(0)

0x8c0: Stack[-1] = (int) 515572
0x8c1: Return(); Pop(0)

0x8c2: Stack[-1] = (int) 504031
0x8c3: Return(); Pop(0)

0x8c4: Stack[-1] = "ui/NPC_Citizen2.png"
0x8c5: Return(); Pop(0)

0x8c6: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x8c7: Return(); Pop(0)

0x8c8: Stack[-1] = (bool) 0
0x8c9: Return(); Pop(0)

0x8ca: PushEmpty(int, int)
0x8cb: Push("b1q05ToAttack1")
0x8cc: @ GetVariable(Stack[-1], Stack[-2])
0x8cd: Pop(1)
0x8ce: Push((int) 0)
0x8cf: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x8d0: Return(); Pop(2)

0x8d1: Push("b1q05ToAttack1")
0x8d2: Push((int) 1)
0x8d3: @ SetVariable(Stack[-2], Stack[-1])
0x8d4: Pop(2)
0x8d5: Return(); Pop(0)

0x8d6: PushEmpty(object, object)
0x8d7: @ GetScene(Stack[-1])
0x8d8: Pop(0)
0x8d9: PushEmpty(object)
0x8da: Call2 0x808

0x8db: Pop(0)
0x8dc: @@ RemoveStationaryActor(Stack[-1])
0x8dd: Pop(1)
0x8de: PushEmpty()
0x8df: Call2 0x8a8

0x8e0: Pop(0)
0x8e1: PushEmpty(object)
0x8e2: Stack[-1] = Stack[-4]
0x8e3: Push(-1, 0); TaskCall(5)
0x8e4: Call2 0x57d

0x8e5: Pop(-1, 0); TaskReturn
0x8e6: Pop(1)
0x8e7: Return(); Pop(2)

0x8e8: Stack[-1] = 0
0x8e9: PushEmpty()
0x8ea: PushEmpty(object, int, float)
0x8eb: Stack[-3] = Stack[-7]
0x8ec: Stack[-2] = Stack[-6]
0x8ed: Stack[-1] = Stack[-5]
0x8ee: Call2 0x6f5

0x8ef: Pop(3)
0x8f0: Return(); Pop(0)

0x8f1: PushEmpty()
0x8f2: PushEmpty(object, int, float, cvector, cvector)
0x8f3: Stack[-5] = Stack[-11]
0x8f4: Stack[-4] = Stack[-10]
0x8f5: Stack[-3] = Stack[-9]
0x8f6: Stack[-2] = Stack[-7]
0x8f7: Stack[-1] = Stack[-6]
0x8f8: Call2 0x739

0x8f9: Pop(5)
0x8fa: Return(); Pop(0)

0x8fb: PushEmpty(float, float)
0x8fc: Push("health")
0x8fd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8fe: IF (Stack[-1] == 0) GOTO 0x907; Pop(1)

0x8ff: Push("health")
0x900: @ GetProperty(Stack[-1], Stack[-2])
0x901: Pop(1)
0x902: Push((int) 0)
0x903: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x904: IF (Stack[-1] == 0) GOTO 0x907; Pop(1)

0x905: @ SignalDeath(Stack[-4])
0x906: Pop(0)
0x907: Return(); Pop(2)

0x908: PushEmpty()
0x909: PushEmpty(object)
0x90a: Stack[-1] = Stack[-2]
0x90b: Call2 0x8d6

0x90c: Pop(1)
0x90d: Return(); Pop(0)

