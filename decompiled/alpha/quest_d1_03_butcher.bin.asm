GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetPhoto
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
	attack_begin
	attack
	@GetAttackDistance
	GetAttackDistance
	GetPFPosition
	attack_on
	attack_stay
	fjump
	attack_off
	attack_middle
	attack_end
	bjump
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
	head
	fire
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
	scripted
	blood.xml
	fhit
	bhit
	hit_react
	1
	2
	playing 
	start: 
	end: 
	ui/NPC_None.png
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
	SetDeathStateAndRemove (0 args)
	FindActor (2 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetPFPosition (1 args)
	StopAsync (0 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	Stop (0 args)
	Sleep (1 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	irand (2 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	Speak (1 args)
	GetPosition (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	SetTimer (2 args)
	FollowPath (5 args)
	KillTimer (1 args)
	Sleep (2 args)
	RequestClearPath (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	LookAsync (3 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	GetScene (1 args)
	GetEyesHeight (1 args)
	AddActorByType (6 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	RotateAsync (2 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	Trigger (2 args)
	GetVariable (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0xb3
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x89 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0xbb Vars = (object)
		EVENT_17 Op = 0xc8 Vars = (object)
		EVENT_26 Op = 0xd3 Vars = (string)
		EVENT_6 Op = 0xdf Vars = ()
	GTASK_3 Vars = (object, int, int, bool, int) Params = 0
		EVENT_6 Op = 0xfe Vars = ()
	GTASK_4 Vars = (bool, object) Params = 6
		EVENT_6 Op = 0x2ef Vars = ()
		EVENT_7 Op = 0x35b Vars = (int)
		EVENT_10 Op = 0x36d Vars = (object)
		EVENT_41 Op = 0x378 Vars = (object)
	GTASK_5  Params = 1
		EVENT_6 Op = 0x38c Vars = ()
		EVENT_22 Op = 0x405 Vars = (object, int, float, float)
		EVENT_16 Op = 0x407 Vars = (object, string)
		EVENT_41 Op = 0x409 Vars = (object)

Events:
EVENT_22 Op = 0x597 Vars = (object, int, float, float)
EVENT_16 Op = 0x59f Vars = (object, string)
EVENT_41 Op = 0x5ac Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x4ee

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x57c

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x57e

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x56b

0x18: Pop(0)
0x19: @@ SetPlayerName(Stack[-1])
0x1a: Pop(1)
0x1b: Stack[-2] = (int) -1
0x1c: @ IsOverrideActive(Stack[-3])
0x1d: Pop(0)
0x1e: Push(Stack[-3])
0x1f: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x20: Stack[-10] = (int) -2
0x21: Return(); Pop(8)

0x22: @ DoDialog(Stack[-4])
0x23: Pop(0)
0x24: PushEmpty(object, object)
0x25: Stack[-2] = Stack[-11]
0x26: Stack[-1] = Stack[-6]
0x27: Push(-2, 4); TaskCall(1)
0x28: Call 0x3f

0x29: Pop(-2, 4); TaskReturn
0x2a: Pop(2)
0x2b: @@ IsDialogEnd(Stack[-1])
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[-1] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2f: @ sync()
0x30: Pop(0)
0x31: @@ IsDialogEnd(Stack[-1])
0x32: Pop(0)
0x33: GOTO 0x2d

0x34: PushEmpty(object)
0x35: Stack[-1] = Stack[-10]
0x36: Call 0x526

0x37: Pop(1)
0x38: @ StopDialog(Stack[-4])
0x39: Pop(0)
0x3a: @@ GetReturnValue(Stack[-2])
0x3b: Pop(0)
0x3c: Stack[-10] = Stack[-2]
0x3d: Return(); Pop(8)

0x3e: Stack[-4] = 0
0x3f: PushEmpty()
0x40: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x41: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x42: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x43: Push((int) 1)
0x44: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x45: PushEmpty(string)
0x46: Stack[-1] = "Neutral"
0x47: Call 0x79

0x48: Pop(1)
0x49: Push((int) 5264)
0x4a: @@ SetMessage(Stack[-1])
0x4b: Pop(1)
0x4c: @@ ClearReplies()
0x4d: Pop(0)
0x4e: Push((int) 5265)
0x4f: Push((int) -1)
0x50: Push((int) 5802)
0x51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52: Pop(3)
0x53: Push((int) 6042)
0x54: Push((int) -1)
0x55: Push((int) 6665)
0x56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57: Pop(3)
0x58: GOTO 0x5b

0x59: Return(); Pop(0)

0x5a: GOTO 0x43

0x5b: PushEmpty(bool)
0x5c: Call 0x580

0x5d: Pop(0)
0x5e: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x5f: @ lshWaitForAnimEnd()
0x60: Pop(0)
0x61: Push( Stack[3 + Tasks[-1].StackPointer] )
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: GOTO 0x69

0x64: PushEmpty(string)
0x65: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x66: Call 0x52a

0x67: Pop(1)
0x68: GOTO 0x5f

0x69: GOTO 0x78

0x6a: Push("all")
0x6b: Push("idle")
0x6c: @ PlayAnimation(Stack[-2], Stack[-1])
0x6d: Pop(2)
0x6e: @ WaitForAnimEnd()
0x6f: Pop(0)
0x70: Push( Stack[3 + Tasks[-1].StackPointer] )
0x71: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x72: GOTO 0x78

0x73: Push("all")
0x74: Push("idle")
0x75: @ PlayAnimation(Stack[-2], Stack[-1])
0x76: Pop(2)
0x77: GOTO 0x6e

0x78: Return(); Pop(0)

0x79: PushEmpty()
0x7a: PushEmpty(bool)
0x7b: Call 0x580

0x7c: Pop(0)
0x7d: Pop(1); Push((bool) Stack[-1] == 0)
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: Return(); Pop(0)

0x80: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: Return(); Pop(0)

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[-2]
0x85: Call 0x52a

0x86: Pop(1)
0x87: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x88: Return(); Pop(0)

0x89: PushEmpty()
0x8a: Push((int) 1)
0x8b: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0x8c: PushEmpty()
0x8d: Call 0x53c

0x8e: Pop(0)
0x8f: Push((int) 5801)
0x90: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x91: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0x92: PushEmpty(string)
0x93: Stack[-1] = "Neutral"
0x94: Call 0x79

0x95: Pop(1)
0x96: Push((int) 5264)
0x97: @@ SetMessage(Stack[-1])
0x98: Pop(1)
0x99: @@ ClearReplies()
0x9a: Pop(0)
0x9b: Push((int) 5265)
0x9c: Push((int) -1)
0x9d: Push((int) 5802)
0x9e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f: Pop(3)
0xa0: Push((int) 6042)
0xa1: Push((int) -1)
0xa2: Push((int) 6665)
0xa3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4: Pop(3)
0xa5: Return(); Pop(0)

0xa6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa7: PushEmpty(bool)
0xa8: Call 0x580

0xa9: Pop(0)
0xaa: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xab: @ lshStopAnimation()
0xac: Pop(0)
0xad: GOTO 0xb0

0xae: @ StopAnimation()
0xaf: Pop(0)
0xb0: Return(); Pop(0)

0xb1: GOTO 0x8a

0xb2: Return(); Pop(0)

0xb3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xb4: Push((bool) 1)
0xb5: @ SensePlayerOnly(Stack[-1])
0xb6: Pop(1)
0xb7: @ Hold()
0xb8: Pop(0)
0xb9: GOTO 0xb7

0xba: Return(); Pop(0)

0xbb: PushEmpty()
0xbc: PushEmpty(int, object)
0xbd: Stack[-1] = Stack[-3]
0xbe: Push(-2, 1); TaskCall(0)
0xbf: Call 0x0

0xc0: Pop(-2, 1); TaskReturn
0xc1: Pop(2)
0xc2: PushEmpty()
0xc3: Push(-0, 5); TaskCall(3)
0xc4: Call 0xe4

0xc5: Pop(-0, 5); TaskReturn
0xc6: Pop(0)
0xc7: Return(); Pop(0)

0xc8: PushEmpty(bool, bool)
0xc9: @ IsPlayerActor(Stack[-3], Stack[-1])
0xca: Pop(0)
0xcb: Push(Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcd: PushEmpty()
0xce: Push(-0, 5); TaskCall(3)
0xcf: Call 0xe4

0xd0: Pop(-0, 5); TaskReturn
0xd1: Pop(0)
0xd2: Return(); Pop(2)

0xd3: PushEmpty(bool, bool)
0xd4: Push("cleanup")
0xd5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xd7: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xd8: @ IsLoaded(Stack[-1])
0xd9: Pop(0)
0xda: Pop(0); Push((bool) Stack[-1] == 0)
0xdb: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdc: @ SetDeathStateAndRemove()
0xdd: Pop(0)
0xde: Return(); Pop(2)

0xdf: Push( Stack[0 + Tasks[-1].StackPointer] )
0xe0: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe1: @ SetDeathStateAndRemove()
0xe2: Pop(0)
0xe3: Return(); Pop(0)

0xe4: PushEmpty(object, object)
0xe5: PushEmpty(bool, string, string)
0xe6: Stack[-2] = "quest_d1_03"
0xe7: Stack[-1] = "butcher_battle"
0xe8: Call 0x55f

0xe9: Pop(3)
0xea: Push("player")
0xeb: @ FindActor(Stack[-2], Stack[-1])
0xec: Pop(1)
0xed: PushEmpty(object, bool, float)
0xee: Stack[-3] = Stack[-4]
0xef: Stack[-2] = (bool) 1
0xf0: Stack[-1] = (float) 180.0
0xf1: Call 0x104

0xf2: Pop(3)
0xf3: PushEmpty()
0xf4: Call 0x582

0xf5: Pop(0)
0xf6: Return(); Pop(2)

0xf7: Stack[-1] = 0
0xf8: PushEmpty()
0xf9: Stack[-3] = (float) 0.1
0xfa: Return(); Pop(0)

0xfb: PushEmpty()
0xfc: Stack[-3] = (int) 0
0xfd: Return(); Pop(0)

0xfe: PushEmpty()
0xff: Call 0x582

0x100: Pop(0)
0x101: @ Hold()
0x102: Pop(0)
0x103: Return(); Pop(0)

0x104: PushEmpty(bool, bool, float, cvector, cvector, bool, bool, cvector, float, float, bool, bool, float, cvector, cvector, bool, bool, cvector, float, float)
0x105: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x106: Push("all")
0x107: Push("attack_begin")
0x108: Push((int) 1)
0x109: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x10a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x10b: @ HasAnimation(Stack[-12], Stack[-2], Stack[-1])
0x10c: Pop(2)
0x10d: Pop(0); Push((bool) Stack[-10] == 0)
0x10e: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10f: GOTO 0x113

0x110: Push((int) 1)
0x111: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x112: GOTO 0x106

0x113: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x114: Push("attack")
0x115: Push((int) 1)
0x116: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x117: Pop(2); Push(Stack[-2] + Stack[-1]);
0x118: @ IsExisting3DSound(Stack[-10], Stack[-1])
0x119: Pop(1)
0x11a: Pop(0); Push((bool) Stack[-9] == 0)
0x11b: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x11c: GOTO 0x120

0x11d: Push((int) 1)
0x11e: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x11f: GOTO 0x114

0x120: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x121: Push("@GetAttackDistance")
0x122: Push((int) 1)
0x123: Pop(2); Push(IsFuncExist(Stack[-25], Stack[-2], Stack[-1]))
0x124: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x125: @@ GetAttackDistance(Stack[-8])
0x126: Pop(0)
0x127: Push((int) 50)
0x128: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x129: GOTO 0x12b

0x12a: Stack[-8] = Stack[-21]
0x12b: Push((int) 150)
0x12c: Pop(1); Push((bool) Stack[-9] >= Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12e: Stack[-8] = (int) 150
0x12f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x130: Stack[0 + Tasks[-1].StackPointer] = Stack[-23]
0x131: @ IsPlayerActor(Stack[-0], Stack[-5])
0x132: Pop(0)
0x133: Push(Stack[-22])
0x134: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x135: Stack[-4] = (bool) 0
0x136: GOTO 0x138

0x137: Stack[-4] = (bool) 1
0x138: PushEmpty(bool)
0x139: Stack[-1] = (bool) 0
0x13a: PushEmpty(bool, object)
0x13b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13c: Call 0x488

0x13d: Pop(1)
0x13e: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13f: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x140: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x141: Stack[-1] = (bool) 1
0x142: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x143: @@ GetPFPosition(Stack[-7])
0x144: Pop(0)
0x145: @ GetPFPosition(Stack[-6])
0x146: Pop(0)
0x147: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x148: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x149: Push((float)400.0)
0x14a: Pop(1); Push(Stack[-1] + Stack[-9]);
0x14b: Push((float)400.0)
0x14c: Pop(1); Push(Stack[-1] + Stack[-10]);
0x14d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x14e: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x150: PushEmpty(bool, object, float, float, bool, bool)
0x151: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x152: Stack[-4] = Stack[-14]
0x153: Stack[-3] = (float) 3000.0
0x154: Stack[-2] = (bool) 1
0x155: Stack[-1] = (bool) 0
0x156: Push(-6, 2); TaskCall(4)
0x157: Call 0x2f5

0x158: Pop(-6, 2); TaskReturn
0x159: Pop(5)
0x15a: Pop(1); Push((bool) Stack[-1] == 0)
0x15b: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x15c: GOTO 0x1c0

0x15d: Stack[-4] = (bool) 0
0x15e: GOTO 0x1bf

0x15f: Pop(0); Push(Stack[-21] * Stack[-21]);
0x160: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x162: Pop(0); Push((bool) Stack[-4] == 0)
0x163: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x164: PushEmpty(object)
0x165: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x166: Call 0x4e3

0x167: Pop(1)
0x168: Push("all")
0x169: Push("attack_on")
0x16a: @ PlayAnimation(Stack[-2], Stack[-1])
0x16b: Pop(2)
0x16c: @ WaitForAnimEnd()
0x16d: Pop(0)
0x16e: @ StopAsync()
0x16f: Pop(0)
0x170: Stack[-4] = (bool) 1
0x171: @ rand(Stack[-1])
0x172: Pop(0)
0x173: PushEmpty(bool)
0x174: Stack[-1] = (bool) 1
0x175: Push((float)0.6)
0x176: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x177: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x178: PushEmpty(bool)
0x179: Call 0x2bc

0x17a: Pop(0)
0x17b: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17c: Stack[-1] = (bool) 0
0x17d: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x17e: @ Face(Stack[-0])
0x17f: Pop(0)
0x180: Push("all")
0x181: Push("attack_stay")
0x182: @ PlayAnimation(Stack[-2], Stack[-1])
0x183: Pop(2)
0x184: PushEmpty(bool, float)
0x185: Stack[-1] = Stack[-23]
0x186: Call 0x260

0x187: Pop(2)
0x188: @ StopAsync()
0x189: Pop(0)
0x18a: GOTO 0x1b6

0x18b: @ Face(Stack[-0])
0x18c: Pop(0)
0x18d: Push("all")
0x18e: Push("fjump")
0x18f: @ PlayAnimation(Stack[-2], Stack[-1])
0x190: Pop(2)
0x191: @ WaitForAnimEnd()
0x192: Pop(0)
0x193: Push(CVector(0.0, 0.0, 0.0))
0x194: @ SetSpeed(Stack[-1])
0x195: Pop(1)
0x196: @ Stop()
0x197: Pop(0)
0x198: @ StopAsync()
0x199: Pop(0)
0x19a: PushEmpty(bool)
0x19b: Call 0x2bc

0x19c: Pop(0)
0x19d: Pop(1); Push((bool) Stack[-1] == 0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x19f: PushEmpty(bool, object)
0x1a0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a1: Call 0x488

0x1a2: Pop(1)
0x1a3: Pop(1); Push((bool) Stack[-1] == 0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a5: GOTO 0x1c0

0x1a6: @@ GetPFPosition(Stack[-7])
0x1a7: Pop(0)
0x1a8: @ GetPFPosition(Stack[-6])
0x1a9: Pop(0)
0x1aa: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x1ab: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x1ac: Pop(0); Push(Stack[-21] * Stack[-21]);
0x1ad: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1af: PushEmpty(bool, float)
0x1b0: Stack[-1] = Stack[-23]
0x1b1: Call 0x1f8

0x1b2: Pop(1)
0x1b3: Pop(1); Push((bool) Stack[-1] == 0)
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b5: GOTO 0x1c0

0x1b6: GOTO 0x1bf

0x1b7: PushEmpty(bool, float)
0x1b8: Stack[-1] = Stack[-23]
0x1b9: Call 0x1f8

0x1ba: Pop(1)
0x1bb: Pop(1); Push((bool) Stack[-1] == 0)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1bd: GOTO 0x1c0

0x1be: Stack[-4] = (bool) 1
0x1bf: GOTO 0x138

0x1c0: @ WaitForAnimEnd()
0x1c1: Pop(0)
0x1c2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c4: Return(); Pop(20)

0x1c5: Push("all")
0x1c6: Push("attack_off")
0x1c7: @ PlayAnimation(Stack[-2], Stack[-1])
0x1c8: Pop(2)
0x1c9: @ WaitForAnimEnd()
0x1ca: Pop(0)
0x1cb: Push(Stack[-5])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cd: Push((float)2.0)
0x1ce: @ Sleep(Stack[-1])
0x1cf: Pop(1)
0x1d0: Return(); Pop(20)

0x1d1: PushEmpty(object, float, float, object, float, float)
0x1d2: Push((float)0.9)
0x1d3: Pop(1); Push(Stack[-9] * Stack[-1]);
0x1d4: @ GetVictim(Stack[-1], Stack[-4])
0x1d5: Pop(1)
0x1d6: @ ReportAttack(Stack[-0])
0x1d7: Pop(0)
0x1d8: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1da: PushEmpty(float, object, int)
0x1db: Stack[-2] = Stack[-6]
0x1dc: Stack[-1] = Stack[-10]
0x1dd: Call 0xf8

0x1de: Stack[-5] = Stack[-3]
0x1df: Pop(3)
0x1e0: PushEmpty(float, object, float, int)
0x1e1: Stack[-3] = Stack[-7]
0x1e2: Stack[-2] = Stack[-6]
0x1e3: PushEmpty(int, object, int)
0x1e4: Stack[-2] = Stack[-10]
0x1e5: Stack[-1] = Stack[-14]
0x1e6: Call 0xfb

0x1e7: Stack[-4] = Stack[-3]
0x1e8: Pop(3)
0x1e9: Call 0x41f

0x1ea: Stack[-5] = Stack[-4]
0x1eb: Pop(4)
0x1ec: PushEmpty(int)
0x1ed: Call 0x2e7

0x1ee: Pop(0)
0x1ef: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x1f0: Pop(1)
0x1f1: PushEmpty(object, float)
0x1f2: Stack[-2] = Stack[-5]
0x1f3: Stack[-1] = Stack[-3]
0x1f4: Call 0x2e9

0x1f5: Pop(2)
0x1f6: Return(); Pop(6)

0x1f7: Stack[-3] = 0
0x1f8: PushEmpty(int, bool, int, bool)
0x1f9: @ irand(Stack[-2], Stack[-1])
0x1fa: Pop(0)
0x1fb: Push((int) 1)
0x1fc: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1fd: @ Face(Stack[-0])
0x1fe: Pop(0)
0x1ff: Push((bool) 1)
0x200: @ SetAttackState(Stack[-1])
0x201: Pop(1)
0x202: Push("all")
0x203: Push("attack_begin")
0x204: Pop(1); Push(Stack[-1] + Stack[-4]);
0x205: @ PlayAnimation(Stack[-2], Stack[-1])
0x206: Pop(2)
0x207: @ WaitForAnimEnd()
0x208: Pop(0)
0x209: PushEmpty()
0x20a: Call 0x2c7

0x20b: Pop(0)
0x20c: PushEmpty(bool, object)
0x20d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x20e: Call 0x488

0x20f: Pop(1)
0x210: Pop(1); Push((bool) Stack[-1] == 0)
0x211: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x212: @ StopAsync()
0x213: Pop(0)
0x214: Stack[-6] = (bool) 0
0x215: Return(); Pop(4)

0x216: PushEmpty(float, int)
0x217: Stack[-2] = Stack[-7]
0x218: Stack[-1] = Stack[-4]
0x219: Call 0x1d1

0x21a: Pop(2)
0x21b: Push("all")
0x21c: Push("attack_middle")
0x21d: Pop(1); Push(Stack[-1] + Stack[-4]);
0x21e: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x21f: Pop(2)
0x220: Push(Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x222: Push("all")
0x223: Push("attack_middle")
0x224: Pop(1); Push(Stack[-1] + Stack[-4]);
0x225: @ PlayAnimation(Stack[-2], Stack[-1])
0x226: Pop(2)
0x227: @ WaitForAnimEnd()
0x228: Pop(0)
0x229: PushEmpty(bool, object)
0x22a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x22b: Call 0x488

0x22c: Pop(1)
0x22d: Pop(1); Push((bool) Stack[-1] == 0)
0x22e: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x22f: @ StopAsync()
0x230: Pop(0)
0x231: Stack[-6] = (bool) 0
0x232: Return(); Pop(4)

0x233: PushEmpty(float, int)
0x234: Stack[-2] = Stack[-7]
0x235: Stack[-1] = Stack[-4]
0x236: Call 0x1d1

0x237: Pop(2)
0x238: Push((bool) 0)
0x239: @ SetAttackState(Stack[-1])
0x23a: Pop(1)
0x23b: Push("all")
0x23c: Push("attack_end")
0x23d: Pop(1); Push(Stack[-1] + Stack[-4]);
0x23e: @ PlayAnimation(Stack[-2], Stack[-1])
0x23f: Pop(2)
0x240: PushEmpty(bool, float)
0x241: Stack[-1] = (float) 0.75
0x242: Call 0x248

0x243: Pop(2)
0x244: @ StopAsync()
0x245: Pop(0)
0x246: Stack[-6] = (bool) 1
0x247: Return(); Pop(4)

0x248: PushEmpty(float, bool, float, bool)
0x249: @ rand(Stack[-2])
0x24a: Pop(0)
0x24b: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x24c: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x24d: @ IsAnimationPlaying(Stack[-1])
0x24e: Pop(0)
0x24f: Pop(0); Push((bool) Stack[-1] == 0)
0x250: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x251: GOTO 0x25b

0x252: PushEmpty(bool)
0x253: Call 0x288

0x254: Pop(0)
0x255: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x256: Stack[-6] = (bool) 1
0x257: Return(); Pop(4)

0x258: @ sync()
0x259: Pop(0)
0x25a: GOTO 0x24d

0x25b: GOTO 0x25e

0x25c: @ WaitForAnimEnd()
0x25d: Pop(0)
0x25e: Stack[-6] = (bool) 0
0x25f: Return(); Pop(4)

0x260: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x261: @ IsAnimationPlaying(Stack[-5])
0x262: Pop(0)
0x263: Pop(0); Push((bool) Stack[-5] == 0)
0x264: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x265: GOTO 0x286

0x266: PushEmpty(bool)
0x267: Call 0x288

0x268: Pop(0)
0x269: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26a: Stack[-12] = (bool) 1
0x26b: Return(); Pop(10)

0x26c: PushEmpty(bool, object)
0x26d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x26e: Call 0x488

0x26f: Pop(1)
0x270: Pop(1); Push((bool) Stack[-1] == 0)
0x271: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x272: Stack[-12] = (bool) 0
0x273: Return(); Pop(10)

0x274: @@ GetPFPosition(Stack[-4])
0x275: Pop(0)
0x276: @ GetPFPosition(Stack[-3])
0x277: Pop(0)
0x278: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x279: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x27a: Pop(0); Push(Stack[-11] * Stack[-11]);
0x27b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x27c: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x27d: PushEmpty(bool, float)
0x27e: Stack[-1] = Stack[-13]
0x27f: Call 0x1f8

0x280: Pop(2)
0x281: Stack[-12] = (bool) 1
0x282: Return(); Pop(10)

0x283: @ sync()
0x284: Pop(0)
0x285: GOTO 0x261

0x286: Stack[-12] = (bool) 0
0x287: Return(); Pop(10)

0x288: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x289: PushEmpty(bool, object)
0x28a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28b: Call 0x488

0x28c: Pop(1)
0x28d: Pop(1); Push((bool) Stack[-1] == 0)
0x28e: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x28f: Stack[-11] = (bool) 0
0x290: Return(); Pop(10)

0x291: PushEmpty(bool)
0x292: Call 0x2bc

0x293: Pop(0)
0x294: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x295: @@ GetPFPosition(Stack[-5])
0x296: Pop(0)
0x297: @ GetPFPosition(Stack[-4])
0x298: Pop(0)
0x299: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x29a: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x29b: @@ GetAttackDistance(Stack[-1])
0x29c: Pop(0)
0x29d: Push((int) 50)
0x29e: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x29f: Pop(0); Push(Stack[-1] * Stack[-1]);
0x2a0: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a2: PushEmpty()
0x2a3: Call 0x2a9

0x2a4: Pop(0)
0x2a5: Stack[-11] = (bool) 1
0x2a6: Return(); Pop(10)

0x2a7: Stack[-11] = (bool) 0
0x2a8: Return(); Pop(10)

0x2a9: PushEmpty(cvector, cvector, cvector, cvector)
0x2aa: @ Face(Stack[-0])
0x2ab: Pop(0)
0x2ac: Push("all")
0x2ad: Push("bjump")
0x2ae: @ PlayAnimation(Stack[-2], Stack[-1])
0x2af: Pop(2)
0x2b0: @@ GetPFPosition(Stack[-2])
0x2b1: Pop(0)
0x2b2: @ GetPFPosition(Stack[-1])
0x2b3: Pop(0)
0x2b4: @ WaitForAnimEnd()
0x2b5: Pop(0)
0x2b6: @ StopAsync()
0x2b7: Pop(0)
0x2b8: Push(CVector(0.0, 0.0, 0.0))
0x2b9: @ SetSpeed(Stack[-1])
0x2ba: Pop(1)
0x2bb: Return(); Pop(4)

0x2bc: PushEmpty(bool, bool)
0x2bd: Push("IsAttacking")
0x2be: Push((int) 1)
0x2bf: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c1: @@ IsAttacking(Stack[-1])
0x2c2: Pop(0)
0x2c3: Stack[-3] = Stack[-1]
0x2c4: Return(); Pop(2)

0x2c5: Stack[-3] = (bool) 0
0x2c6: Return(); Pop(2)

0x2c7: PushEmpty(float, int, float, int)
0x2c8: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2c9: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2ca: Return(); Pop(4)

0x2cb: Push( Stack[4 + Tasks[-1].StackPointer] )
0x2cc: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2cd: Push((int) -1)
0x2ce: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x2cf: Push((int) 0)
0x2d0: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] > Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d2: Return(); Pop(4)

0x2d3: @ rand(Stack[-2])
0x2d4: Pop(0)
0x2d5: PushEmpty(float)
0x2d6: Call 0x2ed

0x2d7: Pop(0)
0x2d8: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2da: @ irand(Stack[-1], Stack[-2])
0x2db: Pop(0)
0x2dc: Push((int) 1)
0x2dd: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2de: Push("attack")
0x2df: Pop(1); Push(Stack[-1] + Stack[-2]);
0x2e0: @ Speak(Stack[-1])
0x2e1: Pop(1)
0x2e2: PushEmpty(int)
0x2e3: Call 0x2eb

0x2e4: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x2e5: Pop(1)
0x2e6: Return(); Pop(4)

0x2e7: Stack[-1] = (int) 0
0x2e8: Return(); Pop(0)

0x2e9: PushEmpty()
0x2ea: Return(); Pop(0)

0x2eb: Stack[-1] = (int) 1
0x2ec: Return(); Pop(0)

0x2ed: Stack[-1] = (float) 0.5
0x2ee: Return(); Pop(0)

0x2ef: PushEmpty()
0x2f0: Call 0x582

0x2f1: Pop(0)
0x2f2: @ Hold()
0x2f3: Pop(0)
0x2f4: Return(); Pop(0)

0x2f5: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x2f6: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x2f7: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x2f8: Stack[-7] = Stack[-17]
0x2f9: PushEmpty(bool, object)
0x2fa: Stack[-1] = Stack[-23]
0x2fb: Call 0x381

0x2fc: Pop(1)
0x2fd: Pop(1); Push((bool) Stack[-1] == 0)
0x2fe: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2ff: Stack[-22] = (bool) 0
0x300: Return(); Pop(16)

0x301: @@ GetPosition(Stack[-5])
0x302: Pop(0)
0x303: @ GetPosition(Stack[-4])
0x304: Pop(0)
0x305: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x306: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x307: PushEmpty(bool)
0x308: Stack[-1] = (bool) 0
0x309: Push((int) 0)
0x30a: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x30b: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30c: Pop(0); Push(Stack[-20] * Stack[-20]);
0x30d: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30f: Stack[-1] = (bool) 1
0x310: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x311: @ Stop()
0x312: Pop(0)
0x313: Stack[-22] = (bool) 0
0x314: Return(); Pop(16)

0x315: Pop(0); Push(Stack[-20] * Stack[-20]);
0x316: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x318: @@ GetPFPosition(Stack[-5])
0x319: Pop(0)
0x31a: @ FindPathTo(Stack[-1], Stack[-5])
0x31b: Pop(0)
0x31c: Pop(0); Push(( Stack[-1] != 0 )
0x31d: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31e: Stack[-6] = Stack[-1]
0x31f: Stack[-1] = 0
0x320: Pop(0); Push(( Stack[-6] != 0 )
0x321: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x322: Push(Stack[-7])
0x323: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x324: Stack[-7] = (bool) 0
0x325: @ RotatePath(Stack[-6], Stack[-8])
0x326: Pop(0)
0x327: Pop(0); Push((bool) Stack[-8] == 0)
0x328: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x329: GOTO 0x359

0x32a: Push((int) 0)
0x32b: Push((float)0.3)
0x32c: @ SetTimer(Stack[-2], Stack[-1])
0x32d: Pop(2)
0x32e: PushEmpty(string)
0x32f: Call 0x388

0x330: Pop(0)
0x331: PushEmpty(string)
0x332: Call 0x38a

0x333: Pop(0)
0x334: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x335: Pop(2)
0x336: Pop(0); Push((bool) Stack[-8] == 0)
0x337: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x338: Push( Stack[0 + Tasks[-1].StackPointer] )
0x339: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33a: Stack[-6] = 0
0x33b: GOTO 0x359

0x33c: GOTO 0x33e

0x33d: GOTO 0x358

0x33e: GOTO 0x340

0x33f: Stack[-6] = 0
0x340: GOTO 0x351

0x341: Push((int) 0)
0x342: @ KillTimer(Stack[-1])
0x343: Pop(1)
0x344: Push((float)0.5)
0x345: @ Sleep(Stack[-1], Stack[-9])
0x346: Pop(1)
0x347: Pop(0); Push((bool) Stack[-8] == 0)
0x348: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x349: Push( Stack[0 + Tasks[-1].StackPointer] )
0x34a: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x34b: Stack[-6] = 0
0x34c: GOTO 0x359

0x34d: Push((int) 0)
0x34e: Push((float)0.3)
0x34f: @ SetTimer(Stack[-2], Stack[-1])
0x350: Pop(2)
0x351: Stack[-1] = 0
0x352: GOTO 0x357

0x353: Push((int) 0)
0x354: @ KillTimer(Stack[-1])
0x355: Pop(1)
0x356: GOTO 0x359

0x357: Stack[-6] = 0
0x358: GOTO 0x2f9

0x359: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x35a: Return(); Pop(16)

0x35b: PushEmpty()
0x35c: Push((int) 0)
0x35d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x35e: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35f: Return(); Pop(0)

0x360: PushEmpty(bool, object)
0x361: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x362: Call 0x381

0x363: Pop(1)
0x364: Pop(1); Push((bool) Stack[-1] == 0)
0x365: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x366: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x367: Push((int) 0)
0x368: @ KillTimer(Stack[-1])
0x369: Pop(1)
0x36a: @ Stop()
0x36b: Pop(0)
0x36c: Return(); Pop(0)

0x36d: PushEmpty()
0x36e: @ RequestClearPath(Stack[-1])
0x36f: Pop(0)
0x370: Return(); Pop(0)

0x371: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x372: Push((int) 0)
0x373: @ KillTimer(Stack[-1])
0x374: Pop(1)
0x375: @ Stop()
0x376: Pop(0)
0x377: Return(); Pop(0)

0x378: PushEmpty()
0x379: PushEmpty()
0x37a: Call 0x371

0x37b: Pop(0)
0x37c: PushEmpty(object)
0x37d: Stack[-1] = Stack[-2]
0x37e: Call 0x5ac

0x37f: Pop(1)
0x380: Return(); Pop(0)

0x381: PushEmpty()
0x382: PushEmpty(bool, object)
0x383: Stack[-1] = Stack[-3]
0x384: Call 0x488

0x385: Stack[-4] = Stack[-2]
0x386: Pop(2)
0x387: Return(); Pop(0)

0x388: Stack[-1] = "walk"
0x389: Return(); Pop(0)

0x38a: Stack[-1] = "run"
0x38b: Return(); Pop(0)

0x38c: @ SetDeathStateAndRemove()
0x38d: Pop(0)
0x38e: Return(); Pop(0)

0x38f: PushEmpty()
0x390: PushEmpty(object)
0x391: Stack[-1] = Stack[-2]
0x392: Call 0x398

0x393: Pop(1)
0x394: @ Hold()
0x395: Pop(0)
0x396: GOTO 0x394

0x397: Return(); Pop(0)

0x398: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x399: Pop(0); Push((bool) Stack[-21] == 0)
0x39a: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39b: PushEmpty(string)
0x39c: Stack[-1] = "fdie"
0x39d: Call 0x3ef

0x39e: Pop(1)
0x39f: GOTO 0x3ee

0x3a0: @@ GetPosition(Stack[-10])
0x3a1: Pop(0)
0x3a2: @ GetPosition(Stack[-9])
0x3a3: Pop(0)
0x3a4: @ GetDirection(Stack[-8])
0x3a5: Pop(0)
0x3a6: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x3a7: Push(CvectorIndex(Stack[-7], 0))
0x3a8: Push(CvectorIndex(Stack[-9], 0))
0x3a9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3aa: Push(CvectorIndex(Stack[-8], 2))
0x3ab: Push(CvectorIndex(Stack[-10], 2))
0x3ac: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3ad: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3ae: Push((int) 0)
0x3af: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b1: Stack[-6] = "fdie"
0x3b2: GOTO 0x3b4

0x3b3: Stack[-6] = "bdie"
0x3b4: @ RemoveRTEnvelope()
0x3b5: Pop(0)
0x3b6: @ SetDeathState()
0x3b7: Pop(0)
0x3b8: @ Stop()
0x3b9: Pop(0)
0x3ba: @ StopAsync()
0x3bb: Pop(0)
0x3bc: Stack[-5] = Stack[-21]
0x3bd: Push("GetScriptProperty")
0x3be: Push((int) 2)
0x3bf: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x3c0: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3c1: Push("Owner")
0x3c2: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x3c3: Pop(1)
0x3c4: Push(Stack[-4])
0x3c5: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3c6: Push("Owner")
0x3c7: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x3c8: Pop(1)
0x3c9: Pop(0); Push((bool) Stack[-5] == 0)
0x3ca: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3cb: Stack[-5] = Stack[-21]
0x3cc: Push("@GetEyesHeight")
0x3cd: Push((int) 1)
0x3ce: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x3cf: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3d0: @@ GetEyesHeight(Stack[-2])
0x3d1: Pop(0)
0x3d2: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x3d3: Push(CvectorIndex(Stack[-1], 1))
0x3d4: Stack[-1] = Stack[-3]
0x3d5: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x3d6: Push("head")
0x3d7: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x3d8: Pop(1)
0x3d9: Stack[-3] = (bool) 1
0x3da: GOTO 0x3dc

0x3db: Stack[-3] = (bool) 0
0x3dc: Push("all")
0x3dd: @ PlayAnimation(Stack[-1], Stack[-7])
0x3de: Pop(1)
0x3df: @ WaitForAnimEnd()
0x3e0: Pop(0)
0x3e1: Push(Stack[-3])
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e3: @ StopAsync()
0x3e4: Pop(0)
0x3e5: Push("head")
0x3e6: @ UnlookAsync(Stack[-1])
0x3e7: Pop(1)
0x3e8: Push("all")
0x3e9: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x3ea: Pop(1)
0x3eb: @ RemoveEnvelope()
0x3ec: Pop(0)
0x3ed: Stack[-5] = 0
0x3ee: Return(); Pop(20)

0x3ef: PushEmpty()
0x3f0: @ RemoveRTEnvelope()
0x3f1: Pop(0)
0x3f2: @ SetDeathState()
0x3f3: Pop(0)
0x3f4: @ Stop()
0x3f5: Pop(0)
0x3f6: @ StopAsync()
0x3f7: Pop(0)
0x3f8: @ StopSecondaryAnimation()
0x3f9: Pop(0)
0x3fa: Push("all")
0x3fb: @ PlayAnimation(Stack[-1], Stack[-2])
0x3fc: Pop(1)
0x3fd: @ WaitForAnimEnd()
0x3fe: Pop(0)
0x3ff: Push("all")
0x400: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x401: Pop(1)
0x402: @ RemoveEnvelope()
0x403: Pop(0)
0x404: Return(); Pop(0)

0x405: PushEmpty()
0x406: Return(); Pop(0)

0x407: PushEmpty()
0x408: Return(); Pop(0)

0x409: PushEmpty()
0x40a: Return(); Pop(0)

0x40b: PushEmpty()
0x40c: Push((int) 1)
0x40d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x40e: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x40f: Stack[-2] = "fire"
0x410: Return(); Pop(0)

0x411: Stack[-2] = "phys"
0x412: Return(); Pop(0)

0x413: PushEmpty(bool, bool)
0x414: Push("HasProperty")
0x415: Push((int) 2)
0x416: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x417: Pop(1); Push((bool) Stack[-1] == 0)
0x418: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x419: Stack[-5] = (bool) 0
0x41a: Return(); Pop(2)

0x41b: @@ HasProperty(Stack[-3], Stack[-1])
0x41c: Pop(0)
0x41d: Stack[-5] = Stack[-1]
0x41e: Return(); Pop(2)

0x41f: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x420: PushEmpty(bool, object, string)
0x421: Stack[-2] = Stack[-18]
0x422: Stack[-1] = "health"
0x423: Call 0x413

0x424: Pop(2)
0x425: Pop(1); Push((bool) Stack[-1] == 0)
0x426: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x427: Stack[-16] = (float) 0.0
0x428: Return(); Pop(12)

0x429: PushEmpty(bool, object, string)
0x42a: Stack[-2] = Stack[-18]
0x42b: Stack[-1] = "armor"
0x42c: Call 0x413

0x42d: Pop(2)
0x42e: Pop(1); Push((bool) Stack[-1] == 0)
0x42f: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x430: Stack[-6] = (int) 0
0x431: GOTO 0x435

0x432: Push("armor")
0x433: @@ GetProperty(Stack[-1], Stack[-7])
0x434: Pop(1)
0x435: Push("armor_")
0x436: PushEmpty(string, int)
0x437: Stack[-1] = Stack[-16]
0x438: Call 0x40b

0x439: Pop(1)
0x43a: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x43b: PushEmpty(bool, object, string)
0x43c: Stack[-2] = Stack[-18]
0x43d: Stack[-1] = Stack[-8]
0x43e: Call 0x413

0x43f: Pop(2)
0x440: Pop(1); Push((bool) Stack[-1] == 0)
0x441: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x442: Stack[-4] = (int) 0
0x443: GOTO 0x446

0x444: @@ GetProperty(Stack[-5], Stack[-4])
0x445: Pop(0)
0x446: PushEmpty(float, float, float)
0x447: Pop(0); Push(Stack[-9] + Stack[-7]);
0x448: Push((float)100.0)
0x449: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x44a: Stack[-1] = (int) 1
0x44b: Call 0x54d

0x44c: Stack[-6] = Stack[-3]
0x44d: Pop(3)
0x44e: Push("health")
0x44f: @@ GetProperty(Stack[-1], Stack[-3])
0x450: Pop(1)
0x451: Push((int) 1)
0x452: Pop(1); Push(Stack[-1] - Stack[-4]);
0x453: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x454: Push("health")
0x455: PushEmpty(float, float, float, float)
0x456: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x457: Stack[-2] = (int) 0
0x458: Stack[-1] = (int) 1
0x459: Call 0x554

0x45a: Pop(3)
0x45b: @@ SetProperty(Stack[-2], Stack[-1])
0x45c: Pop(2)
0x45d: Stack[-16] = Stack[-1]
0x45e: Return(); Pop(12)

0x45f: PushEmpty(bool, bool)
0x460: @@ IsDead(Stack[-1])
0x461: Pop(0)
0x462: Stack[-4] = Stack[-1]
0x463: Return(); Pop(2)

0x464: PushEmpty(object, object, object, object)
0x465: Pop(0); Push((bool) Stack[-5] == 0)
0x466: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x467: Stack[-6] = (bool) 0
0x468: Return(); Pop(4)

0x469: PushEmpty(bool)
0x46a: Stack[-1] = (bool) 0
0x46b: Push("IsDead")
0x46c: Push((int) 1)
0x46d: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x46e: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x46f: PushEmpty(bool, object)
0x470: Stack[-1] = Stack[-8]
0x471: Call 0x45f

0x472: Pop(1)
0x473: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x474: Stack[-1] = (bool) 1
0x475: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x476: Stack[-6] = (bool) 0
0x477: Return(); Pop(4)

0x478: @ GetScene(Stack[-2])
0x479: Pop(0)
0x47a: Pop(0); Push((bool) Stack[-2] == 0)
0x47b: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x47c: Stack[-6] = (bool) 0
0x47d: Return(); Pop(4)

0x47e: @@ GetScene(Stack[-1])
0x47f: Pop(0)
0x480: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x481: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x482: Stack[-6] = (bool) 0
0x483: Return(); Pop(4)

0x484: Stack[-6] = (bool) 1
0x485: Return(); Pop(4)

0x486: Stack[-1] = 0
0x487: Stack[-2] = 0
0x488: PushEmpty(int, int)
0x489: PushEmpty(bool, object)
0x48a: Stack[-1] = Stack[-5]
0x48b: Call 0x464

0x48c: Pop(1)
0x48d: Pop(1); Push((bool) Stack[-1] == 0)
0x48e: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x48f: Stack[-4] = (bool) 0
0x490: Return(); Pop(2)

0x491: PushEmpty(bool, object, string)
0x492: Stack[-2] = Stack[-6]
0x493: Stack[-1] = "noaccess"
0x494: Call 0x413

0x495: Pop(2)
0x496: Pop(1); Push((bool) Stack[-1] == 0)
0x497: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x498: Stack[-4] = (bool) 1
0x499: Return(); Pop(2)

0x49a: Push("noaccess")
0x49b: @@ GetProperty(Stack[-1], Stack[-2])
0x49c: Pop(1)
0x49d: Push((int) 0)
0x49e: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x49f: Return(); Pop(2)

0x4a0: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x4a1: PushEmpty(bool)
0x4a2: Stack[-1] = (bool) 0
0x4a3: Push((int) 4)
0x4a4: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x4a6: Push((int) 5)
0x4a7: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x4a9: Stack[-1] = (bool) 1
0x4aa: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4ab: @ GetScene(Stack[-10])
0x4ac: Pop(0)
0x4ad: @ GetPosition(Stack[-8])
0x4ae: Pop(0)
0x4af: @ GetEyesHeight(Stack[-7])
0x4b0: Pop(0)
0x4b1: Push(CvectorIndex(Stack[-8], 1))
0x4b2: Push((int) 2)
0x4b3: Pop(1); Push(Stack[-9] / Stack[-1]);
0x4b4: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x4b5: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x4b6: Push("scripted")
0x4b7: Push(CVector(0.0, 0.0, 1.0))
0x4b8: Push("blood.xml")
0x4b9: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x4ba: Pop(3)
0x4bb: Stack[-9] = 0
0x4bc: Stack[-10] = 0
0x4bd: Pop(0); Push((bool) Stack[-23] == 0)
0x4be: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4bf: Return(); Pop(20)

0x4c0: @ GetSecondaryAnimationType(Stack[-6])
0x4c1: Pop(0)
0x4c2: Push((int) 0)
0x4c3: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c5: Return(); Pop(20)

0x4c6: @@ GetPosition(Stack[-5])
0x4c7: Pop(0)
0x4c8: @ GetPosition(Stack[-4])
0x4c9: Pop(0)
0x4ca: @ GetDirection(Stack[-3])
0x4cb: Pop(0)
0x4cc: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x4cd: Push(CvectorIndex(Stack[-2], 0))
0x4ce: Push(CvectorIndex(Stack[-4], 0))
0x4cf: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4d0: Push(CvectorIndex(Stack[-3], 2))
0x4d1: Push(CvectorIndex(Stack[-5], 2))
0x4d2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4d3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4d4: Push((int) 0)
0x4d5: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4d6: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d7: Stack[-1] = "fhit"
0x4d8: GOTO 0x4da

0x4d9: Stack[-1] = "bhit"
0x4da: Push("hit_react")
0x4db: Push("1")
0x4dc: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4dd: Push("2")
0x4de: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4df: Push((int) -10)
0x4e0: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4e1: Pop(4)
0x4e2: Return(); Pop(20)

0x4e3: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x4e4: @@ GetPosition(Stack[-3])
0x4e5: Pop(0)
0x4e6: @ GetPosition(Stack[-2])
0x4e7: Pop(0)
0x4e8: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x4e9: Push(CvectorIndex(Stack[-1], 0))
0x4ea: Push(CvectorIndex(Stack[-2], 2))
0x4eb: @ RotateAsync(Stack[-2], Stack[-1])
0x4ec: Pop(2)
0x4ed: Return(); Pop(6)

0x4ee: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x4ef: @@ GetPosition(Stack[-7])
0x4f0: Pop(0)
0x4f1: @@ GetEyesHeight(Stack[-8])
0x4f2: Pop(0)
0x4f3: Push(CvectorIndex(Stack[-7], 1))
0x4f4: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x4f5: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x4f6: @ GetPosition(Stack[-6])
0x4f7: Pop(0)
0x4f8: @ GetEyesHeight(Stack[-8])
0x4f9: Pop(0)
0x4fa: Push(CvectorIndex(Stack[-6], 1))
0x4fb: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x4fc: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x4fd: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x4fe: Push(CvectorIndex(Stack[-5], 1))
0x4ff: Stack[-1] = (int) 0
0x500: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x501: Pop(0); Push(Stack[-5] | Stack[-5]);
0x502: Pop(1); Push(Sqrt(Stack[-1]))
0x503: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x504: Stack[-4] = -Stack[-5]; Pop(0);
0x505: Push((int) 70)
0x506: Pop(1); Push(Stack[-6] * Stack[-1]);
0x507: PushEmpty(cvector, cvector)
0x508: Push(CVector(0.0, 1.0, 0.0))
0x509: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x50a: Call 0x543

0x50b: Pop(1)
0x50c: Push((int) 25)
0x50d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x50e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x50f: Push(CVector(0.0, 10.0, 0.0))
0x510: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x511: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x512: @ IsOverrideActive(Stack[-1])
0x513: Pop(0)
0x514: Push(Stack[-1])
0x515: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x516: Stack[-18] = (bool) 0
0x517: Return(); Pop(16)

0x518: @ StopWorld()
0x519: Pop(0)
0x51a: @ CameraTransit(Stack[-2], Stack[-4])
0x51b: Pop(0)
0x51c: Push(CvectorIndex(Stack[-3], 0))
0x51d: Push(CvectorIndex(Stack[-4], 2))
0x51e: @ Rotate(Stack[-2], Stack[-1])
0x51f: Pop(2)
0x520: @ CameraWaitForPlayFinish()
0x521: Pop(0)
0x522: @ ResumeWorld()
0x523: Pop(0)
0x524: Stack[-18] = (bool) 1
0x525: Return(); Pop(16)

0x526: PushEmpty()
0x527: @ CameraSwitchToNormal()
0x528: Pop(0)
0x529: Return(); Pop(0)

0x52a: PushEmpty(float, float, float, float)
0x52b: Push("playing ")
0x52c: Pop(1); Push(Stack[-1] + Stack[-6]);
0x52d: @ Trace(Stack[-1])
0x52e: Pop(1)
0x52f: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x530: Pop(0)
0x531: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x532: Pop(0)
0x533: Push("start: ")
0x534: Pop(1); Push(Stack[-1] + Stack[-3]);
0x535: @ Trace(Stack[-1])
0x536: Pop(1)
0x537: Push("end: ")
0x538: Pop(1); Push(Stack[-1] + Stack[-2]);
0x539: @ Trace(Stack[-1])
0x53a: Pop(1)
0x53b: Return(); Pop(4)

0x53c: PushEmpty(bool)
0x53d: Call 0x580

0x53e: Pop(0)
0x53f: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x540: @ lshStopSpeech()
0x541: Pop(0)
0x542: Return(); Pop(0)

0x543: PushEmpty(float, float)
0x544: Pop(0); Push(Stack[-3] | Stack[-3]);
0x545: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x546: Push((float)0.0)
0x547: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x548: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x549: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x54a: Return(); Pop(2)

0x54b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x54c: Return(); Pop(2)

0x54d: PushEmpty()
0x54e: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x54f: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x550: Stack[-3] = Stack[-2]
0x551: GOTO 0x553

0x552: Stack[-3] = Stack[-1]
0x553: Return(); Pop(0)

0x554: PushEmpty()
0x555: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x556: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x557: Stack[-4] = Stack[-2]
0x558: Return(); Pop(0)

0x559: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x55a: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x55b: Stack[-4] = Stack[-1]
0x55c: Return(); Pop(0)

0x55d: Stack[-4] = Stack[-3]
0x55e: Return(); Pop(0)

0x55f: PushEmpty(object, object)
0x560: @ FindActor(Stack[-1], Stack[-4])
0x561: Pop(0)
0x562: Pop(0); Push((bool) Stack[-1] == 0)
0x563: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x564: Stack[-5] = (bool) 0
0x565: Return(); Pop(2)

0x566: @ Trigger(Stack[-1], Stack[-3])
0x567: Pop(0)
0x568: Stack[-5] = (bool) 1
0x569: Return(); Pop(2)

0x56a: Stack[-1] = 0
0x56b: PushEmpty(int, int)
0x56c: Push("player")
0x56d: @ GetVariable(Stack[-1], Stack[-2])
0x56e: Pop(1)
0x56f: Push((int) 0)
0x570: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x571: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x572: Stack[-3] = (int) 200001
0x573: Return(); Pop(2)

0x574: GOTO 0x57a

0x575: Push((int) 1)
0x576: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x577: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x578: Stack[-3] = (int) 200002
0x579: Return(); Pop(2)

0x57a: Stack[-3] = (int) 200003
0x57b: Return(); Pop(2)

0x57c: Stack[-1] = (int) 3347
0x57d: Return(); Pop(0)

0x57e: Stack[-1] = "ui/NPC_None.png"
0x57f: Return(); Pop(0)

0x580: Stack[-1] = (bool) 0
0x581: Return(); Pop(0)

0x582: @ SetDeathStateAndRemove()
0x583: Pop(0)
0x584: PushEmpty(bool, string, string)
0x585: Stack[-2] = "quest_d1_03"
0x586: Stack[-1] = "butcher_fail"
0x587: Call 0x55f

0x588: Pop(3)
0x589: Return(); Pop(0)

0x58a: PushEmpty()
0x58b: PushEmpty(bool, string, string)
0x58c: Stack[-2] = "quest_d1_03"
0x58d: Stack[-1] = "butcher_death"
0x58e: Call 0x55f

0x58f: Pop(3)
0x590: PushEmpty(object)
0x591: Stack[-1] = Stack[-2]
0x592: Push(-1, 0); TaskCall(5)
0x593: Call 0x38f

0x594: Pop(-1, 0); TaskReturn
0x595: Pop(1)
0x596: Return(); Pop(0)

0x597: PushEmpty()
0x598: PushEmpty(object, int, float)
0x599: Stack[-3] = Stack[-7]
0x59a: Stack[-2] = Stack[-6]
0x59b: Stack[-1] = Stack[-5]
0x59c: Call 0x4a0

0x59d: Pop(3)
0x59e: Return(); Pop(0)

0x59f: PushEmpty(float, float)
0x5a0: Push("health")
0x5a1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5a2: IF (Stack[-1] == 0) GOTO 0x5ab; Pop(1)

0x5a3: Push("health")
0x5a4: @ GetProperty(Stack[-1], Stack[-2])
0x5a5: Pop(1)
0x5a6: Push((int) 0)
0x5a7: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x5a8: IF (Stack[-1] == 0) GOTO 0x5ab; Pop(1)

0x5a9: @ SignalDeath(Stack[-4])
0x5aa: Pop(0)
0x5ab: Return(); Pop(2)

0x5ac: PushEmpty()
0x5ad: PushEmpty(object)
0x5ae: Stack[-1] = Stack[-2]
0x5af: Call 0x58a

0x5b0: Pop(1)
0x5b1: Return(); Pop(0)

