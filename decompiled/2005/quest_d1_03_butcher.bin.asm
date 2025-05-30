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
	cleanup
	quest_d1_03
	butcher_battle
	player
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
	branch
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png
	butcher_fail
	butcher_death

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
	Hold (0 args)
	IsPlayerActor (2 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	FindActor (2 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	StopAsync (0 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	Stop (0 args)
	Sleep (1 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetAnimationOffset (3 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	irand (2 args)
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
	Sleep (2 args)
	RequestClearPath (1 args)
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
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0xc4
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0xcc Vars = (object)
		EVENT_17 Op = 0xd9 Vars = (object)
		EVENT_26 Op = 0xe4 Vars = (string)
		EVENT_6 Op = 0xf3 Vars = ()
	GTASK_3 Vars = (object, int, int, bool, float, int) Params = 0
		EVENT_6 Op = 0x115 Vars = ()
	GTASK_4 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0x3b1 Vars = ()
		EVENT_7 Op = 0x3e8 Vars = (int)
		EVENT_1 Op = 0x403 Vars = (object)
		EVENT_2 Op = 0x412 Vars = (object)
		EVENT_10 Op = 0x498 Vars = (object)
		EVENT_41 Op = 0x4a3 Vars = (object)
	GTASK_5  Params = 1
		EVENT_6 Op = 0x4b7 Vars = ()
		EVENT_22 Op = 0x53b Vars = (object, int, float, float)
		EVENT_16 Op = 0x53d Vars = (object, string)
		EVENT_41 Op = 0x53f Vars = (object)

Events:
EVENT_22 Op = 0x7a8 Vars = (object, int, float, float)
EVENT_43 Op = 0x7b0 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x7ba Vars = (object, string)
EVENT_41 Op = 0x7c7 Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x67a

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x788

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x786

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x78a

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x78c

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x775

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
0x41: Call2 0x6be

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
0x54: Push((int) 505264)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 505265)
0x5a: Push((int) -1)
0x5b: Push((int) 5802)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 506042)
0x5f: Push((int) -1)
0x60: Push((int) 6665)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x78e

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x6cf

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
0x86: Call2 0x78e

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
0x96: Call2 0x6df

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x6f9

0x9f: Pop(0)
0xa0: Push((int) 5801)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral"
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 505264)
0xa8: @@ SetMessage(Stack[-1])
0xa9: Pop(1)
0xaa: @@ ClearReplies()
0xab: Pop(0)
0xac: Push((int) 505265)
0xad: Push((int) -1)
0xae: Push((int) 5802)
0xaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0: Pop(3)
0xb1: Push((int) 506042)
0xb2: Push((int) -1)
0xb3: Push((int) 6665)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb8: PushEmpty(bool)
0xb9: Call2 0x78e

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

0xc4: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xc5: Push((bool) 1)
0xc6: @ SensePlayerOnly(Stack[-1])
0xc7: Pop(1)
0xc8: @ Hold()
0xc9: Pop(0)
0xca: GOTO 0xc8

0xcb: Return(); Pop(0)

0xcc: PushEmpty()
0xcd: PushEmpty(int, object)
0xce: Stack[-1] = Stack[-3]
0xcf: Push(-2, 1); TaskCall(0)
0xd0: Call2 0x0

0xd1: Pop(-2, 1); TaskReturn
0xd2: Pop(2)
0xd3: PushEmpty()
0xd4: Push(-0, 6); TaskCall(3)
0xd5: Call2 0xfb

0xd6: Pop(-0, 6); TaskReturn
0xd7: Pop(0)
0xd8: Return(); Pop(0)

0xd9: PushEmpty(bool, bool)
0xda: @ IsPlayerActor(Stack[-3], Stack[-1])
0xdb: Pop(0)
0xdc: Push(Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xde: PushEmpty()
0xdf: Push(-0, 6); TaskCall(3)
0xe0: Call2 0xfb

0xe1: Pop(-0, 6); TaskReturn
0xe2: Pop(0)
0xe3: Return(); Pop(2)

0xe4: PushEmpty(bool, bool)
0xe5: Push("cleanup")
0xe6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xe8: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xe9: @ IsLoaded(Stack[-1])
0xea: Pop(0)
0xeb: Pop(0); Push((bool) Stack[-1] == 0)
0xec: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xed: PushEmpty(object)
0xee: Call2 0x729

0xef: Pop(0)
0xf0: @ RemoveActor(Stack[-1])
0xf1: Pop(1)
0xf2: Return(); Pop(2)

0xf3: Push( Stack[0 + Tasks[-1].StackPointer] )
0xf4: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf5: PushEmpty(object)
0xf6: Call2 0x729

0xf7: Pop(0)
0xf8: @ RemoveActor(Stack[-1])
0xf9: Pop(1)
0xfa: Return(); Pop(0)

0xfb: PushEmpty(object, object)
0xfc: PushEmpty(bool, string, string)
0xfd: Stack[-2] = "quest_d1_03"
0xfe: Stack[-1] = "butcher_battle"
0xff: Call2 0x755

0x100: Pop(3)
0x101: Push("player")
0x102: @ FindActor(Stack[-2], Stack[-1])
0x103: Pop(1)
0x104: PushEmpty(object, bool, float)
0x105: Stack[-3] = Stack[-4]
0x106: Stack[-2] = (bool) 1
0x107: Stack[-1] = (float) 180.0
0x108: Call2 0x11b

0x109: Pop(3)
0x10a: PushEmpty()
0x10b: Call2 0x790

0x10c: Pop(0)
0x10d: Return(); Pop(2)

0x10e: Stack[-1] = 0
0x10f: PushEmpty()
0x110: Stack[-3] = (float) 0.1
0x111: Return(); Pop(0)

0x112: PushEmpty()
0x113: Stack[-3] = (int) 0
0x114: Return(); Pop(0)

0x115: PushEmpty()
0x116: Call2 0x790

0x117: Pop(0)
0x118: @ Hold()
0x119: Pop(0)
0x11a: Return(); Pop(0)

0x11b: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x11c: PushEmpty()
0x11d: Call2 0x200

0x11e: Pop(0)
0x11f: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x120: Push("@GetAttackDistance")
0x121: Push((int) 1)
0x122: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x123: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x124: @@ GetAttackDistance(Stack[-11])
0x125: Pop(0)
0x126: Push((int) 50)
0x127: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x128: GOTO 0x12a

0x129: Stack[-11] = Stack[-23]
0x12a: Push((int) 150)
0x12b: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12d: Stack[-11] = (int) 150
0x12e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x12f: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x130: @ IsPlayerActor(Stack[-0], Stack[-8])
0x131: Pop(0)
0x132: Push(Stack[-8])
0x133: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x134: Push("attack")
0x135: @ PlayGlobalMusic(Stack[-1])
0x136: Pop(1)
0x137: PushEmpty(object)
0x138: Call2 0x729

0x139: Pop(0)
0x13a: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x13b: Pop(1)
0x13c: Push(Stack[-24])
0x13d: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13e: Stack[-7] = (bool) 0
0x13f: GOTO 0x141

0x140: Stack[-7] = (bool) 1
0x141: Push((float)400.0)
0x142: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x143: PushEmpty(bool)
0x144: Stack[-1] = (bool) 0
0x145: PushEmpty(bool, object)
0x146: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x147: Call2 0x5d9

0x148: Pop(1)
0x149: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x14a: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x14b: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x14c: Stack[-1] = (bool) 1
0x14d: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x14e: PushEmpty()
0x14f: Call2 0x39d

0x150: Pop(0)
0x151: @@ GetPFPosition(Stack[-10])
0x152: Pop(0)
0x153: @ GetPFPosition(Stack[-9])
0x154: Pop(0)
0x155: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x156: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x157: Pop(0); Push(Stack[-6] * Stack[-6]);
0x158: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x159: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x15a: PushEmpty(bool, object, float, float, bool, bool)
0x15b: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x15c: Stack[-4] = Stack[-17]
0x15d: Stack[-3] = (float) 3000.0
0x15e: Stack[-2] = (bool) 1
0x15f: Stack[-1] = (bool) 0
0x160: Push(-6, 3); TaskCall(4)
0x161: Call2 0x3b7

0x162: Pop(-6, 3); TaskReturn
0x163: Pop(5)
0x164: Pop(1); Push((bool) Stack[-1] == 0)
0x165: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x166: GOTO 0x1ef

0x167: Stack[-7] = (bool) 0
0x168: GOTO 0x1ee

0x169: Pop(0); Push(Stack[-23] * Stack[-23]);
0x16a: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x16c: @@ GetPFPosition(Stack[-3])
0x16d: Pop(0)
0x16e: @ CanReachByPF(Stack[-2], Stack[-3])
0x16f: Pop(0)
0x170: Pop(0); Push((bool) Stack[-2] == 0)
0x171: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x172: PushEmpty(bool, object, float, float, bool, bool)
0x173: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x174: Stack[-4] = Stack[-17]
0x175: Stack[-3] = (float) 3000.0
0x176: Stack[-2] = (bool) 1
0x177: Stack[-1] = (bool) 0
0x178: Push(-6, 3); TaskCall(4)
0x179: Call2 0x3b7

0x17a: Pop(-6, 3); TaskReturn
0x17b: Pop(5)
0x17c: Pop(1); Push((bool) Stack[-1] == 0)
0x17d: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17e: GOTO 0x1ef

0x17f: Stack[-7] = (bool) 0
0x180: GOTO 0x143

0x181: Pop(0); Push((bool) Stack[-7] == 0)
0x182: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x183: PushEmpty(object)
0x184: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x185: Call2 0x66f

0x186: Pop(1)
0x187: Push("all")
0x188: Push("attack_on")
0x189: @ PlayAnimation(Stack[-2], Stack[-1])
0x18a: Pop(2)
0x18b: @ WaitForAnimEnd()
0x18c: Pop(0)
0x18d: PushEmpty()
0x18e: Call2 0x39d

0x18f: Pop(0)
0x190: @ StopAsync()
0x191: Pop(0)
0x192: Stack[-7] = (bool) 1
0x193: PushEmpty(bool, object)
0x194: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x195: Call2 0x5d9

0x196: Pop(1)
0x197: Pop(1); Push((bool) Stack[-1] == 0)
0x198: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x199: GOTO 0x1ef

0x19a: @ rand(Stack[-1])
0x19b: Pop(0)
0x19c: PushEmpty(bool)
0x19d: Stack[-1] = (bool) 1
0x19e: Push((float)0.25)
0x19f: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a1: PushEmpty(bool)
0x1a2: Call2 0x372

0x1a3: Pop(0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a5: Stack[-1] = (bool) 0
0x1a6: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1a7: @ Face(Stack[-0])
0x1a8: Pop(0)
0x1a9: PushEmpty()
0x1aa: Call2 0x3a4

0x1ab: Pop(0)
0x1ac: Push("all")
0x1ad: Push("attack_stay")
0x1ae: @ PlayAnimation(Stack[-2], Stack[-1])
0x1af: Pop(2)
0x1b0: PushEmpty(bool, float)
0x1b1: Stack[-1] = Stack[-25]
0x1b2: Call2 0x2ee

0x1b3: Pop(2)
0x1b4: @ StopAsync()
0x1b5: Pop(0)
0x1b6: GOTO 0x1e5

0x1b7: @ Face(Stack[-0])
0x1b8: Pop(0)
0x1b9: Push("all")
0x1ba: Push("fjump")
0x1bb: @ PlayAnimation(Stack[-2], Stack[-1])
0x1bc: Pop(2)
0x1bd: @ WaitForAnimEnd()
0x1be: Pop(0)
0x1bf: PushEmpty()
0x1c0: Call2 0x39d

0x1c1: Pop(0)
0x1c2: Push(CVector(0.0, 0.0, 0.0))
0x1c3: @ SetSpeed(Stack[-1])
0x1c4: Pop(1)
0x1c5: @ Stop()
0x1c6: Pop(0)
0x1c7: @ StopAsync()
0x1c8: Pop(0)
0x1c9: PushEmpty(bool)
0x1ca: Call2 0x372

0x1cb: Pop(0)
0x1cc: Pop(1); Push((bool) Stack[-1] == 0)
0x1cd: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1ce: PushEmpty(bool, object)
0x1cf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d0: Call2 0x5d9

0x1d1: Pop(1)
0x1d2: Pop(1); Push((bool) Stack[-1] == 0)
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d4: GOTO 0x1ef

0x1d5: @@ GetPFPosition(Stack[-10])
0x1d6: Pop(0)
0x1d7: @ GetPFPosition(Stack[-9])
0x1d8: Pop(0)
0x1d9: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x1da: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1db: Pop(0); Push(Stack[-23] * Stack[-23]);
0x1dc: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1de: PushEmpty(bool, float)
0x1df: Stack[-1] = Stack[-25]
0x1e0: Call2 0x24a

0x1e1: Pop(1)
0x1e2: Pop(1); Push((bool) Stack[-1] == 0)
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e4: GOTO 0x1ef

0x1e5: GOTO 0x1ee

0x1e6: PushEmpty(bool, float)
0x1e7: Stack[-1] = Stack[-25]
0x1e8: Call2 0x24a

0x1e9: Pop(1)
0x1ea: Pop(1); Push((bool) Stack[-1] == 0)
0x1eb: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1ec: GOTO 0x1ef

0x1ed: Stack[-7] = (bool) 1
0x1ee: GOTO 0x143

0x1ef: @ WaitForAnimEnd()
0x1f0: Pop(0)
0x1f1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f3: Return(); Pop(22)

0x1f4: Push("all")
0x1f5: Push("attack_off")
0x1f6: @ PlayAnimation(Stack[-2], Stack[-1])
0x1f7: Pop(2)
0x1f8: @ WaitForAnimEnd()
0x1f9: Pop(0)
0x1fa: Push(Stack[-8])
0x1fb: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fc: Push((float)2.0)
0x1fd: @ Sleep(Stack[-1])
0x1fe: Pop(1)
0x1ff: Return(); Pop(22)

0x200: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x201: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x202: Push("all")
0x203: Push("attack_begin")
0x204: Push((int) 1)
0x205: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x206: Pop(2); Push(Stack[-2] + Stack[-1]);
0x207: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x208: Pop(2)
0x209: Pop(0); Push((bool) Stack[-3] == 0)
0x20a: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20b: GOTO 0x20f

0x20c: Push((int) 1)
0x20d: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x20e: GOTO 0x202

0x20f: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x210: Push("attack")
0x211: Push((int) 1)
0x212: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x213: Pop(2); Push(Stack[-2] + Stack[-1]);
0x214: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x215: Pop(1)
0x216: Pop(0); Push((bool) Stack[-2] == 0)
0x217: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x218: GOTO 0x21c

0x219: Push((int) 1)
0x21a: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x21b: GOTO 0x210

0x21c: Push("all")
0x21d: Push("bjump")
0x21e: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x21f: Pop(2)
0x220: Push(CvectorIndex(Stack[-1], 2))
0x221: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x222: Return(); Pop(6)

0x223: PushEmpty(object, float, float, object, float, float)
0x224: Push((float)0.9)
0x225: Pop(1); Push(Stack[-9] * Stack[-1]);
0x226: @ GetVictim(Stack[-1], Stack[-4])
0x227: Pop(1)
0x228: @ ReportAttack(Stack[-0])
0x229: Pop(0)
0x22a: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x22b: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x22c: PushEmpty(float, object, int)
0x22d: Stack[-2] = Stack[-6]
0x22e: Stack[-1] = Stack[-10]
0x22f: Call2 0x10f

0x230: Stack[-5] = Stack[-3]
0x231: Pop(3)
0x232: PushEmpty(float, object, float, int)
0x233: Stack[-3] = Stack[-7]
0x234: Stack[-2] = Stack[-6]
0x235: PushEmpty(int, object, int)
0x236: Stack[-2] = Stack[-10]
0x237: Stack[-1] = Stack[-14]
0x238: Call2 0x112

0x239: Stack[-4] = Stack[-3]
0x23a: Pop(3)
0x23b: Call2 0x567

0x23c: Stack[-5] = Stack[-4]
0x23d: Pop(4)
0x23e: PushEmpty(int)
0x23f: Call2 0x3a2

0x240: Pop(0)
0x241: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x242: Pop(1)
0x243: PushEmpty(object, float)
0x244: Stack[-2] = Stack[-5]
0x245: Stack[-1] = Stack[-3]
0x246: Call2 0x3a9

0x247: Pop(2)
0x248: Return(); Pop(6)

0x249: Stack[-3] = 0
0x24a: PushEmpty(int, bool, int, string, int, bool, int, string)
0x24b: PushEmpty()
0x24c: Call2 0x39d

0x24d: Pop(0)
0x24e: @ irand(Stack[-4], Stack[-1])
0x24f: Pop(0)
0x250: Push((int) 1)
0x251: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x252: @ Face(Stack[-0])
0x253: Pop(0)
0x254: Push((bool) 1)
0x255: @ SetAttackState(Stack[-1])
0x256: Pop(1)
0x257: PushEmpty()
0x258: Call2 0x76a

0x259: Pop(0)
0x25a: Push("all")
0x25b: Push("attack_begin")
0x25c: Pop(1); Push(Stack[-1] + Stack[-6]);
0x25d: @ PlayAnimation(Stack[-2], Stack[-1])
0x25e: Pop(2)
0x25f: @ WaitForAnimEnd()
0x260: Pop(0)
0x261: PushEmpty()
0x262: Call2 0x37d

0x263: Pop(0)
0x264: PushEmpty(bool, object)
0x265: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x266: Call2 0x5d9

0x267: Pop(1)
0x268: Pop(1); Push((bool) Stack[-1] == 0)
0x269: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x26a: @ StopAsync()
0x26b: Pop(0)
0x26c: Stack[-10] = (bool) 0
0x26d: Return(); Pop(8)

0x26e: PushEmpty(float, int)
0x26f: Stack[-2] = Stack[-11]
0x270: Stack[-1] = Stack[-6]
0x271: Call2 0x223

0x272: Pop(2)
0x273: Push("all")
0x274: Push("attack_middle")
0x275: Pop(1); Push(Stack[-1] + Stack[-6]);
0x276: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x277: Pop(2)
0x278: Push(Stack[-3])
0x279: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x27a: PushEmpty()
0x27b: Call2 0x76a

0x27c: Pop(0)
0x27d: Push("all")
0x27e: Push("attack_middle")
0x27f: Pop(1); Push(Stack[-1] + Stack[-6]);
0x280: @ PlayAnimation(Stack[-2], Stack[-1])
0x281: Pop(2)
0x282: @ WaitForAnimEnd()
0x283: Pop(0)
0x284: PushEmpty()
0x285: Call2 0x39d

0x286: Pop(0)
0x287: PushEmpty(bool, object)
0x288: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x289: Call2 0x5d9

0x28a: Pop(1)
0x28b: Pop(1); Push((bool) Stack[-1] == 0)
0x28c: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x28d: @ StopAsync()
0x28e: Pop(0)
0x28f: Stack[-10] = (bool) 0
0x290: Return(); Pop(8)

0x291: PushEmpty(float, int)
0x292: Stack[-2] = Stack[-11]
0x293: Stack[-1] = Stack[-6]
0x294: Call2 0x223

0x295: Pop(2)
0x296: Stack[-2] = (int) 1
0x297: Push("attack_middle")
0x298: Pop(1); Push(Stack[-1] + Stack[-5]);
0x299: Push("_")
0x29a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x29b: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x29c: Push("all")
0x29d: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x29e: Pop(1)
0x29f: Pop(0); Push((bool) Stack[-3] == 0)
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x2a1: GOTO 0x2bf

0x2a2: PushEmpty()
0x2a3: Call2 0x76a

0x2a4: Pop(0)
0x2a5: Push("all")
0x2a6: @ PlayAnimation(Stack[-1], Stack[-2])
0x2a7: Pop(1)
0x2a8: @ WaitForAnimEnd()
0x2a9: Pop(0)
0x2aa: PushEmpty()
0x2ab: Call2 0x39d

0x2ac: Pop(0)
0x2ad: PushEmpty(bool, object)
0x2ae: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2af: Call2 0x5d9

0x2b0: Pop(1)
0x2b1: Pop(1); Push((bool) Stack[-1] == 0)
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b3: @ StopAsync()
0x2b4: Pop(0)
0x2b5: Stack[-10] = (bool) 0
0x2b6: Return(); Pop(8)

0x2b7: PushEmpty(float, int)
0x2b8: Stack[-2] = Stack[-11]
0x2b9: Stack[-1] = Stack[-6]
0x2ba: Call2 0x223

0x2bb: Pop(2)
0x2bc: Push((int) 1)
0x2bd: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2be: GOTO 0x297

0x2bf: Push((bool) 0)
0x2c0: @ SetAttackState(Stack[-1])
0x2c1: Pop(1)
0x2c2: Push("all")
0x2c3: Push("attack_end")
0x2c4: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2c5: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c6: Pop(2)
0x2c7: PushEmpty(bool)
0x2c8: Call2 0x3ab

0x2c9: Pop(0)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2cb: PushEmpty(bool, float)
0x2cc: Stack[-1] = (float) 0.75
0x2cd: Call2 0x2d3

0x2ce: Pop(2)
0x2cf: @ StopAsync()
0x2d0: Pop(0)
0x2d1: Stack[-10] = (bool) 1
0x2d2: Return(); Pop(8)

0x2d3: PushEmpty(float, bool, float, bool)
0x2d4: @ rand(Stack[-2])
0x2d5: Pop(0)
0x2d6: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x2d7: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2d8: @ IsAnimationPlaying(Stack[-1])
0x2d9: Pop(0)
0x2da: Pop(0); Push((bool) Stack[-1] == 0)
0x2db: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2dc: GOTO 0x2e6

0x2dd: PushEmpty(bool)
0x2de: Call2 0x335

0x2df: Pop(0)
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2e1: Stack[-6] = (bool) 1
0x2e2: Return(); Pop(4)

0x2e3: @ sync()
0x2e4: Pop(0)
0x2e5: GOTO 0x2d8

0x2e6: GOTO 0x2ec

0x2e7: @ WaitForAnimEnd()
0x2e8: Pop(0)
0x2e9: PushEmpty()
0x2ea: Call2 0x39d

0x2eb: Pop(0)
0x2ec: Stack[-6] = (bool) 0
0x2ed: Return(); Pop(4)

0x2ee: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x2ef: @ IsAnimationPlaying(Stack[-5])
0x2f0: Pop(0)
0x2f1: Pop(0); Push((bool) Stack[-5] == 0)
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f3: GOTO 0x314

0x2f4: PushEmpty(bool)
0x2f5: Call2 0x335

0x2f6: Pop(0)
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f8: Stack[-12] = (bool) 1
0x2f9: Return(); Pop(10)

0x2fa: PushEmpty(bool, object)
0x2fb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fc: Call2 0x5d9

0x2fd: Pop(1)
0x2fe: Pop(1); Push((bool) Stack[-1] == 0)
0x2ff: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x300: Stack[-12] = (bool) 0
0x301: Return(); Pop(10)

0x302: @@ GetPFPosition(Stack[-4])
0x303: Pop(0)
0x304: @ GetPFPosition(Stack[-3])
0x305: Pop(0)
0x306: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x307: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x308: Pop(0); Push(Stack[-11] * Stack[-11]);
0x309: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x30a: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x30b: PushEmpty(bool, float)
0x30c: Stack[-1] = Stack[-13]
0x30d: Call2 0x24a

0x30e: Pop(2)
0x30f: Stack[-12] = (bool) 1
0x310: Return(); Pop(10)

0x311: @ sync()
0x312: Pop(0)
0x313: GOTO 0x2ef

0x314: PushEmpty()
0x315: Call2 0x39d

0x316: Pop(0)
0x317: Stack[-12] = (bool) 0
0x318: Return(); Pop(10)

0x319: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x31a: PushEmpty(bool, object)
0x31b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31c: Call2 0x5d9

0x31d: Pop(1)
0x31e: Pop(1); Push((bool) Stack[-1] == 0)
0x31f: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x320: Stack[-11] = (bool) 0
0x321: Return(); Pop(10)

0x322: PushEmpty(bool)
0x323: Call2 0x372

0x324: Pop(0)
0x325: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x326: @@ GetPFPosition(Stack[-5])
0x327: Pop(0)
0x328: @ GetPFPosition(Stack[-4])
0x329: Pop(0)
0x32a: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x32b: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x32c: @@ GetAttackDistance(Stack[-1])
0x32d: Pop(0)
0x32e: Push((int) 50)
0x32f: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x330: Pop(0); Push(Stack[-1] * Stack[-1]);
0x331: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x332: Return(); Pop(10)

0x333: Stack[-11] = (bool) 0
0x334: Return(); Pop(10)

0x335: PushEmpty(bool)
0x336: Stack[-1] = (bool) 0
0x337: PushEmpty(bool)
0x338: Call2 0x319

0x339: Pop(0)
0x33a: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33b: PushEmpty(bool)
0x33c: Call2 0x345

0x33d: Pop(0)
0x33e: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33f: Stack[-1] = (bool) 1
0x340: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x341: Stack[-1] = (bool) 1
0x342: Return(); Pop(0)

0x343: Stack[-1] = (bool) 0
0x344: Return(); Pop(0)

0x345: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x346: @ GetScene(Stack[-5])
0x347: Pop(0)
0x348: Stack[-4] = (bool) 0
0x349: PushEmpty(cvector, object)
0x34a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x34b: Call2 0x54f

0x34c: Pop(1)
0x34d: Pop(1); Push(( -Stack[-1])
0x34e: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x34f: Pop(1)
0x350: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x351: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x352: GOTO 0x36f

0x353: @ Face(Stack[-0])
0x354: Pop(0)
0x355: Push("all")
0x356: Push("bjump")
0x357: @ PlayAnimation(Stack[-2], Stack[-1])
0x358: Pop(2)
0x359: @@ GetPFPosition(Stack[-2])
0x35a: Pop(0)
0x35b: @ GetPFPosition(Stack[-1])
0x35c: Pop(0)
0x35d: @ WaitForAnimEnd()
0x35e: Pop(0)
0x35f: PushEmpty()
0x360: Call2 0x39d

0x361: Pop(0)
0x362: @ StopAsync()
0x363: Pop(0)
0x364: Push(CVector(0.0, 0.0, 0.0))
0x365: @ SetSpeed(Stack[-1])
0x366: Pop(1)
0x367: Stack[-4] = (bool) 1
0x368: PushEmpty(bool)
0x369: Call2 0x319

0x36a: Pop(0)
0x36b: Pop(1); Push((bool) Stack[-1] == 0)
0x36c: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x36d: GOTO 0x36f

0x36e: GOTO 0x349

0x36f: Stack[-11] = Stack[-4]
0x370: Return(); Pop(10)

0x371: Stack[-5] = 0
0x372: PushEmpty(bool, bool)
0x373: Push("IsAttacking")
0x374: Push((int) 1)
0x375: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x376: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x377: @@ IsAttacking(Stack[-1])
0x378: Pop(0)
0x379: Stack[-3] = Stack[-1]
0x37a: Return(); Pop(2)

0x37b: Stack[-3] = (bool) 0
0x37c: Return(); Pop(2)

0x37d: PushEmpty(float, int, float, int)
0x37e: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x37f: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x380: Return(); Pop(4)

0x381: Push( Stack[5 + Tasks[-1].StackPointer] )
0x382: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x383: Push((int) -1)
0x384: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x385: Push((int) 0)
0x386: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x387: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x388: Return(); Pop(4)

0x389: @ rand(Stack[-2])
0x38a: Pop(0)
0x38b: PushEmpty(float)
0x38c: Call2 0x3af

0x38d: Pop(0)
0x38e: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x38f: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x390: @ irand(Stack[-1], Stack[-2])
0x391: Pop(0)
0x392: Push((int) 1)
0x393: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x394: Push("attack")
0x395: Pop(1); Push(Stack[-1] + Stack[-2]);
0x396: @ Speak(Stack[-1])
0x397: Pop(1)
0x398: PushEmpty(int)
0x399: Call2 0x3ad

0x39a: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x39b: Pop(1)
0x39c: Return(); Pop(4)

0x39d: PushEmpty(object)
0x39e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x39f: Call2 0x761

0x3a0: Pop(1)
0x3a1: Return(); Pop(0)

0x3a2: Stack[-1] = (int) 0
0x3a3: Return(); Pop(0)

0x3a4: PushEmpty(string)
0x3a5: Stack[-1] = "attack_stay"
0x3a6: Call2 0x700

0x3a7: Pop(1)
0x3a8: Return(); Pop(0)

0x3a9: PushEmpty()
0x3aa: Return(); Pop(0)

0x3ab: Stack[-1] = (bool) 1
0x3ac: Return(); Pop(0)

0x3ad: Stack[-1] = (int) 1
0x3ae: Return(); Pop(0)

0x3af: Stack[-1] = (float) 0.5
0x3b0: Return(); Pop(0)

0x3b1: PushEmpty()
0x3b2: Call2 0x790

0x3b3: Pop(0)
0x3b4: @ Hold()
0x3b5: Pop(0)
0x3b6: Return(); Pop(0)

0x3b7: PushEmpty(bool, bool, bool, bool)
0x3b8: PushEmpty(object)
0x3b9: Stack[-1] = Stack[-10]
0x3ba: Call2 0x761

0x3bb: Pop(1)
0x3bc: Push((int) 1)
0x3bd: Push((int) 5)
0x3be: @ SetTimer(Stack[-2], Stack[-1])
0x3bf: Pop(2)
0x3c0: @ CanSee(Stack[-2], Stack[-9])
0x3c1: Pop(0)
0x3c2: Push(Stack[-2])
0x3c3: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3c5: PushEmpty(object)
0x3c6: Stack[-1] = Stack[-10]
0x3c7: Call2 0x6ee

0x3c8: Pop(1)
0x3c9: GOTO 0x3cb

0x3ca: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3cb: PushEmpty(bool, object)
0x3cc: Stack[-1] = Stack[-11]
0x3cd: Call2 0x556

0x3ce: Pop(1)
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d0: PushEmpty(object)
0x3d1: Call2 0x729

0x3d2: Pop(0)
0x3d3: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x3d4: Pop(1)
0x3d5: PushEmpty(bool, object, float, float, bool, bool)
0x3d6: Stack[-5] = Stack[-15]
0x3d7: Stack[-4] = Stack[-14]
0x3d8: Stack[-3] = Stack[-13]
0x3d9: Stack[-2] = Stack[-12]
0x3da: Stack[-1] = Stack[-11]
0x3db: Call2 0x420

0x3dc: Stack[-7] = Stack[-6]
0x3dd: Pop(6)
0x3de: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3df: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e0: Push("head")
0x3e1: @ UnlookAsync(Stack[-1])
0x3e2: Pop(1)
0x3e3: Push((int) 1)
0x3e4: @ KillTimer(Stack[-1])
0x3e5: Pop(1)
0x3e6: Stack[-10] = Stack[-1]
0x3e7: Return(); Pop(4)

0x3e8: PushEmpty()
0x3e9: Push((int) 1)
0x3ea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3eb: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3ec: PushEmpty(object)
0x3ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ee: Call2 0x761

0x3ef: Pop(1)
0x3f0: GOTO 0x3f5

0x3f1: PushEmpty(int)
0x3f2: Stack[-1] = Stack[-2]
0x3f3: Call2 0x486

0x3f4: Pop(1)
0x3f5: Return(); Pop(0)

0x3f6: Push((int) 1)
0x3f7: @ KillTimer(Stack[-1])
0x3f8: Pop(1)
0x3f9: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3fa: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3fc: Push("head")
0x3fd: @ UnlookAsync(Stack[-1])
0x3fe: Pop(1)
0x3ff: PushEmpty()
0x400: Call2 0x49c

0x401: Pop(0)
0x402: Return(); Pop(0)

0x403: PushEmpty()
0x404: PushEmpty(bool)
0x405: Stack[-1] = (bool) 0
0x406: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x407: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x408: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x409: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x40a: Stack[-1] = (bool) 1
0x40b: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x40c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x40d: PushEmpty(object)
0x40e: Stack[-1] = Stack[-2]
0x40f: Call2 0x6ee

0x410: Pop(1)
0x411: Return(); Pop(0)

0x412: PushEmpty()
0x413: PushEmpty(bool)
0x414: Stack[-1] = (bool) 0
0x415: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x416: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x417: Push( Stack[2 + Tasks[-1].StackPointer] )
0x418: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x419: Stack[-1] = (bool) 1
0x41a: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x41b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x41c: Push("head")
0x41d: @ UnlookAsync(Stack[-1])
0x41e: Pop(1)
0x41f: Return(); Pop(0)

0x420: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x421: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x422: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x423: Stack[-7] = Stack[-17]
0x424: PushEmpty(bool, object)
0x425: Stack[-1] = Stack[-23]
0x426: Call2 0x4ac

0x427: Pop(1)
0x428: Pop(1); Push((bool) Stack[-1] == 0)
0x429: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x42a: Stack[-22] = (bool) 0
0x42b: Return(); Pop(16)

0x42c: @@ GetPosition(Stack[-5])
0x42d: Pop(0)
0x42e: @ GetPosition(Stack[-4])
0x42f: Pop(0)
0x430: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x431: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x432: PushEmpty(bool)
0x433: Stack[-1] = (bool) 0
0x434: Push((int) 0)
0x435: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x436: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x437: Pop(0); Push(Stack[-20] * Stack[-20]);
0x438: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x439: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x43a: Stack[-1] = (bool) 1
0x43b: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x43c: @ Stop()
0x43d: Pop(0)
0x43e: Stack[-22] = (bool) 0
0x43f: Return(); Pop(16)

0x440: Pop(0); Push(Stack[-20] * Stack[-20]);
0x441: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x442: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x443: @@ GetPFPosition(Stack[-5])
0x444: Pop(0)
0x445: @ FindPathTo(Stack[-1], Stack[-5])
0x446: Pop(0)
0x447: Pop(0); Push(( Stack[-1] != 0 )
0x448: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x449: Stack[-6] = Stack[-1]
0x44a: Stack[-1] = 0
0x44b: Pop(0); Push(( Stack[-6] != 0 )
0x44c: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x44d: Push(Stack[-7])
0x44e: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x44f: Stack[-7] = (bool) 0
0x450: @ RotatePath(Stack[-6], Stack[-8])
0x451: Pop(0)
0x452: Pop(0); Push((bool) Stack[-8] == 0)
0x453: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x454: GOTO 0x484

0x455: Push((int) 0)
0x456: Push((float)0.3)
0x457: @ SetTimer(Stack[-2], Stack[-1])
0x458: Pop(2)
0x459: PushEmpty(string)
0x45a: Call2 0x4b3

0x45b: Pop(0)
0x45c: PushEmpty(string)
0x45d: Call2 0x4b5

0x45e: Pop(0)
0x45f: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x460: Pop(2)
0x461: Pop(0); Push((bool) Stack[-8] == 0)
0x462: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x463: Push( Stack[0 + Tasks[-1].StackPointer] )
0x464: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x465: Stack[-6] = 0
0x466: GOTO 0x484

0x467: GOTO 0x469

0x468: GOTO 0x483

0x469: GOTO 0x46b

0x46a: Stack[-6] = 0
0x46b: GOTO 0x47c

0x46c: Push((int) 0)
0x46d: @ KillTimer(Stack[-1])
0x46e: Pop(1)
0x46f: Push((float)0.5)
0x470: @ Sleep(Stack[-1], Stack[-9])
0x471: Pop(1)
0x472: Pop(0); Push((bool) Stack[-8] == 0)
0x473: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x474: Push( Stack[0 + Tasks[-1].StackPointer] )
0x475: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x476: Stack[-6] = 0
0x477: GOTO 0x484

0x478: Push((int) 0)
0x479: Push((float)0.3)
0x47a: @ SetTimer(Stack[-2], Stack[-1])
0x47b: Pop(2)
0x47c: Stack[-1] = 0
0x47d: GOTO 0x482

0x47e: Push((int) 0)
0x47f: @ KillTimer(Stack[-1])
0x480: Pop(1)
0x481: GOTO 0x484

0x482: Stack[-6] = 0
0x483: GOTO 0x424

0x484: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x485: Return(); Pop(16)

0x486: PushEmpty()
0x487: Push((int) 0)
0x488: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x489: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x48a: Return(); Pop(0)

0x48b: PushEmpty(bool, object)
0x48c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x48d: Call2 0x4ac

0x48e: Pop(1)
0x48f: Pop(1); Push((bool) Stack[-1] == 0)
0x490: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x491: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x492: Push((int) 0)
0x493: @ KillTimer(Stack[-1])
0x494: Pop(1)
0x495: @ Stop()
0x496: Pop(0)
0x497: Return(); Pop(0)

0x498: PushEmpty()
0x499: @ RequestClearPath(Stack[-1])
0x49a: Pop(0)
0x49b: Return(); Pop(0)

0x49c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x49d: Push((int) 0)
0x49e: @ KillTimer(Stack[-1])
0x49f: Pop(1)
0x4a0: @ Stop()
0x4a1: Pop(0)
0x4a2: Return(); Pop(0)

0x4a3: PushEmpty()
0x4a4: PushEmpty()
0x4a5: Call2 0x3f6

0x4a6: Pop(0)
0x4a7: PushEmpty(object)
0x4a8: Stack[-1] = Stack[-2]
0x4a9: Call2 0x7c7

0x4aa: Pop(1)
0x4ab: Return(); Pop(0)

0x4ac: PushEmpty()
0x4ad: PushEmpty(bool, object)
0x4ae: Stack[-1] = Stack[-3]
0x4af: Call2 0x5d9

0x4b0: Stack[-4] = Stack[-2]
0x4b1: Pop(2)
0x4b2: Return(); Pop(0)

0x4b3: Stack[-1] = "walk"
0x4b4: Return(); Pop(0)

0x4b5: Stack[-1] = "run"
0x4b6: Return(); Pop(0)

0x4b7: PushEmpty(object)
0x4b8: Call2 0x729

0x4b9: Pop(0)
0x4ba: @ RemoveActor(Stack[-1])
0x4bb: Pop(1)
0x4bc: Return(); Pop(0)

0x4bd: PushEmpty()
0x4be: PushEmpty(object)
0x4bf: Stack[-1] = Stack[-2]
0x4c0: Call2 0x4c6

0x4c1: Pop(1)
0x4c2: @ Hold()
0x4c3: Pop(0)
0x4c4: GOTO 0x4c2

0x4c5: Return(); Pop(0)

0x4c6: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x4c7: Pop(0); Push((bool) Stack[-21] == 0)
0x4c8: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4c9: PushEmpty(string)
0x4ca: Stack[-1] = "fdie"
0x4cb: Call2 0x521

0x4cc: Pop(1)
0x4cd: GOTO 0x520

0x4ce: @@ GetPosition(Stack[-10])
0x4cf: Pop(0)
0x4d0: @ GetPosition(Stack[-9])
0x4d1: Pop(0)
0x4d2: @ GetDirection(Stack[-8])
0x4d3: Pop(0)
0x4d4: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x4d5: Push(CvectorIndex(Stack[-7], 0))
0x4d6: Push(CvectorIndex(Stack[-9], 0))
0x4d7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4d8: Push(CvectorIndex(Stack[-8], 2))
0x4d9: Push(CvectorIndex(Stack[-10], 2))
0x4da: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4db: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4dc: Push((int) 0)
0x4dd: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4de: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4df: Stack[-6] = "fdie"
0x4e0: GOTO 0x4e2

0x4e1: Stack[-6] = "bdie"
0x4e2: @ RemoveRTEnvelope()
0x4e3: Pop(0)
0x4e4: @ SetDeathState()
0x4e5: Pop(0)
0x4e6: @ Stop()
0x4e7: Pop(0)
0x4e8: @ StopAsync()
0x4e9: Pop(0)
0x4ea: Stack[-5] = Stack[-21]
0x4eb: Push("GetScriptProperty")
0x4ec: Push((int) 2)
0x4ed: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x4ee: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4ef: Push("Owner")
0x4f0: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x4f1: Pop(1)
0x4f2: Push(Stack[-4])
0x4f3: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4f4: Push("Owner")
0x4f5: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x4f6: Pop(1)
0x4f7: Pop(0); Push((bool) Stack[-5] == 0)
0x4f8: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4f9: Stack[-5] = Stack[-21]
0x4fa: Push("@GetEyesHeight")
0x4fb: Push((int) 1)
0x4fc: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x4fd: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x4fe: @@ GetEyesHeight(Stack[-2])
0x4ff: Pop(0)
0x500: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x501: Push(CvectorIndex(Stack[-1], 1))
0x502: Stack[-1] = Stack[-3]
0x503: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x504: Push("head")
0x505: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x506: Pop(1)
0x507: Stack[-3] = (bool) 1
0x508: GOTO 0x50a

0x509: Stack[-3] = (bool) 0
0x50a: PushEmpty(string)
0x50b: Stack[-1] = Stack[-7]
0x50c: Call2 0x700

0x50d: Pop(1)
0x50e: Push("all")
0x50f: @ PlayAnimation(Stack[-1], Stack[-7])
0x510: Pop(1)
0x511: @ WaitForAnimEnd()
0x512: Pop(0)
0x513: Push(Stack[-3])
0x514: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x515: @ StopAsync()
0x516: Pop(0)
0x517: Push("head")
0x518: @ UnlookAsync(Stack[-1])
0x519: Pop(1)
0x51a: Push("all")
0x51b: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x51c: Pop(1)
0x51d: @ RemoveEnvelope()
0x51e: Pop(0)
0x51f: Stack[-5] = 0
0x520: Return(); Pop(20)

0x521: PushEmpty()
0x522: @ RemoveRTEnvelope()
0x523: Pop(0)
0x524: @ SetDeathState()
0x525: Pop(0)
0x526: @ Stop()
0x527: Pop(0)
0x528: @ StopAsync()
0x529: Pop(0)
0x52a: @ StopSecondaryAnimation()
0x52b: Pop(0)
0x52c: PushEmpty(string)
0x52d: Stack[-1] = Stack[-2]
0x52e: Call2 0x700

0x52f: Pop(1)
0x530: Push("all")
0x531: @ PlayAnimation(Stack[-1], Stack[-2])
0x532: Pop(1)
0x533: @ WaitForAnimEnd()
0x534: Pop(0)
0x535: Push("all")
0x536: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x537: Pop(1)
0x538: @ RemoveEnvelope()
0x539: Pop(0)
0x53a: Return(); Pop(0)

0x53b: PushEmpty()
0x53c: Return(); Pop(0)

0x53d: PushEmpty()
0x53e: Return(); Pop(0)

0x53f: PushEmpty()
0x540: Return(); Pop(0)

0x541: PushEmpty()
0x542: Push((int) 2)
0x543: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x544: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x545: Stack[-2] = "fire"
0x546: Return(); Pop(0)

0x547: GOTO 0x54d

0x548: Push((int) 1)
0x549: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x54a: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x54b: Stack[-2] = "bullet"
0x54c: Return(); Pop(0)

0x54d: Stack[-2] = "phys"
0x54e: Return(); Pop(0)

0x54f: PushEmpty(cvector, cvector, cvector, cvector)
0x550: @ GetPosition(Stack[-2])
0x551: Pop(0)
0x552: @@ GetPosition(Stack[-1])
0x553: Pop(0)
0x554: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x555: Return(); Pop(4)

0x556: PushEmpty(bool, bool)
0x557: @ IsPlayerActor(Stack[-3], Stack[-1])
0x558: Pop(0)
0x559: Stack[-4] = Stack[-1]
0x55a: Return(); Pop(2)

0x55b: PushEmpty(bool, bool)
0x55c: Push("HasProperty")
0x55d: Push((int) 2)
0x55e: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x55f: Pop(1); Push((bool) Stack[-1] == 0)
0x560: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x561: Stack[-5] = (bool) 0
0x562: Return(); Pop(2)

0x563: @@ HasProperty(Stack[-3], Stack[-1])
0x564: Pop(0)
0x565: Stack[-5] = Stack[-1]
0x566: Return(); Pop(2)

0x567: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x568: PushEmpty(bool, object, string)
0x569: Stack[-2] = Stack[-18]
0x56a: Stack[-1] = "health"
0x56b: Call2 0x55b

0x56c: Pop(2)
0x56d: Pop(1); Push((bool) Stack[-1] == 0)
0x56e: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56f: Stack[-16] = (float) 0.0
0x570: Return(); Pop(12)

0x571: PushEmpty(bool, object, string)
0x572: Stack[-2] = Stack[-18]
0x573: Stack[-1] = "armor"
0x574: Call2 0x55b

0x575: Pop(2)
0x576: Pop(1); Push((bool) Stack[-1] == 0)
0x577: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x578: Stack[-6] = (int) 0
0x579: GOTO 0x57d

0x57a: Push("armor")
0x57b: @@ GetProperty(Stack[-1], Stack[-7])
0x57c: Pop(1)
0x57d: Push("armor_")
0x57e: PushEmpty(string, int)
0x57f: Stack[-1] = Stack[-16]
0x580: Call2 0x541

0x581: Pop(1)
0x582: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x583: PushEmpty(bool, object, string)
0x584: Stack[-2] = Stack[-18]
0x585: Stack[-1] = Stack[-8]
0x586: Call2 0x55b

0x587: Pop(2)
0x588: Pop(1); Push((bool) Stack[-1] == 0)
0x589: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x58a: Stack[-4] = (int) 0
0x58b: GOTO 0x58e

0x58c: @@ GetProperty(Stack[-5], Stack[-4])
0x58d: Pop(0)
0x58e: PushEmpty(float, float, float)
0x58f: Pop(0); Push(Stack[-9] + Stack[-7]);
0x590: Push((float)100.0)
0x591: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x592: Stack[-1] = (int) 1
0x593: Call2 0x739

0x594: Stack[-6] = Stack[-3]
0x595: Pop(3)
0x596: Push("health")
0x597: @@ GetProperty(Stack[-1], Stack[-3])
0x598: Pop(1)
0x599: Push((int) 1)
0x59a: Pop(1); Push(Stack[-1] - Stack[-4]);
0x59b: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x59c: Push("health")
0x59d: PushEmpty(float, float, float, float)
0x59e: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x59f: Stack[-2] = (int) 0
0x5a0: Stack[-1] = (int) 1
0x5a1: Call2 0x740

0x5a2: Pop(3)
0x5a3: @@ SetProperty(Stack[-2], Stack[-1])
0x5a4: Pop(2)
0x5a5: PushEmpty(bool, object)
0x5a6: Stack[-1] = Stack[-17]
0x5a7: Call2 0x556

0x5a8: Pop(1)
0x5a9: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5aa: PushEmpty(float)
0x5ab: Stack[-1] = -Stack[-2]; Pop(0);
0x5ac: Call2 0x74b

0x5ad: Pop(1)
0x5ae: Stack[-16] = Stack[-1]
0x5af: Return(); Pop(12)

0x5b0: PushEmpty(bool, bool)
0x5b1: @@ IsDead(Stack[-1])
0x5b2: Pop(0)
0x5b3: Stack[-4] = Stack[-1]
0x5b4: Return(); Pop(2)

0x5b5: PushEmpty(object, object, object, object)
0x5b6: Pop(0); Push((bool) Stack[-5] == 0)
0x5b7: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5b8: Stack[-6] = (bool) 0
0x5b9: Return(); Pop(4)

0x5ba: PushEmpty(bool)
0x5bb: Stack[-1] = (bool) 0
0x5bc: Push("IsDead")
0x5bd: Push((int) 1)
0x5be: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x5bf: IF (Stack[-1] == 0) GOTO 0x5c6; Pop(1)

0x5c0: PushEmpty(bool, object)
0x5c1: Stack[-1] = Stack[-8]
0x5c2: Call2 0x5b0

0x5c3: Pop(1)
0x5c4: IF (Stack[-1] == 0) GOTO 0x5c6; Pop(1)

0x5c5: Stack[-1] = (bool) 1
0x5c6: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c7: Stack[-6] = (bool) 0
0x5c8: Return(); Pop(4)

0x5c9: @ GetScene(Stack[-2])
0x5ca: Pop(0)
0x5cb: Pop(0); Push((bool) Stack[-2] == 0)
0x5cc: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5cd: Stack[-6] = (bool) 0
0x5ce: Return(); Pop(4)

0x5cf: @@ GetScene(Stack[-1])
0x5d0: Pop(0)
0x5d1: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5d3: Stack[-6] = (bool) 0
0x5d4: Return(); Pop(4)

0x5d5: Stack[-6] = (bool) 1
0x5d6: Return(); Pop(4)

0x5d7: Stack[-1] = 0
0x5d8: Stack[-2] = 0
0x5d9: PushEmpty(int, int)
0x5da: PushEmpty(bool, object)
0x5db: Stack[-1] = Stack[-5]
0x5dc: Call2 0x5b5

0x5dd: Pop(1)
0x5de: Pop(1); Push((bool) Stack[-1] == 0)
0x5df: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5e0: Stack[-4] = (bool) 0
0x5e1: Return(); Pop(2)

0x5e2: PushEmpty(bool, object, string)
0x5e3: Stack[-2] = Stack[-6]
0x5e4: Stack[-1] = "noaccess"
0x5e5: Call2 0x55b

0x5e6: Pop(2)
0x5e7: Pop(1); Push((bool) Stack[-1] == 0)
0x5e8: IF (Stack[-1] == 0) GOTO 0x5eb; Pop(1)

0x5e9: Stack[-4] = (bool) 1
0x5ea: Return(); Pop(2)

0x5eb: Push("noaccess")
0x5ec: @@ GetProperty(Stack[-1], Stack[-2])
0x5ed: Pop(1)
0x5ee: Push((int) 0)
0x5ef: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x5f0: Return(); Pop(2)

0x5f1: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x5f2: Pop(0); Push((bool) Stack[-15] == 0)
0x5f3: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5f4: Return(); Pop(14)

0x5f5: @ IsDead(Stack[-7])
0x5f6: Pop(0)
0x5f7: Push(Stack[-7])
0x5f8: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5f9: Return(); Pop(14)

0x5fa: @ GetSecondaryAnimationType(Stack[-6])
0x5fb: Pop(0)
0x5fc: Push((int) 0)
0x5fd: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x5fe: IF (Stack[-1] == 0) GOTO 0x600; Pop(1)

0x5ff: Return(); Pop(14)

0x600: @@ GetPosition(Stack[-5])
0x601: Pop(0)
0x602: @ GetPosition(Stack[-4])
0x603: Pop(0)
0x604: @ GetDirection(Stack[-3])
0x605: Pop(0)
0x606: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x607: Push(CvectorIndex(Stack[-2], 0))
0x608: Push(CvectorIndex(Stack[-4], 0))
0x609: Pop(2); Push(Stack[-2] * Stack[-1]);
0x60a: Push(CvectorIndex(Stack[-3], 2))
0x60b: Push(CvectorIndex(Stack[-5], 2))
0x60c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x60d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x60e: Push((int) 0)
0x60f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x610: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x611: Stack[-1] = "fhit"
0x612: GOTO 0x614

0x613: Stack[-1] = "bhit"
0x614: Push("hit_react")
0x615: Push("1")
0x616: Pop(1); Push(Stack[-3] + Stack[-1]);
0x617: Push("2")
0x618: Pop(1); Push(Stack[-4] + Stack[-1]);
0x619: Push((int) -10)
0x61a: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x61b: Pop(4)
0x61c: Return(); Pop(14)

0x61d: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x61e: PushEmpty(bool)
0x61f: Stack[-1] = (bool) 0
0x620: PushEmpty(bool)
0x621: Stack[-1] = (bool) 0
0x622: Push(Stack[-23])
0x623: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x624: Push((int) 4)
0x625: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x626: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x627: Stack[-1] = (bool) 1
0x628: IF (Stack[-1] == 0) GOTO 0x62d; Pop(1)

0x629: Push((int) 5)
0x62a: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x62b: IF (Stack[-1] == 0) GOTO 0x62d; Pop(1)

0x62c: Stack[-1] = (bool) 1
0x62d: IF (Stack[-1] == 0) GOTO 0x65c; Pop(1)

0x62e: PushEmpty(cvector, cvector)
0x62f: PushEmpty(cvector, object)
0x630: Stack[-1] = Stack[-25]
0x631: Call2 0x54f

0x632: Stack[-3] = Stack[-2]
0x633: Pop(2)
0x634: Call2 0x72f

0x635: Stack[-11] = Stack[-2]
0x636: Pop(2)
0x637: @ CreateVectorVector(Stack[-8])
0x638: Pop(0)
0x639: Stack[-7] = (int) 1
0x63a: Push("hit")
0x63b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x63c: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x63d: Pop(1)
0x63e: Pop(0); Push((bool) Stack[-6] == 0)
0x63f: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x640: GOTO 0x64a

0x641: Pop(0); Push(Stack[-4] | Stack[-9]);
0x642: Push((float)0.70711)
0x643: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x644: IF (Stack[-1] == 0) GOTO 0x647; Pop(1)

0x645: @@ add(Stack[-5])
0x646: Pop(0)
0x647: Push((int) 1)
0x648: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x649: GOTO 0x63a

0x64a: @@ size(Stack[-3])
0x64b: Pop(0)
0x64c: Push(Stack[-3])
0x64d: IF (Stack[-1] == 0) GOTO 0x65b; Pop(1)

0x64e: @ irand(Stack[-2], Stack[-3])
0x64f: Pop(0)
0x650: @@ get(Stack[-1], Stack[-2])
0x651: Pop(0)
0x652: PushEmpty(object, int, float, cvector, cvector)
0x653: Stack[-5] = Stack[-26]
0x654: Stack[-4] = Stack[-25]
0x655: Stack[-3] = Stack[-24]
0x656: Stack[-2] = Stack[-6]
0x657: Stack[-1] = -Stack[-14]; Pop(0);
0x658: Call2 0x661

0x659: Pop(5)
0x65a: Return(); Pop(18)

0x65b: Stack[-8] = 0
0x65c: PushEmpty(object)
0x65d: Stack[-1] = Stack[-22]
0x65e: Call2 0x5f1

0x65f: Pop(1)
0x660: Return(); Pop(18)

0x661: PushEmpty(object, object, object, object)
0x662: @ GetScene(Stack[-2])
0x663: Pop(0)
0x664: Push("scripted")
0x665: Push("blood_dir.xml")
0x666: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x667: Pop(2)
0x668: PushEmpty(object)
0x669: Stack[-1] = Stack[-10]
0x66a: Call2 0x5f1

0x66b: Pop(1)
0x66c: Return(); Pop(4)

0x66d: Stack[-1] = 0
0x66e: Stack[-2] = 0
0x66f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x670: @@ GetPosition(Stack[-3])
0x671: Pop(0)
0x672: @ GetPosition(Stack[-2])
0x673: Pop(0)
0x674: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x675: Push(CvectorIndex(Stack[-1], 0))
0x676: Push(CvectorIndex(Stack[-2], 2))
0x677: @ RotateAsync(Stack[-2], Stack[-1])
0x678: Pop(2)
0x679: Return(); Pop(6)

0x67a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x67b: @@ GetPosition(Stack[-8])
0x67c: Pop(0)
0x67d: @@ GetEyesHeight(Stack[-9])
0x67e: Pop(0)
0x67f: Push(CvectorIndex(Stack[-8], 1))
0x680: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x681: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x682: @ GetPosition(Stack[-7])
0x683: Pop(0)
0x684: @ GetEyesHeight(Stack[-9])
0x685: Pop(0)
0x686: Push(CvectorIndex(Stack[-7], 1))
0x687: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x688: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x689: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x68a: Push(CvectorIndex(Stack[-6], 1))
0x68b: Stack[-1] = (int) 0
0x68c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x68d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x68e: Pop(1); Push(Sqrt(Stack[-1]))
0x68f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x690: Stack[-5] = -Stack[-6]; Pop(0);
0x691: Pop(0); Push(Stack[-6] * Stack[-19]);
0x692: PushEmpty(cvector, cvector)
0x693: Push(CVector(0.0, 1.0, 0.0))
0x694: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x695: Call2 0x72f

0x696: Pop(1)
0x697: Push((int) 25)
0x698: Pop(2); Push(Stack[-2] * Stack[-1]);
0x699: Pop(2); Push(Stack[-2] + Stack[-1]);
0x69a: Push(CVector(0.0, 10.0, 0.0))
0x69b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x69c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x69d: @ IsOverrideActive(Stack[-2])
0x69e: Pop(0)
0x69f: Push(Stack[-2])
0x6a0: IF (Stack[-1] == 0) GOTO 0x6a3; Pop(1)

0x6a1: Stack[-21] = (bool) 0
0x6a2: Return(); Pop(18)

0x6a3: @ StopWorld()
0x6a4: Pop(0)
0x6a5: @ CameraTransit(Stack[-3], Stack[-5])
0x6a6: Pop(0)
0x6a7: Push(CvectorIndex(Stack[-4], 0))
0x6a8: Push(CvectorIndex(Stack[-5], 2))
0x6a9: @ Rotate(Stack[-2], Stack[-1])
0x6aa: Pop(2)
0x6ab: PushEmpty(bool)
0x6ac: Call2 0x78e

0x6ad: Pop(0)
0x6ae: IF (Stack[-1] == 0) GOTO 0x6b0; Pop(1)

0x6af: GOTO 0x6b8

0x6b0: Push("head")
0x6b1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x6b2: Pop(1)
0x6b3: Push(Stack[-1])
0x6b4: IF (Stack[-1] == 0) GOTO 0x6b8; Pop(1)

0x6b5: Push("head")
0x6b6: @ LookAsyncCamera(Stack[-1])
0x6b7: Pop(1)
0x6b8: @ CameraWaitForPlayFinish()
0x6b9: Pop(0)
0x6ba: @ ResumeWorld()
0x6bb: Pop(0)
0x6bc: Stack[-21] = (bool) 1
0x6bd: Return(); Pop(18)

0x6be: PushEmpty(bool, bool)
0x6bf: @ CameraSwitchToNormal()
0x6c0: Pop(0)
0x6c1: PushEmpty(bool)
0x6c2: Call2 0x78e

0x6c3: Pop(0)
0x6c4: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x6c5: GOTO 0x6ce

0x6c6: Push("head")
0x6c7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x6c8: Pop(1)
0x6c9: Push(Stack[-1])
0x6ca: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6cb: Push("head")
0x6cc: @ UnlookAsync(Stack[-1])
0x6cd: Pop(1)
0x6ce: Return(); Pop(2)

0x6cf: PushEmpty(bool, float, float, bool, float, float)
0x6d0: @ lshHasAnimation(Stack[-3], Stack[-7])
0x6d1: Pop(0)
0x6d2: Push(Stack[-3])
0x6d3: IF (Stack[-1] == 0) GOTO 0x6da; Pop(1)

0x6d4: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x6d5: Pop(0)
0x6d6: Push((bool) 0)
0x6d7: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x6d8: Pop(1)
0x6d9: GOTO 0x6de

0x6da: Push("Can't find lsh animation : ")
0x6db: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6dc: @ Trace(Stack[-1])
0x6dd: Pop(1)
0x6de: Return(); Pop(6)

0x6df: PushEmpty(bool, float, float, bool, float, float)
0x6e0: @ lshHasAnimation(Stack[-3], Stack[-8])
0x6e1: Pop(0)
0x6e2: Push(Stack[-3])
0x6e3: IF (Stack[-1] == 0) GOTO 0x6e9; Pop(1)

0x6e4: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x6e5: Pop(0)
0x6e6: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x6e7: Pop(0)
0x6e8: GOTO 0x6ed

0x6e9: Push("Can't find lsh animation : ")
0x6ea: Pop(1); Push(Stack[-1] + Stack[-9]);
0x6eb: @ Trace(Stack[-1])
0x6ec: Pop(1)
0x6ed: Return(); Pop(6)

0x6ee: PushEmpty(float, cvector, float, cvector)
0x6ef: @@ GetEyesHeight(Stack[-2])
0x6f0: Pop(0)
0x6f1: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x6f2: Push(CvectorIndex(Stack[-1], 1))
0x6f3: Stack[-1] = Stack[-3]
0x6f4: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6f5: Push("head")
0x6f6: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x6f7: Pop(1)
0x6f8: Return(); Pop(4)

0x6f9: PushEmpty(bool)
0x6fa: Call2 0x78e

0x6fb: Pop(0)
0x6fc: IF (Stack[-1] == 0) GOTO 0x6ff; Pop(1)

0x6fd: @ lshStopSpeech()
0x6fe: Pop(0)
0x6ff: Return(); Pop(0)

0x700: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x701: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x702: Pop(0)
0x703: Pop(0); Push((bool) Stack[-8] == 0)
0x704: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x705: Stack[-7] = (int) 0
0x706: Push((int) 1)
0x707: Pop(1); Push(Stack[-8] + Stack[-1]);
0x708: Pop(1); Push(Stack[-18] + Stack[-1]);
0x709: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x70a: Pop(1)
0x70b: Pop(0); Push((bool) Stack[-6] == 0)
0x70c: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x70d: GOTO 0x711

0x70e: Push((int) 1)
0x70f: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x710: GOTO 0x706

0x711: Pop(0); Push((bool) Stack[-7] == 0)
0x712: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x713: Return(); Pop(16)

0x714: @ irand(Stack[-5], Stack[-7])
0x715: Pop(0)
0x716: Push((int) 1)
0x717: Pop(1); Push(Stack[-6] + Stack[-1]);
0x718: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x719: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x71a: Pop(0)
0x71b: Push(Stack[-4])
0x71c: IF (Stack[-1] == 0) GOTO 0x728; Pop(1)

0x71d: @ GetEyesHeight(Stack[-3])
0x71e: Pop(0)
0x71f: @ GetDirection(Stack[-2])
0x720: Pop(0)
0x721: Push((int) 50)
0x722: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x723: Push(CvectorIndex(Stack[-1], 1))
0x724: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x725: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x726: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x727: Pop(0)
0x728: Return(); Pop(16)

0x729: PushEmpty(object, object)
0x72a: @ self(Stack[-1])
0x72b: Pop(0)
0x72c: Stack[-3] = Stack[-1]
0x72d: Return(); Pop(2)

0x72e: Stack[-1] = 0
0x72f: PushEmpty(float, float)
0x730: Pop(0); Push(Stack[-3] | Stack[-3]);
0x731: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x732: Push((float)0.0)
0x733: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x734: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x735: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x736: Return(); Pop(2)

0x737: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x738: Return(); Pop(2)

0x739: PushEmpty()
0x73a: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x73b: IF (Stack[-1] == 0) GOTO 0x73e; Pop(1)

0x73c: Stack[-3] = Stack[-2]
0x73d: GOTO 0x73f

0x73e: Stack[-3] = Stack[-1]
0x73f: Return(); Pop(0)

0x740: PushEmpty()
0x741: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x742: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x743: Stack[-4] = Stack[-2]
0x744: Return(); Pop(0)

0x745: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x746: IF (Stack[-1] == 0) GOTO 0x749; Pop(1)

0x747: Stack[-4] = Stack[-1]
0x748: Return(); Pop(0)

0x749: Stack[-4] = Stack[-3]
0x74a: Return(); Pop(0)

0x74b: PushEmpty(object, object)
0x74c: @ CreateFloatVector(Stack[-1])
0x74d: Pop(0)
0x74e: @@ add(Stack[-3])
0x74f: Pop(0)
0x750: Push((int) 15)
0x751: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x752: Pop(1)
0x753: Return(); Pop(2)

0x754: Stack[-1] = 0
0x755: PushEmpty(object, object)
0x756: @ FindActor(Stack[-1], Stack[-4])
0x757: Pop(0)
0x758: Pop(0); Push((bool) Stack[-1] == 0)
0x759: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x75a: Stack[-5] = (bool) 0
0x75b: Return(); Pop(2)

0x75c: @ Trigger(Stack[-1], Stack[-3])
0x75d: Pop(0)
0x75e: Stack[-5] = (bool) 1
0x75f: Return(); Pop(2)

0x760: Stack[-1] = 0
0x761: PushEmpty(bool, bool)
0x762: @ IsPlayerActor(Stack[-3], Stack[-1])
0x763: Pop(0)
0x764: Push(Stack[-1])
0x765: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x766: Push("attack")
0x767: @ PlayGlobalMusic(Stack[-1])
0x768: Pop(1)
0x769: Return(); Pop(2)

0x76a: PushEmpty(object, object)
0x76b: @ GetScene(Stack[-1])
0x76c: Pop(0)
0x76d: Push("battle")
0x76e: PushEmpty(object)
0x76f: Call2 0x729

0x770: Pop(0)
0x771: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x772: Pop(2)
0x773: Return(); Pop(2)

0x774: Stack[-1] = 0
0x775: PushEmpty(int, int)
0x776: Push("branch")
0x777: @ GetVariable(Stack[-1], Stack[-2])
0x778: Pop(1)
0x779: Push((int) 0)
0x77a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x77b: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x77c: Stack[-3] = (int) 1
0x77d: Return(); Pop(2)

0x77e: GOTO 0x784

0x77f: Push((int) 1)
0x780: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x781: IF (Stack[-1] == 0) GOTO 0x784; Pop(1)

0x782: Stack[-3] = (int) 2
0x783: Return(); Pop(2)

0x784: Stack[-3] = (int) 3
0x785: Return(); Pop(2)

0x786: Stack[-1] = (int) 515562
0x787: Return(); Pop(0)

0x788: Stack[-1] = (int) 503347
0x789: Return(); Pop(0)

0x78a: Stack[-1] = "ui/NPC_Citizen1.png"
0x78b: Return(); Pop(0)

0x78c: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x78d: Return(); Pop(0)

0x78e: Stack[-1] = (bool) 0
0x78f: Return(); Pop(0)

0x790: PushEmpty(object)
0x791: Call2 0x729

0x792: Pop(0)
0x793: @ RemoveActor(Stack[-1])
0x794: Pop(1)
0x795: PushEmpty(bool, string, string)
0x796: Stack[-2] = "quest_d1_03"
0x797: Stack[-1] = "butcher_fail"
0x798: Call2 0x755

0x799: Pop(3)
0x79a: Return(); Pop(0)

0x79b: PushEmpty()
0x79c: PushEmpty(bool, string, string)
0x79d: Stack[-2] = "quest_d1_03"
0x79e: Stack[-1] = "butcher_death"
0x79f: Call2 0x755

0x7a0: Pop(3)
0x7a1: PushEmpty(object)
0x7a2: Stack[-1] = Stack[-2]
0x7a3: Push(-1, 0); TaskCall(5)
0x7a4: Call2 0x4bd

0x7a5: Pop(-1, 0); TaskReturn
0x7a6: Pop(1)
0x7a7: Return(); Pop(0)

0x7a8: PushEmpty()
0x7a9: PushEmpty(object, int, float)
0x7aa: Stack[-3] = Stack[-7]
0x7ab: Stack[-2] = Stack[-6]
0x7ac: Stack[-1] = Stack[-5]
0x7ad: Call2 0x61d

0x7ae: Pop(3)
0x7af: Return(); Pop(0)

0x7b0: PushEmpty()
0x7b1: PushEmpty(object, int, float, cvector, cvector)
0x7b2: Stack[-5] = Stack[-11]
0x7b3: Stack[-4] = Stack[-10]
0x7b4: Stack[-3] = Stack[-9]
0x7b5: Stack[-2] = Stack[-7]
0x7b6: Stack[-1] = Stack[-6]
0x7b7: Call2 0x661

0x7b8: Pop(5)
0x7b9: Return(); Pop(0)

0x7ba: PushEmpty(float, float)
0x7bb: Push("health")
0x7bc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7bd: IF (Stack[-1] == 0) GOTO 0x7c6; Pop(1)

0x7be: Push("health")
0x7bf: @ GetProperty(Stack[-1], Stack[-2])
0x7c0: Pop(1)
0x7c1: Push((int) 0)
0x7c2: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x7c3: IF (Stack[-1] == 0) GOTO 0x7c6; Pop(1)

0x7c4: @ SignalDeath(Stack[-4])
0x7c5: Pop(0)
0x7c6: Return(); Pop(2)

0x7c7: PushEmpty()
0x7c8: PushEmpty(object)
0x7c9: Stack[-1] = Stack[-2]
0x7ca: Call2 0x79b

0x7cb: Pop(1)
0x7cc: Return(); Pop(0)

