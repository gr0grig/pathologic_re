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
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png

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
	WorkWithCorpse (1 args)
	Barter (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0xf8
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0xcc Vars = (object)
		EVENT_17 Op = 0xd7 Vars = (object)
		EVENT_26 Op = 0xe2 Vars = (string)
		EVENT_5 Op = 0x129 Vars = ()
		EVENT_6 Op = 0x12e Vars = ()
	GTASK_3 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_4 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x46f Vars = (int)
		EVENT_1 Op = 0x48a Vars = (object)
		EVENT_2 Op = 0x499 Vars = (object)
		EVENT_10 Op = 0x51f Vars = (object)
		EVENT_41 Op = 0x52a Vars = (object)
	GTASK_5  Params = 1
		EVENT_0 Op = 0x54d Vars = (object)
		EVENT_22 Op = 0x5cc Vars = (object, int, float, float)
		EVENT_16 Op = 0x5ce Vars = (object, string)
		EVENT_41 Op = 0x5d0 Vars = (object)

Events:
EVENT_22 Op = 0x867 Vars = (object, int, float, float)
EVENT_43 Op = 0x86f Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x879 Vars = (object, string)
EVENT_41 Op = 0x886 Vars = (object)
EVENT_6 Op = 0x88c Vars = ()

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 110.0
0x5: Call2 0x717

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x857

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x855

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x859

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x85b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x831

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
0x41: Call2 0x75b

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
0x54: Push((int) 521499)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 521607)
0x5a: Push((int) -1)
0x5b: Push((int) 22774)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 521500)
0x5f: Push((int) -1)
0x60: Push((int) 22661)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x85d

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x76c

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
0x86: Call2 0x85d

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
0x96: Call2 0x77c

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x796

0x9f: Pop(0)
0xa0: Push((int) 22774)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x82a

0xa7: Pop(2)
0xa8: Push((int) 22660)
0xa9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xab: PushEmpty(string)
0xac: Stack[-1] = "Neutral"
0xad: Call2 0x84

0xae: Pop(1)
0xaf: Push((int) 521499)
0xb0: @@ SetMessage(Stack[-1])
0xb1: Pop(1)
0xb2: @@ ClearReplies()
0xb3: Pop(0)
0xb4: Push((int) 521607)
0xb5: Push((int) -1)
0xb6: Push((int) 22774)
0xb7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8: Pop(3)
0xb9: Push((int) 521500)
0xba: Push((int) -1)
0xbb: Push((int) 22661)
0xbc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd: Pop(3)
0xbe: Return(); Pop(0)

0xbf: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc0: PushEmpty(bool)
0xc1: Call2 0x85d

0xc2: Pop(0)
0xc3: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc4: @ lshStopAnimation()
0xc5: Pop(0)
0xc6: GOTO 0xc9

0xc7: @ StopAnimation()
0xc8: Pop(0)
0xc9: Return(); Pop(0)

0xca: GOTO 0x9b

0xcb: Return(); Pop(0)

0xcc: PushEmpty()
0xcd: PushEmpty()
0xce: Call2 0x191

0xcf: Pop(0)
0xd0: PushEmpty(int, object)
0xd1: Stack[-1] = Stack[-3]
0xd2: Push(-2, 1); TaskCall(0)
0xd3: Call2 0x0

0xd4: Pop(-2, 1); TaskReturn
0xd5: Pop(2)
0xd6: Return(); Pop(0)

0xd7: PushEmpty(bool, bool)
0xd8: @ IsPlayerActor(Stack[-3], Stack[-1])
0xd9: Pop(0)
0xda: Push(Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdc: PushEmpty(bool, string, string)
0xdd: Stack[-2] = "quest_d1_01"
0xde: Stack[-1] = "attack"
0xdf: Call2 0x7f2

0xe0: Pop(3)
0xe1: Return(); Pop(2)

0xe2: PushEmpty()
0xe3: Push("attack")
0xe4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xe6: PushEmpty()
0xe7: Call2 0x191

0xe8: Pop(0)
0xe9: PushEmpty(object)
0xea: PushEmpty(object)
0xeb: Call2 0x5e7

0xec: Stack[-2] = Stack[-1]
0xed: Pop(1)
0xee: Push(-1, 6); TaskCall(3)
0xef: Call2 0x196

0xf0: Pop(-1, 6); TaskReturn
0xf1: Pop(1)
0xf2: GOTO 0xf7

0xf3: PushEmpty(string)
0xf4: Stack[-1] = Stack[-2]
0xf5: Call2 0x121

0xf6: Pop(1)
0xf7: Return(); Pop(0)

0xf8: PushEmpty(float, float)
0xf9: PushEmpty(bool)
0xfa: Call2 0x712

0xfb: Pop(0)
0xfc: Pop(1); Push((bool) Stack[-1] == 0)
0xfd: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xfe: @ Hold()
0xff: Pop(0)
0x100: GOTO 0xf9

0x101: Push((int) 3)
0x102: @ rand(Stack[-2], Stack[-1])
0x103: Pop(1)
0x104: Push((int) 3)
0x105: Pop(1); Push(Stack[-2] + Stack[-1]);
0x106: @ Sleep(Stack[-1])
0x107: Pop(1)
0x108: PushEmpty()
0x109: Call2 0x140

0x10a: Pop(0)
0x10b: GOTO 0xf9

0x10c: Return(); Pop(2)

0x10d: PushEmpty(bool, bool)
0x10e: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x10f: @ IsLoaded(Stack[-1])
0x110: Pop(0)
0x111: PushEmpty(bool)
0x112: Stack[-1] = (bool) 0
0x113: Pop(0); Push((bool) Stack[-2] == 0)
0x114: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x115: PushEmpty(bool)
0x116: Call2 0x13e

0x117: Pop(0)
0x118: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x119: Stack[-1] = (bool) 1
0x11a: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11b: PushEmpty(object)
0x11c: Call2 0x7c6

0x11d: Pop(0)
0x11e: @ RemoveActor(Stack[-1])
0x11f: Pop(1)
0x120: Return(); Pop(2)

0x121: PushEmpty()
0x122: Push("cleanup")
0x123: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x125: PushEmpty()
0x126: Call2 0x10d

0x127: Pop(0)
0x128: Return(); Pop(0)

0x129: @ StopGroup0()
0x12a: Pop(0)
0x12b: @ sync()
0x12c: Pop(0)
0x12d: Return(); Pop(0)

0x12e: PushEmpty(bool)
0x12f: Stack[-1] = (bool) 0
0x130: Push( Stack[0 + Tasks[-1].StackPointer] )
0x131: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x132: PushEmpty(bool)
0x133: Call2 0x13e

0x134: Pop(0)
0x135: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x136: Stack[-1] = (bool) 1
0x137: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x138: PushEmpty(object)
0x139: Call2 0x7c6

0x13a: Pop(0)
0x13b: @ RemoveActor(Stack[-1])
0x13c: Pop(1)
0x13d: Return(); Pop(0)

0x13e: Stack[-1] = (bool) 1
0x13f: Return(); Pop(0)

0x140: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x141: @ WaitForAnimEnd()
0x142: Pop(0)
0x143: PushEmpty(bool)
0x144: Call2 0x712

0x145: Pop(0)
0x146: Pop(1); Push((bool) Stack[-1] == 0)
0x147: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x148: Return(); Pop(14)

0x149: PushEmpty(int)
0x14a: Call2 0x819

0x14b: Stack[-8] = Stack[-1]
0x14c: Pop(1)
0x14d: Stack[-6] = (int) 0
0x14e: PushEmpty(bool)
0x14f: Stack[-1] = (bool) 0
0x150: Push((int) 5)
0x151: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x153: PushEmpty(bool)
0x154: Call2 0x712

0x155: Pop(0)
0x156: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x157: Stack[-1] = (bool) 1
0x158: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x159: Push((int) 3)
0x15a: @ irand(Stack[-6], Stack[-1])
0x15b: Pop(1)
0x15c: Push((int) 0)
0x15d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x15e: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x15f: Push(Stack[-7])
0x160: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x161: @ irand(Stack[-4], Stack[-7])
0x162: Pop(0)
0x163: Push("all")
0x164: PushEmpty(string, int)
0x165: Stack[-1] = Stack[-7]
0x166: Call2 0x812

0x167: Pop(1)
0x168: @ PlayAnimation(Stack[-2], Stack[-1])
0x169: Pop(2)
0x16a: @ WaitForAnimEnd(Stack[-3])
0x16b: Pop(0)
0x16c: Pop(0); Push((bool) Stack[-3] == 0)
0x16d: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16e: GOTO 0x18c

0x16f: GOTO 0x181

0x170: Push((int) 1)
0x171: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x172: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x173: Push((int) 4)
0x174: @ rand(Stack[-3], Stack[-1])
0x175: Pop(1)
0x176: Push((int) 1)
0x177: Pop(1); Push(Stack[-3] + Stack[-1]);
0x178: @ Sleep(Stack[-1], Stack[-2])
0x179: Pop(1)
0x17a: Pop(0); Push((bool) Stack[-1] == 0)
0x17b: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17c: GOTO 0x18c

0x17d: GOTO 0x181

0x17e: Push(Stack[-6])
0x17f: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x180: GOTO 0x18c

0x181: PushEmpty(bool)
0x182: Call2 0x18f

0x183: Pop(0)
0x184: Pop(1); Push((bool) Stack[-1] == 0)
0x185: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x186: GOTO 0x18c

0x187: @ ResetAAS()
0x188: Pop(0)
0x189: Push((int) 1)
0x18a: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x18b: GOTO 0x14e

0x18c: @ ResetAAS()
0x18d: Pop(0)
0x18e: Return(); Pop(14)

0x18f: Stack[-1] = (bool) 1
0x190: Return(); Pop(0)

0x191: @ StopAnimation()
0x192: Pop(0)
0x193: @ StopGroup0()
0x194: Pop(0)
0x195: Return(); Pop(0)

0x196: PushEmpty()
0x197: PushEmpty(object, bool, float)
0x198: Stack[-3] = Stack[-4]
0x199: Stack[-2] = (bool) 1
0x19a: Stack[-1] = (float) 180.0
0x19b: Call2 0x1a8

0x19c: Pop(3)
0x19d: Push((int) 1)
0x19e: @ Sleep(Stack[-1])
0x19f: Pop(1)
0x1a0: GOTO 0x197

0x1a1: Return(); Pop(0)

0x1a2: PushEmpty()
0x1a3: Stack[-3] = (float) 0.1
0x1a4: Return(); Pop(0)

0x1a5: PushEmpty()
0x1a6: Stack[-3] = (int) 0
0x1a7: Return(); Pop(0)

0x1a8: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x1a9: PushEmpty()
0x1aa: Call2 0x28d

0x1ab: Pop(0)
0x1ac: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x1ad: Push("@GetAttackDistance")
0x1ae: Push((int) 1)
0x1af: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b1: @@ GetAttackDistance(Stack[-11])
0x1b2: Pop(0)
0x1b3: Push((int) 50)
0x1b4: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x1b5: GOTO 0x1b7

0x1b6: Stack[-11] = Stack[-23]
0x1b7: Push((int) 150)
0x1b8: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1ba: Stack[-11] = (int) 150
0x1bb: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1bc: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x1bd: @ IsPlayerActor(Stack[-0], Stack[-8])
0x1be: Pop(0)
0x1bf: Push(Stack[-8])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c1: Push("attack")
0x1c2: @ PlayGlobalMusic(Stack[-1])
0x1c3: Pop(1)
0x1c4: PushEmpty(object)
0x1c5: Call2 0x7c6

0x1c6: Pop(0)
0x1c7: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x1c8: Pop(1)
0x1c9: Push(Stack[-24])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cb: Stack[-7] = (bool) 0
0x1cc: GOTO 0x1ce

0x1cd: Stack[-7] = (bool) 1
0x1ce: Push((float)400.0)
0x1cf: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x1d0: PushEmpty(bool)
0x1d1: Stack[-1] = (bool) 0
0x1d2: PushEmpty(bool, object)
0x1d3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d4: Call2 0x671

0x1d5: Pop(1)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d7: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d9: Stack[-1] = (bool) 1
0x1da: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x1db: PushEmpty()
0x1dc: Call2 0x42a

0x1dd: Pop(0)
0x1de: @@ GetPFPosition(Stack[-10])
0x1df: Pop(0)
0x1e0: @ GetPFPosition(Stack[-9])
0x1e1: Pop(0)
0x1e2: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x1e3: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1e4: Pop(0); Push(Stack[-6] * Stack[-6]);
0x1e5: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1e7: PushEmpty(bool, object, float, float, bool, bool)
0x1e8: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x1e9: Stack[-4] = Stack[-17]
0x1ea: Stack[-3] = (float) 10000.0
0x1eb: Stack[-2] = (bool) 1
0x1ec: Stack[-1] = (bool) 0
0x1ed: Push(-6, 3); TaskCall(4)
0x1ee: Call2 0x43e

0x1ef: Pop(-6, 3); TaskReturn
0x1f0: Pop(5)
0x1f1: Pop(1); Push((bool) Stack[-1] == 0)
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f3: GOTO 0x27c

0x1f4: Stack[-7] = (bool) 0
0x1f5: GOTO 0x27b

0x1f6: Pop(0); Push(Stack[-23] * Stack[-23]);
0x1f7: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x1f9: @@ GetPFPosition(Stack[-3])
0x1fa: Pop(0)
0x1fb: @ CanReachByPF(Stack[-2], Stack[-3])
0x1fc: Pop(0)
0x1fd: Pop(0); Push((bool) Stack[-2] == 0)
0x1fe: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x1ff: PushEmpty(bool, object, float, float, bool, bool)
0x200: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x201: Stack[-4] = Stack[-17]
0x202: Stack[-3] = (float) 10000.0
0x203: Stack[-2] = (bool) 1
0x204: Stack[-1] = (bool) 0
0x205: Push(-6, 3); TaskCall(4)
0x206: Call2 0x43e

0x207: Pop(-6, 3); TaskReturn
0x208: Pop(5)
0x209: Pop(1); Push((bool) Stack[-1] == 0)
0x20a: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20b: GOTO 0x27c

0x20c: Stack[-7] = (bool) 0
0x20d: GOTO 0x1d0

0x20e: Pop(0); Push((bool) Stack[-7] == 0)
0x20f: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x210: PushEmpty(object)
0x211: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x212: Call2 0x707

0x213: Pop(1)
0x214: Push("all")
0x215: Push("attack_on")
0x216: @ PlayAnimation(Stack[-2], Stack[-1])
0x217: Pop(2)
0x218: @ WaitForAnimEnd()
0x219: Pop(0)
0x21a: PushEmpty()
0x21b: Call2 0x42a

0x21c: Pop(0)
0x21d: @ StopAsync()
0x21e: Pop(0)
0x21f: Stack[-7] = (bool) 1
0x220: PushEmpty(bool, object)
0x221: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x222: Call2 0x671

0x223: Pop(1)
0x224: Pop(1); Push((bool) Stack[-1] == 0)
0x225: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x226: GOTO 0x27c

0x227: @ rand(Stack[-1])
0x228: Pop(0)
0x229: PushEmpty(bool)
0x22a: Stack[-1] = (bool) 1
0x22b: Push((float)0.25)
0x22c: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x22e: PushEmpty(bool)
0x22f: Call2 0x3ff

0x230: Pop(0)
0x231: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x232: Stack[-1] = (bool) 0
0x233: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x234: @ Face(Stack[-0])
0x235: Pop(0)
0x236: PushEmpty()
0x237: Call2 0x431

0x238: Pop(0)
0x239: Push("all")
0x23a: Push("attack_stay")
0x23b: @ PlayAnimation(Stack[-2], Stack[-1])
0x23c: Pop(2)
0x23d: PushEmpty(bool, float)
0x23e: Stack[-1] = Stack[-25]
0x23f: Call2 0x37b

0x240: Pop(2)
0x241: @ StopAsync()
0x242: Pop(0)
0x243: GOTO 0x272

0x244: @ Face(Stack[-0])
0x245: Pop(0)
0x246: Push("all")
0x247: Push("fjump")
0x248: @ PlayAnimation(Stack[-2], Stack[-1])
0x249: Pop(2)
0x24a: @ WaitForAnimEnd()
0x24b: Pop(0)
0x24c: PushEmpty()
0x24d: Call2 0x42a

0x24e: Pop(0)
0x24f: Push(CVector(0.0, 0.0, 0.0))
0x250: @ SetSpeed(Stack[-1])
0x251: Pop(1)
0x252: @ Stop()
0x253: Pop(0)
0x254: @ StopAsync()
0x255: Pop(0)
0x256: PushEmpty(bool)
0x257: Call2 0x3ff

0x258: Pop(0)
0x259: Pop(1); Push((bool) Stack[-1] == 0)
0x25a: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x25b: PushEmpty(bool, object)
0x25c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25d: Call2 0x671

0x25e: Pop(1)
0x25f: Pop(1); Push((bool) Stack[-1] == 0)
0x260: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x261: GOTO 0x27c

0x262: @@ GetPFPosition(Stack[-10])
0x263: Pop(0)
0x264: @ GetPFPosition(Stack[-9])
0x265: Pop(0)
0x266: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x267: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x268: Pop(0); Push(Stack[-23] * Stack[-23]);
0x269: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x26a: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x26b: PushEmpty(bool, float)
0x26c: Stack[-1] = Stack[-25]
0x26d: Call2 0x2d7

0x26e: Pop(1)
0x26f: Pop(1); Push((bool) Stack[-1] == 0)
0x270: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x271: GOTO 0x27c

0x272: GOTO 0x27b

0x273: PushEmpty(bool, float)
0x274: Stack[-1] = Stack[-25]
0x275: Call2 0x2d7

0x276: Pop(1)
0x277: Pop(1); Push((bool) Stack[-1] == 0)
0x278: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x279: GOTO 0x27c

0x27a: Stack[-7] = (bool) 1
0x27b: GOTO 0x1d0

0x27c: @ WaitForAnimEnd()
0x27d: Pop(0)
0x27e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x27f: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x280: Return(); Pop(22)

0x281: Push("all")
0x282: Push("attack_off")
0x283: @ PlayAnimation(Stack[-2], Stack[-1])
0x284: Pop(2)
0x285: @ WaitForAnimEnd()
0x286: Pop(0)
0x287: Push(Stack[-8])
0x288: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x289: Push((float)2.0)
0x28a: @ Sleep(Stack[-1])
0x28b: Pop(1)
0x28c: Return(); Pop(22)

0x28d: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x28e: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x28f: Push("all")
0x290: Push("attack_begin")
0x291: Push((int) 1)
0x292: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x293: Pop(2); Push(Stack[-2] + Stack[-1]);
0x294: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x295: Pop(2)
0x296: Pop(0); Push((bool) Stack[-3] == 0)
0x297: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x298: GOTO 0x29c

0x299: Push((int) 1)
0x29a: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x29b: GOTO 0x28f

0x29c: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x29d: Push("attack")
0x29e: Push((int) 1)
0x29f: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x2a0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2a1: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x2a2: Pop(1)
0x2a3: Pop(0); Push((bool) Stack[-2] == 0)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a5: GOTO 0x2a9

0x2a6: Push((int) 1)
0x2a7: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x2a8: GOTO 0x29d

0x2a9: Push("all")
0x2aa: Push("bjump")
0x2ab: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x2ac: Pop(2)
0x2ad: Push(CvectorIndex(Stack[-1], 2))
0x2ae: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x2af: Return(); Pop(6)

0x2b0: PushEmpty(object, float, float, object, float, float)
0x2b1: Push((float)0.9)
0x2b2: Pop(1); Push(Stack[-9] * Stack[-1]);
0x2b3: @ GetVictim(Stack[-1], Stack[-4])
0x2b4: Pop(1)
0x2b5: @ ReportAttack(Stack[-0])
0x2b6: Pop(0)
0x2b7: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x2b8: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2b9: PushEmpty(float, object, int)
0x2ba: Stack[-2] = Stack[-6]
0x2bb: Stack[-1] = Stack[-10]
0x2bc: Call2 0x1a2

0x2bd: Stack[-5] = Stack[-3]
0x2be: Pop(3)
0x2bf: PushEmpty(float, object, float, int)
0x2c0: Stack[-3] = Stack[-7]
0x2c1: Stack[-2] = Stack[-6]
0x2c2: PushEmpty(int, object, int)
0x2c3: Stack[-2] = Stack[-10]
0x2c4: Stack[-1] = Stack[-14]
0x2c5: Call2 0x1a5

0x2c6: Stack[-4] = Stack[-3]
0x2c7: Pop(3)
0x2c8: Call2 0x5ff

0x2c9: Stack[-5] = Stack[-4]
0x2ca: Pop(4)
0x2cb: PushEmpty(int)
0x2cc: Call2 0x42f

0x2cd: Pop(0)
0x2ce: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x2cf: Pop(1)
0x2d0: PushEmpty(object, float)
0x2d1: Stack[-2] = Stack[-5]
0x2d2: Stack[-1] = Stack[-3]
0x2d3: Call2 0x436

0x2d4: Pop(2)
0x2d5: Return(); Pop(6)

0x2d6: Stack[-3] = 0
0x2d7: PushEmpty(int, bool, int, string, int, bool, int, string)
0x2d8: PushEmpty()
0x2d9: Call2 0x42a

0x2da: Pop(0)
0x2db: @ irand(Stack[-4], Stack[-1])
0x2dc: Pop(0)
0x2dd: Push((int) 1)
0x2de: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2df: @ Face(Stack[-0])
0x2e0: Pop(0)
0x2e1: Push((bool) 1)
0x2e2: @ SetAttackState(Stack[-1])
0x2e3: Pop(1)
0x2e4: PushEmpty()
0x2e5: Call2 0x807

0x2e6: Pop(0)
0x2e7: Push("all")
0x2e8: Push("attack_begin")
0x2e9: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2ea: @ PlayAnimation(Stack[-2], Stack[-1])
0x2eb: Pop(2)
0x2ec: @ WaitForAnimEnd()
0x2ed: Pop(0)
0x2ee: PushEmpty()
0x2ef: Call2 0x40a

0x2f0: Pop(0)
0x2f1: PushEmpty(bool, object)
0x2f2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f3: Call2 0x671

0x2f4: Pop(1)
0x2f5: Pop(1); Push((bool) Stack[-1] == 0)
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2f7: @ StopAsync()
0x2f8: Pop(0)
0x2f9: Stack[-10] = (bool) 0
0x2fa: Return(); Pop(8)

0x2fb: PushEmpty(float, int)
0x2fc: Stack[-2] = Stack[-11]
0x2fd: Stack[-1] = Stack[-6]
0x2fe: Call2 0x2b0

0x2ff: Pop(2)
0x300: Push("all")
0x301: Push("attack_middle")
0x302: Pop(1); Push(Stack[-1] + Stack[-6]);
0x303: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x304: Pop(2)
0x305: Push(Stack[-3])
0x306: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x307: PushEmpty()
0x308: Call2 0x807

0x309: Pop(0)
0x30a: Push("all")
0x30b: Push("attack_middle")
0x30c: Pop(1); Push(Stack[-1] + Stack[-6]);
0x30d: @ PlayAnimation(Stack[-2], Stack[-1])
0x30e: Pop(2)
0x30f: @ WaitForAnimEnd()
0x310: Pop(0)
0x311: PushEmpty()
0x312: Call2 0x42a

0x313: Pop(0)
0x314: PushEmpty(bool, object)
0x315: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x316: Call2 0x671

0x317: Pop(1)
0x318: Pop(1); Push((bool) Stack[-1] == 0)
0x319: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x31a: @ StopAsync()
0x31b: Pop(0)
0x31c: Stack[-10] = (bool) 0
0x31d: Return(); Pop(8)

0x31e: PushEmpty(float, int)
0x31f: Stack[-2] = Stack[-11]
0x320: Stack[-1] = Stack[-6]
0x321: Call2 0x2b0

0x322: Pop(2)
0x323: Stack[-2] = (int) 1
0x324: Push("attack_middle")
0x325: Pop(1); Push(Stack[-1] + Stack[-5]);
0x326: Push("_")
0x327: Pop(2); Push(Stack[-2] + Stack[-1]);
0x328: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x329: Push("all")
0x32a: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x32b: Pop(1)
0x32c: Pop(0); Push((bool) Stack[-3] == 0)
0x32d: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32e: GOTO 0x34c

0x32f: PushEmpty()
0x330: Call2 0x807

0x331: Pop(0)
0x332: Push("all")
0x333: @ PlayAnimation(Stack[-1], Stack[-2])
0x334: Pop(1)
0x335: @ WaitForAnimEnd()
0x336: Pop(0)
0x337: PushEmpty()
0x338: Call2 0x42a

0x339: Pop(0)
0x33a: PushEmpty(bool, object)
0x33b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33c: Call2 0x671

0x33d: Pop(1)
0x33e: Pop(1); Push((bool) Stack[-1] == 0)
0x33f: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x340: @ StopAsync()
0x341: Pop(0)
0x342: Stack[-10] = (bool) 0
0x343: Return(); Pop(8)

0x344: PushEmpty(float, int)
0x345: Stack[-2] = Stack[-11]
0x346: Stack[-1] = Stack[-6]
0x347: Call2 0x2b0

0x348: Pop(2)
0x349: Push((int) 1)
0x34a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x34b: GOTO 0x324

0x34c: Push((bool) 0)
0x34d: @ SetAttackState(Stack[-1])
0x34e: Pop(1)
0x34f: Push("all")
0x350: Push("attack_end")
0x351: Pop(1); Push(Stack[-1] + Stack[-6]);
0x352: @ PlayAnimation(Stack[-2], Stack[-1])
0x353: Pop(2)
0x354: PushEmpty(bool)
0x355: Call2 0x438

0x356: Pop(0)
0x357: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x358: PushEmpty(bool, float)
0x359: Stack[-1] = (float) 0.75
0x35a: Call2 0x360

0x35b: Pop(2)
0x35c: @ StopAsync()
0x35d: Pop(0)
0x35e: Stack[-10] = (bool) 1
0x35f: Return(); Pop(8)

0x360: PushEmpty(float, bool, float, bool)
0x361: @ rand(Stack[-2])
0x362: Pop(0)
0x363: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x364: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x365: @ IsAnimationPlaying(Stack[-1])
0x366: Pop(0)
0x367: Pop(0); Push((bool) Stack[-1] == 0)
0x368: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x369: GOTO 0x373

0x36a: PushEmpty(bool)
0x36b: Call2 0x3c2

0x36c: Pop(0)
0x36d: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36e: Stack[-6] = (bool) 1
0x36f: Return(); Pop(4)

0x370: @ sync()
0x371: Pop(0)
0x372: GOTO 0x365

0x373: GOTO 0x379

0x374: @ WaitForAnimEnd()
0x375: Pop(0)
0x376: PushEmpty()
0x377: Call2 0x42a

0x378: Pop(0)
0x379: Stack[-6] = (bool) 0
0x37a: Return(); Pop(4)

0x37b: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x37c: @ IsAnimationPlaying(Stack[-5])
0x37d: Pop(0)
0x37e: Pop(0); Push((bool) Stack[-5] == 0)
0x37f: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x380: GOTO 0x3a1

0x381: PushEmpty(bool)
0x382: Call2 0x3c2

0x383: Pop(0)
0x384: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x385: Stack[-12] = (bool) 1
0x386: Return(); Pop(10)

0x387: PushEmpty(bool, object)
0x388: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x389: Call2 0x671

0x38a: Pop(1)
0x38b: Pop(1); Push((bool) Stack[-1] == 0)
0x38c: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38d: Stack[-12] = (bool) 0
0x38e: Return(); Pop(10)

0x38f: @@ GetPFPosition(Stack[-4])
0x390: Pop(0)
0x391: @ GetPFPosition(Stack[-3])
0x392: Pop(0)
0x393: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x394: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x395: Pop(0); Push(Stack[-11] * Stack[-11]);
0x396: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x397: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x398: PushEmpty(bool, float)
0x399: Stack[-1] = Stack[-13]
0x39a: Call2 0x2d7

0x39b: Pop(2)
0x39c: Stack[-12] = (bool) 1
0x39d: Return(); Pop(10)

0x39e: @ sync()
0x39f: Pop(0)
0x3a0: GOTO 0x37c

0x3a1: PushEmpty()
0x3a2: Call2 0x42a

0x3a3: Pop(0)
0x3a4: Stack[-12] = (bool) 0
0x3a5: Return(); Pop(10)

0x3a6: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x3a7: PushEmpty(bool, object)
0x3a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3a9: Call2 0x671

0x3aa: Pop(1)
0x3ab: Pop(1); Push((bool) Stack[-1] == 0)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ad: Stack[-11] = (bool) 0
0x3ae: Return(); Pop(10)

0x3af: PushEmpty(bool)
0x3b0: Call2 0x3ff

0x3b1: Pop(0)
0x3b2: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3b3: @@ GetPFPosition(Stack[-5])
0x3b4: Pop(0)
0x3b5: @ GetPFPosition(Stack[-4])
0x3b6: Pop(0)
0x3b7: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3b8: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3b9: @@ GetAttackDistance(Stack[-1])
0x3ba: Pop(0)
0x3bb: Push((int) 50)
0x3bc: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3bd: Pop(0); Push(Stack[-1] * Stack[-1]);
0x3be: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x3bf: Return(); Pop(10)

0x3c0: Stack[-11] = (bool) 0
0x3c1: Return(); Pop(10)

0x3c2: PushEmpty(bool)
0x3c3: Stack[-1] = (bool) 0
0x3c4: PushEmpty(bool)
0x3c5: Call2 0x3a6

0x3c6: Pop(0)
0x3c7: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3c8: PushEmpty(bool)
0x3c9: Call2 0x3d2

0x3ca: Pop(0)
0x3cb: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3cc: Stack[-1] = (bool) 1
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3ce: Stack[-1] = (bool) 1
0x3cf: Return(); Pop(0)

0x3d0: Stack[-1] = (bool) 0
0x3d1: Return(); Pop(0)

0x3d2: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x3d3: @ GetScene(Stack[-5])
0x3d4: Pop(0)
0x3d5: Stack[-4] = (bool) 0
0x3d6: PushEmpty(cvector, object)
0x3d7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3d8: Call2 0x5e0

0x3d9: Pop(1)
0x3da: Pop(1); Push(( -Stack[-1])
0x3db: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x3dc: Pop(1)
0x3dd: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x3de: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3df: GOTO 0x3fc

0x3e0: @ Face(Stack[-0])
0x3e1: Pop(0)
0x3e2: Push("all")
0x3e3: Push("bjump")
0x3e4: @ PlayAnimation(Stack[-2], Stack[-1])
0x3e5: Pop(2)
0x3e6: @@ GetPFPosition(Stack[-2])
0x3e7: Pop(0)
0x3e8: @ GetPFPosition(Stack[-1])
0x3e9: Pop(0)
0x3ea: @ WaitForAnimEnd()
0x3eb: Pop(0)
0x3ec: PushEmpty()
0x3ed: Call2 0x42a

0x3ee: Pop(0)
0x3ef: @ StopAsync()
0x3f0: Pop(0)
0x3f1: Push(CVector(0.0, 0.0, 0.0))
0x3f2: @ SetSpeed(Stack[-1])
0x3f3: Pop(1)
0x3f4: Stack[-4] = (bool) 1
0x3f5: PushEmpty(bool)
0x3f6: Call2 0x3a6

0x3f7: Pop(0)
0x3f8: Pop(1); Push((bool) Stack[-1] == 0)
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3fa: GOTO 0x3fc

0x3fb: GOTO 0x3d6

0x3fc: Stack[-11] = Stack[-4]
0x3fd: Return(); Pop(10)

0x3fe: Stack[-5] = 0
0x3ff: PushEmpty(bool, bool)
0x400: Push("IsAttacking")
0x401: Push((int) 1)
0x402: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x403: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x404: @@ IsAttacking(Stack[-1])
0x405: Pop(0)
0x406: Stack[-3] = Stack[-1]
0x407: Return(); Pop(2)

0x408: Stack[-3] = (bool) 0
0x409: Return(); Pop(2)

0x40a: PushEmpty(float, int, float, int)
0x40b: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x40c: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40d: Return(); Pop(4)

0x40e: Push( Stack[5 + Tasks[-1].StackPointer] )
0x40f: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x410: Push((int) -1)
0x411: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x412: Push((int) 0)
0x413: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x414: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x415: Return(); Pop(4)

0x416: @ rand(Stack[-2])
0x417: Pop(0)
0x418: PushEmpty(float)
0x419: Call2 0x43c

0x41a: Pop(0)
0x41b: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x41c: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x41d: @ irand(Stack[-1], Stack[-2])
0x41e: Pop(0)
0x41f: Push((int) 1)
0x420: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x421: Push("attack")
0x422: Pop(1); Push(Stack[-1] + Stack[-2]);
0x423: @ Speak(Stack[-1])
0x424: Pop(1)
0x425: PushEmpty(int)
0x426: Call2 0x43a

0x427: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x428: Pop(1)
0x429: Return(); Pop(4)

0x42a: PushEmpty(object)
0x42b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x42c: Call2 0x7fe

0x42d: Pop(1)
0x42e: Return(); Pop(0)

0x42f: Stack[-1] = (int) 0
0x430: Return(); Pop(0)

0x431: PushEmpty(string)
0x432: Stack[-1] = "attack_stay"
0x433: Call2 0x79d

0x434: Pop(1)
0x435: Return(); Pop(0)

0x436: PushEmpty()
0x437: Return(); Pop(0)

0x438: Stack[-1] = (bool) 1
0x439: Return(); Pop(0)

0x43a: Stack[-1] = (int) 1
0x43b: Return(); Pop(0)

0x43c: Stack[-1] = (float) 0.5
0x43d: Return(); Pop(0)

0x43e: PushEmpty(bool, bool, bool, bool)
0x43f: PushEmpty(object)
0x440: Stack[-1] = Stack[-10]
0x441: Call2 0x7fe

0x442: Pop(1)
0x443: Push((int) 1)
0x444: Push((int) 5)
0x445: @ SetTimer(Stack[-2], Stack[-1])
0x446: Pop(2)
0x447: @ CanSee(Stack[-2], Stack[-9])
0x448: Pop(0)
0x449: Push(Stack[-2])
0x44a: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x44b: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x44c: PushEmpty(object)
0x44d: Stack[-1] = Stack[-10]
0x44e: Call2 0x78b

0x44f: Pop(1)
0x450: GOTO 0x452

0x451: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x452: PushEmpty(bool, object)
0x453: Stack[-1] = Stack[-11]
0x454: Call2 0x5ee

0x455: Pop(1)
0x456: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x457: PushEmpty(object)
0x458: Call2 0x7c6

0x459: Pop(0)
0x45a: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x45b: Pop(1)
0x45c: PushEmpty(bool, object, float, float, bool, bool)
0x45d: Stack[-5] = Stack[-15]
0x45e: Stack[-4] = Stack[-14]
0x45f: Stack[-3] = Stack[-13]
0x460: Stack[-2] = Stack[-12]
0x461: Stack[-1] = Stack[-11]
0x462: Call2 0x4a7

0x463: Stack[-7] = Stack[-6]
0x464: Pop(6)
0x465: Push( Stack[2 + Tasks[-1].StackPointer] )
0x466: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x467: Push("head")
0x468: @ UnlookAsync(Stack[-1])
0x469: Pop(1)
0x46a: Push((int) 1)
0x46b: @ KillTimer(Stack[-1])
0x46c: Pop(1)
0x46d: Stack[-10] = Stack[-1]
0x46e: Return(); Pop(4)

0x46f: PushEmpty()
0x470: Push((int) 1)
0x471: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x472: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x473: PushEmpty(object)
0x474: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x475: Call2 0x7fe

0x476: Pop(1)
0x477: GOTO 0x47c

0x478: PushEmpty(int)
0x479: Stack[-1] = Stack[-2]
0x47a: Call2 0x50d

0x47b: Pop(1)
0x47c: Return(); Pop(0)

0x47d: Push((int) 1)
0x47e: @ KillTimer(Stack[-1])
0x47f: Pop(1)
0x480: Push( Stack[2 + Tasks[-1].StackPointer] )
0x481: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x482: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x483: Push("head")
0x484: @ UnlookAsync(Stack[-1])
0x485: Pop(1)
0x486: PushEmpty()
0x487: Call2 0x523

0x488: Pop(0)
0x489: Return(); Pop(0)

0x48a: PushEmpty()
0x48b: PushEmpty(bool)
0x48c: Stack[-1] = (bool) 0
0x48d: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x48e: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x48f: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x490: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x491: Stack[-1] = (bool) 1
0x492: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x493: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x494: PushEmpty(object)
0x495: Stack[-1] = Stack[-2]
0x496: Call2 0x78b

0x497: Pop(1)
0x498: Return(); Pop(0)

0x499: PushEmpty()
0x49a: PushEmpty(bool)
0x49b: Stack[-1] = (bool) 0
0x49c: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x49d: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x49e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x49f: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x4a0: Stack[-1] = (bool) 1
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x4a2: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4a3: Push("head")
0x4a4: @ UnlookAsync(Stack[-1])
0x4a5: Pop(1)
0x4a6: Return(); Pop(0)

0x4a7: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x4a8: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4a9: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x4aa: Stack[-7] = Stack[-17]
0x4ab: PushEmpty(bool, object)
0x4ac: Stack[-1] = Stack[-23]
0x4ad: Call2 0x533

0x4ae: Pop(1)
0x4af: Pop(1); Push((bool) Stack[-1] == 0)
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4b1: Stack[-22] = (bool) 0
0x4b2: Return(); Pop(16)

0x4b3: @@ GetPosition(Stack[-5])
0x4b4: Pop(0)
0x4b5: @ GetPosition(Stack[-4])
0x4b6: Pop(0)
0x4b7: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x4b8: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x4b9: PushEmpty(bool)
0x4ba: Stack[-1] = (bool) 0
0x4bb: Push((int) 0)
0x4bc: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4be: Pop(0); Push(Stack[-20] * Stack[-20]);
0x4bf: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4c1: Stack[-1] = (bool) 1
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c3: @ Stop()
0x4c4: Pop(0)
0x4c5: Stack[-22] = (bool) 0
0x4c6: Return(); Pop(16)

0x4c7: Pop(0); Push(Stack[-20] * Stack[-20]);
0x4c8: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x4c9: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x4ca: @@ GetPFPosition(Stack[-5])
0x4cb: Pop(0)
0x4cc: @ FindPathTo(Stack[-1], Stack[-5])
0x4cd: Pop(0)
0x4ce: Pop(0); Push(( Stack[-1] != 0 )
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4d0: Stack[-6] = Stack[-1]
0x4d1: Stack[-1] = 0
0x4d2: Pop(0); Push(( Stack[-6] != 0 )
0x4d3: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4d4: Push(Stack[-7])
0x4d5: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4d6: Stack[-7] = (bool) 0
0x4d7: @ RotatePath(Stack[-6], Stack[-8])
0x4d8: Pop(0)
0x4d9: Pop(0); Push((bool) Stack[-8] == 0)
0x4da: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4db: GOTO 0x50b

0x4dc: Push((int) 0)
0x4dd: Push((float)0.3)
0x4de: @ SetTimer(Stack[-2], Stack[-1])
0x4df: Pop(2)
0x4e0: PushEmpty(string)
0x4e1: Call2 0x53a

0x4e2: Pop(0)
0x4e3: PushEmpty(string)
0x4e4: Call2 0x53c

0x4e5: Pop(0)
0x4e6: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x4e7: Pop(2)
0x4e8: Pop(0); Push((bool) Stack[-8] == 0)
0x4e9: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4ea: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4eb: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4ec: Stack[-6] = 0
0x4ed: GOTO 0x50b

0x4ee: GOTO 0x4f0

0x4ef: GOTO 0x50a

0x4f0: GOTO 0x4f2

0x4f1: Stack[-6] = 0
0x4f2: GOTO 0x503

0x4f3: Push((int) 0)
0x4f4: @ KillTimer(Stack[-1])
0x4f5: Pop(1)
0x4f6: Push((float)0.5)
0x4f7: @ Sleep(Stack[-1], Stack[-9])
0x4f8: Pop(1)
0x4f9: Pop(0); Push((bool) Stack[-8] == 0)
0x4fa: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4fb: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4fc: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4fd: Stack[-6] = 0
0x4fe: GOTO 0x50b

0x4ff: Push((int) 0)
0x500: Push((float)0.3)
0x501: @ SetTimer(Stack[-2], Stack[-1])
0x502: Pop(2)
0x503: Stack[-1] = 0
0x504: GOTO 0x509

0x505: Push((int) 0)
0x506: @ KillTimer(Stack[-1])
0x507: Pop(1)
0x508: GOTO 0x50b

0x509: Stack[-6] = 0
0x50a: GOTO 0x4ab

0x50b: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x50c: Return(); Pop(16)

0x50d: PushEmpty()
0x50e: Push((int) 0)
0x50f: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x510: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x511: Return(); Pop(0)

0x512: PushEmpty(bool, object)
0x513: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x514: Call2 0x533

0x515: Pop(1)
0x516: Pop(1); Push((bool) Stack[-1] == 0)
0x517: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x518: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x519: Push((int) 0)
0x51a: @ KillTimer(Stack[-1])
0x51b: Pop(1)
0x51c: @ Stop()
0x51d: Pop(0)
0x51e: Return(); Pop(0)

0x51f: PushEmpty()
0x520: @ RequestClearPath(Stack[-1])
0x521: Pop(0)
0x522: Return(); Pop(0)

0x523: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x524: Push((int) 0)
0x525: @ KillTimer(Stack[-1])
0x526: Pop(1)
0x527: @ Stop()
0x528: Pop(0)
0x529: Return(); Pop(0)

0x52a: PushEmpty()
0x52b: PushEmpty()
0x52c: Call2 0x47d

0x52d: Pop(0)
0x52e: PushEmpty(object)
0x52f: Stack[-1] = Stack[-2]
0x530: Call2 0x886

0x531: Pop(1)
0x532: Return(); Pop(0)

0x533: PushEmpty()
0x534: PushEmpty(bool, object)
0x535: Stack[-1] = Stack[-3]
0x536: Call2 0x671

0x537: Stack[-4] = Stack[-2]
0x538: Pop(2)
0x539: Return(); Pop(0)

0x53a: Stack[-1] = "walk"
0x53b: Return(); Pop(0)

0x53c: Stack[-1] = "run"
0x53d: Return(); Pop(0)

0x53e: PushEmpty()
0x53f: EventDisable(0)
0x540: PushEmpty(object)
0x541: Stack[-1] = Stack[-2]
0x542: Call2 0x557

0x543: Pop(1)
0x544: Push((int) 50)
0x545: Push((int) 40)
0x546: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x547: Pop(2)
0x548: EventEnable(0)
0x549: @ Hold()
0x54a: Pop(0)
0x54b: GOTO 0x549

0x54c: Return(); Pop(0)

0x54d: PushEmpty(bool, bool)
0x54e: @ IsOverrideActive(Stack[-1])
0x54f: Pop(0)
0x550: Pop(0); Push((bool) Stack[-1] == 0)
0x551: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x552: PushEmpty(object)
0x553: Stack[-1] = Stack[-4]
0x554: Call2 0x848

0x555: Pop(1)
0x556: Return(); Pop(2)

0x557: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x558: Pop(0); Push((bool) Stack[-21] == 0)
0x559: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x55a: PushEmpty(string)
0x55b: Stack[-1] = "fdie"
0x55c: Call2 0x5b2

0x55d: Pop(1)
0x55e: GOTO 0x5b1

0x55f: @@ GetPosition(Stack[-10])
0x560: Pop(0)
0x561: @ GetPosition(Stack[-9])
0x562: Pop(0)
0x563: @ GetDirection(Stack[-8])
0x564: Pop(0)
0x565: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x566: Push(CvectorIndex(Stack[-7], 0))
0x567: Push(CvectorIndex(Stack[-9], 0))
0x568: Pop(2); Push(Stack[-2] * Stack[-1]);
0x569: Push(CvectorIndex(Stack[-8], 2))
0x56a: Push(CvectorIndex(Stack[-10], 2))
0x56b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x56c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x56d: Push((int) 0)
0x56e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x56f: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x570: Stack[-6] = "fdie"
0x571: GOTO 0x573

0x572: Stack[-6] = "bdie"
0x573: @ RemoveRTEnvelope()
0x574: Pop(0)
0x575: @ SetDeathState()
0x576: Pop(0)
0x577: @ Stop()
0x578: Pop(0)
0x579: @ StopAsync()
0x57a: Pop(0)
0x57b: Stack[-5] = Stack[-21]
0x57c: Push("GetScriptProperty")
0x57d: Push((int) 2)
0x57e: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x57f: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x580: Push("Owner")
0x581: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x582: Pop(1)
0x583: Push(Stack[-4])
0x584: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x585: Push("Owner")
0x586: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x587: Pop(1)
0x588: Pop(0); Push((bool) Stack[-5] == 0)
0x589: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x58a: Stack[-5] = Stack[-21]
0x58b: Push("@GetEyesHeight")
0x58c: Push((int) 1)
0x58d: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x58e: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x58f: @@ GetEyesHeight(Stack[-2])
0x590: Pop(0)
0x591: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x592: Push(CvectorIndex(Stack[-1], 1))
0x593: Stack[-1] = Stack[-3]
0x594: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x595: Push("head")
0x596: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x597: Pop(1)
0x598: Stack[-3] = (bool) 1
0x599: GOTO 0x59b

0x59a: Stack[-3] = (bool) 0
0x59b: PushEmpty(string)
0x59c: Stack[-1] = Stack[-7]
0x59d: Call2 0x79d

0x59e: Pop(1)
0x59f: Push("all")
0x5a0: @ PlayAnimation(Stack[-1], Stack[-7])
0x5a1: Pop(1)
0x5a2: @ WaitForAnimEnd()
0x5a3: Pop(0)
0x5a4: Push(Stack[-3])
0x5a5: IF (Stack[-1] == 0) GOTO 0x5ab; Pop(1)

0x5a6: @ StopAsync()
0x5a7: Pop(0)
0x5a8: Push("head")
0x5a9: @ UnlookAsync(Stack[-1])
0x5aa: Pop(1)
0x5ab: Push("all")
0x5ac: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x5ad: Pop(1)
0x5ae: @ RemoveEnvelope()
0x5af: Pop(0)
0x5b0: Stack[-5] = 0
0x5b1: Return(); Pop(20)

0x5b2: PushEmpty()
0x5b3: @ RemoveRTEnvelope()
0x5b4: Pop(0)
0x5b5: @ SetDeathState()
0x5b6: Pop(0)
0x5b7: @ Stop()
0x5b8: Pop(0)
0x5b9: @ StopAsync()
0x5ba: Pop(0)
0x5bb: @ StopSecondaryAnimation()
0x5bc: Pop(0)
0x5bd: PushEmpty(string)
0x5be: Stack[-1] = Stack[-2]
0x5bf: Call2 0x79d

0x5c0: Pop(1)
0x5c1: Push("all")
0x5c2: @ PlayAnimation(Stack[-1], Stack[-2])
0x5c3: Pop(1)
0x5c4: @ WaitForAnimEnd()
0x5c5: Pop(0)
0x5c6: Push("all")
0x5c7: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x5c8: Pop(1)
0x5c9: @ RemoveEnvelope()
0x5ca: Pop(0)
0x5cb: Return(); Pop(0)

0x5cc: PushEmpty()
0x5cd: Return(); Pop(0)

0x5ce: PushEmpty()
0x5cf: Return(); Pop(0)

0x5d0: PushEmpty()
0x5d1: Return(); Pop(0)

0x5d2: PushEmpty()
0x5d3: Push((int) 2)
0x5d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d5: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d6: Stack[-2] = "fire"
0x5d7: Return(); Pop(0)

0x5d8: GOTO 0x5de

0x5d9: Push((int) 1)
0x5da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5db: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5dc: Stack[-2] = "bullet"
0x5dd: Return(); Pop(0)

0x5de: Stack[-2] = "phys"
0x5df: Return(); Pop(0)

0x5e0: PushEmpty(cvector, cvector, cvector, cvector)
0x5e1: @ GetPosition(Stack[-2])
0x5e2: Pop(0)
0x5e3: @@ GetPosition(Stack[-1])
0x5e4: Pop(0)
0x5e5: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x5e6: Return(); Pop(4)

0x5e7: PushEmpty(object, object)
0x5e8: Push("player")
0x5e9: @ FindActor(Stack[-2], Stack[-1])
0x5ea: Pop(1)
0x5eb: Stack[-3] = Stack[-1]
0x5ec: Return(); Pop(2)

0x5ed: Stack[-1] = 0
0x5ee: PushEmpty(bool, bool)
0x5ef: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5f0: Pop(0)
0x5f1: Stack[-4] = Stack[-1]
0x5f2: Return(); Pop(2)

0x5f3: PushEmpty(bool, bool)
0x5f4: Push("HasProperty")
0x5f5: Push((int) 2)
0x5f6: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x5f7: Pop(1); Push((bool) Stack[-1] == 0)
0x5f8: IF (Stack[-1] == 0) GOTO 0x5fb; Pop(1)

0x5f9: Stack[-5] = (bool) 0
0x5fa: Return(); Pop(2)

0x5fb: @@ HasProperty(Stack[-3], Stack[-1])
0x5fc: Pop(0)
0x5fd: Stack[-5] = Stack[-1]
0x5fe: Return(); Pop(2)

0x5ff: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x600: PushEmpty(bool, object, string)
0x601: Stack[-2] = Stack[-18]
0x602: Stack[-1] = "health"
0x603: Call2 0x5f3

0x604: Pop(2)
0x605: Pop(1); Push((bool) Stack[-1] == 0)
0x606: IF (Stack[-1] == 0) GOTO 0x609; Pop(1)

0x607: Stack[-16] = (float) 0.0
0x608: Return(); Pop(12)

0x609: PushEmpty(bool, object, string)
0x60a: Stack[-2] = Stack[-18]
0x60b: Stack[-1] = "armor"
0x60c: Call2 0x5f3

0x60d: Pop(2)
0x60e: Pop(1); Push((bool) Stack[-1] == 0)
0x60f: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x610: Stack[-6] = (int) 0
0x611: GOTO 0x615

0x612: Push("armor")
0x613: @@ GetProperty(Stack[-1], Stack[-7])
0x614: Pop(1)
0x615: Push("armor_")
0x616: PushEmpty(string, int)
0x617: Stack[-1] = Stack[-16]
0x618: Call2 0x5d2

0x619: Pop(1)
0x61a: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x61b: PushEmpty(bool, object, string)
0x61c: Stack[-2] = Stack[-18]
0x61d: Stack[-1] = Stack[-8]
0x61e: Call2 0x5f3

0x61f: Pop(2)
0x620: Pop(1); Push((bool) Stack[-1] == 0)
0x621: IF (Stack[-1] == 0) GOTO 0x624; Pop(1)

0x622: Stack[-4] = (int) 0
0x623: GOTO 0x626

0x624: @@ GetProperty(Stack[-5], Stack[-4])
0x625: Pop(0)
0x626: PushEmpty(float, float, float)
0x627: Pop(0); Push(Stack[-9] + Stack[-7]);
0x628: Push((float)100.0)
0x629: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x62a: Stack[-1] = (int) 1
0x62b: Call2 0x7d6

0x62c: Stack[-6] = Stack[-3]
0x62d: Pop(3)
0x62e: Push("health")
0x62f: @@ GetProperty(Stack[-1], Stack[-3])
0x630: Pop(1)
0x631: Push((int) 1)
0x632: Pop(1); Push(Stack[-1] - Stack[-4]);
0x633: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x634: Push("health")
0x635: PushEmpty(float, float, float, float)
0x636: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x637: Stack[-2] = (int) 0
0x638: Stack[-1] = (int) 1
0x639: Call2 0x7dd

0x63a: Pop(3)
0x63b: @@ SetProperty(Stack[-2], Stack[-1])
0x63c: Pop(2)
0x63d: PushEmpty(bool, object)
0x63e: Stack[-1] = Stack[-17]
0x63f: Call2 0x5ee

0x640: Pop(1)
0x641: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x642: PushEmpty(float)
0x643: Stack[-1] = -Stack[-2]; Pop(0);
0x644: Call2 0x7e8

0x645: Pop(1)
0x646: Stack[-16] = Stack[-1]
0x647: Return(); Pop(12)

0x648: PushEmpty(bool, bool)
0x649: @@ IsDead(Stack[-1])
0x64a: Pop(0)
0x64b: Stack[-4] = Stack[-1]
0x64c: Return(); Pop(2)

0x64d: PushEmpty(object, object, object, object)
0x64e: Pop(0); Push((bool) Stack[-5] == 0)
0x64f: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x650: Stack[-6] = (bool) 0
0x651: Return(); Pop(4)

0x652: PushEmpty(bool)
0x653: Stack[-1] = (bool) 0
0x654: Push("IsDead")
0x655: Push((int) 1)
0x656: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x657: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x658: PushEmpty(bool, object)
0x659: Stack[-1] = Stack[-8]
0x65a: Call2 0x648

0x65b: Pop(1)
0x65c: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x65d: Stack[-1] = (bool) 1
0x65e: IF (Stack[-1] == 0) GOTO 0x661; Pop(1)

0x65f: Stack[-6] = (bool) 0
0x660: Return(); Pop(4)

0x661: @ GetScene(Stack[-2])
0x662: Pop(0)
0x663: Pop(0); Push((bool) Stack[-2] == 0)
0x664: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x665: Stack[-6] = (bool) 0
0x666: Return(); Pop(4)

0x667: @@ GetScene(Stack[-1])
0x668: Pop(0)
0x669: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x66a: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x66b: Stack[-6] = (bool) 0
0x66c: Return(); Pop(4)

0x66d: Stack[-6] = (bool) 1
0x66e: Return(); Pop(4)

0x66f: Stack[-1] = 0
0x670: Stack[-2] = 0
0x671: PushEmpty(int, int)
0x672: PushEmpty(bool, object)
0x673: Stack[-1] = Stack[-5]
0x674: Call2 0x64d

0x675: Pop(1)
0x676: Pop(1); Push((bool) Stack[-1] == 0)
0x677: IF (Stack[-1] == 0) GOTO 0x67a; Pop(1)

0x678: Stack[-4] = (bool) 0
0x679: Return(); Pop(2)

0x67a: PushEmpty(bool, object, string)
0x67b: Stack[-2] = Stack[-6]
0x67c: Stack[-1] = "noaccess"
0x67d: Call2 0x5f3

0x67e: Pop(2)
0x67f: Pop(1); Push((bool) Stack[-1] == 0)
0x680: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x681: Stack[-4] = (bool) 1
0x682: Return(); Pop(2)

0x683: Push("noaccess")
0x684: @@ GetProperty(Stack[-1], Stack[-2])
0x685: Pop(1)
0x686: Push((int) 0)
0x687: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x688: Return(); Pop(2)

0x689: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x68a: Pop(0); Push((bool) Stack[-15] == 0)
0x68b: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x68c: Return(); Pop(14)

0x68d: @ IsDead(Stack[-7])
0x68e: Pop(0)
0x68f: Push(Stack[-7])
0x690: IF (Stack[-1] == 0) GOTO 0x692; Pop(1)

0x691: Return(); Pop(14)

0x692: @ GetSecondaryAnimationType(Stack[-6])
0x693: Pop(0)
0x694: Push((int) 0)
0x695: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x696: IF (Stack[-1] == 0) GOTO 0x698; Pop(1)

0x697: Return(); Pop(14)

0x698: @@ GetPosition(Stack[-5])
0x699: Pop(0)
0x69a: @ GetPosition(Stack[-4])
0x69b: Pop(0)
0x69c: @ GetDirection(Stack[-3])
0x69d: Pop(0)
0x69e: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x69f: Push(CvectorIndex(Stack[-2], 0))
0x6a0: Push(CvectorIndex(Stack[-4], 0))
0x6a1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6a2: Push(CvectorIndex(Stack[-3], 2))
0x6a3: Push(CvectorIndex(Stack[-5], 2))
0x6a4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6a5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6a6: Push((int) 0)
0x6a7: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6a8: IF (Stack[-1] == 0) GOTO 0x6ab; Pop(1)

0x6a9: Stack[-1] = "fhit"
0x6aa: GOTO 0x6ac

0x6ab: Stack[-1] = "bhit"
0x6ac: Push("hit_react")
0x6ad: Push("1")
0x6ae: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6af: Push("2")
0x6b0: Pop(1); Push(Stack[-4] + Stack[-1]);
0x6b1: Push((int) -10)
0x6b2: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6b3: Pop(4)
0x6b4: Return(); Pop(14)

0x6b5: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x6b6: PushEmpty(bool)
0x6b7: Stack[-1] = (bool) 0
0x6b8: PushEmpty(bool)
0x6b9: Stack[-1] = (bool) 0
0x6ba: Push(Stack[-23])
0x6bb: IF (Stack[-1] == 0) GOTO 0x6c0; Pop(1)

0x6bc: Push((int) 4)
0x6bd: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x6be: IF (Stack[-1] == 0) GOTO 0x6c0; Pop(1)

0x6bf: Stack[-1] = (bool) 1
0x6c0: IF (Stack[-1] == 0) GOTO 0x6c5; Pop(1)

0x6c1: Push((int) 5)
0x6c2: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x6c3: IF (Stack[-1] == 0) GOTO 0x6c5; Pop(1)

0x6c4: Stack[-1] = (bool) 1
0x6c5: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6c6: PushEmpty(cvector, cvector)
0x6c7: PushEmpty(cvector, object)
0x6c8: Stack[-1] = Stack[-25]
0x6c9: Call2 0x5e0

0x6ca: Stack[-3] = Stack[-2]
0x6cb: Pop(2)
0x6cc: Call2 0x7cc

0x6cd: Stack[-11] = Stack[-2]
0x6ce: Pop(2)
0x6cf: @ CreateVectorVector(Stack[-8])
0x6d0: Pop(0)
0x6d1: Stack[-7] = (int) 1
0x6d2: Push("hit")
0x6d3: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6d4: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x6d5: Pop(1)
0x6d6: Pop(0); Push((bool) Stack[-6] == 0)
0x6d7: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6d8: GOTO 0x6e2

0x6d9: Pop(0); Push(Stack[-4] | Stack[-9]);
0x6da: Push((float)0.70711)
0x6db: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6dc: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6dd: @@ add(Stack[-5])
0x6de: Pop(0)
0x6df: Push((int) 1)
0x6e0: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x6e1: GOTO 0x6d2

0x6e2: @@ size(Stack[-3])
0x6e3: Pop(0)
0x6e4: Push(Stack[-3])
0x6e5: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6e6: @ irand(Stack[-2], Stack[-3])
0x6e7: Pop(0)
0x6e8: @@ get(Stack[-1], Stack[-2])
0x6e9: Pop(0)
0x6ea: PushEmpty(object, int, float, cvector, cvector)
0x6eb: Stack[-5] = Stack[-26]
0x6ec: Stack[-4] = Stack[-25]
0x6ed: Stack[-3] = Stack[-24]
0x6ee: Stack[-2] = Stack[-6]
0x6ef: Stack[-1] = -Stack[-14]; Pop(0);
0x6f0: Call2 0x6f9

0x6f1: Pop(5)
0x6f2: Return(); Pop(18)

0x6f3: Stack[-8] = 0
0x6f4: PushEmpty(object)
0x6f5: Stack[-1] = Stack[-22]
0x6f6: Call2 0x689

0x6f7: Pop(1)
0x6f8: Return(); Pop(18)

0x6f9: PushEmpty(object, object, object, object)
0x6fa: @ GetScene(Stack[-2])
0x6fb: Pop(0)
0x6fc: Push("scripted")
0x6fd: Push("blood_dir.xml")
0x6fe: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x6ff: Pop(2)
0x700: PushEmpty(object)
0x701: Stack[-1] = Stack[-10]
0x702: Call2 0x689

0x703: Pop(1)
0x704: Return(); Pop(4)

0x705: Stack[-1] = 0
0x706: Stack[-2] = 0
0x707: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x708: @@ GetPosition(Stack[-3])
0x709: Pop(0)
0x70a: @ GetPosition(Stack[-2])
0x70b: Pop(0)
0x70c: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x70d: Push(CvectorIndex(Stack[-1], 0))
0x70e: Push(CvectorIndex(Stack[-2], 2))
0x70f: @ RotateAsync(Stack[-2], Stack[-1])
0x710: Pop(2)
0x711: Return(); Pop(6)

0x712: PushEmpty(bool, bool)
0x713: @ IsLoaded(Stack[-1])
0x714: Pop(0)
0x715: Stack[-3] = Stack[-1]
0x716: Return(); Pop(2)

0x717: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x718: @@ GetPosition(Stack[-8])
0x719: Pop(0)
0x71a: @@ GetEyesHeight(Stack[-9])
0x71b: Pop(0)
0x71c: Push(CvectorIndex(Stack[-8], 1))
0x71d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x71e: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x71f: @ GetPosition(Stack[-7])
0x720: Pop(0)
0x721: @ GetEyesHeight(Stack[-9])
0x722: Pop(0)
0x723: Push(CvectorIndex(Stack[-7], 1))
0x724: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x725: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x726: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x727: Push(CvectorIndex(Stack[-6], 1))
0x728: Stack[-1] = (int) 0
0x729: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x72a: Pop(0); Push(Stack[-6] | Stack[-6]);
0x72b: Pop(1); Push(Sqrt(Stack[-1]))
0x72c: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x72d: Stack[-5] = -Stack[-6]; Pop(0);
0x72e: Pop(0); Push(Stack[-6] * Stack[-19]);
0x72f: PushEmpty(cvector, cvector)
0x730: Push(CVector(0.0, 1.0, 0.0))
0x731: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x732: Call2 0x7cc

0x733: Pop(1)
0x734: Push((int) 25)
0x735: Pop(2); Push(Stack[-2] * Stack[-1]);
0x736: Pop(2); Push(Stack[-2] + Stack[-1]);
0x737: Push(CVector(0.0, 10.0, 0.0))
0x738: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x739: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x73a: @ IsOverrideActive(Stack[-2])
0x73b: Pop(0)
0x73c: Push(Stack[-2])
0x73d: IF (Stack[-1] == 0) GOTO 0x740; Pop(1)

0x73e: Stack[-21] = (bool) 0
0x73f: Return(); Pop(18)

0x740: @ StopWorld()
0x741: Pop(0)
0x742: @ CameraTransit(Stack[-3], Stack[-5])
0x743: Pop(0)
0x744: Push(CvectorIndex(Stack[-4], 0))
0x745: Push(CvectorIndex(Stack[-5], 2))
0x746: @ Rotate(Stack[-2], Stack[-1])
0x747: Pop(2)
0x748: PushEmpty(bool)
0x749: Call2 0x85d

0x74a: Pop(0)
0x74b: IF (Stack[-1] == 0) GOTO 0x74d; Pop(1)

0x74c: GOTO 0x755

0x74d: Push("head")
0x74e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x74f: Pop(1)
0x750: Push(Stack[-1])
0x751: IF (Stack[-1] == 0) GOTO 0x755; Pop(1)

0x752: Push("head")
0x753: @ LookAsyncCamera(Stack[-1])
0x754: Pop(1)
0x755: @ CameraWaitForPlayFinish()
0x756: Pop(0)
0x757: @ ResumeWorld()
0x758: Pop(0)
0x759: Stack[-21] = (bool) 1
0x75a: Return(); Pop(18)

0x75b: PushEmpty(bool, bool)
0x75c: @ CameraSwitchToNormal()
0x75d: Pop(0)
0x75e: PushEmpty(bool)
0x75f: Call2 0x85d

0x760: Pop(0)
0x761: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x762: GOTO 0x76b

0x763: Push("head")
0x764: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x765: Pop(1)
0x766: Push(Stack[-1])
0x767: IF (Stack[-1] == 0) GOTO 0x76b; Pop(1)

0x768: Push("head")
0x769: @ UnlookAsync(Stack[-1])
0x76a: Pop(1)
0x76b: Return(); Pop(2)

0x76c: PushEmpty(bool, float, float, bool, float, float)
0x76d: @ lshHasAnimation(Stack[-3], Stack[-7])
0x76e: Pop(0)
0x76f: Push(Stack[-3])
0x770: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x771: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x772: Pop(0)
0x773: Push((bool) 0)
0x774: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x775: Pop(1)
0x776: GOTO 0x77b

0x777: Push("Can't find lsh animation : ")
0x778: Pop(1); Push(Stack[-1] + Stack[-8]);
0x779: @ Trace(Stack[-1])
0x77a: Pop(1)
0x77b: Return(); Pop(6)

0x77c: PushEmpty(bool, float, float, bool, float, float)
0x77d: @ lshHasAnimation(Stack[-3], Stack[-8])
0x77e: Pop(0)
0x77f: Push(Stack[-3])
0x780: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x781: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x782: Pop(0)
0x783: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x784: Pop(0)
0x785: GOTO 0x78a

0x786: Push("Can't find lsh animation : ")
0x787: Pop(1); Push(Stack[-1] + Stack[-9]);
0x788: @ Trace(Stack[-1])
0x789: Pop(1)
0x78a: Return(); Pop(6)

0x78b: PushEmpty(float, cvector, float, cvector)
0x78c: @@ GetEyesHeight(Stack[-2])
0x78d: Pop(0)
0x78e: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x78f: Push(CvectorIndex(Stack[-1], 1))
0x790: Stack[-1] = Stack[-3]
0x791: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x792: Push("head")
0x793: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x794: Pop(1)
0x795: Return(); Pop(4)

0x796: PushEmpty(bool)
0x797: Call2 0x85d

0x798: Pop(0)
0x799: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x79a: @ lshStopSpeech()
0x79b: Pop(0)
0x79c: Return(); Pop(0)

0x79d: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x79e: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x79f: Pop(0)
0x7a0: Pop(0); Push((bool) Stack[-8] == 0)
0x7a1: IF (Stack[-1] == 0) GOTO 0x7b6; Pop(1)

0x7a2: Stack[-7] = (int) 0
0x7a3: Push((int) 1)
0x7a4: Pop(1); Push(Stack[-8] + Stack[-1]);
0x7a5: Pop(1); Push(Stack[-18] + Stack[-1]);
0x7a6: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x7a7: Pop(1)
0x7a8: Pop(0); Push((bool) Stack[-6] == 0)
0x7a9: IF (Stack[-1] == 0) GOTO 0x7ab; Pop(1)

0x7aa: GOTO 0x7ae

0x7ab: Push((int) 1)
0x7ac: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x7ad: GOTO 0x7a3

0x7ae: Pop(0); Push((bool) Stack[-7] == 0)
0x7af: IF (Stack[-1] == 0) GOTO 0x7b1; Pop(1)

0x7b0: Return(); Pop(16)

0x7b1: @ irand(Stack[-5], Stack[-7])
0x7b2: Pop(0)
0x7b3: Push((int) 1)
0x7b4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7b5: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x7b6: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x7b7: Pop(0)
0x7b8: Push(Stack[-4])
0x7b9: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7ba: @ GetEyesHeight(Stack[-3])
0x7bb: Pop(0)
0x7bc: @ GetDirection(Stack[-2])
0x7bd: Pop(0)
0x7be: Push((int) 50)
0x7bf: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x7c0: Push(CvectorIndex(Stack[-1], 1))
0x7c1: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x7c2: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x7c3: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x7c4: Pop(0)
0x7c5: Return(); Pop(16)

0x7c6: PushEmpty(object, object)
0x7c7: @ self(Stack[-1])
0x7c8: Pop(0)
0x7c9: Stack[-3] = Stack[-1]
0x7ca: Return(); Pop(2)

0x7cb: Stack[-1] = 0
0x7cc: PushEmpty(float, float)
0x7cd: Pop(0); Push(Stack[-3] | Stack[-3]);
0x7ce: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x7cf: Push((float)0.0)
0x7d0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7d1: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7d2: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x7d3: Return(); Pop(2)

0x7d4: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x7d5: Return(); Pop(2)

0x7d6: PushEmpty()
0x7d7: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x7d8: IF (Stack[-1] == 0) GOTO 0x7db; Pop(1)

0x7d9: Stack[-3] = Stack[-2]
0x7da: GOTO 0x7dc

0x7db: Stack[-3] = Stack[-1]
0x7dc: Return(); Pop(0)

0x7dd: PushEmpty()
0x7de: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x7df: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7e0: Stack[-4] = Stack[-2]
0x7e1: Return(); Pop(0)

0x7e2: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x7e3: IF (Stack[-1] == 0) GOTO 0x7e6; Pop(1)

0x7e4: Stack[-4] = Stack[-1]
0x7e5: Return(); Pop(0)

0x7e6: Stack[-4] = Stack[-3]
0x7e7: Return(); Pop(0)

0x7e8: PushEmpty(object, object)
0x7e9: @ CreateFloatVector(Stack[-1])
0x7ea: Pop(0)
0x7eb: @@ add(Stack[-3])
0x7ec: Pop(0)
0x7ed: Push((int) 15)
0x7ee: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x7ef: Pop(1)
0x7f0: Return(); Pop(2)

0x7f1: Stack[-1] = 0
0x7f2: PushEmpty(object, object)
0x7f3: @ FindActor(Stack[-1], Stack[-4])
0x7f4: Pop(0)
0x7f5: Pop(0); Push((bool) Stack[-1] == 0)
0x7f6: IF (Stack[-1] == 0) GOTO 0x7f9; Pop(1)

0x7f7: Stack[-5] = (bool) 0
0x7f8: Return(); Pop(2)

0x7f9: @ Trigger(Stack[-1], Stack[-3])
0x7fa: Pop(0)
0x7fb: Stack[-5] = (bool) 1
0x7fc: Return(); Pop(2)

0x7fd: Stack[-1] = 0
0x7fe: PushEmpty(bool, bool)
0x7ff: @ IsPlayerActor(Stack[-3], Stack[-1])
0x800: Pop(0)
0x801: Push(Stack[-1])
0x802: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x803: Push("attack")
0x804: @ PlayGlobalMusic(Stack[-1])
0x805: Pop(1)
0x806: Return(); Pop(2)

0x807: PushEmpty(object, object)
0x808: @ GetScene(Stack[-1])
0x809: Pop(0)
0x80a: Push("battle")
0x80b: PushEmpty(object)
0x80c: Call2 0x7c6

0x80d: Pop(0)
0x80e: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x80f: Pop(2)
0x810: Return(); Pop(2)

0x811: Stack[-1] = 0
0x812: PushEmpty(string, string)
0x813: Stack[-1] = "idle"
0x814: Push(Stack[-3])
0x815: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x816: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x817: Stack[-4] = Stack[-1]
0x818: Return(); Pop(2)

0x819: PushEmpty(int, bool, int, bool)
0x81a: Stack[-2] = (int) 0
0x81b: Push("all")
0x81c: PushEmpty(string, int)
0x81d: Stack[-1] = Stack[-5]
0x81e: Call2 0x812

0x81f: Pop(1)
0x820: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x821: Pop(2)
0x822: Pop(0); Push((bool) Stack[-1] == 0)
0x823: IF (Stack[-1] == 0) GOTO 0x825; Pop(1)

0x824: GOTO 0x828

0x825: Push((int) 1)
0x826: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x827: GOTO 0x81b

0x828: Stack[-5] = Stack[-2]
0x829: Return(); Pop(4)

0x82a: PushEmpty()
0x82b: PushEmpty(bool, string, string)
0x82c: Stack[-2] = "quest_d1_01"
0x82d: Stack[-1] = "attack"
0x82e: Call2 0x7f2

0x82f: Pop(3)
0x830: Return(); Pop(0)

0x831: PushEmpty(int, int)
0x832: Push("branch")
0x833: @ GetVariable(Stack[-1], Stack[-2])
0x834: Pop(1)
0x835: Push((int) 0)
0x836: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x837: IF (Stack[-1] == 0) GOTO 0x83b; Pop(1)

0x838: Stack[-3] = (int) 1
0x839: Return(); Pop(2)

0x83a: GOTO 0x840

0x83b: Push((int) 1)
0x83c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x83d: IF (Stack[-1] == 0) GOTO 0x840; Pop(1)

0x83e: Stack[-3] = (int) 2
0x83f: Return(); Pop(2)

0x840: Stack[-3] = (int) 3
0x841: Return(); Pop(2)

0x842: PushEmpty(int, int)
0x843: Push("branch")
0x844: @ GetVariable(Stack[-1], Stack[-2])
0x845: Pop(1)
0x846: Stack[-3] = Stack[-1]
0x847: Return(); Pop(2)

0x848: PushEmpty()
0x849: PushEmpty(int)
0x84a: Call2 0x842

0x84b: Pop(0)
0x84c: Push((int) 1)
0x84d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x84e: IF (Stack[-1] == 0) GOTO 0x852; Pop(1)

0x84f: @ WorkWithCorpse(Stack[-1])
0x850: Pop(0)
0x851: GOTO 0x854

0x852: @ Barter(Stack[-1])
0x853: Pop(0)
0x854: Return(); Pop(0)

0x855: Stack[-1] = (int) 521048
0x856: Return(); Pop(0)

0x857: Stack[-1] = (int) 521047
0x858: Return(); Pop(0)

0x859: Stack[-1] = "ui/NPC_Citizen2.png"
0x85a: Return(); Pop(0)

0x85b: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x85c: Return(); Pop(0)

0x85d: Stack[-1] = (bool) 0
0x85e: Return(); Pop(0)

0x85f: PushEmpty()
0x860: PushEmpty(object)
0x861: Stack[-1] = Stack[-2]
0x862: Push(-1, 0); TaskCall(5)
0x863: Call2 0x53e

0x864: Pop(-1, 0); TaskReturn
0x865: Pop(1)
0x866: Return(); Pop(0)

0x867: PushEmpty()
0x868: PushEmpty(object, int, float)
0x869: Stack[-3] = Stack[-7]
0x86a: Stack[-2] = Stack[-6]
0x86b: Stack[-1] = Stack[-5]
0x86c: Call2 0x6b5

0x86d: Pop(3)
0x86e: Return(); Pop(0)

0x86f: PushEmpty()
0x870: PushEmpty(object, int, float, cvector, cvector)
0x871: Stack[-5] = Stack[-11]
0x872: Stack[-4] = Stack[-10]
0x873: Stack[-3] = Stack[-9]
0x874: Stack[-2] = Stack[-7]
0x875: Stack[-1] = Stack[-6]
0x876: Call2 0x6f9

0x877: Pop(5)
0x878: Return(); Pop(0)

0x879: PushEmpty(float, float)
0x87a: Push("health")
0x87b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x87c: IF (Stack[-1] == 0) GOTO 0x885; Pop(1)

0x87d: Push("health")
0x87e: @ GetProperty(Stack[-1], Stack[-2])
0x87f: Pop(1)
0x880: Push((int) 0)
0x881: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x882: IF (Stack[-1] == 0) GOTO 0x885; Pop(1)

0x883: @ SignalDeath(Stack[-4])
0x884: Pop(0)
0x885: Return(); Pop(2)

0x886: PushEmpty()
0x887: PushEmpty(object)
0x888: Stack[-1] = Stack[-2]
0x889: Call2 0x85f

0x88a: Pop(1)
0x88b: Return(); Pop(0)

0x88c: PushEmpty(object)
0x88d: Call2 0x7c6

0x88e: Pop(0)
0x88f: @ RemoveActor(Stack[-1])
0x890: Pop(1)
0x891: @ Hold()
0x892: Pop(0)
0x893: Return(); Pop(0)

