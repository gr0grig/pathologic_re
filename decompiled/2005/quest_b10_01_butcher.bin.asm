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
	battle
	branch
	SetItemName
	Organ
	GetItemID
	liver
	kidney
	heart
	blood
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png
	quest_b10_01
	butcher_dead
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
	IsPlayerActor (2 args)
	GetPFPosition (1 args)
	GetDirection (1 args)
	irand (2 args)
	Sleep (2 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	Rotate (3 args)
	WaitForAnimEnd (1 args)
	Sleep (1 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
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
	FollowPath (5 args)
	RequestClearPath (1 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
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
	FindActor (2 args)
	Trigger (2 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	AddItem (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x128
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (cvector, cvector) Params = 0
		EVENT_0 Op = 0x10a Vars = (object)
		EVENT_17 Op = 0x11c Vars = (object)
	GTASK_3 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_4 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x452 Vars = (int)
		EVENT_1 Op = 0x46d Vars = (object)
		EVENT_2 Op = 0x47c Vars = (object)
		EVENT_10 Op = 0x502 Vars = (object)
		EVENT_41 Op = 0x50d Vars = (object)
	GTASK_5  Params = 1
		EVENT_0 Op = 0x530 Vars = (object)
		EVENT_22 Op = 0x5af Vars = (object, int, float, float)
		EVENT_16 Op = 0x5b1 Vars = (object, string)
		EVENT_41 Op = 0x5b3 Vars = (object)

Events:
EVENT_22 Op = 0x85c Vars = (object, int, float, float)
EVENT_43 Op = 0x864 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x86e Vars = (object, string)
EVENT_41 Op = 0x87b Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x6ee

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x83c

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x83a

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x83e

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x840

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x7ed

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
0x41: Call2 0x732

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
0x54: Push((int) 521881)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 522417)
0x5a: Push((int) 23585)
0x5b: Push((int) 23584)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 521882)
0x5f: Push((int) -1)
0x60: Push((int) 23054)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x842

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x743

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
0x86: Call2 0x842

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
0x96: Call2 0x753

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x76d

0x9f: Pop(0)
0xa0: Push((int) 23053)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral"
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 521881)
0xa8: @@ SetMessage(Stack[-1])
0xa9: Pop(1)
0xaa: @@ ClearReplies()
0xab: Pop(0)
0xac: Push((int) 522417)
0xad: Push((int) 23585)
0xae: Push((int) 23584)
0xaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0: Pop(3)
0xb1: Push((int) 521882)
0xb2: Push((int) -1)
0xb3: Push((int) 23054)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Push((int) 23585)
0xb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral"
0xbc: Call2 0x84

0xbd: Pop(1)
0xbe: Push((int) 522418)
0xbf: @@ SetMessage(Stack[-1])
0xc0: Pop(1)
0xc1: @@ ClearReplies()
0xc2: Pop(0)
0xc3: Push((int) 522419)
0xc4: Push((int) -1)
0xc5: Push((int) 23586)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Push((int) 522420)
0xc9: Push((int) 23589)
0xca: Push((int) 23587)
0xcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc: Pop(3)
0xcd: Return(); Pop(0)

0xce: Push((int) 23589)
0xcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xd1: PushEmpty(string)
0xd2: Stack[-1] = "Neutral"
0xd3: Call2 0x84

0xd4: Pop(1)
0xd5: Push((int) 522422)
0xd6: @@ SetMessage(Stack[-1])
0xd7: Pop(1)
0xd8: @@ ClearReplies()
0xd9: Pop(0)
0xda: Push((int) 522423)
0xdb: Push((int) 23588)
0xdc: Push((int) 23590)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Push((int) 522424)
0xe0: Push((int) -1)
0xe1: Push((int) 23591)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Return(); Pop(0)

0xe5: Push((int) 23588)
0xe6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xe8: PushEmpty(string)
0xe9: Stack[-1] = "Neutral"
0xea: Call2 0x84

0xeb: Pop(1)
0xec: Push((int) 522421)
0xed: @@ SetMessage(Stack[-1])
0xee: Pop(1)
0xef: @@ ClearReplies()
0xf0: Pop(0)
0xf1: Push((int) 522426)
0xf2: Push((int) -1)
0xf3: Push((int) 23593)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Push((int) 522425)
0xf7: Push((int) -1)
0xf8: Push((int) 23592)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xfd: PushEmpty(bool)
0xfe: Call2 0x842

0xff: Pop(0)
0x100: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0x101: @ lshStopAnimation()
0x102: Pop(0)
0x103: GOTO 0x106

0x104: @ StopAnimation()
0x105: Pop(0)
0x106: Return(); Pop(0)

0x107: GOTO 0x9b

0x108: Return(); Pop(0)

0x109: Return(); Pop(0)

0x10a: PushEmpty(bool, bool)
0x10b: PushEmpty(int, object)
0x10c: Stack[-1] = Stack[-5]
0x10d: Push(-2, 1); TaskCall(0)
0x10e: Call2 0x0

0x10f: Pop(-2, 1); TaskReturn
0x110: Pop(2)
0x111: @ IsPlayerActor(Stack[-3], Stack[-1])
0x112: Pop(0)
0x113: Push(Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x115: PushEmpty(object)
0x116: Stack[-1] = Stack[-4]
0x117: Push(-1, 6); TaskCall(3)
0x118: Call2 0x17d

0x119: Pop(-1, 6); TaskReturn
0x11a: Pop(1)
0x11b: Return(); Pop(2)

0x11c: PushEmpty(bool, bool)
0x11d: @ IsPlayerActor(Stack[-3], Stack[-1])
0x11e: Pop(0)
0x11f: Push(Stack[-1])
0x120: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x121: PushEmpty(object)
0x122: Stack[-1] = Stack[-4]
0x123: Push(-1, 6); TaskCall(3)
0x124: Call2 0x17d

0x125: Pop(-1, 6); TaskReturn
0x126: Pop(1)
0x127: Return(); Pop(2)

0x128: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x129: @ GetPFPosition(Stack[-1])
0x12a: Pop(0)
0x12b: @ GetDirection(Stack[-0])
0x12c: Pop(0)
0x12d: PushEmpty()
0x12e: Call2 0x17c

0x12f: Pop(0)
0x130: Push((int) 10)
0x131: @ irand(Stack[-5], Stack[-1])
0x132: Pop(1)
0x133: Push((int) 5)
0x134: Pop(1); Push(Stack[-5] + Stack[-1]);
0x135: @ Sleep(Stack[-1], Stack[-4])
0x136: Pop(1)
0x137: Push(Stack[-3])
0x138: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x139: PushEmpty()
0x13a: Call2 0x109

0x13b: Pop(0)
0x13c: GOTO 0x17a

0x13d: PushEmpty()
0x13e: Call2 0x17c

0x13f: Pop(0)
0x140: @ GetPFPosition(Stack[-2])
0x141: Pop(0)
0x142: PushEmpty(float, cvector, cvector)
0x143: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x144: Stack[-1] = Stack[-5]
0x145: Call2 0x7ad

0x146: Pop(2)
0x147: Push((int) 40000)
0x148: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x14a: @ FindPathTo(Stack[-1], Stack[-1])
0x14b: Pop(0)
0x14c: Pop(0); Push(( Stack[-1] != 0 )
0x14d: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x14e: @ RotatePath(Stack[-1], Stack[-3])
0x14f: Pop(0)
0x150: Pop(0); Push((bool) Stack[-3] == 0)
0x151: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x152: GOTO 0x179

0x153: Push((bool) 0)
0x154: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x155: Pop(1)
0x156: Pop(0); Push((bool) Stack[-3] == 0)
0x157: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x158: GOTO 0x179

0x159: Push(CvectorIndex(Stack[-0], 0))
0x15a: Push(CvectorIndex(Stack[-0], 2))
0x15b: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x15c: Pop(2)
0x15d: Pop(0); Push((bool) Stack[-3] == 0)
0x15e: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15f: GOTO 0x179

0x160: @ WaitForAnimEnd(Stack[-3])
0x161: Pop(0)
0x162: Pop(0); Push((bool) Stack[-3] == 0)
0x163: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x164: GOTO 0x179

0x165: GOTO 0x17a

0x166: GOTO 0x16a

0x167: Push((int) 1)
0x168: @ Sleep(Stack[-1])
0x169: Pop(1)
0x16a: Stack[-1] = 0
0x16b: GOTO 0x179

0x16c: Push(CvectorIndex(Stack[-0], 0))
0x16d: Push(CvectorIndex(Stack[-0], 2))
0x16e: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x16f: Pop(2)
0x170: Pop(0); Push((bool) Stack[-3] == 0)
0x171: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x172: GOTO 0x179

0x173: @ WaitForAnimEnd(Stack[-3])
0x174: Pop(0)
0x175: Pop(0); Push((bool) Stack[-3] == 0)
0x176: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x177: GOTO 0x179

0x178: GOTO 0x17a

0x179: GOTO 0x13d

0x17a: GOTO 0x12d

0x17b: Return(); Pop(8)

0x17c: Return(); Pop(0)

0x17d: PushEmpty()
0x17e: PushEmpty(object, bool, float)
0x17f: Stack[-3] = Stack[-4]
0x180: Stack[-2] = (bool) 1
0x181: Stack[-1] = (float) 180.0
0x182: Call2 0x18b

0x183: Pop(3)
0x184: Return(); Pop(0)

0x185: PushEmpty()
0x186: Stack[-3] = (float) 0.1
0x187: Return(); Pop(0)

0x188: PushEmpty()
0x189: Stack[-3] = (int) 0
0x18a: Return(); Pop(0)

0x18b: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x18c: PushEmpty()
0x18d: Call2 0x270

0x18e: Pop(0)
0x18f: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x190: Push("@GetAttackDistance")
0x191: Push((int) 1)
0x192: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x193: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x194: @@ GetAttackDistance(Stack[-11])
0x195: Pop(0)
0x196: Push((int) 50)
0x197: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x198: GOTO 0x19a

0x199: Stack[-11] = Stack[-23]
0x19a: Push((int) 150)
0x19b: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x19d: Stack[-11] = (int) 150
0x19e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x19f: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x1a0: @ IsPlayerActor(Stack[-0], Stack[-8])
0x1a1: Pop(0)
0x1a2: Push(Stack[-8])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a4: Push("attack")
0x1a5: @ PlayGlobalMusic(Stack[-1])
0x1a6: Pop(1)
0x1a7: PushEmpty(object)
0x1a8: Call2 0x79d

0x1a9: Pop(0)
0x1aa: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x1ab: Pop(1)
0x1ac: Push(Stack[-24])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1ae: Stack[-7] = (bool) 0
0x1af: GOTO 0x1b1

0x1b0: Stack[-7] = (bool) 1
0x1b1: Push((float)400.0)
0x1b2: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x1b3: PushEmpty(bool)
0x1b4: Stack[-1] = (bool) 0
0x1b5: PushEmpty(bool, object)
0x1b6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b7: Call2 0x64d

0x1b8: Pop(1)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1ba: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1bb: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1bc: Stack[-1] = (bool) 1
0x1bd: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x1be: PushEmpty()
0x1bf: Call2 0x40d

0x1c0: Pop(0)
0x1c1: @@ GetPFPosition(Stack[-10])
0x1c2: Pop(0)
0x1c3: @ GetPFPosition(Stack[-9])
0x1c4: Pop(0)
0x1c5: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x1c6: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1c7: Pop(0); Push(Stack[-6] * Stack[-6]);
0x1c8: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1ca: PushEmpty(bool, object, float, float, bool, bool)
0x1cb: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x1cc: Stack[-4] = Stack[-17]
0x1cd: Stack[-3] = (float) 3000.0
0x1ce: Stack[-2] = (bool) 1
0x1cf: Stack[-1] = (bool) 0
0x1d0: Push(-6, 3); TaskCall(4)
0x1d1: Call2 0x421

0x1d2: Pop(-6, 3); TaskReturn
0x1d3: Pop(5)
0x1d4: Pop(1); Push((bool) Stack[-1] == 0)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d6: GOTO 0x25f

0x1d7: Stack[-7] = (bool) 0
0x1d8: GOTO 0x25e

0x1d9: Pop(0); Push(Stack[-23] * Stack[-23]);
0x1da: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x1dc: @@ GetPFPosition(Stack[-3])
0x1dd: Pop(0)
0x1de: @ CanReachByPF(Stack[-2], Stack[-3])
0x1df: Pop(0)
0x1e0: Pop(0); Push((bool) Stack[-2] == 0)
0x1e1: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1e2: PushEmpty(bool, object, float, float, bool, bool)
0x1e3: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x1e4: Stack[-4] = Stack[-17]
0x1e5: Stack[-3] = (float) 3000.0
0x1e6: Stack[-2] = (bool) 1
0x1e7: Stack[-1] = (bool) 0
0x1e8: Push(-6, 3); TaskCall(4)
0x1e9: Call2 0x421

0x1ea: Pop(-6, 3); TaskReturn
0x1eb: Pop(5)
0x1ec: Pop(1); Push((bool) Stack[-1] == 0)
0x1ed: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ee: GOTO 0x25f

0x1ef: Stack[-7] = (bool) 0
0x1f0: GOTO 0x1b3

0x1f1: Pop(0); Push((bool) Stack[-7] == 0)
0x1f2: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x1f3: PushEmpty(object)
0x1f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f5: Call2 0x6e3

0x1f6: Pop(1)
0x1f7: Push("all")
0x1f8: Push("attack_on")
0x1f9: @ PlayAnimation(Stack[-2], Stack[-1])
0x1fa: Pop(2)
0x1fb: @ WaitForAnimEnd()
0x1fc: Pop(0)
0x1fd: PushEmpty()
0x1fe: Call2 0x40d

0x1ff: Pop(0)
0x200: @ StopAsync()
0x201: Pop(0)
0x202: Stack[-7] = (bool) 1
0x203: PushEmpty(bool, object)
0x204: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x205: Call2 0x64d

0x206: Pop(1)
0x207: Pop(1); Push((bool) Stack[-1] == 0)
0x208: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x209: GOTO 0x25f

0x20a: @ rand(Stack[-1])
0x20b: Pop(0)
0x20c: PushEmpty(bool)
0x20d: Stack[-1] = (bool) 1
0x20e: Push((float)0.25)
0x20f: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x211: PushEmpty(bool)
0x212: Call2 0x3e2

0x213: Pop(0)
0x214: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x215: Stack[-1] = (bool) 0
0x216: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x217: @ Face(Stack[-0])
0x218: Pop(0)
0x219: PushEmpty()
0x21a: Call2 0x414

0x21b: Pop(0)
0x21c: Push("all")
0x21d: Push("attack_stay")
0x21e: @ PlayAnimation(Stack[-2], Stack[-1])
0x21f: Pop(2)
0x220: PushEmpty(bool, float)
0x221: Stack[-1] = Stack[-25]
0x222: Call2 0x35e

0x223: Pop(2)
0x224: @ StopAsync()
0x225: Pop(0)
0x226: GOTO 0x255

0x227: @ Face(Stack[-0])
0x228: Pop(0)
0x229: Push("all")
0x22a: Push("fjump")
0x22b: @ PlayAnimation(Stack[-2], Stack[-1])
0x22c: Pop(2)
0x22d: @ WaitForAnimEnd()
0x22e: Pop(0)
0x22f: PushEmpty()
0x230: Call2 0x40d

0x231: Pop(0)
0x232: Push(CVector(0.0, 0.0, 0.0))
0x233: @ SetSpeed(Stack[-1])
0x234: Pop(1)
0x235: @ Stop()
0x236: Pop(0)
0x237: @ StopAsync()
0x238: Pop(0)
0x239: PushEmpty(bool)
0x23a: Call2 0x3e2

0x23b: Pop(0)
0x23c: Pop(1); Push((bool) Stack[-1] == 0)
0x23d: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x23e: PushEmpty(bool, object)
0x23f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x240: Call2 0x64d

0x241: Pop(1)
0x242: Pop(1); Push((bool) Stack[-1] == 0)
0x243: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x244: GOTO 0x25f

0x245: @@ GetPFPosition(Stack[-10])
0x246: Pop(0)
0x247: @ GetPFPosition(Stack[-9])
0x248: Pop(0)
0x249: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x24a: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x24b: Pop(0); Push(Stack[-23] * Stack[-23]);
0x24c: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x24d: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x24e: PushEmpty(bool, float)
0x24f: Stack[-1] = Stack[-25]
0x250: Call2 0x2ba

0x251: Pop(1)
0x252: Pop(1); Push((bool) Stack[-1] == 0)
0x253: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x254: GOTO 0x25f

0x255: GOTO 0x25e

0x256: PushEmpty(bool, float)
0x257: Stack[-1] = Stack[-25]
0x258: Call2 0x2ba

0x259: Pop(1)
0x25a: Pop(1); Push((bool) Stack[-1] == 0)
0x25b: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25c: GOTO 0x25f

0x25d: Stack[-7] = (bool) 1
0x25e: GOTO 0x1b3

0x25f: @ WaitForAnimEnd()
0x260: Pop(0)
0x261: Push( Stack[3 + Tasks[-1].StackPointer] )
0x262: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x263: Return(); Pop(22)

0x264: Push("all")
0x265: Push("attack_off")
0x266: @ PlayAnimation(Stack[-2], Stack[-1])
0x267: Pop(2)
0x268: @ WaitForAnimEnd()
0x269: Pop(0)
0x26a: Push(Stack[-8])
0x26b: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26c: Push((float)2.0)
0x26d: @ Sleep(Stack[-1])
0x26e: Pop(1)
0x26f: Return(); Pop(22)

0x270: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x271: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x272: Push("all")
0x273: Push("attack_begin")
0x274: Push((int) 1)
0x275: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x276: Pop(2); Push(Stack[-2] + Stack[-1]);
0x277: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x278: Pop(2)
0x279: Pop(0); Push((bool) Stack[-3] == 0)
0x27a: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27b: GOTO 0x27f

0x27c: Push((int) 1)
0x27d: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x27e: GOTO 0x272

0x27f: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x280: Push("attack")
0x281: Push((int) 1)
0x282: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x283: Pop(2); Push(Stack[-2] + Stack[-1]);
0x284: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x285: Pop(1)
0x286: Pop(0); Push((bool) Stack[-2] == 0)
0x287: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x288: GOTO 0x28c

0x289: Push((int) 1)
0x28a: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x28b: GOTO 0x280

0x28c: Push("all")
0x28d: Push("bjump")
0x28e: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x28f: Pop(2)
0x290: Push(CvectorIndex(Stack[-1], 2))
0x291: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x292: Return(); Pop(6)

0x293: PushEmpty(object, float, float, object, float, float)
0x294: Push((float)0.9)
0x295: Pop(1); Push(Stack[-9] * Stack[-1]);
0x296: @ GetVictim(Stack[-1], Stack[-4])
0x297: Pop(1)
0x298: @ ReportAttack(Stack[-0])
0x299: Pop(0)
0x29a: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x29b: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x29c: PushEmpty(float, object, int)
0x29d: Stack[-2] = Stack[-6]
0x29e: Stack[-1] = Stack[-10]
0x29f: Call2 0x185

0x2a0: Stack[-5] = Stack[-3]
0x2a1: Pop(3)
0x2a2: PushEmpty(float, object, float, int)
0x2a3: Stack[-3] = Stack[-7]
0x2a4: Stack[-2] = Stack[-6]
0x2a5: PushEmpty(int, object, int)
0x2a6: Stack[-2] = Stack[-10]
0x2a7: Stack[-1] = Stack[-14]
0x2a8: Call2 0x188

0x2a9: Stack[-4] = Stack[-3]
0x2aa: Pop(3)
0x2ab: Call2 0x5db

0x2ac: Stack[-5] = Stack[-4]
0x2ad: Pop(4)
0x2ae: PushEmpty(int)
0x2af: Call2 0x412

0x2b0: Pop(0)
0x2b1: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x2b2: Pop(1)
0x2b3: PushEmpty(object, float)
0x2b4: Stack[-2] = Stack[-5]
0x2b5: Stack[-1] = Stack[-3]
0x2b6: Call2 0x419

0x2b7: Pop(2)
0x2b8: Return(); Pop(6)

0x2b9: Stack[-3] = 0
0x2ba: PushEmpty(int, bool, int, string, int, bool, int, string)
0x2bb: PushEmpty()
0x2bc: Call2 0x40d

0x2bd: Pop(0)
0x2be: @ irand(Stack[-4], Stack[-1])
0x2bf: Pop(0)
0x2c0: Push((int) 1)
0x2c1: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2c2: @ Face(Stack[-0])
0x2c3: Pop(0)
0x2c4: Push((bool) 1)
0x2c5: @ SetAttackState(Stack[-1])
0x2c6: Pop(1)
0x2c7: PushEmpty()
0x2c8: Call2 0x7e2

0x2c9: Pop(0)
0x2ca: Push("all")
0x2cb: Push("attack_begin")
0x2cc: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2cd: @ PlayAnimation(Stack[-2], Stack[-1])
0x2ce: Pop(2)
0x2cf: @ WaitForAnimEnd()
0x2d0: Pop(0)
0x2d1: PushEmpty()
0x2d2: Call2 0x3ed

0x2d3: Pop(0)
0x2d4: PushEmpty(bool, object)
0x2d5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d6: Call2 0x64d

0x2d7: Pop(1)
0x2d8: Pop(1); Push((bool) Stack[-1] == 0)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2da: @ StopAsync()
0x2db: Pop(0)
0x2dc: Stack[-10] = (bool) 0
0x2dd: Return(); Pop(8)

0x2de: PushEmpty(float, int)
0x2df: Stack[-2] = Stack[-11]
0x2e0: Stack[-1] = Stack[-6]
0x2e1: Call2 0x293

0x2e2: Pop(2)
0x2e3: Push("all")
0x2e4: Push("attack_middle")
0x2e5: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2e6: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x2e7: Pop(2)
0x2e8: Push(Stack[-3])
0x2e9: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x2ea: PushEmpty()
0x2eb: Call2 0x7e2

0x2ec: Pop(0)
0x2ed: Push("all")
0x2ee: Push("attack_middle")
0x2ef: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2f0: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f1: Pop(2)
0x2f2: @ WaitForAnimEnd()
0x2f3: Pop(0)
0x2f4: PushEmpty()
0x2f5: Call2 0x40d

0x2f6: Pop(0)
0x2f7: PushEmpty(bool, object)
0x2f8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f9: Call2 0x64d

0x2fa: Pop(1)
0x2fb: Pop(1); Push((bool) Stack[-1] == 0)
0x2fc: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2fd: @ StopAsync()
0x2fe: Pop(0)
0x2ff: Stack[-10] = (bool) 0
0x300: Return(); Pop(8)

0x301: PushEmpty(float, int)
0x302: Stack[-2] = Stack[-11]
0x303: Stack[-1] = Stack[-6]
0x304: Call2 0x293

0x305: Pop(2)
0x306: Stack[-2] = (int) 1
0x307: Push("attack_middle")
0x308: Pop(1); Push(Stack[-1] + Stack[-5]);
0x309: Push("_")
0x30a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x30b: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x30c: Push("all")
0x30d: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x30e: Pop(1)
0x30f: Pop(0); Push((bool) Stack[-3] == 0)
0x310: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x311: GOTO 0x32f

0x312: PushEmpty()
0x313: Call2 0x7e2

0x314: Pop(0)
0x315: Push("all")
0x316: @ PlayAnimation(Stack[-1], Stack[-2])
0x317: Pop(1)
0x318: @ WaitForAnimEnd()
0x319: Pop(0)
0x31a: PushEmpty()
0x31b: Call2 0x40d

0x31c: Pop(0)
0x31d: PushEmpty(bool, object)
0x31e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31f: Call2 0x64d

0x320: Pop(1)
0x321: Pop(1); Push((bool) Stack[-1] == 0)
0x322: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x323: @ StopAsync()
0x324: Pop(0)
0x325: Stack[-10] = (bool) 0
0x326: Return(); Pop(8)

0x327: PushEmpty(float, int)
0x328: Stack[-2] = Stack[-11]
0x329: Stack[-1] = Stack[-6]
0x32a: Call2 0x293

0x32b: Pop(2)
0x32c: Push((int) 1)
0x32d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x32e: GOTO 0x307

0x32f: Push((bool) 0)
0x330: @ SetAttackState(Stack[-1])
0x331: Pop(1)
0x332: Push("all")
0x333: Push("attack_end")
0x334: Pop(1); Push(Stack[-1] + Stack[-6]);
0x335: @ PlayAnimation(Stack[-2], Stack[-1])
0x336: Pop(2)
0x337: PushEmpty(bool)
0x338: Call2 0x41b

0x339: Pop(0)
0x33a: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x33b: PushEmpty(bool, float)
0x33c: Stack[-1] = (float) 0.75
0x33d: Call2 0x343

0x33e: Pop(2)
0x33f: @ StopAsync()
0x340: Pop(0)
0x341: Stack[-10] = (bool) 1
0x342: Return(); Pop(8)

0x343: PushEmpty(float, bool, float, bool)
0x344: @ rand(Stack[-2])
0x345: Pop(0)
0x346: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x347: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x348: @ IsAnimationPlaying(Stack[-1])
0x349: Pop(0)
0x34a: Pop(0); Push((bool) Stack[-1] == 0)
0x34b: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x34c: GOTO 0x356

0x34d: PushEmpty(bool)
0x34e: Call2 0x3a5

0x34f: Pop(0)
0x350: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x351: Stack[-6] = (bool) 1
0x352: Return(); Pop(4)

0x353: @ sync()
0x354: Pop(0)
0x355: GOTO 0x348

0x356: GOTO 0x35c

0x357: @ WaitForAnimEnd()
0x358: Pop(0)
0x359: PushEmpty()
0x35a: Call2 0x40d

0x35b: Pop(0)
0x35c: Stack[-6] = (bool) 0
0x35d: Return(); Pop(4)

0x35e: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x35f: @ IsAnimationPlaying(Stack[-5])
0x360: Pop(0)
0x361: Pop(0); Push((bool) Stack[-5] == 0)
0x362: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x363: GOTO 0x384

0x364: PushEmpty(bool)
0x365: Call2 0x3a5

0x366: Pop(0)
0x367: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x368: Stack[-12] = (bool) 1
0x369: Return(); Pop(10)

0x36a: PushEmpty(bool, object)
0x36b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x36c: Call2 0x64d

0x36d: Pop(1)
0x36e: Pop(1); Push((bool) Stack[-1] == 0)
0x36f: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x370: Stack[-12] = (bool) 0
0x371: Return(); Pop(10)

0x372: @@ GetPFPosition(Stack[-4])
0x373: Pop(0)
0x374: @ GetPFPosition(Stack[-3])
0x375: Pop(0)
0x376: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x377: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x378: Pop(0); Push(Stack[-11] * Stack[-11]);
0x379: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x37a: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x37b: PushEmpty(bool, float)
0x37c: Stack[-1] = Stack[-13]
0x37d: Call2 0x2ba

0x37e: Pop(2)
0x37f: Stack[-12] = (bool) 1
0x380: Return(); Pop(10)

0x381: @ sync()
0x382: Pop(0)
0x383: GOTO 0x35f

0x384: PushEmpty()
0x385: Call2 0x40d

0x386: Pop(0)
0x387: Stack[-12] = (bool) 0
0x388: Return(); Pop(10)

0x389: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x38a: PushEmpty(bool, object)
0x38b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38c: Call2 0x64d

0x38d: Pop(1)
0x38e: Pop(1); Push((bool) Stack[-1] == 0)
0x38f: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x390: Stack[-11] = (bool) 0
0x391: Return(); Pop(10)

0x392: PushEmpty(bool)
0x393: Call2 0x3e2

0x394: Pop(0)
0x395: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x396: @@ GetPFPosition(Stack[-5])
0x397: Pop(0)
0x398: @ GetPFPosition(Stack[-4])
0x399: Pop(0)
0x39a: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x39b: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x39c: @@ GetAttackDistance(Stack[-1])
0x39d: Pop(0)
0x39e: Push((int) 50)
0x39f: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3a0: Pop(0); Push(Stack[-1] * Stack[-1]);
0x3a1: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x3a2: Return(); Pop(10)

0x3a3: Stack[-11] = (bool) 0
0x3a4: Return(); Pop(10)

0x3a5: PushEmpty(bool)
0x3a6: Stack[-1] = (bool) 0
0x3a7: PushEmpty(bool)
0x3a8: Call2 0x389

0x3a9: Pop(0)
0x3aa: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3ab: PushEmpty(bool)
0x3ac: Call2 0x3b5

0x3ad: Pop(0)
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3af: Stack[-1] = (bool) 1
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b1: Stack[-1] = (bool) 1
0x3b2: Return(); Pop(0)

0x3b3: Stack[-1] = (bool) 0
0x3b4: Return(); Pop(0)

0x3b5: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x3b6: @ GetScene(Stack[-5])
0x3b7: Pop(0)
0x3b8: Stack[-4] = (bool) 0
0x3b9: PushEmpty(cvector, object)
0x3ba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3bb: Call2 0x5c3

0x3bc: Pop(1)
0x3bd: Pop(1); Push(( -Stack[-1])
0x3be: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x3bf: Pop(1)
0x3c0: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c2: GOTO 0x3df

0x3c3: @ Face(Stack[-0])
0x3c4: Pop(0)
0x3c5: Push("all")
0x3c6: Push("bjump")
0x3c7: @ PlayAnimation(Stack[-2], Stack[-1])
0x3c8: Pop(2)
0x3c9: @@ GetPFPosition(Stack[-2])
0x3ca: Pop(0)
0x3cb: @ GetPFPosition(Stack[-1])
0x3cc: Pop(0)
0x3cd: @ WaitForAnimEnd()
0x3ce: Pop(0)
0x3cf: PushEmpty()
0x3d0: Call2 0x40d

0x3d1: Pop(0)
0x3d2: @ StopAsync()
0x3d3: Pop(0)
0x3d4: Push(CVector(0.0, 0.0, 0.0))
0x3d5: @ SetSpeed(Stack[-1])
0x3d6: Pop(1)
0x3d7: Stack[-4] = (bool) 1
0x3d8: PushEmpty(bool)
0x3d9: Call2 0x389

0x3da: Pop(0)
0x3db: Pop(1); Push((bool) Stack[-1] == 0)
0x3dc: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3dd: GOTO 0x3df

0x3de: GOTO 0x3b9

0x3df: Stack[-11] = Stack[-4]
0x3e0: Return(); Pop(10)

0x3e1: Stack[-5] = 0
0x3e2: PushEmpty(bool, bool)
0x3e3: Push("IsAttacking")
0x3e4: Push((int) 1)
0x3e5: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x3e6: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e7: @@ IsAttacking(Stack[-1])
0x3e8: Pop(0)
0x3e9: Stack[-3] = Stack[-1]
0x3ea: Return(); Pop(2)

0x3eb: Stack[-3] = (bool) 0
0x3ec: Return(); Pop(2)

0x3ed: PushEmpty(float, int, float, int)
0x3ee: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3f0: Return(); Pop(4)

0x3f1: Push( Stack[5 + Tasks[-1].StackPointer] )
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f3: Push((int) -1)
0x3f4: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x3f5: Push((int) 0)
0x3f6: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x3f7: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f8: Return(); Pop(4)

0x3f9: @ rand(Stack[-2])
0x3fa: Pop(0)
0x3fb: PushEmpty(float)
0x3fc: Call2 0x41f

0x3fd: Pop(0)
0x3fe: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x400: @ irand(Stack[-1], Stack[-2])
0x401: Pop(0)
0x402: Push((int) 1)
0x403: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x404: Push("attack")
0x405: Pop(1); Push(Stack[-1] + Stack[-2]);
0x406: @ Speak(Stack[-1])
0x407: Pop(1)
0x408: PushEmpty(int)
0x409: Call2 0x41d

0x40a: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x40b: Pop(1)
0x40c: Return(); Pop(4)

0x40d: PushEmpty(object)
0x40e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x40f: Call2 0x7d9

0x410: Pop(1)
0x411: Return(); Pop(0)

0x412: Stack[-1] = (int) 0
0x413: Return(); Pop(0)

0x414: PushEmpty(string)
0x415: Stack[-1] = "attack_stay"
0x416: Call2 0x774

0x417: Pop(1)
0x418: Return(); Pop(0)

0x419: PushEmpty()
0x41a: Return(); Pop(0)

0x41b: Stack[-1] = (bool) 1
0x41c: Return(); Pop(0)

0x41d: Stack[-1] = (int) 1
0x41e: Return(); Pop(0)

0x41f: Stack[-1] = (float) 0.5
0x420: Return(); Pop(0)

0x421: PushEmpty(bool, bool, bool, bool)
0x422: PushEmpty(object)
0x423: Stack[-1] = Stack[-10]
0x424: Call2 0x7d9

0x425: Pop(1)
0x426: Push((int) 1)
0x427: Push((int) 5)
0x428: @ SetTimer(Stack[-2], Stack[-1])
0x429: Pop(2)
0x42a: @ CanSee(Stack[-2], Stack[-9])
0x42b: Pop(0)
0x42c: Push(Stack[-2])
0x42d: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x42e: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x42f: PushEmpty(object)
0x430: Stack[-1] = Stack[-10]
0x431: Call2 0x762

0x432: Pop(1)
0x433: GOTO 0x435

0x434: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x435: PushEmpty(bool, object)
0x436: Stack[-1] = Stack[-11]
0x437: Call2 0x5ca

0x438: Pop(1)
0x439: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x43a: PushEmpty(object)
0x43b: Call2 0x79d

0x43c: Pop(0)
0x43d: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x43e: Pop(1)
0x43f: PushEmpty(bool, object, float, float, bool, bool)
0x440: Stack[-5] = Stack[-15]
0x441: Stack[-4] = Stack[-14]
0x442: Stack[-3] = Stack[-13]
0x443: Stack[-2] = Stack[-12]
0x444: Stack[-1] = Stack[-11]
0x445: Call2 0x48a

0x446: Stack[-7] = Stack[-6]
0x447: Pop(6)
0x448: Push( Stack[2 + Tasks[-1].StackPointer] )
0x449: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x44a: Push("head")
0x44b: @ UnlookAsync(Stack[-1])
0x44c: Pop(1)
0x44d: Push((int) 1)
0x44e: @ KillTimer(Stack[-1])
0x44f: Pop(1)
0x450: Stack[-10] = Stack[-1]
0x451: Return(); Pop(4)

0x452: PushEmpty()
0x453: Push((int) 1)
0x454: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x455: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x456: PushEmpty(object)
0x457: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x458: Call2 0x7d9

0x459: Pop(1)
0x45a: GOTO 0x45f

0x45b: PushEmpty(int)
0x45c: Stack[-1] = Stack[-2]
0x45d: Call2 0x4f0

0x45e: Pop(1)
0x45f: Return(); Pop(0)

0x460: Push((int) 1)
0x461: @ KillTimer(Stack[-1])
0x462: Pop(1)
0x463: Push( Stack[2 + Tasks[-1].StackPointer] )
0x464: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x465: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x466: Push("head")
0x467: @ UnlookAsync(Stack[-1])
0x468: Pop(1)
0x469: PushEmpty()
0x46a: Call2 0x506

0x46b: Pop(0)
0x46c: Return(); Pop(0)

0x46d: PushEmpty()
0x46e: PushEmpty(bool)
0x46f: Stack[-1] = (bool) 0
0x470: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x471: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x472: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x473: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x474: Stack[-1] = (bool) 1
0x475: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x476: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x477: PushEmpty(object)
0x478: Stack[-1] = Stack[-2]
0x479: Call2 0x762

0x47a: Pop(1)
0x47b: Return(); Pop(0)

0x47c: PushEmpty()
0x47d: PushEmpty(bool)
0x47e: Stack[-1] = (bool) 0
0x47f: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x480: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x481: Push( Stack[2 + Tasks[-1].StackPointer] )
0x482: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x483: Stack[-1] = (bool) 1
0x484: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x485: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x486: Push("head")
0x487: @ UnlookAsync(Stack[-1])
0x488: Pop(1)
0x489: Return(); Pop(0)

0x48a: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x48b: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x48c: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x48d: Stack[-7] = Stack[-17]
0x48e: PushEmpty(bool, object)
0x48f: Stack[-1] = Stack[-23]
0x490: Call2 0x516

0x491: Pop(1)
0x492: Pop(1); Push((bool) Stack[-1] == 0)
0x493: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x494: Stack[-22] = (bool) 0
0x495: Return(); Pop(16)

0x496: @@ GetPosition(Stack[-5])
0x497: Pop(0)
0x498: @ GetPosition(Stack[-4])
0x499: Pop(0)
0x49a: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x49b: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x49c: PushEmpty(bool)
0x49d: Stack[-1] = (bool) 0
0x49e: Push((int) 0)
0x49f: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x4a1: Pop(0); Push(Stack[-20] * Stack[-20]);
0x4a2: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x4a3: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x4a4: Stack[-1] = (bool) 1
0x4a5: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x4a6: @ Stop()
0x4a7: Pop(0)
0x4a8: Stack[-22] = (bool) 0
0x4a9: Return(); Pop(16)

0x4aa: Pop(0); Push(Stack[-20] * Stack[-20]);
0x4ab: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x4ac: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4ad: @@ GetPFPosition(Stack[-5])
0x4ae: Pop(0)
0x4af: @ FindPathTo(Stack[-1], Stack[-5])
0x4b0: Pop(0)
0x4b1: Pop(0); Push(( Stack[-1] != 0 )
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b3: Stack[-6] = Stack[-1]
0x4b4: Stack[-1] = 0
0x4b5: Pop(0); Push(( Stack[-6] != 0 )
0x4b6: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4b7: Push(Stack[-7])
0x4b8: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4b9: Stack[-7] = (bool) 0
0x4ba: @ RotatePath(Stack[-6], Stack[-8])
0x4bb: Pop(0)
0x4bc: Pop(0); Push((bool) Stack[-8] == 0)
0x4bd: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4be: GOTO 0x4ee

0x4bf: Push((int) 0)
0x4c0: Push((float)0.3)
0x4c1: @ SetTimer(Stack[-2], Stack[-1])
0x4c2: Pop(2)
0x4c3: PushEmpty(string)
0x4c4: Call2 0x51d

0x4c5: Pop(0)
0x4c6: PushEmpty(string)
0x4c7: Call2 0x51f

0x4c8: Pop(0)
0x4c9: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x4ca: Pop(2)
0x4cb: Pop(0); Push((bool) Stack[-8] == 0)
0x4cc: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4cd: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4ce: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4cf: Stack[-6] = 0
0x4d0: GOTO 0x4ee

0x4d1: GOTO 0x4d3

0x4d2: GOTO 0x4ed

0x4d3: GOTO 0x4d5

0x4d4: Stack[-6] = 0
0x4d5: GOTO 0x4e6

0x4d6: Push((int) 0)
0x4d7: @ KillTimer(Stack[-1])
0x4d8: Pop(1)
0x4d9: Push((float)0.5)
0x4da: @ Sleep(Stack[-1], Stack[-9])
0x4db: Pop(1)
0x4dc: Pop(0); Push((bool) Stack[-8] == 0)
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4de: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4df: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4e0: Stack[-6] = 0
0x4e1: GOTO 0x4ee

0x4e2: Push((int) 0)
0x4e3: Push((float)0.3)
0x4e4: @ SetTimer(Stack[-2], Stack[-1])
0x4e5: Pop(2)
0x4e6: Stack[-1] = 0
0x4e7: GOTO 0x4ec

0x4e8: Push((int) 0)
0x4e9: @ KillTimer(Stack[-1])
0x4ea: Pop(1)
0x4eb: GOTO 0x4ee

0x4ec: Stack[-6] = 0
0x4ed: GOTO 0x48e

0x4ee: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x4ef: Return(); Pop(16)

0x4f0: PushEmpty()
0x4f1: Push((int) 0)
0x4f2: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x4f3: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4f4: Return(); Pop(0)

0x4f5: PushEmpty(bool, object)
0x4f6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f7: Call2 0x516

0x4f8: Pop(1)
0x4f9: Pop(1); Push((bool) Stack[-1] == 0)
0x4fa: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4fb: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x4fc: Push((int) 0)
0x4fd: @ KillTimer(Stack[-1])
0x4fe: Pop(1)
0x4ff: @ Stop()
0x500: Pop(0)
0x501: Return(); Pop(0)

0x502: PushEmpty()
0x503: @ RequestClearPath(Stack[-1])
0x504: Pop(0)
0x505: Return(); Pop(0)

0x506: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x507: Push((int) 0)
0x508: @ KillTimer(Stack[-1])
0x509: Pop(1)
0x50a: @ Stop()
0x50b: Pop(0)
0x50c: Return(); Pop(0)

0x50d: PushEmpty()
0x50e: PushEmpty()
0x50f: Call2 0x460

0x510: Pop(0)
0x511: PushEmpty(object)
0x512: Stack[-1] = Stack[-2]
0x513: Call2 0x87b

0x514: Pop(1)
0x515: Return(); Pop(0)

0x516: PushEmpty()
0x517: PushEmpty(bool, object)
0x518: Stack[-1] = Stack[-3]
0x519: Call2 0x64d

0x51a: Stack[-4] = Stack[-2]
0x51b: Pop(2)
0x51c: Return(); Pop(0)

0x51d: Stack[-1] = "walk"
0x51e: Return(); Pop(0)

0x51f: Stack[-1] = "run"
0x520: Return(); Pop(0)

0x521: PushEmpty()
0x522: EventDisable(0)
0x523: PushEmpty(object)
0x524: Stack[-1] = Stack[-2]
0x525: Call2 0x53a

0x526: Pop(1)
0x527: Push((int) 50)
0x528: Push((int) 40)
0x529: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x52a: Pop(2)
0x52b: EventEnable(0)
0x52c: @ Hold()
0x52d: Pop(0)
0x52e: GOTO 0x52c

0x52f: Return(); Pop(0)

0x530: PushEmpty(bool, bool)
0x531: @ IsOverrideActive(Stack[-1])
0x532: Pop(0)
0x533: Pop(0); Push((bool) Stack[-1] == 0)
0x534: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x535: PushEmpty(object)
0x536: Stack[-1] = Stack[-4]
0x537: Call2 0x804

0x538: Pop(1)
0x539: Return(); Pop(2)

0x53a: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x53b: Pop(0); Push((bool) Stack[-21] == 0)
0x53c: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x53d: PushEmpty(string)
0x53e: Stack[-1] = "fdie"
0x53f: Call2 0x595

0x540: Pop(1)
0x541: GOTO 0x594

0x542: @@ GetPosition(Stack[-10])
0x543: Pop(0)
0x544: @ GetPosition(Stack[-9])
0x545: Pop(0)
0x546: @ GetDirection(Stack[-8])
0x547: Pop(0)
0x548: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x549: Push(CvectorIndex(Stack[-7], 0))
0x54a: Push(CvectorIndex(Stack[-9], 0))
0x54b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x54c: Push(CvectorIndex(Stack[-8], 2))
0x54d: Push(CvectorIndex(Stack[-10], 2))
0x54e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x54f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x550: Push((int) 0)
0x551: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x552: IF (Stack[-1] == 0) GOTO 0x555; Pop(1)

0x553: Stack[-6] = "fdie"
0x554: GOTO 0x556

0x555: Stack[-6] = "bdie"
0x556: @ RemoveRTEnvelope()
0x557: Pop(0)
0x558: @ SetDeathState()
0x559: Pop(0)
0x55a: @ Stop()
0x55b: Pop(0)
0x55c: @ StopAsync()
0x55d: Pop(0)
0x55e: Stack[-5] = Stack[-21]
0x55f: Push("GetScriptProperty")
0x560: Push((int) 2)
0x561: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x562: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x563: Push("Owner")
0x564: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x565: Pop(1)
0x566: Push(Stack[-4])
0x567: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x568: Push("Owner")
0x569: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x56a: Pop(1)
0x56b: Pop(0); Push((bool) Stack[-5] == 0)
0x56c: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x56d: Stack[-5] = Stack[-21]
0x56e: Push("@GetEyesHeight")
0x56f: Push((int) 1)
0x570: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x571: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x572: @@ GetEyesHeight(Stack[-2])
0x573: Pop(0)
0x574: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x575: Push(CvectorIndex(Stack[-1], 1))
0x576: Stack[-1] = Stack[-3]
0x577: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x578: Push("head")
0x579: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x57a: Pop(1)
0x57b: Stack[-3] = (bool) 1
0x57c: GOTO 0x57e

0x57d: Stack[-3] = (bool) 0
0x57e: PushEmpty(string)
0x57f: Stack[-1] = Stack[-7]
0x580: Call2 0x774

0x581: Pop(1)
0x582: Push("all")
0x583: @ PlayAnimation(Stack[-1], Stack[-7])
0x584: Pop(1)
0x585: @ WaitForAnimEnd()
0x586: Pop(0)
0x587: Push(Stack[-3])
0x588: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x589: @ StopAsync()
0x58a: Pop(0)
0x58b: Push("head")
0x58c: @ UnlookAsync(Stack[-1])
0x58d: Pop(1)
0x58e: Push("all")
0x58f: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x590: Pop(1)
0x591: @ RemoveEnvelope()
0x592: Pop(0)
0x593: Stack[-5] = 0
0x594: Return(); Pop(20)

0x595: PushEmpty()
0x596: @ RemoveRTEnvelope()
0x597: Pop(0)
0x598: @ SetDeathState()
0x599: Pop(0)
0x59a: @ Stop()
0x59b: Pop(0)
0x59c: @ StopAsync()
0x59d: Pop(0)
0x59e: @ StopSecondaryAnimation()
0x59f: Pop(0)
0x5a0: PushEmpty(string)
0x5a1: Stack[-1] = Stack[-2]
0x5a2: Call2 0x774

0x5a3: Pop(1)
0x5a4: Push("all")
0x5a5: @ PlayAnimation(Stack[-1], Stack[-2])
0x5a6: Pop(1)
0x5a7: @ WaitForAnimEnd()
0x5a8: Pop(0)
0x5a9: Push("all")
0x5aa: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x5ab: Pop(1)
0x5ac: @ RemoveEnvelope()
0x5ad: Pop(0)
0x5ae: Return(); Pop(0)

0x5af: PushEmpty()
0x5b0: Return(); Pop(0)

0x5b1: PushEmpty()
0x5b2: Return(); Pop(0)

0x5b3: PushEmpty()
0x5b4: Return(); Pop(0)

0x5b5: PushEmpty()
0x5b6: Push((int) 2)
0x5b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b8: IF (Stack[-1] == 0) GOTO 0x5bc; Pop(1)

0x5b9: Stack[-2] = "fire"
0x5ba: Return(); Pop(0)

0x5bb: GOTO 0x5c1

0x5bc: Push((int) 1)
0x5bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5be: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5bf: Stack[-2] = "bullet"
0x5c0: Return(); Pop(0)

0x5c1: Stack[-2] = "phys"
0x5c2: Return(); Pop(0)

0x5c3: PushEmpty(cvector, cvector, cvector, cvector)
0x5c4: @ GetPosition(Stack[-2])
0x5c5: Pop(0)
0x5c6: @@ GetPosition(Stack[-1])
0x5c7: Pop(0)
0x5c8: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x5c9: Return(); Pop(4)

0x5ca: PushEmpty(bool, bool)
0x5cb: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5cc: Pop(0)
0x5cd: Stack[-4] = Stack[-1]
0x5ce: Return(); Pop(2)

0x5cf: PushEmpty(bool, bool)
0x5d0: Push("HasProperty")
0x5d1: Push((int) 2)
0x5d2: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x5d3: Pop(1); Push((bool) Stack[-1] == 0)
0x5d4: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d5: Stack[-5] = (bool) 0
0x5d6: Return(); Pop(2)

0x5d7: @@ HasProperty(Stack[-3], Stack[-1])
0x5d8: Pop(0)
0x5d9: Stack[-5] = Stack[-1]
0x5da: Return(); Pop(2)

0x5db: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x5dc: PushEmpty(bool, object, string)
0x5dd: Stack[-2] = Stack[-18]
0x5de: Stack[-1] = "health"
0x5df: Call2 0x5cf

0x5e0: Pop(2)
0x5e1: Pop(1); Push((bool) Stack[-1] == 0)
0x5e2: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5e3: Stack[-16] = (float) 0.0
0x5e4: Return(); Pop(12)

0x5e5: PushEmpty(bool, object, string)
0x5e6: Stack[-2] = Stack[-18]
0x5e7: Stack[-1] = "armor"
0x5e8: Call2 0x5cf

0x5e9: Pop(2)
0x5ea: Pop(1); Push((bool) Stack[-1] == 0)
0x5eb: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5ec: Stack[-6] = (int) 0
0x5ed: GOTO 0x5f1

0x5ee: Push("armor")
0x5ef: @@ GetProperty(Stack[-1], Stack[-7])
0x5f0: Pop(1)
0x5f1: Push("armor_")
0x5f2: PushEmpty(string, int)
0x5f3: Stack[-1] = Stack[-16]
0x5f4: Call2 0x5b5

0x5f5: Pop(1)
0x5f6: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5f7: PushEmpty(bool, object, string)
0x5f8: Stack[-2] = Stack[-18]
0x5f9: Stack[-1] = Stack[-8]
0x5fa: Call2 0x5cf

0x5fb: Pop(2)
0x5fc: Pop(1); Push((bool) Stack[-1] == 0)
0x5fd: IF (Stack[-1] == 0) GOTO 0x600; Pop(1)

0x5fe: Stack[-4] = (int) 0
0x5ff: GOTO 0x602

0x600: @@ GetProperty(Stack[-5], Stack[-4])
0x601: Pop(0)
0x602: PushEmpty(float, float, float)
0x603: Pop(0); Push(Stack[-9] + Stack[-7]);
0x604: Push((float)100.0)
0x605: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x606: Stack[-1] = (int) 1
0x607: Call2 0x7b1

0x608: Stack[-6] = Stack[-3]
0x609: Pop(3)
0x60a: Push("health")
0x60b: @@ GetProperty(Stack[-1], Stack[-3])
0x60c: Pop(1)
0x60d: Push((int) 1)
0x60e: Pop(1); Push(Stack[-1] - Stack[-4]);
0x60f: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x610: Push("health")
0x611: PushEmpty(float, float, float, float)
0x612: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x613: Stack[-2] = (int) 0
0x614: Stack[-1] = (int) 1
0x615: Call2 0x7b8

0x616: Pop(3)
0x617: @@ SetProperty(Stack[-2], Stack[-1])
0x618: Pop(2)
0x619: PushEmpty(bool, object)
0x61a: Stack[-1] = Stack[-17]
0x61b: Call2 0x5ca

0x61c: Pop(1)
0x61d: IF (Stack[-1] == 0) GOTO 0x622; Pop(1)

0x61e: PushEmpty(float)
0x61f: Stack[-1] = -Stack[-2]; Pop(0);
0x620: Call2 0x7c3

0x621: Pop(1)
0x622: Stack[-16] = Stack[-1]
0x623: Return(); Pop(12)

0x624: PushEmpty(bool, bool)
0x625: @@ IsDead(Stack[-1])
0x626: Pop(0)
0x627: Stack[-4] = Stack[-1]
0x628: Return(); Pop(2)

0x629: PushEmpty(object, object, object, object)
0x62a: Pop(0); Push((bool) Stack[-5] == 0)
0x62b: IF (Stack[-1] == 0) GOTO 0x62e; Pop(1)

0x62c: Stack[-6] = (bool) 0
0x62d: Return(); Pop(4)

0x62e: PushEmpty(bool)
0x62f: Stack[-1] = (bool) 0
0x630: Push("IsDead")
0x631: Push((int) 1)
0x632: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x633: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x634: PushEmpty(bool, object)
0x635: Stack[-1] = Stack[-8]
0x636: Call2 0x624

0x637: Pop(1)
0x638: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x639: Stack[-1] = (bool) 1
0x63a: IF (Stack[-1] == 0) GOTO 0x63d; Pop(1)

0x63b: Stack[-6] = (bool) 0
0x63c: Return(); Pop(4)

0x63d: @ GetScene(Stack[-2])
0x63e: Pop(0)
0x63f: Pop(0); Push((bool) Stack[-2] == 0)
0x640: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x641: Stack[-6] = (bool) 0
0x642: Return(); Pop(4)

0x643: @@ GetScene(Stack[-1])
0x644: Pop(0)
0x645: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x646: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x647: Stack[-6] = (bool) 0
0x648: Return(); Pop(4)

0x649: Stack[-6] = (bool) 1
0x64a: Return(); Pop(4)

0x64b: Stack[-1] = 0
0x64c: Stack[-2] = 0
0x64d: PushEmpty(int, int)
0x64e: PushEmpty(bool, object)
0x64f: Stack[-1] = Stack[-5]
0x650: Call2 0x629

0x651: Pop(1)
0x652: Pop(1); Push((bool) Stack[-1] == 0)
0x653: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x654: Stack[-4] = (bool) 0
0x655: Return(); Pop(2)

0x656: PushEmpty(bool, object, string)
0x657: Stack[-2] = Stack[-6]
0x658: Stack[-1] = "noaccess"
0x659: Call2 0x5cf

0x65a: Pop(2)
0x65b: Pop(1); Push((bool) Stack[-1] == 0)
0x65c: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x65d: Stack[-4] = (bool) 1
0x65e: Return(); Pop(2)

0x65f: Push("noaccess")
0x660: @@ GetProperty(Stack[-1], Stack[-2])
0x661: Pop(1)
0x662: Push((int) 0)
0x663: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x664: Return(); Pop(2)

0x665: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x666: Pop(0); Push((bool) Stack[-15] == 0)
0x667: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x668: Return(); Pop(14)

0x669: @ IsDead(Stack[-7])
0x66a: Pop(0)
0x66b: Push(Stack[-7])
0x66c: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x66d: Return(); Pop(14)

0x66e: @ GetSecondaryAnimationType(Stack[-6])
0x66f: Pop(0)
0x670: Push((int) 0)
0x671: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x672: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x673: Return(); Pop(14)

0x674: @@ GetPosition(Stack[-5])
0x675: Pop(0)
0x676: @ GetPosition(Stack[-4])
0x677: Pop(0)
0x678: @ GetDirection(Stack[-3])
0x679: Pop(0)
0x67a: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x67b: Push(CvectorIndex(Stack[-2], 0))
0x67c: Push(CvectorIndex(Stack[-4], 0))
0x67d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x67e: Push(CvectorIndex(Stack[-3], 2))
0x67f: Push(CvectorIndex(Stack[-5], 2))
0x680: Pop(2); Push(Stack[-2] * Stack[-1]);
0x681: Pop(2); Push(Stack[-2] + Stack[-1]);
0x682: Push((int) 0)
0x683: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x684: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x685: Stack[-1] = "fhit"
0x686: GOTO 0x688

0x687: Stack[-1] = "bhit"
0x688: Push("hit_react")
0x689: Push("1")
0x68a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x68b: Push("2")
0x68c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x68d: Push((int) -10)
0x68e: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x68f: Pop(4)
0x690: Return(); Pop(14)

0x691: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x692: PushEmpty(bool)
0x693: Stack[-1] = (bool) 0
0x694: PushEmpty(bool)
0x695: Stack[-1] = (bool) 0
0x696: Push(Stack[-23])
0x697: IF (Stack[-1] == 0) GOTO 0x69c; Pop(1)

0x698: Push((int) 4)
0x699: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x69a: IF (Stack[-1] == 0) GOTO 0x69c; Pop(1)

0x69b: Stack[-1] = (bool) 1
0x69c: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x69d: Push((int) 5)
0x69e: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x69f: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x6a0: Stack[-1] = (bool) 1
0x6a1: IF (Stack[-1] == 0) GOTO 0x6d0; Pop(1)

0x6a2: PushEmpty(cvector, cvector)
0x6a3: PushEmpty(cvector, object)
0x6a4: Stack[-1] = Stack[-25]
0x6a5: Call2 0x5c3

0x6a6: Stack[-3] = Stack[-2]
0x6a7: Pop(2)
0x6a8: Call2 0x7a3

0x6a9: Stack[-11] = Stack[-2]
0x6aa: Pop(2)
0x6ab: @ CreateVectorVector(Stack[-8])
0x6ac: Pop(0)
0x6ad: Stack[-7] = (int) 1
0x6ae: Push("hit")
0x6af: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6b0: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x6b1: Pop(1)
0x6b2: Pop(0); Push((bool) Stack[-6] == 0)
0x6b3: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6b4: GOTO 0x6be

0x6b5: Pop(0); Push(Stack[-4] | Stack[-9]);
0x6b6: Push((float)0.70711)
0x6b7: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6b8: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6b9: @@ add(Stack[-5])
0x6ba: Pop(0)
0x6bb: Push((int) 1)
0x6bc: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x6bd: GOTO 0x6ae

0x6be: @@ size(Stack[-3])
0x6bf: Pop(0)
0x6c0: Push(Stack[-3])
0x6c1: IF (Stack[-1] == 0) GOTO 0x6cf; Pop(1)

0x6c2: @ irand(Stack[-2], Stack[-3])
0x6c3: Pop(0)
0x6c4: @@ get(Stack[-1], Stack[-2])
0x6c5: Pop(0)
0x6c6: PushEmpty(object, int, float, cvector, cvector)
0x6c7: Stack[-5] = Stack[-26]
0x6c8: Stack[-4] = Stack[-25]
0x6c9: Stack[-3] = Stack[-24]
0x6ca: Stack[-2] = Stack[-6]
0x6cb: Stack[-1] = -Stack[-14]; Pop(0);
0x6cc: Call2 0x6d5

0x6cd: Pop(5)
0x6ce: Return(); Pop(18)

0x6cf: Stack[-8] = 0
0x6d0: PushEmpty(object)
0x6d1: Stack[-1] = Stack[-22]
0x6d2: Call2 0x665

0x6d3: Pop(1)
0x6d4: Return(); Pop(18)

0x6d5: PushEmpty(object, object, object, object)
0x6d6: @ GetScene(Stack[-2])
0x6d7: Pop(0)
0x6d8: Push("scripted")
0x6d9: Push("blood_dir.xml")
0x6da: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x6db: Pop(2)
0x6dc: PushEmpty(object)
0x6dd: Stack[-1] = Stack[-10]
0x6de: Call2 0x665

0x6df: Pop(1)
0x6e0: Return(); Pop(4)

0x6e1: Stack[-1] = 0
0x6e2: Stack[-2] = 0
0x6e3: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x6e4: @@ GetPosition(Stack[-3])
0x6e5: Pop(0)
0x6e6: @ GetPosition(Stack[-2])
0x6e7: Pop(0)
0x6e8: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x6e9: Push(CvectorIndex(Stack[-1], 0))
0x6ea: Push(CvectorIndex(Stack[-2], 2))
0x6eb: @ RotateAsync(Stack[-2], Stack[-1])
0x6ec: Pop(2)
0x6ed: Return(); Pop(6)

0x6ee: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x6ef: @@ GetPosition(Stack[-8])
0x6f0: Pop(0)
0x6f1: @@ GetEyesHeight(Stack[-9])
0x6f2: Pop(0)
0x6f3: Push(CvectorIndex(Stack[-8], 1))
0x6f4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x6f5: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x6f6: @ GetPosition(Stack[-7])
0x6f7: Pop(0)
0x6f8: @ GetEyesHeight(Stack[-9])
0x6f9: Pop(0)
0x6fa: Push(CvectorIndex(Stack[-7], 1))
0x6fb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x6fc: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x6fd: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x6fe: Push(CvectorIndex(Stack[-6], 1))
0x6ff: Stack[-1] = (int) 0
0x700: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x701: Pop(0); Push(Stack[-6] | Stack[-6]);
0x702: Pop(1); Push(Sqrt(Stack[-1]))
0x703: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x704: Stack[-5] = -Stack[-6]; Pop(0);
0x705: Pop(0); Push(Stack[-6] * Stack[-19]);
0x706: PushEmpty(cvector, cvector)
0x707: Push(CVector(0.0, 1.0, 0.0))
0x708: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x709: Call2 0x7a3

0x70a: Pop(1)
0x70b: Push((int) 25)
0x70c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x70d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x70e: Push(CVector(0.0, 10.0, 0.0))
0x70f: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x710: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x711: @ IsOverrideActive(Stack[-2])
0x712: Pop(0)
0x713: Push(Stack[-2])
0x714: IF (Stack[-1] == 0) GOTO 0x717; Pop(1)

0x715: Stack[-21] = (bool) 0
0x716: Return(); Pop(18)

0x717: @ StopWorld()
0x718: Pop(0)
0x719: @ CameraTransit(Stack[-3], Stack[-5])
0x71a: Pop(0)
0x71b: Push(CvectorIndex(Stack[-4], 0))
0x71c: Push(CvectorIndex(Stack[-5], 2))
0x71d: @ Rotate(Stack[-2], Stack[-1])
0x71e: Pop(2)
0x71f: PushEmpty(bool)
0x720: Call2 0x842

0x721: Pop(0)
0x722: IF (Stack[-1] == 0) GOTO 0x724; Pop(1)

0x723: GOTO 0x72c

0x724: Push("head")
0x725: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x726: Pop(1)
0x727: Push(Stack[-1])
0x728: IF (Stack[-1] == 0) GOTO 0x72c; Pop(1)

0x729: Push("head")
0x72a: @ LookAsyncCamera(Stack[-1])
0x72b: Pop(1)
0x72c: @ CameraWaitForPlayFinish()
0x72d: Pop(0)
0x72e: @ ResumeWorld()
0x72f: Pop(0)
0x730: Stack[-21] = (bool) 1
0x731: Return(); Pop(18)

0x732: PushEmpty(bool, bool)
0x733: @ CameraSwitchToNormal()
0x734: Pop(0)
0x735: PushEmpty(bool)
0x736: Call2 0x842

0x737: Pop(0)
0x738: IF (Stack[-1] == 0) GOTO 0x73a; Pop(1)

0x739: GOTO 0x742

0x73a: Push("head")
0x73b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x73c: Pop(1)
0x73d: Push(Stack[-1])
0x73e: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x73f: Push("head")
0x740: @ UnlookAsync(Stack[-1])
0x741: Pop(1)
0x742: Return(); Pop(2)

0x743: PushEmpty(bool, float, float, bool, float, float)
0x744: @ lshHasAnimation(Stack[-3], Stack[-7])
0x745: Pop(0)
0x746: Push(Stack[-3])
0x747: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x748: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x749: Pop(0)
0x74a: Push((bool) 0)
0x74b: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x74c: Pop(1)
0x74d: GOTO 0x752

0x74e: Push("Can't find lsh animation : ")
0x74f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x750: @ Trace(Stack[-1])
0x751: Pop(1)
0x752: Return(); Pop(6)

0x753: PushEmpty(bool, float, float, bool, float, float)
0x754: @ lshHasAnimation(Stack[-3], Stack[-8])
0x755: Pop(0)
0x756: Push(Stack[-3])
0x757: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x758: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x759: Pop(0)
0x75a: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x75b: Pop(0)
0x75c: GOTO 0x761

0x75d: Push("Can't find lsh animation : ")
0x75e: Pop(1); Push(Stack[-1] + Stack[-9]);
0x75f: @ Trace(Stack[-1])
0x760: Pop(1)
0x761: Return(); Pop(6)

0x762: PushEmpty(float, cvector, float, cvector)
0x763: @@ GetEyesHeight(Stack[-2])
0x764: Pop(0)
0x765: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x766: Push(CvectorIndex(Stack[-1], 1))
0x767: Stack[-1] = Stack[-3]
0x768: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x769: Push("head")
0x76a: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x76b: Pop(1)
0x76c: Return(); Pop(4)

0x76d: PushEmpty(bool)
0x76e: Call2 0x842

0x76f: Pop(0)
0x770: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x771: @ lshStopSpeech()
0x772: Pop(0)
0x773: Return(); Pop(0)

0x774: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x775: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x776: Pop(0)
0x777: Pop(0); Push((bool) Stack[-8] == 0)
0x778: IF (Stack[-1] == 0) GOTO 0x78d; Pop(1)

0x779: Stack[-7] = (int) 0
0x77a: Push((int) 1)
0x77b: Pop(1); Push(Stack[-8] + Stack[-1]);
0x77c: Pop(1); Push(Stack[-18] + Stack[-1]);
0x77d: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x77e: Pop(1)
0x77f: Pop(0); Push((bool) Stack[-6] == 0)
0x780: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x781: GOTO 0x785

0x782: Push((int) 1)
0x783: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x784: GOTO 0x77a

0x785: Pop(0); Push((bool) Stack[-7] == 0)
0x786: IF (Stack[-1] == 0) GOTO 0x788; Pop(1)

0x787: Return(); Pop(16)

0x788: @ irand(Stack[-5], Stack[-7])
0x789: Pop(0)
0x78a: Push((int) 1)
0x78b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x78c: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x78d: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x78e: Pop(0)
0x78f: Push(Stack[-4])
0x790: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x791: @ GetEyesHeight(Stack[-3])
0x792: Pop(0)
0x793: @ GetDirection(Stack[-2])
0x794: Pop(0)
0x795: Push((int) 50)
0x796: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x797: Push(CvectorIndex(Stack[-1], 1))
0x798: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x799: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x79a: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x79b: Pop(0)
0x79c: Return(); Pop(16)

0x79d: PushEmpty(object, object)
0x79e: @ self(Stack[-1])
0x79f: Pop(0)
0x7a0: Stack[-3] = Stack[-1]
0x7a1: Return(); Pop(2)

0x7a2: Stack[-1] = 0
0x7a3: PushEmpty(float, float)
0x7a4: Pop(0); Push(Stack[-3] | Stack[-3]);
0x7a5: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x7a6: Push((float)0.0)
0x7a7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7a8: IF (Stack[-1] == 0) GOTO 0x7ab; Pop(1)

0x7a9: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x7aa: Return(); Pop(2)

0x7ab: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x7ac: Return(); Pop(2)

0x7ad: PushEmpty(cvector, cvector)
0x7ae: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x7af: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x7b0: Return(); Pop(2)

0x7b1: PushEmpty()
0x7b2: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x7b3: IF (Stack[-1] == 0) GOTO 0x7b6; Pop(1)

0x7b4: Stack[-3] = Stack[-2]
0x7b5: GOTO 0x7b7

0x7b6: Stack[-3] = Stack[-1]
0x7b7: Return(); Pop(0)

0x7b8: PushEmpty()
0x7b9: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x7ba: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7bb: Stack[-4] = Stack[-2]
0x7bc: Return(); Pop(0)

0x7bd: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x7be: IF (Stack[-1] == 0) GOTO 0x7c1; Pop(1)

0x7bf: Stack[-4] = Stack[-1]
0x7c0: Return(); Pop(0)

0x7c1: Stack[-4] = Stack[-3]
0x7c2: Return(); Pop(0)

0x7c3: PushEmpty(object, object)
0x7c4: @ CreateFloatVector(Stack[-1])
0x7c5: Pop(0)
0x7c6: @@ add(Stack[-3])
0x7c7: Pop(0)
0x7c8: Push((int) 15)
0x7c9: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x7ca: Pop(1)
0x7cb: Return(); Pop(2)

0x7cc: Stack[-1] = 0
0x7cd: PushEmpty(object, object)
0x7ce: @ FindActor(Stack[-1], Stack[-4])
0x7cf: Pop(0)
0x7d0: Pop(0); Push((bool) Stack[-1] == 0)
0x7d1: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7d2: Stack[-5] = (bool) 0
0x7d3: Return(); Pop(2)

0x7d4: @ Trigger(Stack[-1], Stack[-3])
0x7d5: Pop(0)
0x7d6: Stack[-5] = (bool) 1
0x7d7: Return(); Pop(2)

0x7d8: Stack[-1] = 0
0x7d9: PushEmpty(bool, bool)
0x7da: @ IsPlayerActor(Stack[-3], Stack[-1])
0x7db: Pop(0)
0x7dc: Push(Stack[-1])
0x7dd: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7de: Push("attack")
0x7df: @ PlayGlobalMusic(Stack[-1])
0x7e0: Pop(1)
0x7e1: Return(); Pop(2)

0x7e2: PushEmpty(object, object)
0x7e3: @ GetScene(Stack[-1])
0x7e4: Pop(0)
0x7e5: Push("battle")
0x7e6: PushEmpty(object)
0x7e7: Call2 0x79d

0x7e8: Pop(0)
0x7e9: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x7ea: Pop(2)
0x7eb: Return(); Pop(2)

0x7ec: Stack[-1] = 0
0x7ed: PushEmpty(int, int)
0x7ee: Push("branch")
0x7ef: @ GetVariable(Stack[-1], Stack[-2])
0x7f0: Pop(1)
0x7f1: Push((int) 0)
0x7f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7f3: IF (Stack[-1] == 0) GOTO 0x7f7; Pop(1)

0x7f4: Stack[-3] = (int) 1
0x7f5: Return(); Pop(2)

0x7f6: GOTO 0x7fc

0x7f7: Push((int) 1)
0x7f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7f9: IF (Stack[-1] == 0) GOTO 0x7fc; Pop(1)

0x7fa: Stack[-3] = (int) 2
0x7fb: Return(); Pop(2)

0x7fc: Stack[-3] = (int) 3
0x7fd: Return(); Pop(2)

0x7fe: PushEmpty(int, int)
0x7ff: Push("branch")
0x800: @ GetVariable(Stack[-1], Stack[-2])
0x801: Pop(1)
0x802: Stack[-3] = Stack[-1]
0x803: Return(); Pop(2)

0x804: PushEmpty()
0x805: PushEmpty(int)
0x806: Call2 0x7fe

0x807: Pop(0)
0x808: Push((int) 1)
0x809: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x80a: IF (Stack[-1] == 0) GOTO 0x80e; Pop(1)

0x80b: @ WorkWithCorpse(Stack[-1])
0x80c: Pop(0)
0x80d: GOTO 0x810

0x80e: @ Barter(Stack[-1])
0x80f: Pop(0)
0x810: Return(); Pop(0)

0x811: PushEmpty(object, int, bool, object, int, bool)
0x812: @ CreateInvItem(Stack[-3])
0x813: Pop(0)
0x814: @@ SetItemName(Stack[-7])
0x815: Pop(0)
0x816: Push("Organ")
0x817: Push((int) 1)
0x818: @@ SetProperty(Stack[-2], Stack[-1])
0x819: Pop(2)
0x81a: @@ GetItemID(Stack[-2])
0x81b: Pop(0)
0x81c: Push((int) 0)
0x81d: Push((int) 1)
0x81e: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x81f: Pop(2)
0x820: Return(); Pop(6)

0x821: Stack[-3] = 0
0x822: PushEmpty(int)
0x823: Call2 0x7fe

0x824: Pop(0)
0x825: Push((int) 1)
0x826: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x827: IF (Stack[-1] == 0) GOTO 0x829; Pop(1)

0x828: Return(); Pop(0)

0x829: PushEmpty(string)
0x82a: Stack[-1] = "liver"
0x82b: Call2 0x811

0x82c: Pop(1)
0x82d: PushEmpty(string)
0x82e: Stack[-1] = "kidney"
0x82f: Call2 0x811

0x830: Pop(1)
0x831: PushEmpty(string)
0x832: Stack[-1] = "heart"
0x833: Call2 0x811

0x834: Pop(1)
0x835: PushEmpty(string)
0x836: Stack[-1] = "blood"
0x837: Call2 0x811

0x838: Pop(1)
0x839: Return(); Pop(0)

0x83a: Stack[-1] = (int) 515562
0x83b: Return(); Pop(0)

0x83c: Stack[-1] = (int) 503347
0x83d: Return(); Pop(0)

0x83e: Stack[-1] = "ui/NPC_Citizen1.png"
0x83f: Return(); Pop(0)

0x840: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x841: Return(); Pop(0)

0x842: Stack[-1] = (bool) 0
0x843: Return(); Pop(0)

0x844: PushEmpty(object, object)
0x845: PushEmpty(bool, string, string)
0x846: Stack[-2] = "quest_b10_01"
0x847: Stack[-1] = "butcher_dead"
0x848: Call2 0x7cd

0x849: Pop(3)
0x84a: PushEmpty()
0x84b: Call2 0x822

0x84c: Pop(0)
0x84d: @ GetScene(Stack[-1])
0x84e: Pop(0)
0x84f: PushEmpty(object)
0x850: Call2 0x79d

0x851: Pop(0)
0x852: @@ RemoveStationaryActor(Stack[-1])
0x853: Pop(1)
0x854: PushEmpty(object)
0x855: Stack[-1] = Stack[-4]
0x856: Push(-1, 0); TaskCall(5)
0x857: Call2 0x521

0x858: Pop(-1, 0); TaskReturn
0x859: Pop(1)
0x85a: Return(); Pop(2)

0x85b: Stack[-1] = 0
0x85c: PushEmpty()
0x85d: PushEmpty(object, int, float)
0x85e: Stack[-3] = Stack[-7]
0x85f: Stack[-2] = Stack[-6]
0x860: Stack[-1] = Stack[-5]
0x861: Call2 0x691

0x862: Pop(3)
0x863: Return(); Pop(0)

0x864: PushEmpty()
0x865: PushEmpty(object, int, float, cvector, cvector)
0x866: Stack[-5] = Stack[-11]
0x867: Stack[-4] = Stack[-10]
0x868: Stack[-3] = Stack[-9]
0x869: Stack[-2] = Stack[-7]
0x86a: Stack[-1] = Stack[-6]
0x86b: Call2 0x6d5

0x86c: Pop(5)
0x86d: Return(); Pop(0)

0x86e: PushEmpty(float, float)
0x86f: Push("health")
0x870: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x871: IF (Stack[-1] == 0) GOTO 0x87a; Pop(1)

0x872: Push("health")
0x873: @ GetProperty(Stack[-1], Stack[-2])
0x874: Pop(1)
0x875: Push((int) 0)
0x876: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x877: IF (Stack[-1] == 0) GOTO 0x87a; Pop(1)

0x878: @ SignalDeath(Stack[-4])
0x879: Pop(0)
0x87a: Return(); Pop(2)

0x87b: PushEmpty()
0x87c: PushEmpty(object)
0x87d: Stack[-1] = Stack[-2]
0x87e: Call2 0x844

0x87f: Pop(1)
0x880: Return(); Pop(0)

