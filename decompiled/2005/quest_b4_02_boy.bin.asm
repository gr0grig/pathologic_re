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
	run
	RemoveStationaryActor
	pt_b4q02_boy_path
	GetLocator
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
	reputation
	battle
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png
	oob4boy1
	quest_b4_02
	boy_run
	oob4boy2
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
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetScene (1 args)
	MovePoint (3 args)
	Rotate (3 args)
	Stop (0 args)
	IsPlayerActor (2 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	StopAsync (0 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetAnimationOffset (3 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
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
	GetVariable (2 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	FindActor (2 args)
	Trigger (2 args)
	BroadcastMessage (3 args)
	SetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x1a6
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd1 Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0x1ae Vars = (object)
		EVENT_26 Op = 0x1b9 Vars = (string)
		EVENT_17 Op = 0x1c3 Vars = (object)
		EVENT_41 Op = 0x1ce Vars = (object)
	GTASK_3 Vars = (bool) Params = 0
		EVENT_17 Op = 0x23d Vars = (object)
		EVENT_41 Op = 0x248 Vars = (object)
	GTASK_4 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_5 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x56f Vars = (int)
		EVENT_1 Op = 0x58a Vars = (object)
		EVENT_2 Op = 0x599 Vars = (object)
		EVENT_10 Op = 0x61f Vars = (object)
		EVENT_41 Op = 0x62a Vars = (object)
	GTASK_6  Params = 1
		EVENT_0 Op = 0x64d Vars = (object)
		EVENT_22 Op = 0x6cc Vars = (object, int, float, float)
		EVENT_16 Op = 0x6ce Vars = (object, string)
		EVENT_41 Op = 0x6d0 Vars = (object)

Events:
EVENT_22 Op = 0x9cc Vars = (object, int, float, float)
EVENT_43 Op = 0x9d4 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x9de Vars = (object, string)
EVENT_41 Op = 0x9eb Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x826

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x955

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x953

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x957

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x959

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x9a0

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
0x41: Call2 0x86a

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
0x4f: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x988

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x975

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0xbb

0x5d: Pop(1)
0x5e: Push((int) 518563)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 518962)
0x64: Push((int) 20075)
0x65: Push((int) 20074)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x9d

0x69: PushEmpty(bool, object)
0x6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Call2 0x994

0x6c: Pop(1)
0x6d: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x6e: PushEmpty(object, object)
0x6f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x70: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x71: Call2 0x982

0x72: Pop(2)
0x73: PushEmpty(string)
0x74: Stack[-1] = "Neutral"
0x75: Call2 0xbb

0x76: Pop(1)
0x77: Push((int) 518565)
0x78: @@ SetMessage(Stack[-1])
0x79: Pop(1)
0x7a: @@ ClearReplies()
0x7b: Pop(0)
0x7c: Push((int) 518566)
0x7d: Push((int) 20046)
0x7e: Push((int) 19676)
0x7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80: Pop(3)
0x81: Push((int) 518934)
0x82: Push((int) -1)
0x83: Push((int) 20045)
0x84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85: Pop(3)
0x86: GOTO 0x9d

0x87: PushEmpty(string)
0x88: Stack[-1] = "Neutral"
0x89: Call2 0xbb

0x8a: Pop(1)
0x8b: Push((int) 518569)
0x8c: @@ SetMessage(Stack[-1])
0x8d: Pop(1)
0x8e: @@ ClearReplies()
0x8f: Pop(0)
0x90: Push((int) 518570)
0x91: Push((int) -1)
0x92: Push((int) 19680)
0x93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94: Pop(3)
0x95: Push((int) 518940)
0x96: Push((int) -1)
0x97: Push((int) 20051)
0x98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99: Pop(3)
0x9a: GOTO 0x9d

0x9b: Return(); Pop(0)

0x9c: GOTO 0x4e

0x9d: PushEmpty(bool)
0x9e: Call2 0x95b

0x9f: Pop(0)
0xa0: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa1: @ lshWaitForAnimEnd()
0xa2: Pop(0)
0xa3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa4: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa5: GOTO 0xab

0xa6: PushEmpty(string)
0xa7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa8: Call2 0x87b

0xa9: Pop(1)
0xaa: GOTO 0xa1

0xab: GOTO 0xba

0xac: Push("all")
0xad: Push("idle")
0xae: @ PlayAnimation(Stack[-2], Stack[-1])
0xaf: Pop(2)
0xb0: @ WaitForAnimEnd()
0xb1: Pop(0)
0xb2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: GOTO 0xba

0xb5: Push("all")
0xb6: Push("idle")
0xb7: @ PlayAnimation(Stack[-2], Stack[-1])
0xb8: Pop(2)
0xb9: GOTO 0xb0

0xba: Return(); Pop(0)

0xbb: PushEmpty()
0xbc: PushEmpty(bool)
0xbd: Call2 0x95b

0xbe: Pop(0)
0xbf: Pop(1); Push((bool) Stack[-1] == 0)
0xc0: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc1: Return(); Pop(0)

0xc2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc3: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc4: Return(); Pop(0)

0xc5: PushEmpty(string, bool)
0xc6: Stack[-2] = Stack[-3]
0xc7: Push("")
0xc8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xca: Stack[-1] = (bool) 0
0xcb: GOTO 0xcd

0xcc: Stack[-1] = (bool) 1
0xcd: Call2 0x88b

0xce: Pop(2)
0xcf: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd0: Return(); Pop(0)

0xd1: PushEmpty()
0xd2: Push((int) 1)
0xd3: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0xd4: PushEmpty()
0xd5: Call2 0x8a5

0xd6: Pop(0)
0xd7: Push((int) 19674)
0xd8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd9: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xda: PushEmpty(object, object)
0xdb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdd: Call2 0x97b

0xde: Pop(2)
0xdf: Push((int) 20848)
0xe0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe2: PushEmpty(object, object)
0xe3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe5: Call2 0x97b

0xe6: Pop(2)
0xe7: Push((int) 19673)
0xe8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0xea: PushEmpty(bool, object)
0xeb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xec: Call2 0x988

0xed: Pop(1)
0xee: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xef: PushEmpty(object, object)
0xf0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf2: Call2 0x975

0xf3: Pop(2)
0xf4: PushEmpty(string)
0xf5: Stack[-1] = "Neutral"
0xf6: Call2 0xbb

0xf7: Pop(1)
0xf8: Push((int) 518563)
0xf9: @@ SetMessage(Stack[-1])
0xfa: Pop(1)
0xfb: @@ ClearReplies()
0xfc: Pop(0)
0xfd: Push((int) 518962)
0xfe: Push((int) 20075)
0xff: Push((int) 20074)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: PushEmpty(bool, object)
0x104: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x105: Call2 0x994

0x106: Pop(1)
0x107: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call2 0x982

0x10c: Pop(2)
0x10d: PushEmpty(string)
0x10e: Stack[-1] = "Neutral"
0x10f: Call2 0xbb

0x110: Pop(1)
0x111: Push((int) 518565)
0x112: @@ SetMessage(Stack[-1])
0x113: Pop(1)
0x114: @@ ClearReplies()
0x115: Pop(0)
0x116: Push((int) 518566)
0x117: Push((int) 20046)
0x118: Push((int) 19676)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: Push((int) 518934)
0x11c: Push((int) -1)
0x11d: Push((int) 20045)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: Return(); Pop(0)

0x121: PushEmpty(string)
0x122: Stack[-1] = "Neutral"
0x123: Call2 0xbb

0x124: Pop(1)
0x125: Push((int) 518569)
0x126: @@ SetMessage(Stack[-1])
0x127: Pop(1)
0x128: @@ ClearReplies()
0x129: Pop(0)
0x12a: Push((int) 518570)
0x12b: Push((int) -1)
0x12c: Push((int) 19680)
0x12d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12e: Pop(3)
0x12f: Push((int) 518940)
0x130: Push((int) -1)
0x131: Push((int) 20051)
0x132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(3)
0x134: Return(); Pop(0)

0x135: Push((int) 20046)
0x136: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x138: PushEmpty(string)
0x139: Stack[-1] = "Neutral"
0x13a: Call2 0xbb

0x13b: Pop(1)
0x13c: Push((int) 518935)
0x13d: @@ SetMessage(Stack[-1])
0x13e: Pop(1)
0x13f: @@ ClearReplies()
0x140: Pop(0)
0x141: Push((int) 518936)
0x142: Push((int) 20048)
0x143: Push((int) 20047)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: Return(); Pop(0)

0x147: Push((int) 20048)
0x148: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x14a: PushEmpty(string)
0x14b: Stack[-1] = "Neutral"
0x14c: Call2 0xbb

0x14d: Pop(1)
0x14e: Push((int) 518937)
0x14f: @@ SetMessage(Stack[-1])
0x150: Pop(1)
0x151: @@ ClearReplies()
0x152: Pop(0)
0x153: Push((int) 518938)
0x154: Push((int) -1)
0x155: Push((int) 20049)
0x156: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x157: Pop(3)
0x158: Push((int) 518939)
0x159: Push((int) -1)
0x15a: Push((int) 20050)
0x15b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c: Pop(3)
0x15d: Return(); Pop(0)

0x15e: Push((int) 20075)
0x15f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x160: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x161: PushEmpty(string)
0x162: Stack[-1] = "Neutral"
0x163: Call2 0xbb

0x164: Pop(1)
0x165: Push((int) 518963)
0x166: @@ SetMessage(Stack[-1])
0x167: Pop(1)
0x168: @@ ClearReplies()
0x169: Pop(0)
0x16a: Push((int) 527872)
0x16b: Push((int) 29220)
0x16c: Push((int) 29219)
0x16d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16e: Pop(3)
0x16f: Return(); Pop(0)

0x170: Push((int) 29220)
0x171: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x172: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x173: PushEmpty(string)
0x174: Stack[-1] = "Neutral"
0x175: Call2 0xbb

0x176: Pop(1)
0x177: Push((int) 527873)
0x178: @@ SetMessage(Stack[-1])
0x179: Pop(1)
0x17a: @@ ClearReplies()
0x17b: Pop(0)
0x17c: Push((int) 518564)
0x17d: Push((int) -1)
0x17e: Push((int) 19674)
0x17f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x180: Pop(3)
0x181: Push((int) 518933)
0x182: Push((int) 20847)
0x183: Push((int) 20044)
0x184: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x185: Pop(3)
0x186: Return(); Pop(0)

0x187: Push((int) 20847)
0x188: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x18a: PushEmpty(string)
0x18b: Stack[-1] = "Neutral"
0x18c: Call2 0xbb

0x18d: Pop(1)
0x18e: Push((int) 519689)
0x18f: @@ SetMessage(Stack[-1])
0x190: Pop(1)
0x191: @@ ClearReplies()
0x192: Pop(0)
0x193: Push((int) 519690)
0x194: Push((int) -1)
0x195: Push((int) 20848)
0x196: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x197: Pop(3)
0x198: Return(); Pop(0)

0x199: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x19a: PushEmpty(bool)
0x19b: Call2 0x95b

0x19c: Pop(0)
0x19d: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19e: @ lshStopAnimation()
0x19f: Pop(0)
0x1a0: GOTO 0x1a3

0x1a1: @ StopAnimation()
0x1a2: Pop(0)
0x1a3: Return(); Pop(0)

0x1a4: GOTO 0xd2

0x1a5: Return(); Pop(0)

0x1a6: PushEmpty()
0x1a7: Call2 0x1d7

0x1a8: Pop(0)
0x1a9: Push((int) 3)
0x1aa: @ Sleep(Stack[-1])
0x1ab: Pop(1)
0x1ac: GOTO 0x1a6

0x1ad: Return(); Pop(0)

0x1ae: PushEmpty()
0x1af: PushEmpty()
0x1b0: Call2 0x228

0x1b1: Pop(0)
0x1b2: PushEmpty(int, object)
0x1b3: Stack[-1] = Stack[-3]
0x1b4: Push(-2, 1); TaskCall(0)
0x1b5: Call2 0x0

0x1b6: Pop(-2, 1); TaskReturn
0x1b7: Pop(2)
0x1b8: Return(); Pop(0)

0x1b9: PushEmpty()
0x1ba: Push("run")
0x1bb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1bd: PushEmpty()
0x1be: Push(-0, 1); TaskCall(3)
0x1bf: Call2 0x22d

0x1c0: Pop(-0, 1); TaskReturn
0x1c1: Pop(0)
0x1c2: Return(); Pop(0)

0x1c3: PushEmpty()
0x1c4: PushEmpty()
0x1c5: Call2 0x228

0x1c6: Pop(0)
0x1c7: PushEmpty(object)
0x1c8: Stack[-1] = Stack[-2]
0x1c9: Push(-1, 6); TaskCall(4)
0x1ca: Call2 0x28e

0x1cb: Pop(-1, 6); TaskReturn
0x1cc: Pop(1)
0x1cd: Return(); Pop(0)

0x1ce: PushEmpty()
0x1cf: PushEmpty()
0x1d0: Call2 0x228

0x1d1: Pop(0)
0x1d2: PushEmpty(object)
0x1d3: Stack[-1] = Stack[-2]
0x1d4: Call2 0x9eb

0x1d5: Pop(1)
0x1d6: Return(); Pop(0)

0x1d7: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1d8: @ WaitForAnimEnd()
0x1d9: Pop(0)
0x1da: PushEmpty(bool)
0x1db: Call2 0x821

0x1dc: Pop(0)
0x1dd: Pop(1); Push((bool) Stack[-1] == 0)
0x1de: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1df: Return(); Pop(14)

0x1e0: PushEmpty(int)
0x1e1: Call2 0x964

0x1e2: Stack[-8] = Stack[-1]
0x1e3: Pop(1)
0x1e4: Stack[-6] = (int) 0
0x1e5: PushEmpty(bool)
0x1e6: Stack[-1] = (bool) 0
0x1e7: Push((int) 5)
0x1e8: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ea: PushEmpty(bool)
0x1eb: Call2 0x821

0x1ec: Pop(0)
0x1ed: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ee: Stack[-1] = (bool) 1
0x1ef: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x1f0: Push((int) 3)
0x1f1: @ irand(Stack[-6], Stack[-1])
0x1f2: Pop(1)
0x1f3: Push((int) 0)
0x1f4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1f5: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1f6: Push(Stack[-7])
0x1f7: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1f8: @ irand(Stack[-4], Stack[-7])
0x1f9: Pop(0)
0x1fa: Push("all")
0x1fb: PushEmpty(string, int)
0x1fc: Stack[-1] = Stack[-7]
0x1fd: Call2 0x95d

0x1fe: Pop(1)
0x1ff: @ PlayAnimation(Stack[-2], Stack[-1])
0x200: Pop(2)
0x201: @ WaitForAnimEnd(Stack[-3])
0x202: Pop(0)
0x203: Pop(0); Push((bool) Stack[-3] == 0)
0x204: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x205: GOTO 0x223

0x206: GOTO 0x218

0x207: Push((int) 1)
0x208: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x20a: Push((int) 4)
0x20b: @ rand(Stack[-3], Stack[-1])
0x20c: Pop(1)
0x20d: Push((int) 1)
0x20e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x20f: @ Sleep(Stack[-1], Stack[-2])
0x210: Pop(1)
0x211: Pop(0); Push((bool) Stack[-1] == 0)
0x212: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x213: GOTO 0x223

0x214: GOTO 0x218

0x215: Push(Stack[-6])
0x216: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x217: GOTO 0x223

0x218: PushEmpty(bool)
0x219: Call2 0x226

0x21a: Pop(0)
0x21b: Pop(1); Push((bool) Stack[-1] == 0)
0x21c: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21d: GOTO 0x223

0x21e: @ ResetAAS()
0x21f: Pop(0)
0x220: Push((int) 1)
0x221: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x222: GOTO 0x1e5

0x223: @ ResetAAS()
0x224: Pop(0)
0x225: Return(); Pop(14)

0x226: Stack[-1] = (bool) 1
0x227: Return(); Pop(0)

0x228: @ StopAnimation()
0x229: Pop(0)
0x22a: @ StopGroup0()
0x22b: Pop(0)
0x22c: Return(); Pop(0)

0x22d: PushEmpty(object, object)
0x22e: @ GetScene(Stack[-1])
0x22f: Pop(0)
0x230: PushEmpty(object)
0x231: Call2 0x8d5

0x232: Pop(0)
0x233: @@ RemoveStationaryActor(Stack[-1])
0x234: Pop(1)
0x235: PushEmpty(bool, string, int, bool)
0x236: Stack[-3] = "pt_b4q02_boy_path"
0x237: Stack[-2] = (int) 0
0x238: Stack[-1] = (bool) 1
0x239: Call2 0x251

0x23a: Pop(4)
0x23b: Return(); Pop(2)

0x23c: Stack[-1] = 0
0x23d: PushEmpty()
0x23e: PushEmpty()
0x23f: Call2 0x286

0x240: Pop(0)
0x241: PushEmpty(object)
0x242: Stack[-1] = Stack[-2]
0x243: Push(-1, 6); TaskCall(4)
0x244: Call2 0x28e

0x245: Pop(-1, 6); TaskReturn
0x246: Pop(1)
0x247: Return(); Pop(0)

0x248: PushEmpty()
0x249: PushEmpty()
0x24a: Call2 0x286

0x24b: Pop(0)
0x24c: PushEmpty(object)
0x24d: Stack[-1] = Stack[-2]
0x24e: Call2 0x9eb

0x24f: Pop(1)
0x250: Return(); Pop(0)

0x251: PushEmpty(object, cvector, bool, bool, cvector, cvector, bool, object, cvector, bool, bool, cvector, cvector, bool)
0x252: @ GetScene(Stack[-7])
0x253: Pop(0)
0x254: Push((int) 1)
0x255: Pop(1); Push(Stack[-17] + Stack[-1]);
0x256: Pop(1); Push(Stack[-18] + Stack[-1]);
0x257: @@ GetLocator(Stack[-1], Stack[-5], Stack[-4], Stack[-3])
0x258: Pop(1)
0x259: Pop(0); Push((bool) Stack[-4] == 0)
0x25a: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x25b: GOTO 0x26f

0x25c: Stack[-6] = Stack[-2]
0x25d: @ MovePoint(Stack[-3], Stack[-15], Stack[-5])
0x25e: Pop(0)
0x25f: Push(Stack[-5])
0x260: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x261: PushEmpty(int, cvector, cvector)
0x262: Stack[-3] = Stack[-19]
0x263: Stack[-2] = Stack[-6]
0x264: Stack[-1] = Stack[-5]
0x265: Call2 0x28c

0x266: Pop(3)
0x267: Push((int) 1)
0x268: Stack[-17] = Stack[-17] + Stack[-1]; Pop(1);
0x269: GOTO 0x26e

0x26a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x26b: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x26c: Stack[-18] = (bool) 0
0x26d: Return(); Pop(14)

0x26e: GOTO 0x254

0x26f: @ WaitForAnimEnd(Stack[-5])
0x270: Pop(0)
0x271: Pop(0); Push((bool) Stack[-5] == 0)
0x272: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x273: Push( Stack[0 + Tasks[-1].StackPointer] )
0x274: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x275: Stack[-18] = (bool) 0
0x276: Return(); Pop(14)

0x277: Push(CvectorIndex(Stack[-6], 0))
0x278: Push(CvectorIndex(Stack[-7], 2))
0x279: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x27a: Pop(2)
0x27b: Push(Stack[-1])
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: GOTO 0x283

0x27e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x27f: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x280: Stack[-18] = (bool) 0
0x281: Return(); Pop(14)

0x282: GOTO 0x277

0x283: Stack[-18] = (bool) 1
0x284: Return(); Pop(14)

0x285: Stack[-7] = 0
0x286: @ Stop()
0x287: Pop(0)
0x288: @ StopAnimation()
0x289: Pop(0)
0x28a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x28b: Return(); Pop(0)

0x28c: PushEmpty()
0x28d: Return(); Pop(0)

0x28e: PushEmpty(object, object)
0x28f: @ GetScene(Stack[-1])
0x290: Pop(0)
0x291: PushEmpty(object)
0x292: Call2 0x8d5

0x293: Pop(0)
0x294: @@ RemoveStationaryActor(Stack[-1])
0x295: Pop(1)
0x296: PushEmpty(object, bool, float)
0x297: Stack[-3] = Stack[-6]
0x298: Stack[-2] = (bool) 1
0x299: Stack[-1] = (float) 180.0
0x29a: Call2 0x2a8

0x29b: Pop(3)
0x29c: Push((int) 1)
0x29d: @ Sleep(Stack[-1])
0x29e: Pop(1)
0x29f: GOTO 0x296

0x2a0: Return(); Pop(2)

0x2a1: Stack[-1] = 0
0x2a2: PushEmpty()
0x2a3: Stack[-3] = (float) 0.03
0x2a4: Return(); Pop(0)

0x2a5: PushEmpty()
0x2a6: Stack[-3] = (int) 0
0x2a7: Return(); Pop(0)

0x2a8: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x2a9: PushEmpty()
0x2aa: Call2 0x38d

0x2ab: Pop(0)
0x2ac: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x2ad: Push("@GetAttackDistance")
0x2ae: Push((int) 1)
0x2af: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b1: @@ GetAttackDistance(Stack[-11])
0x2b2: Pop(0)
0x2b3: Push((int) 50)
0x2b4: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x2b5: GOTO 0x2b7

0x2b6: Stack[-11] = Stack[-23]
0x2b7: Push((int) 150)
0x2b8: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2ba: Stack[-11] = (int) 150
0x2bb: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2bc: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x2bd: @ IsPlayerActor(Stack[-0], Stack[-8])
0x2be: Pop(0)
0x2bf: Push(Stack[-8])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c1: Push("attack")
0x2c2: @ PlayGlobalMusic(Stack[-1])
0x2c3: Pop(1)
0x2c4: PushEmpty(object)
0x2c5: Call2 0x8d5

0x2c6: Pop(0)
0x2c7: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x2c8: Pop(1)
0x2c9: Push(Stack[-24])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cb: Stack[-7] = (bool) 0
0x2cc: GOTO 0x2ce

0x2cd: Stack[-7] = (bool) 1
0x2ce: Push((float)400.0)
0x2cf: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x2d0: PushEmpty(bool)
0x2d1: Stack[-1] = (bool) 0
0x2d2: PushEmpty(bool, object)
0x2d3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d4: Call2 0x780

0x2d5: Pop(1)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d7: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x2d8: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d9: Stack[-1] = (bool) 1
0x2da: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x2db: PushEmpty()
0x2dc: Call2 0x52a

0x2dd: Pop(0)
0x2de: @@ GetPFPosition(Stack[-10])
0x2df: Pop(0)
0x2e0: @ GetPFPosition(Stack[-9])
0x2e1: Pop(0)
0x2e2: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x2e3: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2e4: Pop(0); Push(Stack[-6] * Stack[-6]);
0x2e5: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2e7: PushEmpty(bool, object, float, float, bool, bool)
0x2e8: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x2e9: Stack[-4] = Stack[-17]
0x2ea: Stack[-3] = (float) 10000.0
0x2eb: Stack[-2] = (bool) 1
0x2ec: Stack[-1] = (bool) 0
0x2ed: Push(-6, 3); TaskCall(5)
0x2ee: Call2 0x53e

0x2ef: Pop(-6, 3); TaskReturn
0x2f0: Pop(5)
0x2f1: Pop(1); Push((bool) Stack[-1] == 0)
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f3: GOTO 0x37c

0x2f4: Stack[-7] = (bool) 0
0x2f5: GOTO 0x37b

0x2f6: Pop(0); Push(Stack[-23] * Stack[-23]);
0x2f7: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x2f8: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x2f9: @@ GetPFPosition(Stack[-3])
0x2fa: Pop(0)
0x2fb: @ CanReachByPF(Stack[-2], Stack[-3])
0x2fc: Pop(0)
0x2fd: Pop(0); Push((bool) Stack[-2] == 0)
0x2fe: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x2ff: PushEmpty(bool, object, float, float, bool, bool)
0x300: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x301: Stack[-4] = Stack[-17]
0x302: Stack[-3] = (float) 10000.0
0x303: Stack[-2] = (bool) 1
0x304: Stack[-1] = (bool) 0
0x305: Push(-6, 3); TaskCall(5)
0x306: Call2 0x53e

0x307: Pop(-6, 3); TaskReturn
0x308: Pop(5)
0x309: Pop(1); Push((bool) Stack[-1] == 0)
0x30a: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x30b: GOTO 0x37c

0x30c: Stack[-7] = (bool) 0
0x30d: GOTO 0x2d0

0x30e: Pop(0); Push((bool) Stack[-7] == 0)
0x30f: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x310: PushEmpty(object)
0x311: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x312: Call2 0x816

0x313: Pop(1)
0x314: Push("all")
0x315: Push("attack_on")
0x316: @ PlayAnimation(Stack[-2], Stack[-1])
0x317: Pop(2)
0x318: @ WaitForAnimEnd()
0x319: Pop(0)
0x31a: PushEmpty()
0x31b: Call2 0x52a

0x31c: Pop(0)
0x31d: @ StopAsync()
0x31e: Pop(0)
0x31f: Stack[-7] = (bool) 1
0x320: PushEmpty(bool, object)
0x321: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x322: Call2 0x780

0x323: Pop(1)
0x324: Pop(1); Push((bool) Stack[-1] == 0)
0x325: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x326: GOTO 0x37c

0x327: @ rand(Stack[-1])
0x328: Pop(0)
0x329: PushEmpty(bool)
0x32a: Stack[-1] = (bool) 1
0x32b: Push((float)0.25)
0x32c: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x32d: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x32e: PushEmpty(bool)
0x32f: Call2 0x4ff

0x330: Pop(0)
0x331: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x332: Stack[-1] = (bool) 0
0x333: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x334: @ Face(Stack[-0])
0x335: Pop(0)
0x336: PushEmpty()
0x337: Call2 0x531

0x338: Pop(0)
0x339: Push("all")
0x33a: Push("attack_stay")
0x33b: @ PlayAnimation(Stack[-2], Stack[-1])
0x33c: Pop(2)
0x33d: PushEmpty(bool, float)
0x33e: Stack[-1] = Stack[-25]
0x33f: Call2 0x47b

0x340: Pop(2)
0x341: @ StopAsync()
0x342: Pop(0)
0x343: GOTO 0x372

0x344: @ Face(Stack[-0])
0x345: Pop(0)
0x346: Push("all")
0x347: Push("fjump")
0x348: @ PlayAnimation(Stack[-2], Stack[-1])
0x349: Pop(2)
0x34a: @ WaitForAnimEnd()
0x34b: Pop(0)
0x34c: PushEmpty()
0x34d: Call2 0x52a

0x34e: Pop(0)
0x34f: Push(CVector(0.0, 0.0, 0.0))
0x350: @ SetSpeed(Stack[-1])
0x351: Pop(1)
0x352: @ Stop()
0x353: Pop(0)
0x354: @ StopAsync()
0x355: Pop(0)
0x356: PushEmpty(bool)
0x357: Call2 0x4ff

0x358: Pop(0)
0x359: Pop(1); Push((bool) Stack[-1] == 0)
0x35a: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x35b: PushEmpty(bool, object)
0x35c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x35d: Call2 0x780

0x35e: Pop(1)
0x35f: Pop(1); Push((bool) Stack[-1] == 0)
0x360: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x361: GOTO 0x37c

0x362: @@ GetPFPosition(Stack[-10])
0x363: Pop(0)
0x364: @ GetPFPosition(Stack[-9])
0x365: Pop(0)
0x366: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x367: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x368: Pop(0); Push(Stack[-23] * Stack[-23]);
0x369: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x36a: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x36b: PushEmpty(bool, float)
0x36c: Stack[-1] = Stack[-25]
0x36d: Call2 0x3d7

0x36e: Pop(1)
0x36f: Pop(1); Push((bool) Stack[-1] == 0)
0x370: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x371: GOTO 0x37c

0x372: GOTO 0x37b

0x373: PushEmpty(bool, float)
0x374: Stack[-1] = Stack[-25]
0x375: Call2 0x3d7

0x376: Pop(1)
0x377: Pop(1); Push((bool) Stack[-1] == 0)
0x378: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x379: GOTO 0x37c

0x37a: Stack[-7] = (bool) 1
0x37b: GOTO 0x2d0

0x37c: @ WaitForAnimEnd()
0x37d: Pop(0)
0x37e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x37f: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x380: Return(); Pop(22)

0x381: Push("all")
0x382: Push("attack_off")
0x383: @ PlayAnimation(Stack[-2], Stack[-1])
0x384: Pop(2)
0x385: @ WaitForAnimEnd()
0x386: Pop(0)
0x387: Push(Stack[-8])
0x388: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x389: Push((float)2.0)
0x38a: @ Sleep(Stack[-1])
0x38b: Pop(1)
0x38c: Return(); Pop(22)

0x38d: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x38e: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x38f: Push("all")
0x390: Push("attack_begin")
0x391: Push((int) 1)
0x392: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x393: Pop(2); Push(Stack[-2] + Stack[-1]);
0x394: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x395: Pop(2)
0x396: Pop(0); Push((bool) Stack[-3] == 0)
0x397: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x398: GOTO 0x39c

0x399: Push((int) 1)
0x39a: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x39b: GOTO 0x38f

0x39c: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x39d: Push("attack")
0x39e: Push((int) 1)
0x39f: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x3a0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3a1: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x3a2: Pop(1)
0x3a3: Pop(0); Push((bool) Stack[-2] == 0)
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a5: GOTO 0x3a9

0x3a6: Push((int) 1)
0x3a7: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x3a8: GOTO 0x39d

0x3a9: Push("all")
0x3aa: Push("bjump")
0x3ab: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x3ac: Pop(2)
0x3ad: Push(CvectorIndex(Stack[-1], 2))
0x3ae: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x3af: Return(); Pop(6)

0x3b0: PushEmpty(object, float, float, object, float, float)
0x3b1: Push((float)0.9)
0x3b2: Pop(1); Push(Stack[-9] * Stack[-1]);
0x3b3: @ GetVictim(Stack[-1], Stack[-4])
0x3b4: Pop(1)
0x3b5: @ ReportAttack(Stack[-0])
0x3b6: Pop(0)
0x3b7: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x3b8: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3b9: PushEmpty(float, object, int)
0x3ba: Stack[-2] = Stack[-6]
0x3bb: Stack[-1] = Stack[-10]
0x3bc: Call2 0x2a2

0x3bd: Stack[-5] = Stack[-3]
0x3be: Pop(3)
0x3bf: PushEmpty(float, object, float, int)
0x3c0: Stack[-3] = Stack[-7]
0x3c1: Stack[-2] = Stack[-6]
0x3c2: PushEmpty(int, object, int)
0x3c3: Stack[-2] = Stack[-10]
0x3c4: Stack[-1] = Stack[-14]
0x3c5: Call2 0x2a5

0x3c6: Stack[-4] = Stack[-3]
0x3c7: Pop(3)
0x3c8: Call2 0x70e

0x3c9: Stack[-5] = Stack[-4]
0x3ca: Pop(4)
0x3cb: PushEmpty(int)
0x3cc: Call2 0x52f

0x3cd: Pop(0)
0x3ce: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x3cf: Pop(1)
0x3d0: PushEmpty(object, float)
0x3d1: Stack[-2] = Stack[-5]
0x3d2: Stack[-1] = Stack[-3]
0x3d3: Call2 0x536

0x3d4: Pop(2)
0x3d5: Return(); Pop(6)

0x3d6: Stack[-3] = 0
0x3d7: PushEmpty(int, bool, int, string, int, bool, int, string)
0x3d8: PushEmpty()
0x3d9: Call2 0x52a

0x3da: Pop(0)
0x3db: @ irand(Stack[-4], Stack[-1])
0x3dc: Pop(0)
0x3dd: Push((int) 1)
0x3de: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3df: @ Face(Stack[-0])
0x3e0: Pop(0)
0x3e1: Push((bool) 1)
0x3e2: @ SetAttackState(Stack[-1])
0x3e3: Pop(1)
0x3e4: PushEmpty()
0x3e5: Call2 0x948

0x3e6: Pop(0)
0x3e7: Push("all")
0x3e8: Push("attack_begin")
0x3e9: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3ea: @ PlayAnimation(Stack[-2], Stack[-1])
0x3eb: Pop(2)
0x3ec: @ WaitForAnimEnd()
0x3ed: Pop(0)
0x3ee: PushEmpty()
0x3ef: Call2 0x50a

0x3f0: Pop(0)
0x3f1: PushEmpty(bool, object)
0x3f2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3f3: Call2 0x780

0x3f4: Pop(1)
0x3f5: Pop(1); Push((bool) Stack[-1] == 0)
0x3f6: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3f7: @ StopAsync()
0x3f8: Pop(0)
0x3f9: Stack[-10] = (bool) 0
0x3fa: Return(); Pop(8)

0x3fb: PushEmpty(float, int)
0x3fc: Stack[-2] = Stack[-11]
0x3fd: Stack[-1] = Stack[-6]
0x3fe: Call2 0x3b0

0x3ff: Pop(2)
0x400: Push("all")
0x401: Push("attack_middle")
0x402: Pop(1); Push(Stack[-1] + Stack[-6]);
0x403: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x404: Pop(2)
0x405: Push(Stack[-3])
0x406: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x407: PushEmpty()
0x408: Call2 0x948

0x409: Pop(0)
0x40a: Push("all")
0x40b: Push("attack_middle")
0x40c: Pop(1); Push(Stack[-1] + Stack[-6]);
0x40d: @ PlayAnimation(Stack[-2], Stack[-1])
0x40e: Pop(2)
0x40f: @ WaitForAnimEnd()
0x410: Pop(0)
0x411: PushEmpty()
0x412: Call2 0x52a

0x413: Pop(0)
0x414: PushEmpty(bool, object)
0x415: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x416: Call2 0x780

0x417: Pop(1)
0x418: Pop(1); Push((bool) Stack[-1] == 0)
0x419: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x41a: @ StopAsync()
0x41b: Pop(0)
0x41c: Stack[-10] = (bool) 0
0x41d: Return(); Pop(8)

0x41e: PushEmpty(float, int)
0x41f: Stack[-2] = Stack[-11]
0x420: Stack[-1] = Stack[-6]
0x421: Call2 0x3b0

0x422: Pop(2)
0x423: Stack[-2] = (int) 1
0x424: Push("attack_middle")
0x425: Pop(1); Push(Stack[-1] + Stack[-5]);
0x426: Push("_")
0x427: Pop(2); Push(Stack[-2] + Stack[-1]);
0x428: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x429: Push("all")
0x42a: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x42b: Pop(1)
0x42c: Pop(0); Push((bool) Stack[-3] == 0)
0x42d: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42e: GOTO 0x44c

0x42f: PushEmpty()
0x430: Call2 0x948

0x431: Pop(0)
0x432: Push("all")
0x433: @ PlayAnimation(Stack[-1], Stack[-2])
0x434: Pop(1)
0x435: @ WaitForAnimEnd()
0x436: Pop(0)
0x437: PushEmpty()
0x438: Call2 0x52a

0x439: Pop(0)
0x43a: PushEmpty(bool, object)
0x43b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x43c: Call2 0x780

0x43d: Pop(1)
0x43e: Pop(1); Push((bool) Stack[-1] == 0)
0x43f: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x440: @ StopAsync()
0x441: Pop(0)
0x442: Stack[-10] = (bool) 0
0x443: Return(); Pop(8)

0x444: PushEmpty(float, int)
0x445: Stack[-2] = Stack[-11]
0x446: Stack[-1] = Stack[-6]
0x447: Call2 0x3b0

0x448: Pop(2)
0x449: Push((int) 1)
0x44a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x44b: GOTO 0x424

0x44c: Push((bool) 0)
0x44d: @ SetAttackState(Stack[-1])
0x44e: Pop(1)
0x44f: Push("all")
0x450: Push("attack_end")
0x451: Pop(1); Push(Stack[-1] + Stack[-6]);
0x452: @ PlayAnimation(Stack[-2], Stack[-1])
0x453: Pop(2)
0x454: PushEmpty(bool)
0x455: Call2 0x538

0x456: Pop(0)
0x457: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x458: PushEmpty(bool, float)
0x459: Stack[-1] = (float) 0.75
0x45a: Call2 0x460

0x45b: Pop(2)
0x45c: @ StopAsync()
0x45d: Pop(0)
0x45e: Stack[-10] = (bool) 1
0x45f: Return(); Pop(8)

0x460: PushEmpty(float, bool, float, bool)
0x461: @ rand(Stack[-2])
0x462: Pop(0)
0x463: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x464: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x465: @ IsAnimationPlaying(Stack[-1])
0x466: Pop(0)
0x467: Pop(0); Push((bool) Stack[-1] == 0)
0x468: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x469: GOTO 0x473

0x46a: PushEmpty(bool)
0x46b: Call2 0x4c2

0x46c: Pop(0)
0x46d: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x46e: Stack[-6] = (bool) 1
0x46f: Return(); Pop(4)

0x470: @ sync()
0x471: Pop(0)
0x472: GOTO 0x465

0x473: GOTO 0x479

0x474: @ WaitForAnimEnd()
0x475: Pop(0)
0x476: PushEmpty()
0x477: Call2 0x52a

0x478: Pop(0)
0x479: Stack[-6] = (bool) 0
0x47a: Return(); Pop(4)

0x47b: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x47c: @ IsAnimationPlaying(Stack[-5])
0x47d: Pop(0)
0x47e: Pop(0); Push((bool) Stack[-5] == 0)
0x47f: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x480: GOTO 0x4a1

0x481: PushEmpty(bool)
0x482: Call2 0x4c2

0x483: Pop(0)
0x484: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x485: Stack[-12] = (bool) 1
0x486: Return(); Pop(10)

0x487: PushEmpty(bool, object)
0x488: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x489: Call2 0x780

0x48a: Pop(1)
0x48b: Pop(1); Push((bool) Stack[-1] == 0)
0x48c: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x48d: Stack[-12] = (bool) 0
0x48e: Return(); Pop(10)

0x48f: @@ GetPFPosition(Stack[-4])
0x490: Pop(0)
0x491: @ GetPFPosition(Stack[-3])
0x492: Pop(0)
0x493: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x494: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x495: Pop(0); Push(Stack[-11] * Stack[-11]);
0x496: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x497: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x498: PushEmpty(bool, float)
0x499: Stack[-1] = Stack[-13]
0x49a: Call2 0x3d7

0x49b: Pop(2)
0x49c: Stack[-12] = (bool) 1
0x49d: Return(); Pop(10)

0x49e: @ sync()
0x49f: Pop(0)
0x4a0: GOTO 0x47c

0x4a1: PushEmpty()
0x4a2: Call2 0x52a

0x4a3: Pop(0)
0x4a4: Stack[-12] = (bool) 0
0x4a5: Return(); Pop(10)

0x4a6: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x4a7: PushEmpty(bool, object)
0x4a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a9: Call2 0x780

0x4aa: Pop(1)
0x4ab: Pop(1); Push((bool) Stack[-1] == 0)
0x4ac: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4ad: Stack[-11] = (bool) 0
0x4ae: Return(); Pop(10)

0x4af: PushEmpty(bool)
0x4b0: Call2 0x4ff

0x4b1: Pop(0)
0x4b2: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4b3: @@ GetPFPosition(Stack[-5])
0x4b4: Pop(0)
0x4b5: @ GetPFPosition(Stack[-4])
0x4b6: Pop(0)
0x4b7: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x4b8: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x4b9: @@ GetAttackDistance(Stack[-1])
0x4ba: Pop(0)
0x4bb: Push((int) 50)
0x4bc: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x4bd: Pop(0); Push(Stack[-1] * Stack[-1]);
0x4be: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x4bf: Return(); Pop(10)

0x4c0: Stack[-11] = (bool) 0
0x4c1: Return(); Pop(10)

0x4c2: PushEmpty(bool)
0x4c3: Stack[-1] = (bool) 0
0x4c4: PushEmpty(bool)
0x4c5: Call2 0x4a6

0x4c6: Pop(0)
0x4c7: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4c8: PushEmpty(bool)
0x4c9: Call2 0x4d2

0x4ca: Pop(0)
0x4cb: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4cc: Stack[-1] = (bool) 1
0x4cd: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4ce: Stack[-1] = (bool) 1
0x4cf: Return(); Pop(0)

0x4d0: Stack[-1] = (bool) 0
0x4d1: Return(); Pop(0)

0x4d2: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x4d3: @ GetScene(Stack[-5])
0x4d4: Pop(0)
0x4d5: Stack[-4] = (bool) 0
0x4d6: PushEmpty(cvector, object)
0x4d7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d8: Call2 0x6e0

0x4d9: Pop(1)
0x4da: Pop(1); Push(( -Stack[-1])
0x4db: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x4dc: Pop(1)
0x4dd: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x4de: IF (Stack[-1] == 0) GOTO 0x4e0; Pop(1)

0x4df: GOTO 0x4fc

0x4e0: @ Face(Stack[-0])
0x4e1: Pop(0)
0x4e2: Push("all")
0x4e3: Push("bjump")
0x4e4: @ PlayAnimation(Stack[-2], Stack[-1])
0x4e5: Pop(2)
0x4e6: @@ GetPFPosition(Stack[-2])
0x4e7: Pop(0)
0x4e8: @ GetPFPosition(Stack[-1])
0x4e9: Pop(0)
0x4ea: @ WaitForAnimEnd()
0x4eb: Pop(0)
0x4ec: PushEmpty()
0x4ed: Call2 0x52a

0x4ee: Pop(0)
0x4ef: @ StopAsync()
0x4f0: Pop(0)
0x4f1: Push(CVector(0.0, 0.0, 0.0))
0x4f2: @ SetSpeed(Stack[-1])
0x4f3: Pop(1)
0x4f4: Stack[-4] = (bool) 1
0x4f5: PushEmpty(bool)
0x4f6: Call2 0x4a6

0x4f7: Pop(0)
0x4f8: Pop(1); Push((bool) Stack[-1] == 0)
0x4f9: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4fa: GOTO 0x4fc

0x4fb: GOTO 0x4d6

0x4fc: Stack[-11] = Stack[-4]
0x4fd: Return(); Pop(10)

0x4fe: Stack[-5] = 0
0x4ff: PushEmpty(bool, bool)
0x500: Push("IsAttacking")
0x501: Push((int) 1)
0x502: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x503: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x504: @@ IsAttacking(Stack[-1])
0x505: Pop(0)
0x506: Stack[-3] = Stack[-1]
0x507: Return(); Pop(2)

0x508: Stack[-3] = (bool) 0
0x509: Return(); Pop(2)

0x50a: PushEmpty(float, int, float, int)
0x50b: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x50c: IF (Stack[-1] == 0) GOTO 0x50e; Pop(1)

0x50d: Return(); Pop(4)

0x50e: Push( Stack[5 + Tasks[-1].StackPointer] )
0x50f: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x510: Push((int) -1)
0x511: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x512: Push((int) 0)
0x513: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x514: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x515: Return(); Pop(4)

0x516: @ rand(Stack[-2])
0x517: Pop(0)
0x518: PushEmpty(float)
0x519: Call2 0x53c

0x51a: Pop(0)
0x51b: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x51c: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x51d: @ irand(Stack[-1], Stack[-2])
0x51e: Pop(0)
0x51f: Push((int) 1)
0x520: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x521: Push("attack")
0x522: Pop(1); Push(Stack[-1] + Stack[-2]);
0x523: @ Speak(Stack[-1])
0x524: Pop(1)
0x525: PushEmpty(int)
0x526: Call2 0x53a

0x527: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x528: Pop(1)
0x529: Return(); Pop(4)

0x52a: PushEmpty(object)
0x52b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x52c: Call2 0x93f

0x52d: Pop(1)
0x52e: Return(); Pop(0)

0x52f: Stack[-1] = (int) 0
0x530: Return(); Pop(0)

0x531: PushEmpty(string)
0x532: Stack[-1] = "attack_stay"
0x533: Call2 0x8ac

0x534: Pop(1)
0x535: Return(); Pop(0)

0x536: PushEmpty()
0x537: Return(); Pop(0)

0x538: Stack[-1] = (bool) 1
0x539: Return(); Pop(0)

0x53a: Stack[-1] = (int) 1
0x53b: Return(); Pop(0)

0x53c: Stack[-1] = (float) 0.5
0x53d: Return(); Pop(0)

0x53e: PushEmpty(bool, bool, bool, bool)
0x53f: PushEmpty(object)
0x540: Stack[-1] = Stack[-10]
0x541: Call2 0x93f

0x542: Pop(1)
0x543: Push((int) 1)
0x544: Push((int) 5)
0x545: @ SetTimer(Stack[-2], Stack[-1])
0x546: Pop(2)
0x547: @ CanSee(Stack[-2], Stack[-9])
0x548: Pop(0)
0x549: Push(Stack[-2])
0x54a: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x54b: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x54c: PushEmpty(object)
0x54d: Stack[-1] = Stack[-10]
0x54e: Call2 0x89a

0x54f: Pop(1)
0x550: GOTO 0x552

0x551: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x552: PushEmpty(bool, object)
0x553: Stack[-1] = Stack[-11]
0x554: Call2 0x6e7

0x555: Pop(1)
0x556: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x557: PushEmpty(object)
0x558: Call2 0x8d5

0x559: Pop(0)
0x55a: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x55b: Pop(1)
0x55c: PushEmpty(bool, object, float, float, bool, bool)
0x55d: Stack[-5] = Stack[-15]
0x55e: Stack[-4] = Stack[-14]
0x55f: Stack[-3] = Stack[-13]
0x560: Stack[-2] = Stack[-12]
0x561: Stack[-1] = Stack[-11]
0x562: Call2 0x5a7

0x563: Stack[-7] = Stack[-6]
0x564: Pop(6)
0x565: Push( Stack[2 + Tasks[-1].StackPointer] )
0x566: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x567: Push("head")
0x568: @ UnlookAsync(Stack[-1])
0x569: Pop(1)
0x56a: Push((int) 1)
0x56b: @ KillTimer(Stack[-1])
0x56c: Pop(1)
0x56d: Stack[-10] = Stack[-1]
0x56e: Return(); Pop(4)

0x56f: PushEmpty()
0x570: Push((int) 1)
0x571: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x572: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x573: PushEmpty(object)
0x574: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x575: Call2 0x93f

0x576: Pop(1)
0x577: GOTO 0x57c

0x578: PushEmpty(int)
0x579: Stack[-1] = Stack[-2]
0x57a: Call2 0x60d

0x57b: Pop(1)
0x57c: Return(); Pop(0)

0x57d: Push((int) 1)
0x57e: @ KillTimer(Stack[-1])
0x57f: Pop(1)
0x580: Push( Stack[2 + Tasks[-1].StackPointer] )
0x581: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x582: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x583: Push("head")
0x584: @ UnlookAsync(Stack[-1])
0x585: Pop(1)
0x586: PushEmpty()
0x587: Call2 0x623

0x588: Pop(0)
0x589: Return(); Pop(0)

0x58a: PushEmpty()
0x58b: PushEmpty(bool)
0x58c: Stack[-1] = (bool) 0
0x58d: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x58e: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x58f: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x590: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x591: Stack[-1] = (bool) 1
0x592: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x593: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x594: PushEmpty(object)
0x595: Stack[-1] = Stack[-2]
0x596: Call2 0x89a

0x597: Pop(1)
0x598: Return(); Pop(0)

0x599: PushEmpty()
0x59a: PushEmpty(bool)
0x59b: Stack[-1] = (bool) 0
0x59c: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x59d: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x59e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x59f: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x5a0: Stack[-1] = (bool) 1
0x5a1: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a2: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x5a3: Push("head")
0x5a4: @ UnlookAsync(Stack[-1])
0x5a5: Pop(1)
0x5a6: Return(); Pop(0)

0x5a7: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x5a8: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x5a9: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x5aa: Stack[-7] = Stack[-17]
0x5ab: PushEmpty(bool, object)
0x5ac: Stack[-1] = Stack[-23]
0x5ad: Call2 0x633

0x5ae: Pop(1)
0x5af: Pop(1); Push((bool) Stack[-1] == 0)
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b3; Pop(1)

0x5b1: Stack[-22] = (bool) 0
0x5b2: Return(); Pop(16)

0x5b3: @@ GetPosition(Stack[-5])
0x5b4: Pop(0)
0x5b5: @ GetPosition(Stack[-4])
0x5b6: Pop(0)
0x5b7: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x5b8: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x5b9: PushEmpty(bool)
0x5ba: Stack[-1] = (bool) 0
0x5bb: Push((int) 0)
0x5bc: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x5bd: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5be: Pop(0); Push(Stack[-20] * Stack[-20]);
0x5bf: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x5c0: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5c1: Stack[-1] = (bool) 1
0x5c2: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5c3: @ Stop()
0x5c4: Pop(0)
0x5c5: Stack[-22] = (bool) 0
0x5c6: Return(); Pop(16)

0x5c7: Pop(0); Push(Stack[-20] * Stack[-20]);
0x5c8: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x5c9: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x5ca: @@ GetPFPosition(Stack[-5])
0x5cb: Pop(0)
0x5cc: @ FindPathTo(Stack[-1], Stack[-5])
0x5cd: Pop(0)
0x5ce: Pop(0); Push(( Stack[-1] != 0 )
0x5cf: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5d0: Stack[-6] = Stack[-1]
0x5d1: Stack[-1] = 0
0x5d2: Pop(0); Push(( Stack[-6] != 0 )
0x5d3: IF (Stack[-1] == 0) GOTO 0x5f3; Pop(1)

0x5d4: Push(Stack[-7])
0x5d5: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5d6: Stack[-7] = (bool) 0
0x5d7: @ RotatePath(Stack[-6], Stack[-8])
0x5d8: Pop(0)
0x5d9: Pop(0); Push((bool) Stack[-8] == 0)
0x5da: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5db: GOTO 0x60b

0x5dc: Push((int) 0)
0x5dd: Push((float)0.3)
0x5de: @ SetTimer(Stack[-2], Stack[-1])
0x5df: Pop(2)
0x5e0: PushEmpty(string)
0x5e1: Call2 0x63a

0x5e2: Pop(0)
0x5e3: PushEmpty(string)
0x5e4: Call2 0x63c

0x5e5: Pop(0)
0x5e6: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x5e7: Pop(2)
0x5e8: Pop(0); Push((bool) Stack[-8] == 0)
0x5e9: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5ea: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5eb: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5ec: Stack[-6] = 0
0x5ed: GOTO 0x60b

0x5ee: GOTO 0x5f0

0x5ef: GOTO 0x60a

0x5f0: GOTO 0x5f2

0x5f1: Stack[-6] = 0
0x5f2: GOTO 0x603

0x5f3: Push((int) 0)
0x5f4: @ KillTimer(Stack[-1])
0x5f5: Pop(1)
0x5f6: Push((float)0.5)
0x5f7: @ Sleep(Stack[-1], Stack[-9])
0x5f8: Pop(1)
0x5f9: Pop(0); Push((bool) Stack[-8] == 0)
0x5fa: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fb: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5fc: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fd: Stack[-6] = 0
0x5fe: GOTO 0x60b

0x5ff: Push((int) 0)
0x600: Push((float)0.3)
0x601: @ SetTimer(Stack[-2], Stack[-1])
0x602: Pop(2)
0x603: Stack[-1] = 0
0x604: GOTO 0x609

0x605: Push((int) 0)
0x606: @ KillTimer(Stack[-1])
0x607: Pop(1)
0x608: GOTO 0x60b

0x609: Stack[-6] = 0
0x60a: GOTO 0x5ab

0x60b: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x60c: Return(); Pop(16)

0x60d: PushEmpty()
0x60e: Push((int) 0)
0x60f: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x610: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x611: Return(); Pop(0)

0x612: PushEmpty(bool, object)
0x613: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x614: Call2 0x633

0x615: Pop(1)
0x616: Pop(1); Push((bool) Stack[-1] == 0)
0x617: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x618: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x619: Push((int) 0)
0x61a: @ KillTimer(Stack[-1])
0x61b: Pop(1)
0x61c: @ Stop()
0x61d: Pop(0)
0x61e: Return(); Pop(0)

0x61f: PushEmpty()
0x620: @ RequestClearPath(Stack[-1])
0x621: Pop(0)
0x622: Return(); Pop(0)

0x623: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x624: Push((int) 0)
0x625: @ KillTimer(Stack[-1])
0x626: Pop(1)
0x627: @ Stop()
0x628: Pop(0)
0x629: Return(); Pop(0)

0x62a: PushEmpty()
0x62b: PushEmpty()
0x62c: Call2 0x57d

0x62d: Pop(0)
0x62e: PushEmpty(object)
0x62f: Stack[-1] = Stack[-2]
0x630: Call2 0x9eb

0x631: Pop(1)
0x632: Return(); Pop(0)

0x633: PushEmpty()
0x634: PushEmpty(bool, object)
0x635: Stack[-1] = Stack[-3]
0x636: Call2 0x780

0x637: Stack[-4] = Stack[-2]
0x638: Pop(2)
0x639: Return(); Pop(0)

0x63a: Stack[-1] = "walk"
0x63b: Return(); Pop(0)

0x63c: Stack[-1] = "run"
0x63d: Return(); Pop(0)

0x63e: PushEmpty()
0x63f: EventDisable(0)
0x640: PushEmpty(object)
0x641: Stack[-1] = Stack[-2]
0x642: Call2 0x657

0x643: Pop(1)
0x644: Push((int) 50)
0x645: Push((int) 40)
0x646: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x647: Pop(2)
0x648: EventEnable(0)
0x649: @ Hold()
0x64a: Pop(0)
0x64b: GOTO 0x649

0x64c: Return(); Pop(0)

0x64d: PushEmpty(bool, bool)
0x64e: @ IsOverrideActive(Stack[-1])
0x64f: Pop(0)
0x650: Pop(0); Push((bool) Stack[-1] == 0)
0x651: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x652: PushEmpty(object)
0x653: Stack[-1] = Stack[-4]
0x654: Call2 0x9b7

0x655: Pop(1)
0x656: Return(); Pop(2)

0x657: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x658: Pop(0); Push((bool) Stack[-21] == 0)
0x659: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x65a: PushEmpty(string)
0x65b: Stack[-1] = "fdie"
0x65c: Call2 0x6b2

0x65d: Pop(1)
0x65e: GOTO 0x6b1

0x65f: @@ GetPosition(Stack[-10])
0x660: Pop(0)
0x661: @ GetPosition(Stack[-9])
0x662: Pop(0)
0x663: @ GetDirection(Stack[-8])
0x664: Pop(0)
0x665: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x666: Push(CvectorIndex(Stack[-7], 0))
0x667: Push(CvectorIndex(Stack[-9], 0))
0x668: Pop(2); Push(Stack[-2] * Stack[-1]);
0x669: Push(CvectorIndex(Stack[-8], 2))
0x66a: Push(CvectorIndex(Stack[-10], 2))
0x66b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x66c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x66d: Push((int) 0)
0x66e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x66f: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x670: Stack[-6] = "fdie"
0x671: GOTO 0x673

0x672: Stack[-6] = "bdie"
0x673: @ RemoveRTEnvelope()
0x674: Pop(0)
0x675: @ SetDeathState()
0x676: Pop(0)
0x677: @ Stop()
0x678: Pop(0)
0x679: @ StopAsync()
0x67a: Pop(0)
0x67b: Stack[-5] = Stack[-21]
0x67c: Push("GetScriptProperty")
0x67d: Push((int) 2)
0x67e: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x67f: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x680: Push("Owner")
0x681: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x682: Pop(1)
0x683: Push(Stack[-4])
0x684: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x685: Push("Owner")
0x686: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x687: Pop(1)
0x688: Pop(0); Push((bool) Stack[-5] == 0)
0x689: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x68a: Stack[-5] = Stack[-21]
0x68b: Push("@GetEyesHeight")
0x68c: Push((int) 1)
0x68d: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x68e: IF (Stack[-1] == 0) GOTO 0x69a; Pop(1)

0x68f: @@ GetEyesHeight(Stack[-2])
0x690: Pop(0)
0x691: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x692: Push(CvectorIndex(Stack[-1], 1))
0x693: Stack[-1] = Stack[-3]
0x694: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x695: Push("head")
0x696: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x697: Pop(1)
0x698: Stack[-3] = (bool) 1
0x699: GOTO 0x69b

0x69a: Stack[-3] = (bool) 0
0x69b: PushEmpty(string)
0x69c: Stack[-1] = Stack[-7]
0x69d: Call2 0x8ac

0x69e: Pop(1)
0x69f: Push("all")
0x6a0: @ PlayAnimation(Stack[-1], Stack[-7])
0x6a1: Pop(1)
0x6a2: @ WaitForAnimEnd()
0x6a3: Pop(0)
0x6a4: Push(Stack[-3])
0x6a5: IF (Stack[-1] == 0) GOTO 0x6ab; Pop(1)

0x6a6: @ StopAsync()
0x6a7: Pop(0)
0x6a8: Push("head")
0x6a9: @ UnlookAsync(Stack[-1])
0x6aa: Pop(1)
0x6ab: Push("all")
0x6ac: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x6ad: Pop(1)
0x6ae: @ RemoveEnvelope()
0x6af: Pop(0)
0x6b0: Stack[-5] = 0
0x6b1: Return(); Pop(20)

0x6b2: PushEmpty()
0x6b3: @ RemoveRTEnvelope()
0x6b4: Pop(0)
0x6b5: @ SetDeathState()
0x6b6: Pop(0)
0x6b7: @ Stop()
0x6b8: Pop(0)
0x6b9: @ StopAsync()
0x6ba: Pop(0)
0x6bb: @ StopSecondaryAnimation()
0x6bc: Pop(0)
0x6bd: PushEmpty(string)
0x6be: Stack[-1] = Stack[-2]
0x6bf: Call2 0x8ac

0x6c0: Pop(1)
0x6c1: Push("all")
0x6c2: @ PlayAnimation(Stack[-1], Stack[-2])
0x6c3: Pop(1)
0x6c4: @ WaitForAnimEnd()
0x6c5: Pop(0)
0x6c6: Push("all")
0x6c7: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x6c8: Pop(1)
0x6c9: @ RemoveEnvelope()
0x6ca: Pop(0)
0x6cb: Return(); Pop(0)

0x6cc: PushEmpty()
0x6cd: Return(); Pop(0)

0x6ce: PushEmpty()
0x6cf: Return(); Pop(0)

0x6d0: PushEmpty()
0x6d1: Return(); Pop(0)

0x6d2: PushEmpty()
0x6d3: Push((int) 2)
0x6d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6d5: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6d6: Stack[-2] = "fire"
0x6d7: Return(); Pop(0)

0x6d8: GOTO 0x6de

0x6d9: Push((int) 1)
0x6da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6db: IF (Stack[-1] == 0) GOTO 0x6de; Pop(1)

0x6dc: Stack[-2] = "bullet"
0x6dd: Return(); Pop(0)

0x6de: Stack[-2] = "phys"
0x6df: Return(); Pop(0)

0x6e0: PushEmpty(cvector, cvector, cvector, cvector)
0x6e1: @ GetPosition(Stack[-2])
0x6e2: Pop(0)
0x6e3: @@ GetPosition(Stack[-1])
0x6e4: Pop(0)
0x6e5: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x6e6: Return(); Pop(4)

0x6e7: PushEmpty(bool, bool)
0x6e8: @ IsPlayerActor(Stack[-3], Stack[-1])
0x6e9: Pop(0)
0x6ea: Stack[-4] = Stack[-1]
0x6eb: Return(); Pop(2)

0x6ec: PushEmpty(bool, bool)
0x6ed: Push("HasProperty")
0x6ee: Push((int) 2)
0x6ef: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x6f0: Pop(1); Push((bool) Stack[-1] == 0)
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f2: Stack[-5] = (bool) 0
0x6f3: Return(); Pop(2)

0x6f4: @@ HasProperty(Stack[-3], Stack[-1])
0x6f5: Pop(0)
0x6f6: Stack[-5] = Stack[-1]
0x6f7: Return(); Pop(2)

0x6f8: PushEmpty(float, float)
0x6f9: PushEmpty(bool, object, string)
0x6fa: Stack[-2] = Stack[-10]
0x6fb: Stack[-1] = Stack[-9]
0x6fc: Call2 0x6ec

0x6fd: Pop(2)
0x6fe: Pop(1); Push((bool) Stack[-1] == 0)
0x6ff: IF (Stack[-1] == 0) GOTO 0x702; Pop(1)

0x700: Stack[-8] = (bool) 0
0x701: Return(); Pop(2)

0x702: @@ GetProperty(Stack[-6], Stack[-1])
0x703: Pop(0)
0x704: PushEmpty(float, float, float, float)
0x705: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x706: Stack[-2] = Stack[-8]
0x707: Stack[-1] = Stack[-7]
0x708: Call2 0x8ec

0x709: Pop(3)
0x70a: @@ SetProperty(Stack[-7], Stack[-1])
0x70b: Pop(1)
0x70c: Stack[-8] = (bool) 1
0x70d: Return(); Pop(2)

0x70e: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x70f: PushEmpty(bool, object, string)
0x710: Stack[-2] = Stack[-18]
0x711: Stack[-1] = "health"
0x712: Call2 0x6ec

0x713: Pop(2)
0x714: Pop(1); Push((bool) Stack[-1] == 0)
0x715: IF (Stack[-1] == 0) GOTO 0x718; Pop(1)

0x716: Stack[-16] = (float) 0.0
0x717: Return(); Pop(12)

0x718: PushEmpty(bool, object, string)
0x719: Stack[-2] = Stack[-18]
0x71a: Stack[-1] = "armor"
0x71b: Call2 0x6ec

0x71c: Pop(2)
0x71d: Pop(1); Push((bool) Stack[-1] == 0)
0x71e: IF (Stack[-1] == 0) GOTO 0x721; Pop(1)

0x71f: Stack[-6] = (int) 0
0x720: GOTO 0x724

0x721: Push("armor")
0x722: @@ GetProperty(Stack[-1], Stack[-7])
0x723: Pop(1)
0x724: Push("armor_")
0x725: PushEmpty(string, int)
0x726: Stack[-1] = Stack[-16]
0x727: Call2 0x6d2

0x728: Pop(1)
0x729: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x72a: PushEmpty(bool, object, string)
0x72b: Stack[-2] = Stack[-18]
0x72c: Stack[-1] = Stack[-8]
0x72d: Call2 0x6ec

0x72e: Pop(2)
0x72f: Pop(1); Push((bool) Stack[-1] == 0)
0x730: IF (Stack[-1] == 0) GOTO 0x733; Pop(1)

0x731: Stack[-4] = (int) 0
0x732: GOTO 0x735

0x733: @@ GetProperty(Stack[-5], Stack[-4])
0x734: Pop(0)
0x735: PushEmpty(float, float, float)
0x736: Pop(0); Push(Stack[-9] + Stack[-7]);
0x737: Push((float)100.0)
0x738: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x739: Stack[-1] = (int) 1
0x73a: Call2 0x8e5

0x73b: Stack[-6] = Stack[-3]
0x73c: Pop(3)
0x73d: Push("health")
0x73e: @@ GetProperty(Stack[-1], Stack[-3])
0x73f: Pop(1)
0x740: Push((int) 1)
0x741: Pop(1); Push(Stack[-1] - Stack[-4]);
0x742: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x743: Push("health")
0x744: PushEmpty(float, float, float, float)
0x745: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x746: Stack[-2] = (int) 0
0x747: Stack[-1] = (int) 1
0x748: Call2 0x8ec

0x749: Pop(3)
0x74a: @@ SetProperty(Stack[-2], Stack[-1])
0x74b: Pop(2)
0x74c: PushEmpty(bool, object)
0x74d: Stack[-1] = Stack[-17]
0x74e: Call2 0x6e7

0x74f: Pop(1)
0x750: IF (Stack[-1] == 0) GOTO 0x755; Pop(1)

0x751: PushEmpty(float)
0x752: Stack[-1] = -Stack[-2]; Pop(0);
0x753: Call2 0x91f

0x754: Pop(1)
0x755: Stack[-16] = Stack[-1]
0x756: Return(); Pop(12)

0x757: PushEmpty(bool, bool)
0x758: @@ IsDead(Stack[-1])
0x759: Pop(0)
0x75a: Stack[-4] = Stack[-1]
0x75b: Return(); Pop(2)

0x75c: PushEmpty(object, object, object, object)
0x75d: Pop(0); Push((bool) Stack[-5] == 0)
0x75e: IF (Stack[-1] == 0) GOTO 0x761; Pop(1)

0x75f: Stack[-6] = (bool) 0
0x760: Return(); Pop(4)

0x761: PushEmpty(bool)
0x762: Stack[-1] = (bool) 0
0x763: Push("IsDead")
0x764: Push((int) 1)
0x765: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x766: IF (Stack[-1] == 0) GOTO 0x76d; Pop(1)

0x767: PushEmpty(bool, object)
0x768: Stack[-1] = Stack[-8]
0x769: Call2 0x757

0x76a: Pop(1)
0x76b: IF (Stack[-1] == 0) GOTO 0x76d; Pop(1)

0x76c: Stack[-1] = (bool) 1
0x76d: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x76e: Stack[-6] = (bool) 0
0x76f: Return(); Pop(4)

0x770: @ GetScene(Stack[-2])
0x771: Pop(0)
0x772: Pop(0); Push((bool) Stack[-2] == 0)
0x773: IF (Stack[-1] == 0) GOTO 0x776; Pop(1)

0x774: Stack[-6] = (bool) 0
0x775: Return(); Pop(4)

0x776: @@ GetScene(Stack[-1])
0x777: Pop(0)
0x778: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x779: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x77a: Stack[-6] = (bool) 0
0x77b: Return(); Pop(4)

0x77c: Stack[-6] = (bool) 1
0x77d: Return(); Pop(4)

0x77e: Stack[-1] = 0
0x77f: Stack[-2] = 0
0x780: PushEmpty(int, int)
0x781: PushEmpty(bool, object)
0x782: Stack[-1] = Stack[-5]
0x783: Call2 0x75c

0x784: Pop(1)
0x785: Pop(1); Push((bool) Stack[-1] == 0)
0x786: IF (Stack[-1] == 0) GOTO 0x789; Pop(1)

0x787: Stack[-4] = (bool) 0
0x788: Return(); Pop(2)

0x789: PushEmpty(bool, object, string)
0x78a: Stack[-2] = Stack[-6]
0x78b: Stack[-1] = "noaccess"
0x78c: Call2 0x6ec

0x78d: Pop(2)
0x78e: Pop(1); Push((bool) Stack[-1] == 0)
0x78f: IF (Stack[-1] == 0) GOTO 0x792; Pop(1)

0x790: Stack[-4] = (bool) 1
0x791: Return(); Pop(2)

0x792: Push("noaccess")
0x793: @@ GetProperty(Stack[-1], Stack[-2])
0x794: Pop(1)
0x795: Push((int) 0)
0x796: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x797: Return(); Pop(2)

0x798: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x799: Pop(0); Push((bool) Stack[-15] == 0)
0x79a: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x79b: Return(); Pop(14)

0x79c: @ IsDead(Stack[-7])
0x79d: Pop(0)
0x79e: Push(Stack[-7])
0x79f: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x7a0: Return(); Pop(14)

0x7a1: @ GetSecondaryAnimationType(Stack[-6])
0x7a2: Pop(0)
0x7a3: Push((int) 0)
0x7a4: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x7a5: IF (Stack[-1] == 0) GOTO 0x7a7; Pop(1)

0x7a6: Return(); Pop(14)

0x7a7: @@ GetPosition(Stack[-5])
0x7a8: Pop(0)
0x7a9: @ GetPosition(Stack[-4])
0x7aa: Pop(0)
0x7ab: @ GetDirection(Stack[-3])
0x7ac: Pop(0)
0x7ad: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x7ae: Push(CvectorIndex(Stack[-2], 0))
0x7af: Push(CvectorIndex(Stack[-4], 0))
0x7b0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7b1: Push(CvectorIndex(Stack[-3], 2))
0x7b2: Push(CvectorIndex(Stack[-5], 2))
0x7b3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7b4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7b5: Push((int) 0)
0x7b6: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x7b7: IF (Stack[-1] == 0) GOTO 0x7ba; Pop(1)

0x7b8: Stack[-1] = "fhit"
0x7b9: GOTO 0x7bb

0x7ba: Stack[-1] = "bhit"
0x7bb: Push("hit_react")
0x7bc: Push("1")
0x7bd: Pop(1); Push(Stack[-3] + Stack[-1]);
0x7be: Push("2")
0x7bf: Pop(1); Push(Stack[-4] + Stack[-1]);
0x7c0: Push((int) -10)
0x7c1: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7c2: Pop(4)
0x7c3: Return(); Pop(14)

0x7c4: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x7c5: PushEmpty(bool)
0x7c6: Stack[-1] = (bool) 0
0x7c7: PushEmpty(bool)
0x7c8: Stack[-1] = (bool) 0
0x7c9: Push(Stack[-23])
0x7ca: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7cb: Push((int) 4)
0x7cc: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x7cd: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7ce: Stack[-1] = (bool) 1
0x7cf: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7d0: Push((int) 5)
0x7d1: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x7d2: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7d3: Stack[-1] = (bool) 1
0x7d4: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x7d5: PushEmpty(cvector, cvector)
0x7d6: PushEmpty(cvector, object)
0x7d7: Stack[-1] = Stack[-25]
0x7d8: Call2 0x6e0

0x7d9: Stack[-3] = Stack[-2]
0x7da: Pop(2)
0x7db: Call2 0x8db

0x7dc: Stack[-11] = Stack[-2]
0x7dd: Pop(2)
0x7de: @ CreateVectorVector(Stack[-8])
0x7df: Pop(0)
0x7e0: Stack[-7] = (int) 1
0x7e1: Push("hit")
0x7e2: Pop(1); Push(Stack[-1] + Stack[-8]);
0x7e3: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x7e4: Pop(1)
0x7e5: Pop(0); Push((bool) Stack[-6] == 0)
0x7e6: IF (Stack[-1] == 0) GOTO 0x7e8; Pop(1)

0x7e7: GOTO 0x7f1

0x7e8: Pop(0); Push(Stack[-4] | Stack[-9]);
0x7e9: Push((float)0.70711)
0x7ea: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x7eb: IF (Stack[-1] == 0) GOTO 0x7ee; Pop(1)

0x7ec: @@ add(Stack[-5])
0x7ed: Pop(0)
0x7ee: Push((int) 1)
0x7ef: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x7f0: GOTO 0x7e1

0x7f1: @@ size(Stack[-3])
0x7f2: Pop(0)
0x7f3: Push(Stack[-3])
0x7f4: IF (Stack[-1] == 0) GOTO 0x802; Pop(1)

0x7f5: @ irand(Stack[-2], Stack[-3])
0x7f6: Pop(0)
0x7f7: @@ get(Stack[-1], Stack[-2])
0x7f8: Pop(0)
0x7f9: PushEmpty(object, int, float, cvector, cvector)
0x7fa: Stack[-5] = Stack[-26]
0x7fb: Stack[-4] = Stack[-25]
0x7fc: Stack[-3] = Stack[-24]
0x7fd: Stack[-2] = Stack[-6]
0x7fe: Stack[-1] = -Stack[-14]; Pop(0);
0x7ff: Call2 0x808

0x800: Pop(5)
0x801: Return(); Pop(18)

0x802: Stack[-8] = 0
0x803: PushEmpty(object)
0x804: Stack[-1] = Stack[-22]
0x805: Call2 0x798

0x806: Pop(1)
0x807: Return(); Pop(18)

0x808: PushEmpty(object, object, object, object)
0x809: @ GetScene(Stack[-2])
0x80a: Pop(0)
0x80b: Push("scripted")
0x80c: Push("blood_dir.xml")
0x80d: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x80e: Pop(2)
0x80f: PushEmpty(object)
0x810: Stack[-1] = Stack[-10]
0x811: Call2 0x798

0x812: Pop(1)
0x813: Return(); Pop(4)

0x814: Stack[-1] = 0
0x815: Stack[-2] = 0
0x816: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x817: @@ GetPosition(Stack[-3])
0x818: Pop(0)
0x819: @ GetPosition(Stack[-2])
0x81a: Pop(0)
0x81b: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x81c: Push(CvectorIndex(Stack[-1], 0))
0x81d: Push(CvectorIndex(Stack[-2], 2))
0x81e: @ RotateAsync(Stack[-2], Stack[-1])
0x81f: Pop(2)
0x820: Return(); Pop(6)

0x821: PushEmpty(bool, bool)
0x822: @ IsLoaded(Stack[-1])
0x823: Pop(0)
0x824: Stack[-3] = Stack[-1]
0x825: Return(); Pop(2)

0x826: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x827: @@ GetPosition(Stack[-8])
0x828: Pop(0)
0x829: @@ GetEyesHeight(Stack[-9])
0x82a: Pop(0)
0x82b: Push(CvectorIndex(Stack[-8], 1))
0x82c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x82d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x82e: @ GetPosition(Stack[-7])
0x82f: Pop(0)
0x830: @ GetEyesHeight(Stack[-9])
0x831: Pop(0)
0x832: Push(CvectorIndex(Stack[-7], 1))
0x833: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x834: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x835: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x836: Push(CvectorIndex(Stack[-6], 1))
0x837: Stack[-1] = (int) 0
0x838: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x839: Pop(0); Push(Stack[-6] | Stack[-6]);
0x83a: Pop(1); Push(Sqrt(Stack[-1]))
0x83b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x83c: Stack[-5] = -Stack[-6]; Pop(0);
0x83d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x83e: PushEmpty(cvector, cvector)
0x83f: Push(CVector(0.0, 1.0, 0.0))
0x840: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x841: Call2 0x8db

0x842: Pop(1)
0x843: Push((int) 25)
0x844: Pop(2); Push(Stack[-2] * Stack[-1]);
0x845: Pop(2); Push(Stack[-2] + Stack[-1]);
0x846: Push(CVector(0.0, 10.0, 0.0))
0x847: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x848: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x849: @ IsOverrideActive(Stack[-2])
0x84a: Pop(0)
0x84b: Push(Stack[-2])
0x84c: IF (Stack[-1] == 0) GOTO 0x84f; Pop(1)

0x84d: Stack[-21] = (bool) 0
0x84e: Return(); Pop(18)

0x84f: @ StopWorld()
0x850: Pop(0)
0x851: @ CameraTransit(Stack[-3], Stack[-5])
0x852: Pop(0)
0x853: Push(CvectorIndex(Stack[-4], 0))
0x854: Push(CvectorIndex(Stack[-5], 2))
0x855: @ Rotate(Stack[-2], Stack[-1])
0x856: Pop(2)
0x857: PushEmpty(bool)
0x858: Call2 0x95b

0x859: Pop(0)
0x85a: IF (Stack[-1] == 0) GOTO 0x85c; Pop(1)

0x85b: GOTO 0x864

0x85c: Push("head")
0x85d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x85e: Pop(1)
0x85f: Push(Stack[-1])
0x860: IF (Stack[-1] == 0) GOTO 0x864; Pop(1)

0x861: Push("head")
0x862: @ LookAsyncCamera(Stack[-1])
0x863: Pop(1)
0x864: @ CameraWaitForPlayFinish()
0x865: Pop(0)
0x866: @ ResumeWorld()
0x867: Pop(0)
0x868: Stack[-21] = (bool) 1
0x869: Return(); Pop(18)

0x86a: PushEmpty(bool, bool)
0x86b: @ CameraSwitchToNormal()
0x86c: Pop(0)
0x86d: PushEmpty(bool)
0x86e: Call2 0x95b

0x86f: Pop(0)
0x870: IF (Stack[-1] == 0) GOTO 0x872; Pop(1)

0x871: GOTO 0x87a

0x872: Push("head")
0x873: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x874: Pop(1)
0x875: Push(Stack[-1])
0x876: IF (Stack[-1] == 0) GOTO 0x87a; Pop(1)

0x877: Push("head")
0x878: @ UnlookAsync(Stack[-1])
0x879: Pop(1)
0x87a: Return(); Pop(2)

0x87b: PushEmpty(bool, float, float, bool, float, float)
0x87c: @ lshHasAnimation(Stack[-3], Stack[-7])
0x87d: Pop(0)
0x87e: Push(Stack[-3])
0x87f: IF (Stack[-1] == 0) GOTO 0x886; Pop(1)

0x880: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x881: Pop(0)
0x882: Push((bool) 0)
0x883: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x884: Pop(1)
0x885: GOTO 0x88a

0x886: Push("Can't find lsh animation : ")
0x887: Pop(1); Push(Stack[-1] + Stack[-8]);
0x888: @ Trace(Stack[-1])
0x889: Pop(1)
0x88a: Return(); Pop(6)

0x88b: PushEmpty(bool, float, float, bool, float, float)
0x88c: @ lshHasAnimation(Stack[-3], Stack[-8])
0x88d: Pop(0)
0x88e: Push(Stack[-3])
0x88f: IF (Stack[-1] == 0) GOTO 0x895; Pop(1)

0x890: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x891: Pop(0)
0x892: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x893: Pop(0)
0x894: GOTO 0x899

0x895: Push("Can't find lsh animation : ")
0x896: Pop(1); Push(Stack[-1] + Stack[-9]);
0x897: @ Trace(Stack[-1])
0x898: Pop(1)
0x899: Return(); Pop(6)

0x89a: PushEmpty(float, cvector, float, cvector)
0x89b: @@ GetEyesHeight(Stack[-2])
0x89c: Pop(0)
0x89d: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x89e: Push(CvectorIndex(Stack[-1], 1))
0x89f: Stack[-1] = Stack[-3]
0x8a0: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x8a1: Push("head")
0x8a2: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x8a3: Pop(1)
0x8a4: Return(); Pop(4)

0x8a5: PushEmpty(bool)
0x8a6: Call2 0x95b

0x8a7: Pop(0)
0x8a8: IF (Stack[-1] == 0) GOTO 0x8ab; Pop(1)

0x8a9: @ lshStopSpeech()
0x8aa: Pop(0)
0x8ab: Return(); Pop(0)

0x8ac: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x8ad: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x8ae: Pop(0)
0x8af: Pop(0); Push((bool) Stack[-8] == 0)
0x8b0: IF (Stack[-1] == 0) GOTO 0x8c5; Pop(1)

0x8b1: Stack[-7] = (int) 0
0x8b2: Push((int) 1)
0x8b3: Pop(1); Push(Stack[-8] + Stack[-1]);
0x8b4: Pop(1); Push(Stack[-18] + Stack[-1]);
0x8b5: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x8b6: Pop(1)
0x8b7: Pop(0); Push((bool) Stack[-6] == 0)
0x8b8: IF (Stack[-1] == 0) GOTO 0x8ba; Pop(1)

0x8b9: GOTO 0x8bd

0x8ba: Push((int) 1)
0x8bb: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x8bc: GOTO 0x8b2

0x8bd: Pop(0); Push((bool) Stack[-7] == 0)
0x8be: IF (Stack[-1] == 0) GOTO 0x8c0; Pop(1)

0x8bf: Return(); Pop(16)

0x8c0: @ irand(Stack[-5], Stack[-7])
0x8c1: Pop(0)
0x8c2: Push((int) 1)
0x8c3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x8c4: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x8c5: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x8c6: Pop(0)
0x8c7: Push(Stack[-4])
0x8c8: IF (Stack[-1] == 0) GOTO 0x8d4; Pop(1)

0x8c9: @ GetEyesHeight(Stack[-3])
0x8ca: Pop(0)
0x8cb: @ GetDirection(Stack[-2])
0x8cc: Pop(0)
0x8cd: Push((int) 50)
0x8ce: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x8cf: Push(CvectorIndex(Stack[-1], 1))
0x8d0: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x8d1: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x8d2: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x8d3: Pop(0)
0x8d4: Return(); Pop(16)

0x8d5: PushEmpty(object, object)
0x8d6: @ self(Stack[-1])
0x8d7: Pop(0)
0x8d8: Stack[-3] = Stack[-1]
0x8d9: Return(); Pop(2)

0x8da: Stack[-1] = 0
0x8db: PushEmpty(float, float)
0x8dc: Pop(0); Push(Stack[-3] | Stack[-3]);
0x8dd: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x8de: Push((float)0.0)
0x8df: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x8e0: IF (Stack[-1] == 0) GOTO 0x8e3; Pop(1)

0x8e1: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x8e2: Return(); Pop(2)

0x8e3: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x8e4: Return(); Pop(2)

0x8e5: PushEmpty()
0x8e6: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x8e7: IF (Stack[-1] == 0) GOTO 0x8ea; Pop(1)

0x8e8: Stack[-3] = Stack[-2]
0x8e9: GOTO 0x8eb

0x8ea: Stack[-3] = Stack[-1]
0x8eb: Return(); Pop(0)

0x8ec: PushEmpty()
0x8ed: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x8ee: IF (Stack[-1] == 0) GOTO 0x8f1; Pop(1)

0x8ef: Stack[-4] = Stack[-2]
0x8f0: Return(); Pop(0)

0x8f1: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x8f2: IF (Stack[-1] == 0) GOTO 0x8f5; Pop(1)

0x8f3: Stack[-4] = Stack[-1]
0x8f4: Return(); Pop(0)

0x8f5: Stack[-4] = Stack[-3]
0x8f6: Return(); Pop(0)

0x8f7: PushEmpty(int, int)
0x8f8: @ GetVariable(Stack[-3], Stack[-1])
0x8f9: Pop(0)
0x8fa: Stack[-4] = Stack[-1]
0x8fb: Return(); Pop(2)

0x8fc: PushEmpty()
0x8fd: Pop(0); Push((bool) Stack[-2] == 0)
0x8fe: IF (Stack[-1] == 0) GOTO 0x901; Pop(1)

0x8ff: Stack[-3] = (bool) 0
0x900: Return(); Pop(0)

0x901: Push((int) 0)
0x902: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x903: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x904: Push((int) 8)
0x905: @ SendWorldWndMessage(Stack[-1])
0x906: Pop(1)
0x907: GOTO 0x911

0x908: Push((int) 0)
0x909: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x90a: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x90b: Push((int) 9)
0x90c: @ SendWorldWndMessage(Stack[-1])
0x90d: Pop(1)
0x90e: GOTO 0x911

0x90f: Stack[-3] = (bool) 0
0x910: Return(); Pop(0)

0x911: PushEmpty(float)
0x912: Stack[-1] = Stack[-2]
0x913: Call2 0x929

0x914: Pop(1)
0x915: PushEmpty(bool, object, string, float, float, float)
0x916: Stack[-5] = Stack[-8]
0x917: Stack[-4] = "reputation"
0x918: Stack[-3] = Stack[-7]
0x919: Stack[-2] = (int) 0
0x91a: Stack[-1] = (int) 1
0x91b: Call2 0x6f8

0x91c: Pop(6)
0x91d: Stack[-3] = (bool) 1
0x91e: Return(); Pop(0)

0x91f: PushEmpty(object, object)
0x920: @ CreateFloatVector(Stack[-1])
0x921: Pop(0)
0x922: @@ add(Stack[-3])
0x923: Pop(0)
0x924: Push((int) 15)
0x925: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x926: Pop(1)
0x927: Return(); Pop(2)

0x928: Stack[-1] = 0
0x929: PushEmpty(object, object)
0x92a: @ CreateFloatVector(Stack[-1])
0x92b: Pop(0)
0x92c: @@ add(Stack[-3])
0x92d: Pop(0)
0x92e: Push((int) 16)
0x92f: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x930: Pop(1)
0x931: Return(); Pop(2)

0x932: Stack[-1] = 0
0x933: PushEmpty(object, object)
0x934: @ FindActor(Stack[-1], Stack[-4])
0x935: Pop(0)
0x936: Pop(0); Push((bool) Stack[-1] == 0)
0x937: IF (Stack[-1] == 0) GOTO 0x93a; Pop(1)

0x938: Stack[-5] = (bool) 0
0x939: Return(); Pop(2)

0x93a: @ Trigger(Stack[-1], Stack[-3])
0x93b: Pop(0)
0x93c: Stack[-5] = (bool) 1
0x93d: Return(); Pop(2)

0x93e: Stack[-1] = 0
0x93f: PushEmpty(bool, bool)
0x940: @ IsPlayerActor(Stack[-3], Stack[-1])
0x941: Pop(0)
0x942: Push(Stack[-1])
0x943: IF (Stack[-1] == 0) GOTO 0x947; Pop(1)

0x944: Push("attack")
0x945: @ PlayGlobalMusic(Stack[-1])
0x946: Pop(1)
0x947: Return(); Pop(2)

0x948: PushEmpty(object, object)
0x949: @ GetScene(Stack[-1])
0x94a: Pop(0)
0x94b: Push("battle")
0x94c: PushEmpty(object)
0x94d: Call2 0x8d5

0x94e: Pop(0)
0x94f: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x950: Pop(2)
0x951: Return(); Pop(2)

0x952: Stack[-1] = 0
0x953: Stack[-1] = (int) 515558
0x954: Return(); Pop(0)

0x955: Stack[-1] = (int) 503343
0x956: Return(); Pop(0)

0x957: Stack[-1] = "ui/NPC_Citizen3.png"
0x958: Return(); Pop(0)

0x959: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x95a: Return(); Pop(0)

0x95b: Stack[-1] = (bool) 0
0x95c: Return(); Pop(0)

0x95d: PushEmpty(string, string)
0x95e: Stack[-1] = "idle"
0x95f: Push(Stack[-3])
0x960: IF (Stack[-1] == 0) GOTO 0x962; Pop(1)

0x961: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x962: Stack[-4] = Stack[-1]
0x963: Return(); Pop(2)

0x964: PushEmpty(int, bool, int, bool)
0x965: Stack[-2] = (int) 0
0x966: Push("all")
0x967: PushEmpty(string, int)
0x968: Stack[-1] = Stack[-5]
0x969: Call2 0x95d

0x96a: Pop(1)
0x96b: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x96c: Pop(2)
0x96d: Pop(0); Push((bool) Stack[-1] == 0)
0x96e: IF (Stack[-1] == 0) GOTO 0x970; Pop(1)

0x96f: GOTO 0x973

0x970: Push((int) 1)
0x971: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x972: GOTO 0x966

0x973: Stack[-5] = Stack[-2]
0x974: Return(); Pop(4)

0x975: PushEmpty()
0x976: Push("oob4boy1")
0x977: Push((int) 1)
0x978: @ SetVariable(Stack[-2], Stack[-1])
0x979: Pop(2)
0x97a: Return(); Pop(0)

0x97b: PushEmpty()
0x97c: PushEmpty(bool, string, string)
0x97d: Stack[-2] = "quest_b4_02"
0x97e: Stack[-1] = "boy_run"
0x97f: Call2 0x933

0x980: Pop(3)
0x981: Return(); Pop(0)

0x982: PushEmpty()
0x983: Push("oob4boy2")
0x984: Push((int) 1)
0x985: @ SetVariable(Stack[-2], Stack[-1])
0x986: Pop(2)
0x987: Return(); Pop(0)

0x988: PushEmpty()
0x989: PushEmpty(int, string)
0x98a: Stack[-1] = "oob4boy1"
0x98b: Call2 0x8f7

0x98c: Pop(1)
0x98d: Push((int) 0)
0x98e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x98f: IF (Stack[-1] == 0) GOTO 0x992; Pop(1)

0x990: Stack[-2] = (bool) 1
0x991: Return(); Pop(0)

0x992: Stack[-2] = (bool) 0
0x993: Return(); Pop(0)

0x994: PushEmpty()
0x995: PushEmpty(int, string)
0x996: Stack[-1] = "oob4boy2"
0x997: Call2 0x8f7

0x998: Pop(1)
0x999: Push((int) 0)
0x99a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x99b: IF (Stack[-1] == 0) GOTO 0x99e; Pop(1)

0x99c: Stack[-2] = (bool) 1
0x99d: Return(); Pop(0)

0x99e: Stack[-2] = (bool) 0
0x99f: Return(); Pop(0)

0x9a0: PushEmpty(int, int)
0x9a1: Push("branch")
0x9a2: @ GetVariable(Stack[-1], Stack[-2])
0x9a3: Pop(1)
0x9a4: Push((int) 0)
0x9a5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9a6: IF (Stack[-1] == 0) GOTO 0x9aa; Pop(1)

0x9a7: Stack[-3] = (int) 1
0x9a8: Return(); Pop(2)

0x9a9: GOTO 0x9af

0x9aa: Push((int) 1)
0x9ab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9ac: IF (Stack[-1] == 0) GOTO 0x9af; Pop(1)

0x9ad: Stack[-3] = (int) 2
0x9ae: Return(); Pop(2)

0x9af: Stack[-3] = (int) 3
0x9b0: Return(); Pop(2)

0x9b1: PushEmpty(int, int)
0x9b2: Push("branch")
0x9b3: @ GetVariable(Stack[-1], Stack[-2])
0x9b4: Pop(1)
0x9b5: Stack[-3] = Stack[-1]
0x9b6: Return(); Pop(2)

0x9b7: PushEmpty()
0x9b8: PushEmpty(int)
0x9b9: Call2 0x9b1

0x9ba: Pop(0)
0x9bb: Push((int) 1)
0x9bc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9bd: IF (Stack[-1] == 0) GOTO 0x9c1; Pop(1)

0x9be: @ WorkWithCorpse(Stack[-1])
0x9bf: Pop(0)
0x9c0: GOTO 0x9c3

0x9c1: @ Barter(Stack[-1])
0x9c2: Pop(0)
0x9c3: Return(); Pop(0)

0x9c4: PushEmpty()
0x9c5: PushEmpty(object)
0x9c6: Stack[-1] = Stack[-2]
0x9c7: Push(-1, 0); TaskCall(6)
0x9c8: Call2 0x63e

0x9c9: Pop(-1, 0); TaskReturn
0x9ca: Pop(1)
0x9cb: Return(); Pop(0)

0x9cc: PushEmpty()
0x9cd: PushEmpty(object, int, float)
0x9ce: Stack[-3] = Stack[-7]
0x9cf: Stack[-2] = Stack[-6]
0x9d0: Stack[-1] = Stack[-5]
0x9d1: Call2 0x7c4

0x9d2: Pop(3)
0x9d3: Return(); Pop(0)

0x9d4: PushEmpty()
0x9d5: PushEmpty(object, int, float, cvector, cvector)
0x9d6: Stack[-5] = Stack[-11]
0x9d7: Stack[-4] = Stack[-10]
0x9d8: Stack[-3] = Stack[-9]
0x9d9: Stack[-2] = Stack[-7]
0x9da: Stack[-1] = Stack[-6]
0x9db: Call2 0x808

0x9dc: Pop(5)
0x9dd: Return(); Pop(0)

0x9de: PushEmpty(float, float)
0x9df: Push("health")
0x9e0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9e1: IF (Stack[-1] == 0) GOTO 0x9ea; Pop(1)

0x9e2: Push("health")
0x9e3: @ GetProperty(Stack[-1], Stack[-2])
0x9e4: Pop(1)
0x9e5: Push((int) 0)
0x9e6: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x9e7: IF (Stack[-1] == 0) GOTO 0x9ea; Pop(1)

0x9e8: @ SignalDeath(Stack[-4])
0x9e9: Pop(0)
0x9ea: Return(); Pop(2)

0x9eb: PushEmpty()
0x9ec: PushEmpty(bool, object)
0x9ed: Stack[-1] = Stack[-3]
0x9ee: Call2 0x6e7

0x9ef: Pop(1)
0x9f0: IF (Stack[-1] == 0) GOTO 0x9f6; Pop(1)

0x9f1: PushEmpty(bool, object, float)
0x9f2: Stack[-2] = Stack[-4]
0x9f3: Stack[-1] = (float) -0.1
0x9f4: Call2 0x8fc

0x9f5: Pop(3)
0x9f6: PushEmpty(object)
0x9f7: Stack[-1] = Stack[-2]
0x9f8: Call2 0x9c4

0x9f9: Pop(1)
0x9fa: Return(); Pop(0)

