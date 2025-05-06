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
	quest_d1_01
	attack
	cleanup
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
	2
	add
	size
	get
	scripted
	blood_dir.xml
	Can't find lsh animation : 
	battle
	branch
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png

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
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
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
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x129
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0xfa Vars = (object)
		EVENT_17 Op = 0x105 Vars = (object)
		EVENT_26 Op = 0x110 Vars = (string)
		EVENT_5 Op = 0x15a Vars = ()
		EVENT_6 Op = 0x15f Vars = ()
	GTASK_3 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_4 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x4a0 Vars = (int)
		EVENT_1 Op = 0x4bb Vars = (object)
		EVENT_2 Op = 0x4ca Vars = (object)
		EVENT_10 Op = 0x550 Vars = (object)
		EVENT_41 Op = 0x55b Vars = (object)
	GTASK_5  Params = 1
		EVENT_0 Op = 0x57e Vars = (object)
		EVENT_22 Op = 0x5fd Vars = (object, int, float, float)
		EVENT_16 Op = 0x5ff Vars = (object, string)
		EVENT_41 Op = 0x601 Vars = (object)

Events:
EVENT_22 Op = 0x8a1 Vars = (object, int, float, float)
EVENT_43 Op = 0x8a9 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x8b3 Vars = (object, string)
EVENT_41 Op = 0x8c0 Vars = (object)
EVENT_6 Op = 0x8c6 Vars = ()

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x748

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x891

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x88f

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x893

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x895

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x86b

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
0x41: Call2 0x78d

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
0x54: Push((int) 521496)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 521497)
0x5a: Push((int) 34596)
0x5b: Push((int) 22658)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 533084)
0x5f: Push((int) -1)
0x60: Push((int) 34595)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x897

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x79f

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
0x86: Call2 0x897

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
0x96: Call2 0x7af

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x7c9

0x9f: Pop(0)
0xa0: Push((int) 22775)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x864

0xa7: Pop(2)
0xa8: Push((int) 22657)
0xa9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xab: PushEmpty(string)
0xac: Stack[-1] = "Neutral"
0xad: Call2 0x84

0xae: Pop(1)
0xaf: Push((int) 521496)
0xb0: @@ SetMessage(Stack[-1])
0xb1: Pop(1)
0xb2: @@ ClearReplies()
0xb3: Pop(0)
0xb4: Push((int) 521497)
0xb5: Push((int) 34596)
0xb6: Push((int) 22658)
0xb7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8: Pop(3)
0xb9: Push((int) 533084)
0xba: Push((int) -1)
0xbb: Push((int) 34595)
0xbc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd: Pop(3)
0xbe: Return(); Pop(0)

0xbf: Push((int) 34596)
0xc0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xc2: PushEmpty(string)
0xc3: Stack[-1] = "Neutral"
0xc4: Call2 0x84

0xc5: Pop(1)
0xc6: Push((int) 533085)
0xc7: @@ SetMessage(Stack[-1])
0xc8: Pop(1)
0xc9: @@ ClearReplies()
0xca: Pop(0)
0xcb: Push((int) 533086)
0xcc: Push((int) 34598)
0xcd: Push((int) 34597)
0xce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf: Pop(3)
0xd0: Push((int) 533088)
0xd1: Push((int) -1)
0xd2: Push((int) 34599)
0xd3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4: Pop(3)
0xd5: Return(); Pop(0)

0xd6: Push((int) 34598)
0xd7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xd9: PushEmpty(string)
0xda: Stack[-1] = "Neutral"
0xdb: Call2 0x84

0xdc: Pop(1)
0xdd: Push((int) 533087)
0xde: @@ SetMessage(Stack[-1])
0xdf: Pop(1)
0xe0: @@ ClearReplies()
0xe1: Pop(0)
0xe2: Push((int) 521608)
0xe3: Push((int) -1)
0xe4: Push((int) 22775)
0xe5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe6: Pop(3)
0xe7: Push((int) 533089)
0xe8: Push((int) -1)
0xe9: Push((int) 34600)
0xea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(3)
0xec: Return(); Pop(0)

0xed: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xee: PushEmpty(bool)
0xef: Call2 0x897

0xf0: Pop(0)
0xf1: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf2: @ lshStopAnimation()
0xf3: Pop(0)
0xf4: GOTO 0xf7

0xf5: @ StopAnimation()
0xf6: Pop(0)
0xf7: Return(); Pop(0)

0xf8: GOTO 0x9b

0xf9: Return(); Pop(0)

0xfa: PushEmpty()
0xfb: PushEmpty()
0xfc: Call2 0x1c2

0xfd: Pop(0)
0xfe: PushEmpty(int, object)
0xff: Stack[-1] = Stack[-3]
0x100: Push(-2, 1); TaskCall(0)
0x101: Call2 0x0

0x102: Pop(-2, 1); TaskReturn
0x103: Pop(2)
0x104: Return(); Pop(0)

0x105: PushEmpty(bool, bool)
0x106: @ IsPlayerActor(Stack[-3], Stack[-1])
0x107: Pop(0)
0x108: Push(Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10a: PushEmpty(bool, string, string)
0x10b: Stack[-2] = "quest_d1_01"
0x10c: Stack[-1] = "attack"
0x10d: Call2 0x82c

0x10e: Pop(3)
0x10f: Return(); Pop(2)

0x110: PushEmpty()
0x111: Push("attack")
0x112: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x114: PushEmpty()
0x115: Call2 0x1c2

0x116: Pop(0)
0x117: PushEmpty()
0x118: Call2 0x13e

0x119: Pop(0)
0x11a: PushEmpty(object)
0x11b: PushEmpty(object)
0x11c: Call2 0x618

0x11d: Stack[-2] = Stack[-1]
0x11e: Pop(1)
0x11f: Push(-1, 6); TaskCall(3)
0x120: Call2 0x1c7

0x121: Pop(-1, 6); TaskReturn
0x122: Pop(1)
0x123: GOTO 0x128

0x124: PushEmpty(string)
0x125: Stack[-1] = Stack[-2]
0x126: Call2 0x152

0x127: Pop(1)
0x128: Return(); Pop(0)

0x129: PushEmpty(float, float)
0x12a: PushEmpty(bool)
0x12b: Call2 0x743

0x12c: Pop(0)
0x12d: Pop(1); Push((bool) Stack[-1] == 0)
0x12e: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12f: @ Hold()
0x130: Pop(0)
0x131: GOTO 0x12a

0x132: Push((int) 3)
0x133: @ rand(Stack[-2], Stack[-1])
0x134: Pop(1)
0x135: Push((int) 3)
0x136: Pop(1); Push(Stack[-2] + Stack[-1]);
0x137: @ Sleep(Stack[-1])
0x138: Pop(1)
0x139: PushEmpty()
0x13a: Call2 0x171

0x13b: Pop(0)
0x13c: GOTO 0x12a

0x13d: Return(); Pop(2)

0x13e: PushEmpty(bool, bool)
0x13f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x140: @ IsLoaded(Stack[-1])
0x141: Pop(0)
0x142: PushEmpty(bool)
0x143: Stack[-1] = (bool) 0
0x144: Pop(0); Push((bool) Stack[-2] == 0)
0x145: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x146: PushEmpty(bool)
0x147: Call2 0x16f

0x148: Pop(0)
0x149: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x14a: Stack[-1] = (bool) 1
0x14b: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14c: PushEmpty(object)
0x14d: Call2 0x7f9

0x14e: Pop(0)
0x14f: @ RemoveActor(Stack[-1])
0x150: Pop(1)
0x151: Return(); Pop(2)

0x152: PushEmpty()
0x153: Push("cleanup")
0x154: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x156: PushEmpty()
0x157: Call2 0x13e

0x158: Pop(0)
0x159: Return(); Pop(0)

0x15a: @ StopGroup0()
0x15b: Pop(0)
0x15c: @ sync()
0x15d: Pop(0)
0x15e: Return(); Pop(0)

0x15f: PushEmpty(bool)
0x160: Stack[-1] = (bool) 0
0x161: Push( Stack[0 + Tasks[-1].StackPointer] )
0x162: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x163: PushEmpty(bool)
0x164: Call2 0x16f

0x165: Pop(0)
0x166: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x167: Stack[-1] = (bool) 1
0x168: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x169: PushEmpty(object)
0x16a: Call2 0x7f9

0x16b: Pop(0)
0x16c: @ RemoveActor(Stack[-1])
0x16d: Pop(1)
0x16e: Return(); Pop(0)

0x16f: Stack[-1] = (bool) 1
0x170: Return(); Pop(0)

0x171: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x172: @ WaitForAnimEnd()
0x173: Pop(0)
0x174: PushEmpty(bool)
0x175: Call2 0x743

0x176: Pop(0)
0x177: Pop(1); Push((bool) Stack[-1] == 0)
0x178: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x179: Return(); Pop(14)

0x17a: PushEmpty(int)
0x17b: Call2 0x853

0x17c: Stack[-8] = Stack[-1]
0x17d: Pop(1)
0x17e: Stack[-6] = (int) 0
0x17f: PushEmpty(bool)
0x180: Stack[-1] = (bool) 0
0x181: Push((int) 5)
0x182: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x183: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x184: PushEmpty(bool)
0x185: Call2 0x743

0x186: Pop(0)
0x187: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x188: Stack[-1] = (bool) 1
0x189: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x18a: Push((int) 3)
0x18b: @ irand(Stack[-6], Stack[-1])
0x18c: Pop(1)
0x18d: Push((int) 0)
0x18e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x190: Push(Stack[-7])
0x191: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x192: @ irand(Stack[-4], Stack[-7])
0x193: Pop(0)
0x194: Push("all")
0x195: PushEmpty(string, int)
0x196: Stack[-1] = Stack[-7]
0x197: Call2 0x84c

0x198: Pop(1)
0x199: @ PlayAnimation(Stack[-2], Stack[-1])
0x19a: Pop(2)
0x19b: @ WaitForAnimEnd(Stack[-3])
0x19c: Pop(0)
0x19d: Pop(0); Push((bool) Stack[-3] == 0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19f: GOTO 0x1bd

0x1a0: GOTO 0x1b2

0x1a1: Push((int) 1)
0x1a2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1a4: Push((int) 4)
0x1a5: @ rand(Stack[-3], Stack[-1])
0x1a6: Pop(1)
0x1a7: Push((int) 1)
0x1a8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1a9: @ Sleep(Stack[-1], Stack[-2])
0x1aa: Pop(1)
0x1ab: Pop(0); Push((bool) Stack[-1] == 0)
0x1ac: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1ad: GOTO 0x1bd

0x1ae: GOTO 0x1b2

0x1af: Push(Stack[-6])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b1: GOTO 0x1bd

0x1b2: PushEmpty(bool)
0x1b3: Call2 0x1c0

0x1b4: Pop(0)
0x1b5: Pop(1); Push((bool) Stack[-1] == 0)
0x1b6: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b7: GOTO 0x1bd

0x1b8: @ ResetAAS()
0x1b9: Pop(0)
0x1ba: Push((int) 1)
0x1bb: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1bc: GOTO 0x17f

0x1bd: @ ResetAAS()
0x1be: Pop(0)
0x1bf: Return(); Pop(14)

0x1c0: Stack[-1] = (bool) 1
0x1c1: Return(); Pop(0)

0x1c2: @ StopAnimation()
0x1c3: Pop(0)
0x1c4: @ StopGroup0()
0x1c5: Pop(0)
0x1c6: Return(); Pop(0)

0x1c7: PushEmpty()
0x1c8: PushEmpty(object, bool, float)
0x1c9: Stack[-3] = Stack[-4]
0x1ca: Stack[-2] = (bool) 1
0x1cb: Stack[-1] = (float) 180.0
0x1cc: Call2 0x1d9

0x1cd: Pop(3)
0x1ce: Push((int) 1)
0x1cf: @ Sleep(Stack[-1])
0x1d0: Pop(1)
0x1d1: GOTO 0x1c8

0x1d2: Return(); Pop(0)

0x1d3: PushEmpty()
0x1d4: Stack[-3] = (float) 0.1
0x1d5: Return(); Pop(0)

0x1d6: PushEmpty()
0x1d7: Stack[-3] = (int) 0
0x1d8: Return(); Pop(0)

0x1d9: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x1da: PushEmpty()
0x1db: Call2 0x2be

0x1dc: Pop(0)
0x1dd: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x1de: Push("@GetAttackDistance")
0x1df: Push((int) 1)
0x1e0: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e2: @@ GetAttackDistance(Stack[-11])
0x1e3: Pop(0)
0x1e4: Push((int) 50)
0x1e5: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x1e6: GOTO 0x1e8

0x1e7: Stack[-11] = Stack[-23]
0x1e8: Push((int) 150)
0x1e9: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1eb: Stack[-11] = (int) 150
0x1ec: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1ed: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x1ee: @ IsPlayerActor(Stack[-0], Stack[-8])
0x1ef: Pop(0)
0x1f0: Push(Stack[-8])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f2: Push("attack")
0x1f3: @ PlayGlobalMusic(Stack[-1])
0x1f4: Pop(1)
0x1f5: PushEmpty(object)
0x1f6: Call2 0x7f9

0x1f7: Pop(0)
0x1f8: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x1f9: Pop(1)
0x1fa: Push(Stack[-24])
0x1fb: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fc: Stack[-7] = (bool) 0
0x1fd: GOTO 0x1ff

0x1fe: Stack[-7] = (bool) 1
0x1ff: Push((float)400.0)
0x200: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x201: PushEmpty(bool)
0x202: Stack[-1] = (bool) 0
0x203: PushEmpty(bool, object)
0x204: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x205: Call2 0x6a2

0x206: Pop(1)
0x207: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x208: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x209: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x20a: Stack[-1] = (bool) 1
0x20b: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x20c: PushEmpty()
0x20d: Call2 0x45b

0x20e: Pop(0)
0x20f: @@ GetPFPosition(Stack[-10])
0x210: Pop(0)
0x211: @ GetPFPosition(Stack[-9])
0x212: Pop(0)
0x213: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x214: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x215: Pop(0); Push(Stack[-6] * Stack[-6]);
0x216: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x217: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x218: PushEmpty(bool, object, float, float, bool, bool)
0x219: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x21a: Stack[-4] = Stack[-17]
0x21b: Stack[-3] = (float) 10000.0
0x21c: Stack[-2] = (bool) 1
0x21d: Stack[-1] = (bool) 0
0x21e: Push(-6, 3); TaskCall(4)
0x21f: Call2 0x46f

0x220: Pop(-6, 3); TaskReturn
0x221: Pop(5)
0x222: Pop(1); Push((bool) Stack[-1] == 0)
0x223: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x224: GOTO 0x2ad

0x225: Stack[-7] = (bool) 0
0x226: GOTO 0x2ac

0x227: Pop(0); Push(Stack[-23] * Stack[-23]);
0x228: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x229: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x22a: @@ GetPFPosition(Stack[-3])
0x22b: Pop(0)
0x22c: @ CanReachByPF(Stack[-2], Stack[-3])
0x22d: Pop(0)
0x22e: Pop(0); Push((bool) Stack[-2] == 0)
0x22f: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x230: PushEmpty(bool, object, float, float, bool, bool)
0x231: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x232: Stack[-4] = Stack[-17]
0x233: Stack[-3] = (float) 10000.0
0x234: Stack[-2] = (bool) 1
0x235: Stack[-1] = (bool) 0
0x236: Push(-6, 3); TaskCall(4)
0x237: Call2 0x46f

0x238: Pop(-6, 3); TaskReturn
0x239: Pop(5)
0x23a: Pop(1); Push((bool) Stack[-1] == 0)
0x23b: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23c: GOTO 0x2ad

0x23d: Stack[-7] = (bool) 0
0x23e: GOTO 0x201

0x23f: Pop(0); Push((bool) Stack[-7] == 0)
0x240: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x241: PushEmpty(object)
0x242: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x243: Call2 0x738

0x244: Pop(1)
0x245: Push("all")
0x246: Push("attack_on")
0x247: @ PlayAnimation(Stack[-2], Stack[-1])
0x248: Pop(2)
0x249: @ WaitForAnimEnd()
0x24a: Pop(0)
0x24b: PushEmpty()
0x24c: Call2 0x45b

0x24d: Pop(0)
0x24e: @ StopAsync()
0x24f: Pop(0)
0x250: Stack[-7] = (bool) 1
0x251: PushEmpty(bool, object)
0x252: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x253: Call2 0x6a2

0x254: Pop(1)
0x255: Pop(1); Push((bool) Stack[-1] == 0)
0x256: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x257: GOTO 0x2ad

0x258: @ rand(Stack[-1])
0x259: Pop(0)
0x25a: PushEmpty(bool)
0x25b: Stack[-1] = (bool) 1
0x25c: Push((float)0.25)
0x25d: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x25e: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x25f: PushEmpty(bool)
0x260: Call2 0x430

0x261: Pop(0)
0x262: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x263: Stack[-1] = (bool) 0
0x264: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x265: @ Face(Stack[-0])
0x266: Pop(0)
0x267: PushEmpty()
0x268: Call2 0x462

0x269: Pop(0)
0x26a: Push("all")
0x26b: Push("attack_stay")
0x26c: @ PlayAnimation(Stack[-2], Stack[-1])
0x26d: Pop(2)
0x26e: PushEmpty(bool, float)
0x26f: Stack[-1] = Stack[-25]
0x270: Call2 0x3ac

0x271: Pop(2)
0x272: @ StopAsync()
0x273: Pop(0)
0x274: GOTO 0x2a3

0x275: @ Face(Stack[-0])
0x276: Pop(0)
0x277: Push("all")
0x278: Push("fjump")
0x279: @ PlayAnimation(Stack[-2], Stack[-1])
0x27a: Pop(2)
0x27b: @ WaitForAnimEnd()
0x27c: Pop(0)
0x27d: PushEmpty()
0x27e: Call2 0x45b

0x27f: Pop(0)
0x280: Push(CVector(0.0, 0.0, 0.0))
0x281: @ SetSpeed(Stack[-1])
0x282: Pop(1)
0x283: @ Stop()
0x284: Pop(0)
0x285: @ StopAsync()
0x286: Pop(0)
0x287: PushEmpty(bool)
0x288: Call2 0x430

0x289: Pop(0)
0x28a: Pop(1); Push((bool) Stack[-1] == 0)
0x28b: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x28c: PushEmpty(bool, object)
0x28d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28e: Call2 0x6a2

0x28f: Pop(1)
0x290: Pop(1); Push((bool) Stack[-1] == 0)
0x291: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x292: GOTO 0x2ad

0x293: @@ GetPFPosition(Stack[-10])
0x294: Pop(0)
0x295: @ GetPFPosition(Stack[-9])
0x296: Pop(0)
0x297: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x298: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x299: Pop(0); Push(Stack[-23] * Stack[-23]);
0x29a: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x29c: PushEmpty(bool, float)
0x29d: Stack[-1] = Stack[-25]
0x29e: Call2 0x308

0x29f: Pop(1)
0x2a0: Pop(1); Push((bool) Stack[-1] == 0)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a2: GOTO 0x2ad

0x2a3: GOTO 0x2ac

0x2a4: PushEmpty(bool, float)
0x2a5: Stack[-1] = Stack[-25]
0x2a6: Call2 0x308

0x2a7: Pop(1)
0x2a8: Pop(1); Push((bool) Stack[-1] == 0)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2aa: GOTO 0x2ad

0x2ab: Stack[-7] = (bool) 1
0x2ac: GOTO 0x201

0x2ad: @ WaitForAnimEnd()
0x2ae: Pop(0)
0x2af: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b1: Return(); Pop(22)

0x2b2: Push("all")
0x2b3: Push("attack_off")
0x2b4: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b5: Pop(2)
0x2b6: @ WaitForAnimEnd()
0x2b7: Pop(0)
0x2b8: Push(Stack[-8])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2ba: Push((float)2.0)
0x2bb: @ Sleep(Stack[-1])
0x2bc: Pop(1)
0x2bd: Return(); Pop(22)

0x2be: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x2bf: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x2c0: Push("all")
0x2c1: Push("attack_begin")
0x2c2: Push((int) 1)
0x2c3: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x2c4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2c5: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x2c6: Pop(2)
0x2c7: Pop(0); Push((bool) Stack[-3] == 0)
0x2c8: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c9: GOTO 0x2cd

0x2ca: Push((int) 1)
0x2cb: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x2cc: GOTO 0x2c0

0x2cd: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x2ce: Push("attack")
0x2cf: Push((int) 1)
0x2d0: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x2d1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d2: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x2d3: Pop(1)
0x2d4: Pop(0); Push((bool) Stack[-2] == 0)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d6: GOTO 0x2da

0x2d7: Push((int) 1)
0x2d8: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x2d9: GOTO 0x2ce

0x2da: Push("all")
0x2db: Push("bjump")
0x2dc: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x2dd: Pop(2)
0x2de: Push(CvectorIndex(Stack[-1], 2))
0x2df: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x2e0: Return(); Pop(6)

0x2e1: PushEmpty(object, float, float, object, float, float)
0x2e2: Push((float)0.9)
0x2e3: Pop(1); Push(Stack[-9] * Stack[-1]);
0x2e4: @ GetVictim(Stack[-1], Stack[-4])
0x2e5: Pop(1)
0x2e6: @ ReportAttack(Stack[-0])
0x2e7: Pop(0)
0x2e8: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x2e9: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x2ea: PushEmpty(float, object, int)
0x2eb: Stack[-2] = Stack[-6]
0x2ec: Stack[-1] = Stack[-10]
0x2ed: Call2 0x1d3

0x2ee: Stack[-5] = Stack[-3]
0x2ef: Pop(3)
0x2f0: PushEmpty(float, object, float, int)
0x2f1: Stack[-3] = Stack[-7]
0x2f2: Stack[-2] = Stack[-6]
0x2f3: PushEmpty(int, object, int)
0x2f4: Stack[-2] = Stack[-10]
0x2f5: Stack[-1] = Stack[-14]
0x2f6: Call2 0x1d6

0x2f7: Stack[-4] = Stack[-3]
0x2f8: Pop(3)
0x2f9: Call2 0x630

0x2fa: Stack[-5] = Stack[-4]
0x2fb: Pop(4)
0x2fc: PushEmpty(int)
0x2fd: Call2 0x460

0x2fe: Pop(0)
0x2ff: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x300: Pop(1)
0x301: PushEmpty(object, float)
0x302: Stack[-2] = Stack[-5]
0x303: Stack[-1] = Stack[-3]
0x304: Call2 0x467

0x305: Pop(2)
0x306: Return(); Pop(6)

0x307: Stack[-3] = 0
0x308: PushEmpty(int, bool, int, string, int, bool, int, string)
0x309: PushEmpty()
0x30a: Call2 0x45b

0x30b: Pop(0)
0x30c: @ irand(Stack[-4], Stack[-1])
0x30d: Pop(0)
0x30e: Push((int) 1)
0x30f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x310: @ Face(Stack[-0])
0x311: Pop(0)
0x312: Push((bool) 1)
0x313: @ SetAttackState(Stack[-1])
0x314: Pop(1)
0x315: PushEmpty()
0x316: Call2 0x841

0x317: Pop(0)
0x318: Push("all")
0x319: Push("attack_begin")
0x31a: Pop(1); Push(Stack[-1] + Stack[-6]);
0x31b: @ PlayAnimation(Stack[-2], Stack[-1])
0x31c: Pop(2)
0x31d: @ WaitForAnimEnd()
0x31e: Pop(0)
0x31f: PushEmpty()
0x320: Call2 0x43b

0x321: Pop(0)
0x322: PushEmpty(bool, object)
0x323: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x324: Call2 0x6a2

0x325: Pop(1)
0x326: Pop(1); Push((bool) Stack[-1] == 0)
0x327: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x328: @ StopAsync()
0x329: Pop(0)
0x32a: Stack[-10] = (bool) 0
0x32b: Return(); Pop(8)

0x32c: PushEmpty(float, int)
0x32d: Stack[-2] = Stack[-11]
0x32e: Stack[-1] = Stack[-6]
0x32f: Call2 0x2e1

0x330: Pop(2)
0x331: Push("all")
0x332: Push("attack_middle")
0x333: Pop(1); Push(Stack[-1] + Stack[-6]);
0x334: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x335: Pop(2)
0x336: Push(Stack[-3])
0x337: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x338: PushEmpty()
0x339: Call2 0x841

0x33a: Pop(0)
0x33b: Push("all")
0x33c: Push("attack_middle")
0x33d: Pop(1); Push(Stack[-1] + Stack[-6]);
0x33e: @ PlayAnimation(Stack[-2], Stack[-1])
0x33f: Pop(2)
0x340: @ WaitForAnimEnd()
0x341: Pop(0)
0x342: PushEmpty()
0x343: Call2 0x45b

0x344: Pop(0)
0x345: PushEmpty(bool, object)
0x346: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x347: Call2 0x6a2

0x348: Pop(1)
0x349: Pop(1); Push((bool) Stack[-1] == 0)
0x34a: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34b: @ StopAsync()
0x34c: Pop(0)
0x34d: Stack[-10] = (bool) 0
0x34e: Return(); Pop(8)

0x34f: PushEmpty(float, int)
0x350: Stack[-2] = Stack[-11]
0x351: Stack[-1] = Stack[-6]
0x352: Call2 0x2e1

0x353: Pop(2)
0x354: Stack[-2] = (int) 1
0x355: Push("attack_middle")
0x356: Pop(1); Push(Stack[-1] + Stack[-5]);
0x357: Push("_")
0x358: Pop(2); Push(Stack[-2] + Stack[-1]);
0x359: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x35a: Push("all")
0x35b: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x35c: Pop(1)
0x35d: Pop(0); Push((bool) Stack[-3] == 0)
0x35e: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35f: GOTO 0x37d

0x360: PushEmpty()
0x361: Call2 0x841

0x362: Pop(0)
0x363: Push("all")
0x364: @ PlayAnimation(Stack[-1], Stack[-2])
0x365: Pop(1)
0x366: @ WaitForAnimEnd()
0x367: Pop(0)
0x368: PushEmpty()
0x369: Call2 0x45b

0x36a: Pop(0)
0x36b: PushEmpty(bool, object)
0x36c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x36d: Call2 0x6a2

0x36e: Pop(1)
0x36f: Pop(1); Push((bool) Stack[-1] == 0)
0x370: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x371: @ StopAsync()
0x372: Pop(0)
0x373: Stack[-10] = (bool) 0
0x374: Return(); Pop(8)

0x375: PushEmpty(float, int)
0x376: Stack[-2] = Stack[-11]
0x377: Stack[-1] = Stack[-6]
0x378: Call2 0x2e1

0x379: Pop(2)
0x37a: Push((int) 1)
0x37b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x37c: GOTO 0x355

0x37d: Push((bool) 0)
0x37e: @ SetAttackState(Stack[-1])
0x37f: Pop(1)
0x380: Push("all")
0x381: Push("attack_end")
0x382: Pop(1); Push(Stack[-1] + Stack[-6]);
0x383: @ PlayAnimation(Stack[-2], Stack[-1])
0x384: Pop(2)
0x385: PushEmpty(bool)
0x386: Call2 0x469

0x387: Pop(0)
0x388: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x389: PushEmpty(bool, float)
0x38a: Stack[-1] = (float) 0.75
0x38b: Call2 0x391

0x38c: Pop(2)
0x38d: @ StopAsync()
0x38e: Pop(0)
0x38f: Stack[-10] = (bool) 1
0x390: Return(); Pop(8)

0x391: PushEmpty(float, bool, float, bool)
0x392: @ rand(Stack[-2])
0x393: Pop(0)
0x394: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x395: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x396: @ IsAnimationPlaying(Stack[-1])
0x397: Pop(0)
0x398: Pop(0); Push((bool) Stack[-1] == 0)
0x399: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x39a: GOTO 0x3a4

0x39b: PushEmpty(bool)
0x39c: Call2 0x3f3

0x39d: Pop(0)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39f: Stack[-6] = (bool) 1
0x3a0: Return(); Pop(4)

0x3a1: @ sync()
0x3a2: Pop(0)
0x3a3: GOTO 0x396

0x3a4: GOTO 0x3aa

0x3a5: @ WaitForAnimEnd()
0x3a6: Pop(0)
0x3a7: PushEmpty()
0x3a8: Call2 0x45b

0x3a9: Pop(0)
0x3aa: Stack[-6] = (bool) 0
0x3ab: Return(); Pop(4)

0x3ac: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x3ad: @ IsAnimationPlaying(Stack[-5])
0x3ae: Pop(0)
0x3af: Pop(0); Push((bool) Stack[-5] == 0)
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3b1: GOTO 0x3d2

0x3b2: PushEmpty(bool)
0x3b3: Call2 0x3f3

0x3b4: Pop(0)
0x3b5: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b6: Stack[-12] = (bool) 1
0x3b7: Return(); Pop(10)

0x3b8: PushEmpty(bool, object)
0x3b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ba: Call2 0x6a2

0x3bb: Pop(1)
0x3bc: Pop(1); Push((bool) Stack[-1] == 0)
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3be: Stack[-12] = (bool) 0
0x3bf: Return(); Pop(10)

0x3c0: @@ GetPFPosition(Stack[-4])
0x3c1: Pop(0)
0x3c2: @ GetPFPosition(Stack[-3])
0x3c3: Pop(0)
0x3c4: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x3c5: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x3c6: Pop(0); Push(Stack[-11] * Stack[-11]);
0x3c7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3c8: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3c9: PushEmpty(bool, float)
0x3ca: Stack[-1] = Stack[-13]
0x3cb: Call2 0x308

0x3cc: Pop(2)
0x3cd: Stack[-12] = (bool) 1
0x3ce: Return(); Pop(10)

0x3cf: @ sync()
0x3d0: Pop(0)
0x3d1: GOTO 0x3ad

0x3d2: PushEmpty()
0x3d3: Call2 0x45b

0x3d4: Pop(0)
0x3d5: Stack[-12] = (bool) 0
0x3d6: Return(); Pop(10)

0x3d7: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x3d8: PushEmpty(bool, object)
0x3d9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3da: Call2 0x6a2

0x3db: Pop(1)
0x3dc: Pop(1); Push((bool) Stack[-1] == 0)
0x3dd: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3de: Stack[-11] = (bool) 0
0x3df: Return(); Pop(10)

0x3e0: PushEmpty(bool)
0x3e1: Call2 0x430

0x3e2: Pop(0)
0x3e3: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3e4: @@ GetPFPosition(Stack[-5])
0x3e5: Pop(0)
0x3e6: @ GetPFPosition(Stack[-4])
0x3e7: Pop(0)
0x3e8: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3e9: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3ea: @@ GetAttackDistance(Stack[-1])
0x3eb: Pop(0)
0x3ec: Push((int) 50)
0x3ed: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3ee: Pop(0); Push(Stack[-1] * Stack[-1]);
0x3ef: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x3f0: Return(); Pop(10)

0x3f1: Stack[-11] = (bool) 0
0x3f2: Return(); Pop(10)

0x3f3: PushEmpty(bool)
0x3f4: Stack[-1] = (bool) 0
0x3f5: PushEmpty(bool)
0x3f6: Call2 0x3d7

0x3f7: Pop(0)
0x3f8: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3f9: PushEmpty(bool)
0x3fa: Call2 0x403

0x3fb: Pop(0)
0x3fc: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3fd: Stack[-1] = (bool) 1
0x3fe: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3ff: Stack[-1] = (bool) 1
0x400: Return(); Pop(0)

0x401: Stack[-1] = (bool) 0
0x402: Return(); Pop(0)

0x403: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x404: @ GetScene(Stack[-5])
0x405: Pop(0)
0x406: Stack[-4] = (bool) 0
0x407: PushEmpty(cvector, object)
0x408: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x409: Call2 0x611

0x40a: Pop(1)
0x40b: Pop(1); Push(( -Stack[-1])
0x40c: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x40d: Pop(1)
0x40e: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x40f: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x410: GOTO 0x42d

0x411: @ Face(Stack[-0])
0x412: Pop(0)
0x413: Push("all")
0x414: Push("bjump")
0x415: @ PlayAnimation(Stack[-2], Stack[-1])
0x416: Pop(2)
0x417: @@ GetPFPosition(Stack[-2])
0x418: Pop(0)
0x419: @ GetPFPosition(Stack[-1])
0x41a: Pop(0)
0x41b: @ WaitForAnimEnd()
0x41c: Pop(0)
0x41d: PushEmpty()
0x41e: Call2 0x45b

0x41f: Pop(0)
0x420: @ StopAsync()
0x421: Pop(0)
0x422: Push(CVector(0.0, 0.0, 0.0))
0x423: @ SetSpeed(Stack[-1])
0x424: Pop(1)
0x425: Stack[-4] = (bool) 1
0x426: PushEmpty(bool)
0x427: Call2 0x3d7

0x428: Pop(0)
0x429: Pop(1); Push((bool) Stack[-1] == 0)
0x42a: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x42b: GOTO 0x42d

0x42c: GOTO 0x407

0x42d: Stack[-11] = Stack[-4]
0x42e: Return(); Pop(10)

0x42f: Stack[-5] = 0
0x430: PushEmpty(bool, bool)
0x431: Push("IsAttacking")
0x432: Push((int) 1)
0x433: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x434: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x435: @@ IsAttacking(Stack[-1])
0x436: Pop(0)
0x437: Stack[-3] = Stack[-1]
0x438: Return(); Pop(2)

0x439: Stack[-3] = (bool) 0
0x43a: Return(); Pop(2)

0x43b: PushEmpty(float, int, float, int)
0x43c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x43d: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x43e: Return(); Pop(4)

0x43f: Push( Stack[5 + Tasks[-1].StackPointer] )
0x440: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x441: Push((int) -1)
0x442: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x443: Push((int) 0)
0x444: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x445: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x446: Return(); Pop(4)

0x447: @ rand(Stack[-2])
0x448: Pop(0)
0x449: PushEmpty(float)
0x44a: Call2 0x46d

0x44b: Pop(0)
0x44c: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x44e: @ irand(Stack[-1], Stack[-2])
0x44f: Pop(0)
0x450: Push((int) 1)
0x451: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x452: Push("attack")
0x453: Pop(1); Push(Stack[-1] + Stack[-2]);
0x454: @ Speak(Stack[-1])
0x455: Pop(1)
0x456: PushEmpty(int)
0x457: Call2 0x46b

0x458: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x459: Pop(1)
0x45a: Return(); Pop(4)

0x45b: PushEmpty(object)
0x45c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x45d: Call2 0x838

0x45e: Pop(1)
0x45f: Return(); Pop(0)

0x460: Stack[-1] = (int) 0
0x461: Return(); Pop(0)

0x462: PushEmpty(string)
0x463: Stack[-1] = "attack_stay"
0x464: Call2 0x7d0

0x465: Pop(1)
0x466: Return(); Pop(0)

0x467: PushEmpty()
0x468: Return(); Pop(0)

0x469: Stack[-1] = (bool) 1
0x46a: Return(); Pop(0)

0x46b: Stack[-1] = (int) 1
0x46c: Return(); Pop(0)

0x46d: Stack[-1] = (float) 0.5
0x46e: Return(); Pop(0)

0x46f: PushEmpty(bool, bool, bool, bool)
0x470: PushEmpty(object)
0x471: Stack[-1] = Stack[-10]
0x472: Call2 0x838

0x473: Pop(1)
0x474: Push((int) 1)
0x475: Push((int) 5)
0x476: @ SetTimer(Stack[-2], Stack[-1])
0x477: Pop(2)
0x478: @ CanSee(Stack[-2], Stack[-9])
0x479: Pop(0)
0x47a: Push(Stack[-2])
0x47b: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x47c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x47d: PushEmpty(object)
0x47e: Stack[-1] = Stack[-10]
0x47f: Call2 0x7be

0x480: Pop(1)
0x481: GOTO 0x483

0x482: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x483: PushEmpty(bool, object)
0x484: Stack[-1] = Stack[-11]
0x485: Call2 0x61f

0x486: Pop(1)
0x487: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x488: PushEmpty(object)
0x489: Call2 0x7f9

0x48a: Pop(0)
0x48b: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x48c: Pop(1)
0x48d: PushEmpty(bool, object, float, float, bool, bool)
0x48e: Stack[-5] = Stack[-15]
0x48f: Stack[-4] = Stack[-14]
0x490: Stack[-3] = Stack[-13]
0x491: Stack[-2] = Stack[-12]
0x492: Stack[-1] = Stack[-11]
0x493: Call2 0x4d8

0x494: Stack[-7] = Stack[-6]
0x495: Pop(6)
0x496: Push( Stack[2 + Tasks[-1].StackPointer] )
0x497: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x498: Push("head")
0x499: @ UnlookAsync(Stack[-1])
0x49a: Pop(1)
0x49b: Push((int) 1)
0x49c: @ KillTimer(Stack[-1])
0x49d: Pop(1)
0x49e: Stack[-10] = Stack[-1]
0x49f: Return(); Pop(4)

0x4a0: PushEmpty()
0x4a1: Push((int) 1)
0x4a2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a3: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a4: PushEmpty(object)
0x4a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4a6: Call2 0x838

0x4a7: Pop(1)
0x4a8: GOTO 0x4ad

0x4a9: PushEmpty(int)
0x4aa: Stack[-1] = Stack[-2]
0x4ab: Call2 0x53e

0x4ac: Pop(1)
0x4ad: Return(); Pop(0)

0x4ae: Push((int) 1)
0x4af: @ KillTimer(Stack[-1])
0x4b0: Pop(1)
0x4b1: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4b4: Push("head")
0x4b5: @ UnlookAsync(Stack[-1])
0x4b6: Pop(1)
0x4b7: PushEmpty()
0x4b8: Call2 0x554

0x4b9: Pop(0)
0x4ba: Return(); Pop(0)

0x4bb: PushEmpty()
0x4bc: PushEmpty(bool)
0x4bd: Stack[-1] = (bool) 0
0x4be: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4c0: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4c2: Stack[-1] = (bool) 1
0x4c3: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4c4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4c5: PushEmpty(object)
0x4c6: Stack[-1] = Stack[-2]
0x4c7: Call2 0x7be

0x4c8: Pop(1)
0x4c9: Return(); Pop(0)

0x4ca: PushEmpty()
0x4cb: PushEmpty(bool)
0x4cc: Stack[-1] = (bool) 0
0x4cd: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x4ce: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4cf: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4d1: Stack[-1] = (bool) 1
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4d4: Push("head")
0x4d5: @ UnlookAsync(Stack[-1])
0x4d6: Pop(1)
0x4d7: Return(); Pop(0)

0x4d8: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x4d9: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4da: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x4db: Stack[-7] = Stack[-17]
0x4dc: PushEmpty(bool, object)
0x4dd: Stack[-1] = Stack[-23]
0x4de: Call2 0x564

0x4df: Pop(1)
0x4e0: Pop(1); Push((bool) Stack[-1] == 0)
0x4e1: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e2: Stack[-22] = (bool) 0
0x4e3: Return(); Pop(16)

0x4e4: @@ GetPosition(Stack[-5])
0x4e5: Pop(0)
0x4e6: @ GetPosition(Stack[-4])
0x4e7: Pop(0)
0x4e8: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x4e9: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x4ea: PushEmpty(bool)
0x4eb: Stack[-1] = (bool) 0
0x4ec: Push((int) 0)
0x4ed: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x4ee: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4ef: Pop(0); Push(Stack[-20] * Stack[-20]);
0x4f0: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4f2: Stack[-1] = (bool) 1
0x4f3: IF (Stack[-1] == 0) GOTO 0x4f8; Pop(1)

0x4f4: @ Stop()
0x4f5: Pop(0)
0x4f6: Stack[-22] = (bool) 0
0x4f7: Return(); Pop(16)

0x4f8: Pop(0); Push(Stack[-20] * Stack[-20]);
0x4f9: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x4fa: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x4fb: @@ GetPFPosition(Stack[-5])
0x4fc: Pop(0)
0x4fd: @ FindPathTo(Stack[-1], Stack[-5])
0x4fe: Pop(0)
0x4ff: Pop(0); Push(( Stack[-1] != 0 )
0x500: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x501: Stack[-6] = Stack[-1]
0x502: Stack[-1] = 0
0x503: Pop(0); Push(( Stack[-6] != 0 )
0x504: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x505: Push(Stack[-7])
0x506: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x507: Stack[-7] = (bool) 0
0x508: @ RotatePath(Stack[-6], Stack[-8])
0x509: Pop(0)
0x50a: Pop(0); Push((bool) Stack[-8] == 0)
0x50b: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50c: GOTO 0x53c

0x50d: Push((int) 0)
0x50e: Push((float)0.3)
0x50f: @ SetTimer(Stack[-2], Stack[-1])
0x510: Pop(2)
0x511: PushEmpty(string)
0x512: Call2 0x56b

0x513: Pop(0)
0x514: PushEmpty(string)
0x515: Call2 0x56d

0x516: Pop(0)
0x517: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x518: Pop(2)
0x519: Pop(0); Push((bool) Stack[-8] == 0)
0x51a: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x51b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x51c: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x51d: Stack[-6] = 0
0x51e: GOTO 0x53c

0x51f: GOTO 0x521

0x520: GOTO 0x53b

0x521: GOTO 0x523

0x522: Stack[-6] = 0
0x523: GOTO 0x534

0x524: Push((int) 0)
0x525: @ KillTimer(Stack[-1])
0x526: Pop(1)
0x527: Push((float)0.5)
0x528: @ Sleep(Stack[-1], Stack[-9])
0x529: Pop(1)
0x52a: Pop(0); Push((bool) Stack[-8] == 0)
0x52b: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x52c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x52d: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x52e: Stack[-6] = 0
0x52f: GOTO 0x53c

0x530: Push((int) 0)
0x531: Push((float)0.3)
0x532: @ SetTimer(Stack[-2], Stack[-1])
0x533: Pop(2)
0x534: Stack[-1] = 0
0x535: GOTO 0x53a

0x536: Push((int) 0)
0x537: @ KillTimer(Stack[-1])
0x538: Pop(1)
0x539: GOTO 0x53c

0x53a: Stack[-6] = 0
0x53b: GOTO 0x4dc

0x53c: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x53d: Return(); Pop(16)

0x53e: PushEmpty()
0x53f: Push((int) 0)
0x540: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x541: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x542: Return(); Pop(0)

0x543: PushEmpty(bool, object)
0x544: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x545: Call2 0x564

0x546: Pop(1)
0x547: Pop(1); Push((bool) Stack[-1] == 0)
0x548: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x549: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x54a: Push((int) 0)
0x54b: @ KillTimer(Stack[-1])
0x54c: Pop(1)
0x54d: @ Stop()
0x54e: Pop(0)
0x54f: Return(); Pop(0)

0x550: PushEmpty()
0x551: @ RequestClearPath(Stack[-1])
0x552: Pop(0)
0x553: Return(); Pop(0)

0x554: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x555: Push((int) 0)
0x556: @ KillTimer(Stack[-1])
0x557: Pop(1)
0x558: @ Stop()
0x559: Pop(0)
0x55a: Return(); Pop(0)

0x55b: PushEmpty()
0x55c: PushEmpty()
0x55d: Call2 0x4ae

0x55e: Pop(0)
0x55f: PushEmpty(object)
0x560: Stack[-1] = Stack[-2]
0x561: Call2 0x8c0

0x562: Pop(1)
0x563: Return(); Pop(0)

0x564: PushEmpty()
0x565: PushEmpty(bool, object)
0x566: Stack[-1] = Stack[-3]
0x567: Call2 0x6a2

0x568: Stack[-4] = Stack[-2]
0x569: Pop(2)
0x56a: Return(); Pop(0)

0x56b: Stack[-1] = "walk"
0x56c: Return(); Pop(0)

0x56d: Stack[-1] = "run"
0x56e: Return(); Pop(0)

0x56f: PushEmpty()
0x570: EventDisable(0)
0x571: PushEmpty(object)
0x572: Stack[-1] = Stack[-2]
0x573: Call2 0x588

0x574: Pop(1)
0x575: Push((int) 50)
0x576: Push((int) 40)
0x577: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x578: Pop(2)
0x579: EventEnable(0)
0x57a: @ Hold()
0x57b: Pop(0)
0x57c: GOTO 0x57a

0x57d: Return(); Pop(0)

0x57e: PushEmpty(bool, bool)
0x57f: @ IsOverrideActive(Stack[-1])
0x580: Pop(0)
0x581: Pop(0); Push((bool) Stack[-1] == 0)
0x582: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x583: PushEmpty(object)
0x584: Stack[-1] = Stack[-4]
0x585: Call2 0x882

0x586: Pop(1)
0x587: Return(); Pop(2)

0x588: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x589: Pop(0); Push((bool) Stack[-21] == 0)
0x58a: IF (Stack[-1] == 0) GOTO 0x590; Pop(1)

0x58b: PushEmpty(string)
0x58c: Stack[-1] = "fdie"
0x58d: Call2 0x5e3

0x58e: Pop(1)
0x58f: GOTO 0x5e2

0x590: @@ GetPosition(Stack[-10])
0x591: Pop(0)
0x592: @ GetPosition(Stack[-9])
0x593: Pop(0)
0x594: @ GetDirection(Stack[-8])
0x595: Pop(0)
0x596: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x597: Push(CvectorIndex(Stack[-7], 0))
0x598: Push(CvectorIndex(Stack[-9], 0))
0x599: Pop(2); Push(Stack[-2] * Stack[-1]);
0x59a: Push(CvectorIndex(Stack[-8], 2))
0x59b: Push(CvectorIndex(Stack[-10], 2))
0x59c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x59d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x59e: Push((int) 0)
0x59f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x5a1: Stack[-6] = "fdie"
0x5a2: GOTO 0x5a4

0x5a3: Stack[-6] = "bdie"
0x5a4: @ RemoveRTEnvelope()
0x5a5: Pop(0)
0x5a6: @ SetDeathState()
0x5a7: Pop(0)
0x5a8: @ Stop()
0x5a9: Pop(0)
0x5aa: @ StopAsync()
0x5ab: Pop(0)
0x5ac: Stack[-5] = Stack[-21]
0x5ad: Push("GetScriptProperty")
0x5ae: Push((int) 2)
0x5af: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x5b0: IF (Stack[-1] == 0) GOTO 0x5bc; Pop(1)

0x5b1: Push("Owner")
0x5b2: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x5b3: Pop(1)
0x5b4: Push(Stack[-4])
0x5b5: IF (Stack[-1] == 0) GOTO 0x5bc; Pop(1)

0x5b6: Push("Owner")
0x5b7: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x5b8: Pop(1)
0x5b9: Pop(0); Push((bool) Stack[-5] == 0)
0x5ba: IF (Stack[-1] == 0) GOTO 0x5bc; Pop(1)

0x5bb: Stack[-5] = Stack[-21]
0x5bc: Push("@GetEyesHeight")
0x5bd: Push((int) 1)
0x5be: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x5bf: IF (Stack[-1] == 0) GOTO 0x5cb; Pop(1)

0x5c0: @@ GetEyesHeight(Stack[-2])
0x5c1: Pop(0)
0x5c2: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x5c3: Push(CvectorIndex(Stack[-1], 1))
0x5c4: Stack[-1] = Stack[-3]
0x5c5: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5c6: Push("head")
0x5c7: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x5c8: Pop(1)
0x5c9: Stack[-3] = (bool) 1
0x5ca: GOTO 0x5cc

0x5cb: Stack[-3] = (bool) 0
0x5cc: PushEmpty(string)
0x5cd: Stack[-1] = Stack[-7]
0x5ce: Call2 0x7d0

0x5cf: Pop(1)
0x5d0: Push("all")
0x5d1: @ PlayAnimation(Stack[-1], Stack[-7])
0x5d2: Pop(1)
0x5d3: @ WaitForAnimEnd()
0x5d4: Pop(0)
0x5d5: Push(Stack[-3])
0x5d6: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5d7: @ StopAsync()
0x5d8: Pop(0)
0x5d9: Push("head")
0x5da: @ UnlookAsync(Stack[-1])
0x5db: Pop(1)
0x5dc: Push("all")
0x5dd: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x5de: Pop(1)
0x5df: @ RemoveEnvelope()
0x5e0: Pop(0)
0x5e1: Stack[-5] = 0
0x5e2: Return(); Pop(20)

0x5e3: PushEmpty()
0x5e4: @ RemoveRTEnvelope()
0x5e5: Pop(0)
0x5e6: @ SetDeathState()
0x5e7: Pop(0)
0x5e8: @ Stop()
0x5e9: Pop(0)
0x5ea: @ StopAsync()
0x5eb: Pop(0)
0x5ec: @ StopSecondaryAnimation()
0x5ed: Pop(0)
0x5ee: PushEmpty(string)
0x5ef: Stack[-1] = Stack[-2]
0x5f0: Call2 0x7d0

0x5f1: Pop(1)
0x5f2: Push("all")
0x5f3: @ PlayAnimation(Stack[-1], Stack[-2])
0x5f4: Pop(1)
0x5f5: @ WaitForAnimEnd()
0x5f6: Pop(0)
0x5f7: Push("all")
0x5f8: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x5f9: Pop(1)
0x5fa: @ RemoveEnvelope()
0x5fb: Pop(0)
0x5fc: Return(); Pop(0)

0x5fd: PushEmpty()
0x5fe: Return(); Pop(0)

0x5ff: PushEmpty()
0x600: Return(); Pop(0)

0x601: PushEmpty()
0x602: Return(); Pop(0)

0x603: PushEmpty()
0x604: Push((int) 2)
0x605: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x606: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x607: Stack[-2] = "fire"
0x608: Return(); Pop(0)

0x609: GOTO 0x60f

0x60a: Push((int) 1)
0x60b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x60c: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x60d: Stack[-2] = "bullet"
0x60e: Return(); Pop(0)

0x60f: Stack[-2] = "phys"
0x610: Return(); Pop(0)

0x611: PushEmpty(cvector, cvector, cvector, cvector)
0x612: @ GetPosition(Stack[-2])
0x613: Pop(0)
0x614: @@ GetPosition(Stack[-1])
0x615: Pop(0)
0x616: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x617: Return(); Pop(4)

0x618: PushEmpty(object, object)
0x619: Push("player")
0x61a: @ FindActor(Stack[-2], Stack[-1])
0x61b: Pop(1)
0x61c: Stack[-3] = Stack[-1]
0x61d: Return(); Pop(2)

0x61e: Stack[-1] = 0
0x61f: PushEmpty(bool, bool)
0x620: @ IsPlayerActor(Stack[-3], Stack[-1])
0x621: Pop(0)
0x622: Stack[-4] = Stack[-1]
0x623: Return(); Pop(2)

0x624: PushEmpty(bool, bool)
0x625: Push("HasProperty")
0x626: Push((int) 2)
0x627: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x628: Pop(1); Push((bool) Stack[-1] == 0)
0x629: IF (Stack[-1] == 0) GOTO 0x62c; Pop(1)

0x62a: Stack[-5] = (bool) 0
0x62b: Return(); Pop(2)

0x62c: @@ HasProperty(Stack[-3], Stack[-1])
0x62d: Pop(0)
0x62e: Stack[-5] = Stack[-1]
0x62f: Return(); Pop(2)

0x630: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x631: PushEmpty(bool, object, string)
0x632: Stack[-2] = Stack[-18]
0x633: Stack[-1] = "health"
0x634: Call2 0x624

0x635: Pop(2)
0x636: Pop(1); Push((bool) Stack[-1] == 0)
0x637: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x638: Stack[-16] = (float) 0.0
0x639: Return(); Pop(12)

0x63a: PushEmpty(bool, object, string)
0x63b: Stack[-2] = Stack[-18]
0x63c: Stack[-1] = "armor"
0x63d: Call2 0x624

0x63e: Pop(2)
0x63f: Pop(1); Push((bool) Stack[-1] == 0)
0x640: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x641: Stack[-6] = (int) 0
0x642: GOTO 0x646

0x643: Push("armor")
0x644: @@ GetProperty(Stack[-1], Stack[-7])
0x645: Pop(1)
0x646: Push("armor_")
0x647: PushEmpty(string, int)
0x648: Stack[-1] = Stack[-16]
0x649: Call2 0x603

0x64a: Pop(1)
0x64b: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x64c: PushEmpty(bool, object, string)
0x64d: Stack[-2] = Stack[-18]
0x64e: Stack[-1] = Stack[-8]
0x64f: Call2 0x624

0x650: Pop(2)
0x651: Pop(1); Push((bool) Stack[-1] == 0)
0x652: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x653: Stack[-4] = (int) 0
0x654: GOTO 0x657

0x655: @@ GetProperty(Stack[-5], Stack[-4])
0x656: Pop(0)
0x657: PushEmpty(float, float, float)
0x658: Pop(0); Push(Stack[-9] + Stack[-7]);
0x659: Push((float)100.0)
0x65a: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x65b: Stack[-1] = (int) 1
0x65c: Call2 0x809

0x65d: Stack[-6] = Stack[-3]
0x65e: Pop(3)
0x65f: Push("health")
0x660: @@ GetProperty(Stack[-1], Stack[-3])
0x661: Pop(1)
0x662: Push((int) 1)
0x663: Pop(1); Push(Stack[-1] - Stack[-4]);
0x664: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x665: Push("health")
0x666: PushEmpty(float, float, float, float)
0x667: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x668: Stack[-2] = (int) 0
0x669: Stack[-1] = (int) 1
0x66a: Call2 0x810

0x66b: Pop(3)
0x66c: @@ SetProperty(Stack[-2], Stack[-1])
0x66d: Pop(2)
0x66e: PushEmpty(bool, object)
0x66f: Stack[-1] = Stack[-17]
0x670: Call2 0x61f

0x671: Pop(1)
0x672: IF (Stack[-1] == 0) GOTO 0x677; Pop(1)

0x673: PushEmpty(float)
0x674: Stack[-1] = -Stack[-2]; Pop(0);
0x675: Call2 0x81b

0x676: Pop(1)
0x677: Stack[-16] = Stack[-1]
0x678: Return(); Pop(12)

0x679: PushEmpty(bool, bool)
0x67a: @@ IsDead(Stack[-1])
0x67b: Pop(0)
0x67c: Stack[-4] = Stack[-1]
0x67d: Return(); Pop(2)

0x67e: PushEmpty(object, object, object, object)
0x67f: Pop(0); Push((bool) Stack[-5] == 0)
0x680: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x681: Stack[-6] = (bool) 0
0x682: Return(); Pop(4)

0x683: PushEmpty(bool)
0x684: Stack[-1] = (bool) 0
0x685: Push("IsDead")
0x686: Push((int) 1)
0x687: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x688: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x689: PushEmpty(bool, object)
0x68a: Stack[-1] = Stack[-8]
0x68b: Call2 0x679

0x68c: Pop(1)
0x68d: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x68e: Stack[-1] = (bool) 1
0x68f: IF (Stack[-1] == 0) GOTO 0x692; Pop(1)

0x690: Stack[-6] = (bool) 0
0x691: Return(); Pop(4)

0x692: @ GetScene(Stack[-2])
0x693: Pop(0)
0x694: Pop(0); Push((bool) Stack[-2] == 0)
0x695: IF (Stack[-1] == 0) GOTO 0x698; Pop(1)

0x696: Stack[-6] = (bool) 0
0x697: Return(); Pop(4)

0x698: @@ GetScene(Stack[-1])
0x699: Pop(0)
0x69a: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x69b: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x69c: Stack[-6] = (bool) 0
0x69d: Return(); Pop(4)

0x69e: Stack[-6] = (bool) 1
0x69f: Return(); Pop(4)

0x6a0: Stack[-1] = 0
0x6a1: Stack[-2] = 0
0x6a2: PushEmpty(int, int)
0x6a3: PushEmpty(bool, object)
0x6a4: Stack[-1] = Stack[-5]
0x6a5: Call2 0x67e

0x6a6: Pop(1)
0x6a7: Pop(1); Push((bool) Stack[-1] == 0)
0x6a8: IF (Stack[-1] == 0) GOTO 0x6ab; Pop(1)

0x6a9: Stack[-4] = (bool) 0
0x6aa: Return(); Pop(2)

0x6ab: PushEmpty(bool, object, string)
0x6ac: Stack[-2] = Stack[-6]
0x6ad: Stack[-1] = "noaccess"
0x6ae: Call2 0x624

0x6af: Pop(2)
0x6b0: Pop(1); Push((bool) Stack[-1] == 0)
0x6b1: IF (Stack[-1] == 0) GOTO 0x6b4; Pop(1)

0x6b2: Stack[-4] = (bool) 1
0x6b3: Return(); Pop(2)

0x6b4: Push("noaccess")
0x6b5: @@ GetProperty(Stack[-1], Stack[-2])
0x6b6: Pop(1)
0x6b7: Push((int) 0)
0x6b8: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x6b9: Return(); Pop(2)

0x6ba: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x6bb: Pop(0); Push((bool) Stack[-15] == 0)
0x6bc: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6bd: Return(); Pop(14)

0x6be: @ IsDead(Stack[-7])
0x6bf: Pop(0)
0x6c0: Push(Stack[-7])
0x6c1: IF (Stack[-1] == 0) GOTO 0x6c3; Pop(1)

0x6c2: Return(); Pop(14)

0x6c3: @ GetSecondaryAnimationType(Stack[-6])
0x6c4: Pop(0)
0x6c5: Push((int) 0)
0x6c6: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x6c7: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c8: Return(); Pop(14)

0x6c9: @@ GetPosition(Stack[-5])
0x6ca: Pop(0)
0x6cb: @ GetPosition(Stack[-4])
0x6cc: Pop(0)
0x6cd: @ GetDirection(Stack[-3])
0x6ce: Pop(0)
0x6cf: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x6d0: Push(CvectorIndex(Stack[-2], 0))
0x6d1: Push(CvectorIndex(Stack[-4], 0))
0x6d2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6d3: Push(CvectorIndex(Stack[-3], 2))
0x6d4: Push(CvectorIndex(Stack[-5], 2))
0x6d5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6d6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6d7: Push((int) 0)
0x6d8: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6d9: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6da: Stack[-1] = "fhit"
0x6db: GOTO 0x6dd

0x6dc: Stack[-1] = "bhit"
0x6dd: Push("hit_react")
0x6de: Push("1")
0x6df: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6e0: Push("2")
0x6e1: Pop(1); Push(Stack[-4] + Stack[-1]);
0x6e2: Push((int) -10)
0x6e3: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6e4: Pop(4)
0x6e5: Return(); Pop(14)

0x6e6: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x6e7: PushEmpty(bool)
0x6e8: Stack[-1] = (bool) 0
0x6e9: PushEmpty(bool)
0x6ea: Stack[-1] = (bool) 0
0x6eb: Push(Stack[-23])
0x6ec: IF (Stack[-1] == 0) GOTO 0x6f1; Pop(1)

0x6ed: Push((int) 4)
0x6ee: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x6ef: IF (Stack[-1] == 0) GOTO 0x6f1; Pop(1)

0x6f0: Stack[-1] = (bool) 1
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f6; Pop(1)

0x6f2: Push((int) 5)
0x6f3: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x6f4: IF (Stack[-1] == 0) GOTO 0x6f6; Pop(1)

0x6f5: Stack[-1] = (bool) 1
0x6f6: IF (Stack[-1] == 0) GOTO 0x725; Pop(1)

0x6f7: PushEmpty(cvector, cvector)
0x6f8: PushEmpty(cvector, object)
0x6f9: Stack[-1] = Stack[-25]
0x6fa: Call2 0x611

0x6fb: Stack[-3] = Stack[-2]
0x6fc: Pop(2)
0x6fd: Call2 0x7ff

0x6fe: Stack[-11] = Stack[-2]
0x6ff: Pop(2)
0x700: @ CreateVectorVector(Stack[-8])
0x701: Pop(0)
0x702: Stack[-7] = (int) 1
0x703: Push("hit")
0x704: Pop(1); Push(Stack[-1] + Stack[-8]);
0x705: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x706: Pop(1)
0x707: Pop(0); Push((bool) Stack[-6] == 0)
0x708: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x709: GOTO 0x713

0x70a: Pop(0); Push(Stack[-4] | Stack[-9]);
0x70b: Push((float)0.70711)
0x70c: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x70d: IF (Stack[-1] == 0) GOTO 0x710; Pop(1)

0x70e: @@ add(Stack[-5])
0x70f: Pop(0)
0x710: Push((int) 1)
0x711: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x712: GOTO 0x703

0x713: @@ size(Stack[-3])
0x714: Pop(0)
0x715: Push(Stack[-3])
0x716: IF (Stack[-1] == 0) GOTO 0x724; Pop(1)

0x717: @ irand(Stack[-2], Stack[-3])
0x718: Pop(0)
0x719: @@ get(Stack[-1], Stack[-2])
0x71a: Pop(0)
0x71b: PushEmpty(object, int, float, cvector, cvector)
0x71c: Stack[-5] = Stack[-26]
0x71d: Stack[-4] = Stack[-25]
0x71e: Stack[-3] = Stack[-24]
0x71f: Stack[-2] = Stack[-6]
0x720: Stack[-1] = -Stack[-14]; Pop(0);
0x721: Call2 0x72a

0x722: Pop(5)
0x723: Return(); Pop(18)

0x724: Stack[-8] = 0
0x725: PushEmpty(object)
0x726: Stack[-1] = Stack[-22]
0x727: Call2 0x6ba

0x728: Pop(1)
0x729: Return(); Pop(18)

0x72a: PushEmpty(object, object, object, object)
0x72b: @ GetScene(Stack[-2])
0x72c: Pop(0)
0x72d: Push("scripted")
0x72e: Push("blood_dir.xml")
0x72f: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x730: Pop(2)
0x731: PushEmpty(object)
0x732: Stack[-1] = Stack[-10]
0x733: Call2 0x6ba

0x734: Pop(1)
0x735: Return(); Pop(4)

0x736: Stack[-1] = 0
0x737: Stack[-2] = 0
0x738: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x739: @@ GetPosition(Stack[-3])
0x73a: Pop(0)
0x73b: @ GetPosition(Stack[-2])
0x73c: Pop(0)
0x73d: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x73e: Push(CvectorIndex(Stack[-1], 0))
0x73f: Push(CvectorIndex(Stack[-2], 2))
0x740: @ RotateAsync(Stack[-2], Stack[-1])
0x741: Pop(2)
0x742: Return(); Pop(6)

0x743: PushEmpty(bool, bool)
0x744: @ IsLoaded(Stack[-1])
0x745: Pop(0)
0x746: Stack[-3] = Stack[-1]
0x747: Return(); Pop(2)

0x748: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x749: @@ GetPosition(Stack[-8])
0x74a: Pop(0)
0x74b: @@ GetEyesHeight(Stack[-9])
0x74c: Pop(0)
0x74d: Push(CvectorIndex(Stack[-8], 1))
0x74e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x74f: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x750: @ GetPosition(Stack[-7])
0x751: Pop(0)
0x752: @ GetEyesHeight(Stack[-9])
0x753: Pop(0)
0x754: Push(CvectorIndex(Stack[-7], 1))
0x755: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x756: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x757: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x758: Push(CvectorIndex(Stack[-6], 1))
0x759: Stack[-1] = (int) 0
0x75a: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x75b: Pop(0); Push(Stack[-6] | Stack[-6]);
0x75c: Pop(1); Push(Sqrt(Stack[-1]))
0x75d: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x75e: Stack[-5] = -Stack[-6]; Pop(0);
0x75f: Pop(0); Push(Stack[-6] * Stack[-19]);
0x760: PushEmpty(cvector, cvector)
0x761: Push(CVector(0.0, 1.0, 0.0))
0x762: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x763: Call2 0x7ff

0x764: Pop(1)
0x765: Push((int) 25)
0x766: Pop(2); Push(Stack[-2] * Stack[-1]);
0x767: Pop(2); Push(Stack[-2] + Stack[-1]);
0x768: Push(CVector(0.0, 10.0, 0.0))
0x769: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x76a: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x76b: @ IsOverrideActive(Stack[-2])
0x76c: Pop(0)
0x76d: Push(Stack[-2])
0x76e: IF (Stack[-1] == 0) GOTO 0x771; Pop(1)

0x76f: Stack[-21] = (bool) 0
0x770: Return(); Pop(18)

0x771: @ StopWorld()
0x772: Pop(0)
0x773: Push((bool) 1)
0x774: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x775: Pop(1)
0x776: Push(CvectorIndex(Stack[-4], 0))
0x777: Push(CvectorIndex(Stack[-5], 2))
0x778: @ Rotate(Stack[-2], Stack[-1])
0x779: Pop(2)
0x77a: PushEmpty(bool)
0x77b: Call2 0x897

0x77c: Pop(0)
0x77d: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x77e: GOTO 0x787

0x77f: Push("head")
0x780: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x781: Pop(1)
0x782: Push(Stack[-1])
0x783: IF (Stack[-1] == 0) GOTO 0x787; Pop(1)

0x784: Push("head")
0x785: @ LookAsyncCamera(Stack[-1])
0x786: Pop(1)
0x787: @ CameraWaitForPlayFinish()
0x788: Pop(0)
0x789: @ ResumeWorld()
0x78a: Pop(0)
0x78b: Stack[-21] = (bool) 1
0x78c: Return(); Pop(18)

0x78d: PushEmpty(bool, bool)
0x78e: Push((bool) 1)
0x78f: @ CameraSwitchToNormal(Stack[-1])
0x790: Pop(1)
0x791: PushEmpty(bool)
0x792: Call2 0x897

0x793: Pop(0)
0x794: IF (Stack[-1] == 0) GOTO 0x796; Pop(1)

0x795: GOTO 0x79e

0x796: Push("head")
0x797: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x798: Pop(1)
0x799: Push(Stack[-1])
0x79a: IF (Stack[-1] == 0) GOTO 0x79e; Pop(1)

0x79b: Push("head")
0x79c: @ UnlookAsync(Stack[-1])
0x79d: Pop(1)
0x79e: Return(); Pop(2)

0x79f: PushEmpty(bool, float, float, bool, float, float)
0x7a0: @ lshHasAnimation(Stack[-3], Stack[-7])
0x7a1: Pop(0)
0x7a2: Push(Stack[-3])
0x7a3: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x7a4: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x7a5: Pop(0)
0x7a6: Push((bool) 0)
0x7a7: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x7a8: Pop(1)
0x7a9: GOTO 0x7ae

0x7aa: Push("Can't find lsh animation : ")
0x7ab: Pop(1); Push(Stack[-1] + Stack[-8]);
0x7ac: @ Trace(Stack[-1])
0x7ad: Pop(1)
0x7ae: Return(); Pop(6)

0x7af: PushEmpty(bool, float, float, bool, float, float)
0x7b0: @ lshHasAnimation(Stack[-3], Stack[-8])
0x7b1: Pop(0)
0x7b2: Push(Stack[-3])
0x7b3: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7b4: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x7b5: Pop(0)
0x7b6: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x7b7: Pop(0)
0x7b8: GOTO 0x7bd

0x7b9: Push("Can't find lsh animation : ")
0x7ba: Pop(1); Push(Stack[-1] + Stack[-9]);
0x7bb: @ Trace(Stack[-1])
0x7bc: Pop(1)
0x7bd: Return(); Pop(6)

0x7be: PushEmpty(float, cvector, float, cvector)
0x7bf: @@ GetEyesHeight(Stack[-2])
0x7c0: Pop(0)
0x7c1: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x7c2: Push(CvectorIndex(Stack[-1], 1))
0x7c3: Stack[-1] = Stack[-3]
0x7c4: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x7c5: Push("head")
0x7c6: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x7c7: Pop(1)
0x7c8: Return(); Pop(4)

0x7c9: PushEmpty(bool)
0x7ca: Call2 0x897

0x7cb: Pop(0)
0x7cc: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7cd: @ lshStopSpeech()
0x7ce: Pop(0)
0x7cf: Return(); Pop(0)

0x7d0: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x7d1: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x7d2: Pop(0)
0x7d3: Pop(0); Push((bool) Stack[-8] == 0)
0x7d4: IF (Stack[-1] == 0) GOTO 0x7e9; Pop(1)

0x7d5: Stack[-7] = (int) 0
0x7d6: Push((int) 1)
0x7d7: Pop(1); Push(Stack[-8] + Stack[-1]);
0x7d8: Pop(1); Push(Stack[-18] + Stack[-1]);
0x7d9: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x7da: Pop(1)
0x7db: Pop(0); Push((bool) Stack[-6] == 0)
0x7dc: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7dd: GOTO 0x7e1

0x7de: Push((int) 1)
0x7df: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x7e0: GOTO 0x7d6

0x7e1: Pop(0); Push((bool) Stack[-7] == 0)
0x7e2: IF (Stack[-1] == 0) GOTO 0x7e4; Pop(1)

0x7e3: Return(); Pop(16)

0x7e4: @ irand(Stack[-5], Stack[-7])
0x7e5: Pop(0)
0x7e6: Push((int) 1)
0x7e7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7e8: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x7e9: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x7ea: Pop(0)
0x7eb: Push(Stack[-4])
0x7ec: IF (Stack[-1] == 0) GOTO 0x7f8; Pop(1)

0x7ed: @ GetEyesHeight(Stack[-3])
0x7ee: Pop(0)
0x7ef: @ GetDirection(Stack[-2])
0x7f0: Pop(0)
0x7f1: Push((int) 50)
0x7f2: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x7f3: Push(CvectorIndex(Stack[-1], 1))
0x7f4: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x7f5: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x7f6: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x7f7: Pop(0)
0x7f8: Return(); Pop(16)

0x7f9: PushEmpty(object, object)
0x7fa: @ self(Stack[-1])
0x7fb: Pop(0)
0x7fc: Stack[-3] = Stack[-1]
0x7fd: Return(); Pop(2)

0x7fe: Stack[-1] = 0
0x7ff: PushEmpty(float, float)
0x800: Pop(0); Push(Stack[-3] | Stack[-3]);
0x801: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x802: Push((float)0.0)
0x803: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x804: IF (Stack[-1] == 0) GOTO 0x807; Pop(1)

0x805: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x806: Return(); Pop(2)

0x807: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x808: Return(); Pop(2)

0x809: PushEmpty()
0x80a: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x80b: IF (Stack[-1] == 0) GOTO 0x80e; Pop(1)

0x80c: Stack[-3] = Stack[-2]
0x80d: GOTO 0x80f

0x80e: Stack[-3] = Stack[-1]
0x80f: Return(); Pop(0)

0x810: PushEmpty()
0x811: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x812: IF (Stack[-1] == 0) GOTO 0x815; Pop(1)

0x813: Stack[-4] = Stack[-2]
0x814: Return(); Pop(0)

0x815: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x816: IF (Stack[-1] == 0) GOTO 0x819; Pop(1)

0x817: Stack[-4] = Stack[-1]
0x818: Return(); Pop(0)

0x819: Stack[-4] = Stack[-3]
0x81a: Return(); Pop(0)

0x81b: PushEmpty(object, object)
0x81c: @ CreateFloatVector(Stack[-1])
0x81d: Pop(0)
0x81e: @@ add(Stack[-3])
0x81f: Pop(0)
0x820: Push((int) 0)
0x821: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x822: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x823: Push((float)0.7)
0x824: Push((int) 500)
0x825: @ RumblePlay(Stack[-2], Stack[-1])
0x826: Pop(2)
0x827: Push((int) 15)
0x828: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x829: Pop(1)
0x82a: Return(); Pop(2)

0x82b: Stack[-1] = 0
0x82c: PushEmpty(object, object)
0x82d: @ FindActor(Stack[-1], Stack[-4])
0x82e: Pop(0)
0x82f: Pop(0); Push((bool) Stack[-1] == 0)
0x830: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x831: Stack[-5] = (bool) 0
0x832: Return(); Pop(2)

0x833: @ Trigger(Stack[-1], Stack[-3])
0x834: Pop(0)
0x835: Stack[-5] = (bool) 1
0x836: Return(); Pop(2)

0x837: Stack[-1] = 0
0x838: PushEmpty(bool, bool)
0x839: @ IsPlayerActor(Stack[-3], Stack[-1])
0x83a: Pop(0)
0x83b: Push(Stack[-1])
0x83c: IF (Stack[-1] == 0) GOTO 0x840; Pop(1)

0x83d: Push("attack")
0x83e: @ PlayGlobalMusic(Stack[-1])
0x83f: Pop(1)
0x840: Return(); Pop(2)

0x841: PushEmpty(object, object)
0x842: @ GetScene(Stack[-1])
0x843: Pop(0)
0x844: Push("battle")
0x845: PushEmpty(object)
0x846: Call2 0x7f9

0x847: Pop(0)
0x848: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x849: Pop(2)
0x84a: Return(); Pop(2)

0x84b: Stack[-1] = 0
0x84c: PushEmpty(string, string)
0x84d: Stack[-1] = "idle"
0x84e: Push(Stack[-3])
0x84f: IF (Stack[-1] == 0) GOTO 0x851; Pop(1)

0x850: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x851: Stack[-4] = Stack[-1]
0x852: Return(); Pop(2)

0x853: PushEmpty(int, bool, int, bool)
0x854: Stack[-2] = (int) 0
0x855: Push("all")
0x856: PushEmpty(string, int)
0x857: Stack[-1] = Stack[-5]
0x858: Call2 0x84c

0x859: Pop(1)
0x85a: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x85b: Pop(2)
0x85c: Pop(0); Push((bool) Stack[-1] == 0)
0x85d: IF (Stack[-1] == 0) GOTO 0x85f; Pop(1)

0x85e: GOTO 0x862

0x85f: Push((int) 1)
0x860: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x861: GOTO 0x855

0x862: Stack[-5] = Stack[-2]
0x863: Return(); Pop(4)

0x864: PushEmpty()
0x865: PushEmpty(bool, string, string)
0x866: Stack[-2] = "quest_d1_01"
0x867: Stack[-1] = "attack"
0x868: Call2 0x82c

0x869: Pop(3)
0x86a: Return(); Pop(0)

0x86b: PushEmpty(int, int)
0x86c: Push("branch")
0x86d: @ GetVariable(Stack[-1], Stack[-2])
0x86e: Pop(1)
0x86f: Push((int) 0)
0x870: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x871: IF (Stack[-1] == 0) GOTO 0x875; Pop(1)

0x872: Stack[-3] = (int) 1
0x873: Return(); Pop(2)

0x874: GOTO 0x87a

0x875: Push((int) 1)
0x876: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x877: IF (Stack[-1] == 0) GOTO 0x87a; Pop(1)

0x878: Stack[-3] = (int) 2
0x879: Return(); Pop(2)

0x87a: Stack[-3] = (int) 3
0x87b: Return(); Pop(2)

0x87c: PushEmpty(int, int)
0x87d: Push("branch")
0x87e: @ GetVariable(Stack[-1], Stack[-2])
0x87f: Pop(1)
0x880: Stack[-3] = Stack[-1]
0x881: Return(); Pop(2)

0x882: PushEmpty()
0x883: PushEmpty(int)
0x884: Call2 0x87c

0x885: Pop(0)
0x886: Push((int) 1)
0x887: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x888: IF (Stack[-1] == 0) GOTO 0x88c; Pop(1)

0x889: @ WorkWithCorpse(Stack[-1])
0x88a: Pop(0)
0x88b: GOTO 0x88e

0x88c: @ Barter(Stack[-1])
0x88d: Pop(0)
0x88e: Return(); Pop(0)

0x88f: Stack[-1] = (int) 515568
0x890: Return(); Pop(0)

0x891: Stack[-1] = (int) 503353
0x892: Return(); Pop(0)

0x893: Stack[-1] = "ui/NPC_Citizen1.png"
0x894: Return(); Pop(0)

0x895: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x896: Return(); Pop(0)

0x897: Stack[-1] = (bool) 0
0x898: Return(); Pop(0)

0x899: PushEmpty()
0x89a: PushEmpty(object)
0x89b: Stack[-1] = Stack[-2]
0x89c: Push(-1, 0); TaskCall(5)
0x89d: Call2 0x56f

0x89e: Pop(-1, 0); TaskReturn
0x89f: Pop(1)
0x8a0: Return(); Pop(0)

0x8a1: PushEmpty()
0x8a2: PushEmpty(object, int, float)
0x8a3: Stack[-3] = Stack[-7]
0x8a4: Stack[-2] = Stack[-6]
0x8a5: Stack[-1] = Stack[-5]
0x8a6: Call2 0x6e6

0x8a7: Pop(3)
0x8a8: Return(); Pop(0)

0x8a9: PushEmpty()
0x8aa: PushEmpty(object, int, float, cvector, cvector)
0x8ab: Stack[-5] = Stack[-11]
0x8ac: Stack[-4] = Stack[-10]
0x8ad: Stack[-3] = Stack[-9]
0x8ae: Stack[-2] = Stack[-7]
0x8af: Stack[-1] = Stack[-6]
0x8b0: Call2 0x72a

0x8b1: Pop(5)
0x8b2: Return(); Pop(0)

0x8b3: PushEmpty(float, float)
0x8b4: Push("health")
0x8b5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8b6: IF (Stack[-1] == 0) GOTO 0x8bf; Pop(1)

0x8b7: Push("health")
0x8b8: @ GetProperty(Stack[-1], Stack[-2])
0x8b9: Pop(1)
0x8ba: Push((int) 0)
0x8bb: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x8bc: IF (Stack[-1] == 0) GOTO 0x8bf; Pop(1)

0x8bd: @ SignalDeath(Stack[-4])
0x8be: Pop(0)
0x8bf: Return(); Pop(2)

0x8c0: PushEmpty()
0x8c1: PushEmpty(object)
0x8c2: Stack[-1] = Stack[-2]
0x8c3: Call2 0x899

0x8c4: Pop(1)
0x8c5: Return(); Pop(0)

0x8c6: PushEmpty(object)
0x8c7: Call2 0x7f9

0x8c8: Pop(0)
0x8c9: @ RemoveActor(Stack[-1])
0x8ca: Pop(1)
0x8cb: @ Hold()
0x8cc: Pop(0)
0x8cd: Return(); Pop(0)

