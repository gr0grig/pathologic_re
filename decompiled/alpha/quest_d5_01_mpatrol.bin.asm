GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	player
	all
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
	quest_d5_01
	dead
	fdie
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	head
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	idle
	factory_fight
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
	2
	playing 
	start: 
	end: 
	ood5PatrolGuard1
	d5q01
	d5q01PatrolGotoGrif
	pt_map_grif
	AddMark
	Can't find main outdoor scene
	GetMap
	ui/NPC_Black.png
	revolver_ammo
	alpha_pills

Import:
	FindActor (2 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	IsPlayerActor (2 args)
	GetPFPosition (1 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
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
	sync (0 args)
	Speak (1 args)
	GetPosition (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	SetTimer (2 args)
	FollowPath (5 args)
	KillTimer (1 args)
	Sleep (2 args)
	RequestClearPath (1 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	WorkWithCorpse (1 args)
	RemoveActor (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	LookAsync (3 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	CreateDialog (1 args)
	DoDialog (1 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
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
	self (1 args)
	GetVariable (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	SetVariable (2 args)
	GetMainOutdoorScene (1 args)
	AddItem (4 args)

RunOp = 0x476
RunTask = 5

GlobalTasks: 
	GTASK_0 Vars = (object, int, int, bool, int) Params = 0
	GTASK_1 Vars = (bool, object) Params = 6
		EVENT_7 Op = 0x266 Vars = (int)
		EVENT_10 Op = 0x278 Vars = (object)
		EVENT_41 Op = 0x283 Vars = (object)
	GTASK_2  Params = 1
		EVENT_0 Op = 0x2a9 Vars = (object)
		EVENT_6 Op = 0x2b1 Vars = ()
		EVENT_22 Op = 0x326 Vars = (object, int, float, float)
		EVENT_16 Op = 0x328 Vars = (object, string)
		EVENT_41 Op = 0x32a Vars = (object)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3c4 Vars = (int, int)
	GTASK_5  Params = 0
		EVENT_0 Op = 0x47a Vars = (object)
		EVENT_17 Op = 0x486 Vars = (object)
		EVENT_26 Op = 0x491 Vars = (string)

Events:
EVENT_22 Op = 0x60b Vars = (object, int, float, float)
EVENT_16 Op = 0x613 Vars = (object, string)
EVENT_41 Op = 0x620 Vars = (object)

0x0: PushEmpty(object, object)
0x1: Push("player")
0x2: @ FindActor(Stack[-2], Stack[-1])
0x3: Pop(1)
0x4: Pop(0); Push((bool) Stack[-1] == 0)
0x5: IF (Stack[-1] == 0) GOTO 0x7; Pop(1)

0x6: Return(); Pop(2)

0x7: PushEmpty(object, bool, float)
0x8: Stack[-3] = Stack[-4]
0x9: Stack[-2] = (bool) 1
0xa: Stack[-1] = (float) 180.0
0xb: Call 0x15

0xc: Pop(3)
0xd: Return(); Pop(2)

0xe: Stack[-1] = 0
0xf: PushEmpty()
0x10: Stack[-3] = (float) 0.3
0x11: Return(); Pop(0)

0x12: PushEmpty()
0x13: Stack[-3] = (int) 0
0x14: Return(); Pop(0)

0x15: PushEmpty(bool, bool, float, cvector, cvector, bool, bool, cvector, float, float, bool, bool, float, cvector, cvector, bool, bool, cvector, float, float)
0x16: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x17: Push("all")
0x18: Push("attack_begin")
0x19: Push((int) 1)
0x1a: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x1b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1c: @ HasAnimation(Stack[-12], Stack[-2], Stack[-1])
0x1d: Pop(2)
0x1e: Pop(0); Push((bool) Stack[-10] == 0)
0x1f: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x20: GOTO 0x24

0x21: Push((int) 1)
0x22: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x23: GOTO 0x17

0x24: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x25: Push("attack")
0x26: Push((int) 1)
0x27: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x28: Pop(2); Push(Stack[-2] + Stack[-1]);
0x29: @ IsExisting3DSound(Stack[-10], Stack[-1])
0x2a: Pop(1)
0x2b: Pop(0); Push((bool) Stack[-9] == 0)
0x2c: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2d: GOTO 0x31

0x2e: Push((int) 1)
0x2f: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x30: GOTO 0x25

0x31: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x32: Push("@GetAttackDistance")
0x33: Push((int) 1)
0x34: Pop(2); Push(IsFuncExist(Stack[-25], Stack[-2], Stack[-1]))
0x35: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x36: @@ GetAttackDistance(Stack[-8])
0x37: Pop(0)
0x38: Push((int) 50)
0x39: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x3a: GOTO 0x3c

0x3b: Stack[-8] = Stack[-21]
0x3c: Push((int) 150)
0x3d: Pop(1); Push((bool) Stack[-9] >= Stack[-1])
0x3e: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3f: Stack[-8] = (int) 150
0x40: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x41: Stack[0 + Tasks[-1].StackPointer] = Stack[-23]
0x42: @ IsPlayerActor(Stack[-0], Stack[-5])
0x43: Pop(0)
0x44: Push(Stack[-22])
0x45: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x46: Stack[-4] = (bool) 0
0x47: GOTO 0x49

0x48: Stack[-4] = (bool) 1
0x49: PushEmpty(bool)
0x4a: Stack[-1] = (bool) 0
0x4b: PushEmpty(bool, object)
0x4c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d: Call 0x518

0x4e: Pop(1)
0x4f: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x50: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x51: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x52: Stack[-1] = (bool) 1
0x53: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0x54: @@ GetPFPosition(Stack[-7])
0x55: Pop(0)
0x56: @ GetPFPosition(Stack[-6])
0x57: Pop(0)
0x58: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x59: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x5a: Push((float)400.0)
0x5b: Pop(1); Push(Stack[-1] + Stack[-9]);
0x5c: Push((float)400.0)
0x5d: Pop(1); Push(Stack[-1] + Stack[-10]);
0x5e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5f: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x60: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x61: PushEmpty(bool, object, float, float, bool, bool)
0x62: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x63: Stack[-4] = Stack[-14]
0x64: Stack[-3] = (float) 10000.0
0x65: Stack[-2] = (bool) 1
0x66: Stack[-1] = (bool) 0
0x67: Push(-6, 2); TaskCall(1)
0x68: Call 0x200

0x69: Pop(-6, 2); TaskReturn
0x6a: Pop(5)
0x6b: Pop(1); Push((bool) Stack[-1] == 0)
0x6c: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6d: GOTO 0xd1

0x6e: Stack[-4] = (bool) 0
0x6f: GOTO 0xd0

0x70: Pop(0); Push(Stack[-21] * Stack[-21]);
0x71: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x72: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0x73: Pop(0); Push((bool) Stack[-4] == 0)
0x74: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x75: PushEmpty(object)
0x76: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x77: Call 0x573

0x78: Pop(1)
0x79: Push("all")
0x7a: Push("attack_on")
0x7b: @ PlayAnimation(Stack[-2], Stack[-1])
0x7c: Pop(2)
0x7d: @ WaitForAnimEnd()
0x7e: Pop(0)
0x7f: @ StopAsync()
0x80: Pop(0)
0x81: Stack[-4] = (bool) 1
0x82: @ rand(Stack[-1])
0x83: Pop(0)
0x84: PushEmpty(bool)
0x85: Stack[-1] = (bool) 1
0x86: Push((float)0.6)
0x87: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x88: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x89: PushEmpty(bool)
0x8a: Call 0x1cd

0x8b: Pop(0)
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Stack[-1] = (bool) 0
0x8e: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x8f: @ Face(Stack[-0])
0x90: Pop(0)
0x91: Push("all")
0x92: Push("attack_stay")
0x93: @ PlayAnimation(Stack[-2], Stack[-1])
0x94: Pop(2)
0x95: PushEmpty(bool, float)
0x96: Stack[-1] = Stack[-23]
0x97: Call 0x171

0x98: Pop(2)
0x99: @ StopAsync()
0x9a: Pop(0)
0x9b: GOTO 0xc7

0x9c: @ Face(Stack[-0])
0x9d: Pop(0)
0x9e: Push("all")
0x9f: Push("fjump")
0xa0: @ PlayAnimation(Stack[-2], Stack[-1])
0xa1: Pop(2)
0xa2: @ WaitForAnimEnd()
0xa3: Pop(0)
0xa4: Push(CVector(0.0, 0.0, 0.0))
0xa5: @ SetSpeed(Stack[-1])
0xa6: Pop(1)
0xa7: @ Stop()
0xa8: Pop(0)
0xa9: @ StopAsync()
0xaa: Pop(0)
0xab: PushEmpty(bool)
0xac: Call 0x1cd

0xad: Pop(0)
0xae: Pop(1); Push((bool) Stack[-1] == 0)
0xaf: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xb0: PushEmpty(bool, object)
0xb1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb2: Call 0x518

0xb3: Pop(1)
0xb4: Pop(1); Push((bool) Stack[-1] == 0)
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: GOTO 0xd1

0xb7: @@ GetPFPosition(Stack[-7])
0xb8: Pop(0)
0xb9: @ GetPFPosition(Stack[-6])
0xba: Pop(0)
0xbb: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0xbc: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xbd: Pop(0); Push(Stack[-21] * Stack[-21]);
0xbe: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc0: PushEmpty(bool, float)
0xc1: Stack[-1] = Stack[-23]
0xc2: Call 0x109

0xc3: Pop(1)
0xc4: Pop(1); Push((bool) Stack[-1] == 0)
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: GOTO 0xd1

0xc7: GOTO 0xd0

0xc8: PushEmpty(bool, float)
0xc9: Stack[-1] = Stack[-23]
0xca: Call 0x109

0xcb: Pop(1)
0xcc: Pop(1); Push((bool) Stack[-1] == 0)
0xcd: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xce: GOTO 0xd1

0xcf: Stack[-4] = (bool) 1
0xd0: GOTO 0x49

0xd1: @ WaitForAnimEnd()
0xd2: Pop(0)
0xd3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd4: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd5: Return(); Pop(20)

0xd6: Push("all")
0xd7: Push("attack_off")
0xd8: @ PlayAnimation(Stack[-2], Stack[-1])
0xd9: Pop(2)
0xda: @ WaitForAnimEnd()
0xdb: Pop(0)
0xdc: Push(Stack[-5])
0xdd: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xde: Push((float)2.0)
0xdf: @ Sleep(Stack[-1])
0xe0: Pop(1)
0xe1: Return(); Pop(20)

0xe2: PushEmpty(object, float, float, object, float, float)
0xe3: Push((float)0.9)
0xe4: Pop(1); Push(Stack[-9] * Stack[-1]);
0xe5: @ GetVictim(Stack[-1], Stack[-4])
0xe6: Pop(1)
0xe7: @ ReportAttack(Stack[-0])
0xe8: Pop(0)
0xe9: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0xea: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0xeb: PushEmpty(float, object, int)
0xec: Stack[-2] = Stack[-6]
0xed: Stack[-1] = Stack[-10]
0xee: Call 0xf

0xef: Stack[-5] = Stack[-3]
0xf0: Pop(3)
0xf1: PushEmpty(float, object, float, int)
0xf2: Stack[-3] = Stack[-7]
0xf3: Stack[-2] = Stack[-6]
0xf4: PushEmpty(int, object, int)
0xf5: Stack[-2] = Stack[-10]
0xf6: Stack[-1] = Stack[-14]
0xf7: Call 0x12

0xf8: Stack[-4] = Stack[-3]
0xf9: Pop(3)
0xfa: Call 0x4af

0xfb: Stack[-5] = Stack[-4]
0xfc: Pop(4)
0xfd: PushEmpty(int)
0xfe: Call 0x1f8

0xff: Pop(0)
0x100: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x101: Pop(1)
0x102: PushEmpty(object, float)
0x103: Stack[-2] = Stack[-5]
0x104: Stack[-1] = Stack[-3]
0x105: Call 0x1fa

0x106: Pop(2)
0x107: Return(); Pop(6)

0x108: Stack[-3] = 0
0x109: PushEmpty(int, bool, int, bool)
0x10a: @ irand(Stack[-2], Stack[-1])
0x10b: Pop(0)
0x10c: Push((int) 1)
0x10d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x10e: @ Face(Stack[-0])
0x10f: Pop(0)
0x110: Push((bool) 1)
0x111: @ SetAttackState(Stack[-1])
0x112: Pop(1)
0x113: Push("all")
0x114: Push("attack_begin")
0x115: Pop(1); Push(Stack[-1] + Stack[-4]);
0x116: @ PlayAnimation(Stack[-2], Stack[-1])
0x117: Pop(2)
0x118: @ WaitForAnimEnd()
0x119: Pop(0)
0x11a: PushEmpty()
0x11b: Call 0x1d8

0x11c: Pop(0)
0x11d: PushEmpty(bool, object)
0x11e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11f: Call 0x518

0x120: Pop(1)
0x121: Pop(1); Push((bool) Stack[-1] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x123: @ StopAsync()
0x124: Pop(0)
0x125: Stack[-6] = (bool) 0
0x126: Return(); Pop(4)

0x127: PushEmpty(float, int)
0x128: Stack[-2] = Stack[-7]
0x129: Stack[-1] = Stack[-4]
0x12a: Call 0xe2

0x12b: Pop(2)
0x12c: Push("all")
0x12d: Push("attack_middle")
0x12e: Pop(1); Push(Stack[-1] + Stack[-4]);
0x12f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x130: Pop(2)
0x131: Push(Stack[-1])
0x132: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x133: Push("all")
0x134: Push("attack_middle")
0x135: Pop(1); Push(Stack[-1] + Stack[-4]);
0x136: @ PlayAnimation(Stack[-2], Stack[-1])
0x137: Pop(2)
0x138: @ WaitForAnimEnd()
0x139: Pop(0)
0x13a: PushEmpty(bool, object)
0x13b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13c: Call 0x518

0x13d: Pop(1)
0x13e: Pop(1); Push((bool) Stack[-1] == 0)
0x13f: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x140: @ StopAsync()
0x141: Pop(0)
0x142: Stack[-6] = (bool) 0
0x143: Return(); Pop(4)

0x144: PushEmpty(float, int)
0x145: Stack[-2] = Stack[-7]
0x146: Stack[-1] = Stack[-4]
0x147: Call 0xe2

0x148: Pop(2)
0x149: Push((bool) 0)
0x14a: @ SetAttackState(Stack[-1])
0x14b: Pop(1)
0x14c: Push("all")
0x14d: Push("attack_end")
0x14e: Pop(1); Push(Stack[-1] + Stack[-4]);
0x14f: @ PlayAnimation(Stack[-2], Stack[-1])
0x150: Pop(2)
0x151: PushEmpty(bool, float)
0x152: Stack[-1] = (float) 0.75
0x153: Call 0x159

0x154: Pop(2)
0x155: @ StopAsync()
0x156: Pop(0)
0x157: Stack[-6] = (bool) 1
0x158: Return(); Pop(4)

0x159: PushEmpty(float, bool, float, bool)
0x15a: @ rand(Stack[-2])
0x15b: Pop(0)
0x15c: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x15d: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x15e: @ IsAnimationPlaying(Stack[-1])
0x15f: Pop(0)
0x160: Pop(0); Push((bool) Stack[-1] == 0)
0x161: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x162: GOTO 0x16c

0x163: PushEmpty(bool)
0x164: Call 0x199

0x165: Pop(0)
0x166: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x167: Stack[-6] = (bool) 1
0x168: Return(); Pop(4)

0x169: @ sync()
0x16a: Pop(0)
0x16b: GOTO 0x15e

0x16c: GOTO 0x16f

0x16d: @ WaitForAnimEnd()
0x16e: Pop(0)
0x16f: Stack[-6] = (bool) 0
0x170: Return(); Pop(4)

0x171: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x172: @ IsAnimationPlaying(Stack[-5])
0x173: Pop(0)
0x174: Pop(0); Push((bool) Stack[-5] == 0)
0x175: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x176: GOTO 0x197

0x177: PushEmpty(bool)
0x178: Call 0x199

0x179: Pop(0)
0x17a: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17b: Stack[-12] = (bool) 1
0x17c: Return(); Pop(10)

0x17d: PushEmpty(bool, object)
0x17e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17f: Call 0x518

0x180: Pop(1)
0x181: Pop(1); Push((bool) Stack[-1] == 0)
0x182: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x183: Stack[-12] = (bool) 0
0x184: Return(); Pop(10)

0x185: @@ GetPFPosition(Stack[-4])
0x186: Pop(0)
0x187: @ GetPFPosition(Stack[-3])
0x188: Pop(0)
0x189: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x18a: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x18b: Pop(0); Push(Stack[-11] * Stack[-11]);
0x18c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x18e: PushEmpty(bool, float)
0x18f: Stack[-1] = Stack[-13]
0x190: Call 0x109

0x191: Pop(2)
0x192: Stack[-12] = (bool) 1
0x193: Return(); Pop(10)

0x194: @ sync()
0x195: Pop(0)
0x196: GOTO 0x172

0x197: Stack[-12] = (bool) 0
0x198: Return(); Pop(10)

0x199: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x19a: PushEmpty(bool, object)
0x19b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x19c: Call 0x518

0x19d: Pop(1)
0x19e: Pop(1); Push((bool) Stack[-1] == 0)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a0: Stack[-11] = (bool) 0
0x1a1: Return(); Pop(10)

0x1a2: PushEmpty(bool)
0x1a3: Call 0x1cd

0x1a4: Pop(0)
0x1a5: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1a6: @@ GetPFPosition(Stack[-5])
0x1a7: Pop(0)
0x1a8: @ GetPFPosition(Stack[-4])
0x1a9: Pop(0)
0x1aa: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x1ab: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x1ac: @@ GetAttackDistance(Stack[-1])
0x1ad: Pop(0)
0x1ae: Push((int) 50)
0x1af: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x1b0: Pop(0); Push(Stack[-1] * Stack[-1]);
0x1b1: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b3: PushEmpty()
0x1b4: Call 0x1ba

0x1b5: Pop(0)
0x1b6: Stack[-11] = (bool) 1
0x1b7: Return(); Pop(10)

0x1b8: Stack[-11] = (bool) 0
0x1b9: Return(); Pop(10)

0x1ba: PushEmpty(cvector, cvector, cvector, cvector)
0x1bb: @ Face(Stack[-0])
0x1bc: Pop(0)
0x1bd: Push("all")
0x1be: Push("bjump")
0x1bf: @ PlayAnimation(Stack[-2], Stack[-1])
0x1c0: Pop(2)
0x1c1: @@ GetPFPosition(Stack[-2])
0x1c2: Pop(0)
0x1c3: @ GetPFPosition(Stack[-1])
0x1c4: Pop(0)
0x1c5: @ WaitForAnimEnd()
0x1c6: Pop(0)
0x1c7: @ StopAsync()
0x1c8: Pop(0)
0x1c9: Push(CVector(0.0, 0.0, 0.0))
0x1ca: @ SetSpeed(Stack[-1])
0x1cb: Pop(1)
0x1cc: Return(); Pop(4)

0x1cd: PushEmpty(bool, bool)
0x1ce: Push("IsAttacking")
0x1cf: Push((int) 1)
0x1d0: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d2: @@ IsAttacking(Stack[-1])
0x1d3: Pop(0)
0x1d4: Stack[-3] = Stack[-1]
0x1d5: Return(); Pop(2)

0x1d6: Stack[-3] = (bool) 0
0x1d7: Return(); Pop(2)

0x1d8: PushEmpty(float, int, float, int)
0x1d9: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1da: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1db: Return(); Pop(4)

0x1dc: Push( Stack[4 + Tasks[-1].StackPointer] )
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1de: Push((int) -1)
0x1df: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1e0: Push((int) 0)
0x1e1: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] > Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e3: Return(); Pop(4)

0x1e4: @ rand(Stack[-2])
0x1e5: Pop(0)
0x1e6: PushEmpty(float)
0x1e7: Call 0x1fe

0x1e8: Pop(0)
0x1e9: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1eb: @ irand(Stack[-1], Stack[-2])
0x1ec: Pop(0)
0x1ed: Push((int) 1)
0x1ee: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x1ef: Push("attack")
0x1f0: Pop(1); Push(Stack[-1] + Stack[-2]);
0x1f1: @ Speak(Stack[-1])
0x1f2: Pop(1)
0x1f3: PushEmpty(int)
0x1f4: Call 0x1fc

0x1f5: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x1f6: Pop(1)
0x1f7: Return(); Pop(4)

0x1f8: Stack[-1] = (int) 0
0x1f9: Return(); Pop(0)

0x1fa: PushEmpty()
0x1fb: Return(); Pop(0)

0x1fc: Stack[-1] = (int) 1
0x1fd: Return(); Pop(0)

0x1fe: Stack[-1] = (float) 0.5
0x1ff: Return(); Pop(0)

0x200: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x201: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x202: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x203: Stack[-7] = Stack[-17]
0x204: PushEmpty(bool, object)
0x205: Stack[-1] = Stack[-23]
0x206: Call 0x28c

0x207: Pop(1)
0x208: Pop(1); Push((bool) Stack[-1] == 0)
0x209: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20a: Stack[-22] = (bool) 0
0x20b: Return(); Pop(16)

0x20c: @@ GetPosition(Stack[-5])
0x20d: Pop(0)
0x20e: @ GetPosition(Stack[-4])
0x20f: Pop(0)
0x210: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x211: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x212: PushEmpty(bool)
0x213: Stack[-1] = (bool) 0
0x214: Push((int) 0)
0x215: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x216: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x217: Pop(0); Push(Stack[-20] * Stack[-20]);
0x218: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x219: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x21a: Stack[-1] = (bool) 1
0x21b: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21c: @ Stop()
0x21d: Pop(0)
0x21e: Stack[-22] = (bool) 0
0x21f: Return(); Pop(16)

0x220: Pop(0); Push(Stack[-20] * Stack[-20]);
0x221: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x222: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x223: @@ GetPFPosition(Stack[-5])
0x224: Pop(0)
0x225: @ FindPathTo(Stack[-1], Stack[-5])
0x226: Pop(0)
0x227: Pop(0); Push(( Stack[-1] != 0 )
0x228: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x229: Stack[-6] = Stack[-1]
0x22a: Stack[-1] = 0
0x22b: Pop(0); Push(( Stack[-6] != 0 )
0x22c: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x22d: Push(Stack[-7])
0x22e: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x22f: Stack[-7] = (bool) 0
0x230: @ RotatePath(Stack[-6], Stack[-8])
0x231: Pop(0)
0x232: Pop(0); Push((bool) Stack[-8] == 0)
0x233: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x234: GOTO 0x264

0x235: Push((int) 0)
0x236: Push((float)0.3)
0x237: @ SetTimer(Stack[-2], Stack[-1])
0x238: Pop(2)
0x239: PushEmpty(string)
0x23a: Call 0x293

0x23b: Pop(0)
0x23c: PushEmpty(string)
0x23d: Call 0x295

0x23e: Pop(0)
0x23f: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x240: Pop(2)
0x241: Pop(0); Push((bool) Stack[-8] == 0)
0x242: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x243: Push( Stack[0 + Tasks[-1].StackPointer] )
0x244: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x245: Stack[-6] = 0
0x246: GOTO 0x264

0x247: GOTO 0x249

0x248: GOTO 0x263

0x249: GOTO 0x24b

0x24a: Stack[-6] = 0
0x24b: GOTO 0x25c

0x24c: Push((int) 0)
0x24d: @ KillTimer(Stack[-1])
0x24e: Pop(1)
0x24f: Push((float)0.5)
0x250: @ Sleep(Stack[-1], Stack[-9])
0x251: Pop(1)
0x252: Pop(0); Push((bool) Stack[-8] == 0)
0x253: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x254: Push( Stack[0 + Tasks[-1].StackPointer] )
0x255: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x256: Stack[-6] = 0
0x257: GOTO 0x264

0x258: Push((int) 0)
0x259: Push((float)0.3)
0x25a: @ SetTimer(Stack[-2], Stack[-1])
0x25b: Pop(2)
0x25c: Stack[-1] = 0
0x25d: GOTO 0x262

0x25e: Push((int) 0)
0x25f: @ KillTimer(Stack[-1])
0x260: Pop(1)
0x261: GOTO 0x264

0x262: Stack[-6] = 0
0x263: GOTO 0x204

0x264: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x265: Return(); Pop(16)

0x266: PushEmpty()
0x267: Push((int) 0)
0x268: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x269: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x26a: Return(); Pop(0)

0x26b: PushEmpty(bool, object)
0x26c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x26d: Call 0x28c

0x26e: Pop(1)
0x26f: Pop(1); Push((bool) Stack[-1] == 0)
0x270: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x271: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x272: Push((int) 0)
0x273: @ KillTimer(Stack[-1])
0x274: Pop(1)
0x275: @ Stop()
0x276: Pop(0)
0x277: Return(); Pop(0)

0x278: PushEmpty()
0x279: @ RequestClearPath(Stack[-1])
0x27a: Pop(0)
0x27b: Return(); Pop(0)

0x27c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x27d: Push((int) 0)
0x27e: @ KillTimer(Stack[-1])
0x27f: Pop(1)
0x280: @ Stop()
0x281: Pop(0)
0x282: Return(); Pop(0)

0x283: PushEmpty()
0x284: PushEmpty()
0x285: Call 0x27c

0x286: Pop(0)
0x287: PushEmpty(object)
0x288: Stack[-1] = Stack[-2]
0x289: Call 0x620

0x28a: Pop(1)
0x28b: Return(); Pop(0)

0x28c: PushEmpty()
0x28d: PushEmpty(bool, object)
0x28e: Stack[-1] = Stack[-3]
0x28f: Call 0x518

0x290: Stack[-4] = Stack[-2]
0x291: Pop(2)
0x292: Return(); Pop(0)

0x293: Stack[-1] = "walk"
0x294: Return(); Pop(0)

0x295: Stack[-1] = "run"
0x296: Return(); Pop(0)

0x297: PushEmpty()
0x298: PushEmpty(bool, string, string)
0x299: Stack[-2] = "quest_d5_01"
0x29a: Stack[-1] = "dead"
0x29b: Call 0x5fa

0x29c: Pop(3)
0x29d: PushEmpty(object)
0x29e: Stack[-1] = Stack[-2]
0x29f: Call 0x2b9

0x2a0: Pop(1)
0x2a1: Push((int) 50)
0x2a2: Push((int) 40)
0x2a3: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x2a4: Pop(2)
0x2a5: @ Hold()
0x2a6: Pop(0)
0x2a7: GOTO 0x2a5

0x2a8: Return(); Pop(0)

0x2a9: PushEmpty(bool, bool)
0x2aa: @ IsOverrideActive(Stack[-1])
0x2ab: Pop(0)
0x2ac: Pop(0); Push((bool) Stack[-1] == 0)
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2ae: @ WorkWithCorpse(Stack[-3])
0x2af: Pop(0)
0x2b0: Return(); Pop(2)

0x2b1: PushEmpty(object)
0x2b2: Call 0x5d3

0x2b3: Pop(0)
0x2b4: @ RemoveActor(Stack[-1])
0x2b5: Pop(1)
0x2b6: @ Hold()
0x2b7: Pop(0)
0x2b8: Return(); Pop(0)

0x2b9: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x2ba: Pop(0); Push((bool) Stack[-21] == 0)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2bc: PushEmpty(string)
0x2bd: Stack[-1] = "fdie"
0x2be: Call 0x310

0x2bf: Pop(1)
0x2c0: GOTO 0x30f

0x2c1: @@ GetPosition(Stack[-10])
0x2c2: Pop(0)
0x2c3: @ GetPosition(Stack[-9])
0x2c4: Pop(0)
0x2c5: @ GetDirection(Stack[-8])
0x2c6: Pop(0)
0x2c7: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x2c8: Push(CvectorIndex(Stack[-7], 0))
0x2c9: Push(CvectorIndex(Stack[-9], 0))
0x2ca: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2cb: Push(CvectorIndex(Stack[-8], 2))
0x2cc: Push(CvectorIndex(Stack[-10], 2))
0x2cd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2ce: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2cf: Push((int) 0)
0x2d0: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d2: Stack[-6] = "fdie"
0x2d3: GOTO 0x2d5

0x2d4: Stack[-6] = "bdie"
0x2d5: @ RemoveRTEnvelope()
0x2d6: Pop(0)
0x2d7: @ SetDeathState()
0x2d8: Pop(0)
0x2d9: @ Stop()
0x2da: Pop(0)
0x2db: @ StopAsync()
0x2dc: Pop(0)
0x2dd: Stack[-5] = Stack[-21]
0x2de: Push("GetScriptProperty")
0x2df: Push((int) 2)
0x2e0: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x2e1: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2e2: Push("Owner")
0x2e3: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x2e4: Pop(1)
0x2e5: Push(Stack[-4])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2e7: Push("Owner")
0x2e8: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x2e9: Pop(1)
0x2ea: Pop(0); Push((bool) Stack[-5] == 0)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2ec: Stack[-5] = Stack[-21]
0x2ed: Push("@GetEyesHeight")
0x2ee: Push((int) 1)
0x2ef: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x2f0: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2f1: @@ GetEyesHeight(Stack[-2])
0x2f2: Pop(0)
0x2f3: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2f4: Push(CvectorIndex(Stack[-1], 1))
0x2f5: Stack[-1] = Stack[-3]
0x2f6: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2f7: Push("head")
0x2f8: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x2f9: Pop(1)
0x2fa: Stack[-3] = (bool) 1
0x2fb: GOTO 0x2fd

0x2fc: Stack[-3] = (bool) 0
0x2fd: Push("all")
0x2fe: @ PlayAnimation(Stack[-1], Stack[-7])
0x2ff: Pop(1)
0x300: @ WaitForAnimEnd()
0x301: Pop(0)
0x302: Push(Stack[-3])
0x303: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x304: @ StopAsync()
0x305: Pop(0)
0x306: Push("head")
0x307: @ UnlookAsync(Stack[-1])
0x308: Pop(1)
0x309: Push("all")
0x30a: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x30b: Pop(1)
0x30c: @ RemoveEnvelope()
0x30d: Pop(0)
0x30e: Stack[-5] = 0
0x30f: Return(); Pop(20)

0x310: PushEmpty()
0x311: @ RemoveRTEnvelope()
0x312: Pop(0)
0x313: @ SetDeathState()
0x314: Pop(0)
0x315: @ Stop()
0x316: Pop(0)
0x317: @ StopAsync()
0x318: Pop(0)
0x319: @ StopSecondaryAnimation()
0x31a: Pop(0)
0x31b: Push("all")
0x31c: @ PlayAnimation(Stack[-1], Stack[-2])
0x31d: Pop(1)
0x31e: @ WaitForAnimEnd()
0x31f: Pop(0)
0x320: Push("all")
0x321: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x322: Pop(1)
0x323: @ RemoveEnvelope()
0x324: Pop(0)
0x325: Return(); Pop(0)

0x326: PushEmpty()
0x327: Return(); Pop(0)

0x328: PushEmpty()
0x329: Return(); Pop(0)

0x32a: PushEmpty()
0x32b: Return(); Pop(0)

0x32c: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32d: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x32e: PushEmpty(bool, object)
0x32f: Stack[-1] = Stack[-11]
0x330: Call 0x57e

0x331: Pop(1)
0x332: Pop(1); Push((bool) Stack[-1] == 0)
0x333: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x334: Stack[-10] = (int) -2
0x335: Return(); Pop(8)

0x336: @ CreateDialog(Stack[-4])
0x337: Pop(0)
0x338: PushEmpty(int)
0x339: Call 0x66e

0x33a: Pop(0)
0x33b: @@ SetNPCName(Stack[-1])
0x33c: Pop(1)
0x33d: PushEmpty(string)
0x33e: Call 0x670

0x33f: Pop(0)
0x340: @@ SetPhoto(Stack[-1])
0x341: Pop(1)
0x342: PushEmpty(int)
0x343: Call 0x65d

0x344: Pop(0)
0x345: @@ SetPlayerName(Stack[-1])
0x346: Pop(1)
0x347: Stack[-2] = (int) -1
0x348: @ IsOverrideActive(Stack[-3])
0x349: Pop(0)
0x34a: Push(Stack[-3])
0x34b: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34c: Stack[-10] = (int) -2
0x34d: Return(); Pop(8)

0x34e: @ DoDialog(Stack[-4])
0x34f: Pop(0)
0x350: PushEmpty(object, object)
0x351: Stack[-2] = Stack[-11]
0x352: Stack[-1] = Stack[-6]
0x353: Push(-2, 4); TaskCall(4)
0x354: Call 0x36b

0x355: Pop(-2, 4); TaskReturn
0x356: Pop(2)
0x357: @@ IsDialogEnd(Stack[-1])
0x358: Pop(0)
0x359: Pop(0); Push((bool) Stack[-1] == 0)
0x35a: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35b: @ sync()
0x35c: Pop(0)
0x35d: @@ IsDialogEnd(Stack[-1])
0x35e: Pop(0)
0x35f: GOTO 0x359

0x360: PushEmpty(object)
0x361: Stack[-1] = Stack[-10]
0x362: Call 0x5b6

0x363: Pop(1)
0x364: @ StopDialog(Stack[-4])
0x365: Pop(0)
0x366: @@ GetReturnValue(Stack[-2])
0x367: Pop(0)
0x368: Stack[-10] = Stack[-2]
0x369: Return(); Pop(8)

0x36a: Stack[-4] = 0
0x36b: PushEmpty()
0x36c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x36d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x36e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x36f: Push((int) 1)
0x370: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x371: PushEmpty(bool, object)
0x372: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x373: Call 0x640

0x374: Pop(1)
0x375: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x376: PushEmpty(string)
0x377: Stack[-1] = "Neutral"
0x378: Call 0x3b4

0x379: Pop(1)
0x37a: Push((int) 11690)
0x37b: @@ SetMessage(Stack[-1])
0x37c: Pop(1)
0x37d: @@ ClearReplies()
0x37e: Pop(0)
0x37f: Push((int) 11691)
0x380: Push((int) 12894)
0x381: Push((int) 12893)
0x382: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x383: Pop(3)
0x384: GOTO 0x396

0x385: PushEmpty(string)
0x386: Stack[-1] = "Neutral"
0x387: Call 0x3b4

0x388: Pop(1)
0x389: Push((int) 12483)
0x38a: @@ SetMessage(Stack[-1])
0x38b: Pop(1)
0x38c: @@ ClearReplies()
0x38d: Pop(0)
0x38e: Push((int) 12484)
0x38f: Push((int) -1)
0x390: Push((int) 13652)
0x391: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x392: Pop(3)
0x393: GOTO 0x396

0x394: Return(); Pop(0)

0x395: GOTO 0x36f

0x396: PushEmpty(bool)
0x397: Call 0x672

0x398: Pop(0)
0x399: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39a: @ lshWaitForAnimEnd()
0x39b: Pop(0)
0x39c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x39d: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39e: GOTO 0x3a4

0x39f: PushEmpty(string)
0x3a0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3a1: Call 0x5ba

0x3a2: Pop(1)
0x3a3: GOTO 0x39a

0x3a4: GOTO 0x3b3

0x3a5: Push("all")
0x3a6: Push("idle")
0x3a7: @ PlayAnimation(Stack[-2], Stack[-1])
0x3a8: Pop(2)
0x3a9: @ WaitForAnimEnd()
0x3aa: Pop(0)
0x3ab: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3ac: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3ad: GOTO 0x3b3

0x3ae: Push("all")
0x3af: Push("idle")
0x3b0: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b1: Pop(2)
0x3b2: GOTO 0x3a9

0x3b3: Return(); Pop(0)

0x3b4: PushEmpty()
0x3b5: PushEmpty(bool)
0x3b6: Call 0x672

0x3b7: Pop(0)
0x3b8: Pop(1); Push((bool) Stack[-1] == 0)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3ba: Return(); Pop(0)

0x3bb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3bc: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bd: Return(); Pop(0)

0x3be: PushEmpty(string)
0x3bf: Stack[-1] = Stack[-2]
0x3c0: Call 0x5ba

0x3c1: Pop(1)
0x3c2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3c3: Return(); Pop(0)

0x3c4: PushEmpty()
0x3c5: Push((int) 1)
0x3c6: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x3c7: PushEmpty()
0x3c8: Call 0x5cc

0x3c9: Pop(0)
0x3ca: Push((int) 12905)
0x3cb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3cc: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3cd: PushEmpty(object, object)
0x3ce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3cf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3d0: Call 0x626

0x3d1: Pop(2)
0x3d2: PushEmpty(object, object)
0x3d3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3d4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3d5: Call 0x62c

0x3d6: Pop(2)
0x3d7: Push((int) 12906)
0x3d8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d9: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3da: PushEmpty(object, object)
0x3db: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3dc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3dd: Call 0x626

0x3de: Pop(2)
0x3df: PushEmpty(object, object)
0x3e0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3e1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e2: Call 0x62c

0x3e3: Pop(2)
0x3e4: Push((int) 12892)
0x3e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e6: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x3e7: PushEmpty(bool, object)
0x3e8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e9: Call 0x640

0x3ea: Pop(1)
0x3eb: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3ec: PushEmpty(string)
0x3ed: Stack[-1] = "Neutral"
0x3ee: Call 0x3b4

0x3ef: Pop(1)
0x3f0: Push((int) 11690)
0x3f1: @@ SetMessage(Stack[-1])
0x3f2: Pop(1)
0x3f3: @@ ClearReplies()
0x3f4: Pop(0)
0x3f5: Push((int) 11691)
0x3f6: Push((int) 12894)
0x3f7: Push((int) 12893)
0x3f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f9: Pop(3)
0x3fa: Return(); Pop(0)

0x3fb: PushEmpty(string)
0x3fc: Stack[-1] = "Neutral"
0x3fd: Call 0x3b4

0x3fe: Pop(1)
0x3ff: Push((int) 12483)
0x400: @@ SetMessage(Stack[-1])
0x401: Pop(1)
0x402: @@ ClearReplies()
0x403: Pop(0)
0x404: Push((int) 12484)
0x405: Push((int) -1)
0x406: Push((int) 13652)
0x407: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x408: Pop(3)
0x409: Return(); Pop(0)

0x40a: Push((int) 12894)
0x40b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40c: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x40d: PushEmpty(string)
0x40e: Stack[-1] = "Neutral"
0x40f: Call 0x3b4

0x410: Pop(1)
0x411: Push((int) 11692)
0x412: @@ SetMessage(Stack[-1])
0x413: Pop(1)
0x414: @@ ClearReplies()
0x415: Pop(0)
0x416: Push((int) 11693)
0x417: Push((int) 12901)
0x418: Push((int) 12895)
0x419: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41a: Pop(3)
0x41b: Push((int) 11694)
0x41c: Push((int) 12898)
0x41d: Push((int) 12896)
0x41e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41f: Pop(3)
0x420: Push((int) 11695)
0x421: Push((int) 12898)
0x422: Push((int) 12897)
0x423: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x424: Pop(3)
0x425: Return(); Pop(0)

0x426: Push((int) 12898)
0x427: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x428: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x429: PushEmpty(string)
0x42a: Stack[-1] = "Neutral"
0x42b: Call 0x3b4

0x42c: Pop(1)
0x42d: Push((int) 11696)
0x42e: @@ SetMessage(Stack[-1])
0x42f: Pop(1)
0x430: @@ ClearReplies()
0x431: Pop(0)
0x432: Push((int) 11697)
0x433: Push((int) 12901)
0x434: Push((int) 12900)
0x435: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x436: Pop(3)
0x437: Return(); Pop(0)

0x438: Push((int) 12901)
0x439: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x43a: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x43b: PushEmpty(string)
0x43c: Stack[-1] = "Neutral"
0x43d: Call 0x3b4

0x43e: Pop(1)
0x43f: Push((int) 11698)
0x440: @@ SetMessage(Stack[-1])
0x441: Pop(1)
0x442: @@ ClearReplies()
0x443: Pop(0)
0x444: Push((int) 11699)
0x445: Push((int) 12904)
0x446: Push((int) 12902)
0x447: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x448: Pop(3)
0x449: Return(); Pop(0)

0x44a: Push((int) 12904)
0x44b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44c: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x44d: PushEmpty(string)
0x44e: Stack[-1] = "Neutral"
0x44f: Call 0x3b4

0x450: Pop(1)
0x451: Push((int) 11700)
0x452: @@ SetMessage(Stack[-1])
0x453: Pop(1)
0x454: @@ ClearReplies()
0x455: Pop(0)
0x456: Push((int) 11701)
0x457: Push((int) -1)
0x458: Push((int) 12905)
0x459: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45a: Pop(3)
0x45b: Push((int) 11702)
0x45c: Push((int) -1)
0x45d: Push((int) 12906)
0x45e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45f: Pop(3)
0x460: Return(); Pop(0)

0x461: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x462: PushEmpty(bool)
0x463: Call 0x672

0x464: Pop(0)
0x465: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x466: @ lshStopAnimation()
0x467: Pop(0)
0x468: GOTO 0x46b

0x469: @ StopAnimation()
0x46a: Pop(0)
0x46b: Return(); Pop(0)

0x46c: GOTO 0x3c5

0x46d: Return(); Pop(0)

0x46e: PushEmpty()
0x46f: PushEmpty(int, object)
0x470: Stack[-1] = Stack[-3]
0x471: Push(-2, 1); TaskCall(3)
0x472: Call 0x32c

0x473: Pop(-2, 1); TaskReturn
0x474: Pop(2)
0x475: Return(); Pop(0)

0x476: @ Hold()
0x477: Pop(0)
0x478: GOTO 0x476

0x479: Return(); Pop(0)

0x47a: PushEmpty()
0x47b: PushEmpty(bool)
0x47c: Call 0x484

0x47d: Pop(0)
0x47e: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x47f: PushEmpty(object)
0x480: Stack[-1] = Stack[-2]
0x481: Call 0x46e

0x482: Pop(1)
0x483: Return(); Pop(0)

0x484: Stack[-1] = (bool) 1
0x485: Return(); Pop(0)

0x486: PushEmpty(bool, bool)
0x487: @ IsPlayerActor(Stack[-3], Stack[-1])
0x488: Pop(0)
0x489: Push(Stack[-1])
0x48a: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48b: PushEmpty(bool, string, string)
0x48c: Stack[-2] = "quest_d5_01"
0x48d: Stack[-1] = "factory_fight"
0x48e: Call 0x5fa

0x48f: Pop(3)
0x490: Return(); Pop(2)

0x491: PushEmpty()
0x492: Push("attack")
0x493: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x494: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x495: PushEmpty()
0x496: Push(-0, 5); TaskCall(0)
0x497: Call 0x0

0x498: Pop(-0, 5); TaskReturn
0x499: Pop(0)
0x49a: Return(); Pop(0)

0x49b: PushEmpty()
0x49c: Push((int) 1)
0x49d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x49e: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x49f: Stack[-2] = "fire"
0x4a0: Return(); Pop(0)

0x4a1: Stack[-2] = "phys"
0x4a2: Return(); Pop(0)

0x4a3: PushEmpty(bool, bool)
0x4a4: Push("HasProperty")
0x4a5: Push((int) 2)
0x4a6: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x4a7: Pop(1); Push((bool) Stack[-1] == 0)
0x4a8: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a9: Stack[-5] = (bool) 0
0x4aa: Return(); Pop(2)

0x4ab: @@ HasProperty(Stack[-3], Stack[-1])
0x4ac: Pop(0)
0x4ad: Stack[-5] = Stack[-1]
0x4ae: Return(); Pop(2)

0x4af: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x4b0: PushEmpty(bool, object, string)
0x4b1: Stack[-2] = Stack[-18]
0x4b2: Stack[-1] = "health"
0x4b3: Call 0x4a3

0x4b4: Pop(2)
0x4b5: Pop(1); Push((bool) Stack[-1] == 0)
0x4b6: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b7: Stack[-16] = (float) 0.0
0x4b8: Return(); Pop(12)

0x4b9: PushEmpty(bool, object, string)
0x4ba: Stack[-2] = Stack[-18]
0x4bb: Stack[-1] = "armor"
0x4bc: Call 0x4a3

0x4bd: Pop(2)
0x4be: Pop(1); Push((bool) Stack[-1] == 0)
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4c0: Stack[-6] = (int) 0
0x4c1: GOTO 0x4c5

0x4c2: Push("armor")
0x4c3: @@ GetProperty(Stack[-1], Stack[-7])
0x4c4: Pop(1)
0x4c5: Push("armor_")
0x4c6: PushEmpty(string, int)
0x4c7: Stack[-1] = Stack[-16]
0x4c8: Call 0x49b

0x4c9: Pop(1)
0x4ca: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4cb: PushEmpty(bool, object, string)
0x4cc: Stack[-2] = Stack[-18]
0x4cd: Stack[-1] = Stack[-8]
0x4ce: Call 0x4a3

0x4cf: Pop(2)
0x4d0: Pop(1); Push((bool) Stack[-1] == 0)
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d2: Stack[-4] = (int) 0
0x4d3: GOTO 0x4d6

0x4d4: @@ GetProperty(Stack[-5], Stack[-4])
0x4d5: Pop(0)
0x4d6: PushEmpty(float, float, float)
0x4d7: Pop(0); Push(Stack[-9] + Stack[-7]);
0x4d8: Push((float)100.0)
0x4d9: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x4da: Stack[-1] = (int) 1
0x4db: Call 0x5e3

0x4dc: Stack[-6] = Stack[-3]
0x4dd: Pop(3)
0x4de: Push("health")
0x4df: @@ GetProperty(Stack[-1], Stack[-3])
0x4e0: Pop(1)
0x4e1: Push((int) 1)
0x4e2: Pop(1); Push(Stack[-1] - Stack[-4]);
0x4e3: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x4e4: Push("health")
0x4e5: PushEmpty(float, float, float, float)
0x4e6: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x4e7: Stack[-2] = (int) 0
0x4e8: Stack[-1] = (int) 1
0x4e9: Call 0x5ea

0x4ea: Pop(3)
0x4eb: @@ SetProperty(Stack[-2], Stack[-1])
0x4ec: Pop(2)
0x4ed: Stack[-16] = Stack[-1]
0x4ee: Return(); Pop(12)

0x4ef: PushEmpty(bool, bool)
0x4f0: @@ IsDead(Stack[-1])
0x4f1: Pop(0)
0x4f2: Stack[-4] = Stack[-1]
0x4f3: Return(); Pop(2)

0x4f4: PushEmpty(object, object, object, object)
0x4f5: Pop(0); Push((bool) Stack[-5] == 0)
0x4f6: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f7: Stack[-6] = (bool) 0
0x4f8: Return(); Pop(4)

0x4f9: PushEmpty(bool)
0x4fa: Stack[-1] = (bool) 0
0x4fb: Push("IsDead")
0x4fc: Push((int) 1)
0x4fd: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x4fe: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x4ff: PushEmpty(bool, object)
0x500: Stack[-1] = Stack[-8]
0x501: Call 0x4ef

0x502: Pop(1)
0x503: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x504: Stack[-1] = (bool) 1
0x505: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x506: Stack[-6] = (bool) 0
0x507: Return(); Pop(4)

0x508: @ GetScene(Stack[-2])
0x509: Pop(0)
0x50a: Pop(0); Push((bool) Stack[-2] == 0)
0x50b: IF (Stack[-1] == 0) GOTO 0x50e; Pop(1)

0x50c: Stack[-6] = (bool) 0
0x50d: Return(); Pop(4)

0x50e: @@ GetScene(Stack[-1])
0x50f: Pop(0)
0x510: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x511: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x512: Stack[-6] = (bool) 0
0x513: Return(); Pop(4)

0x514: Stack[-6] = (bool) 1
0x515: Return(); Pop(4)

0x516: Stack[-1] = 0
0x517: Stack[-2] = 0
0x518: PushEmpty(int, int)
0x519: PushEmpty(bool, object)
0x51a: Stack[-1] = Stack[-5]
0x51b: Call 0x4f4

0x51c: Pop(1)
0x51d: Pop(1); Push((bool) Stack[-1] == 0)
0x51e: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x51f: Stack[-4] = (bool) 0
0x520: Return(); Pop(2)

0x521: PushEmpty(bool, object, string)
0x522: Stack[-2] = Stack[-6]
0x523: Stack[-1] = "noaccess"
0x524: Call 0x4a3

0x525: Pop(2)
0x526: Pop(1); Push((bool) Stack[-1] == 0)
0x527: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x528: Stack[-4] = (bool) 1
0x529: Return(); Pop(2)

0x52a: Push("noaccess")
0x52b: @@ GetProperty(Stack[-1], Stack[-2])
0x52c: Pop(1)
0x52d: Push((int) 0)
0x52e: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x52f: Return(); Pop(2)

0x530: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x531: PushEmpty(bool)
0x532: Stack[-1] = (bool) 0
0x533: Push((int) 4)
0x534: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x535: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x536: Push((int) 5)
0x537: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x538: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x539: Stack[-1] = (bool) 1
0x53a: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x53b: @ GetScene(Stack[-10])
0x53c: Pop(0)
0x53d: @ GetPosition(Stack[-8])
0x53e: Pop(0)
0x53f: @ GetEyesHeight(Stack[-7])
0x540: Pop(0)
0x541: Push(CvectorIndex(Stack[-8], 1))
0x542: Push((int) 2)
0x543: Pop(1); Push(Stack[-9] / Stack[-1]);
0x544: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x545: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x546: Push("scripted")
0x547: Push(CVector(0.0, 0.0, 1.0))
0x548: Push("blood.xml")
0x549: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x54a: Pop(3)
0x54b: Stack[-9] = 0
0x54c: Stack[-10] = 0
0x54d: Pop(0); Push((bool) Stack[-23] == 0)
0x54e: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54f: Return(); Pop(20)

0x550: @ GetSecondaryAnimationType(Stack[-6])
0x551: Pop(0)
0x552: Push((int) 0)
0x553: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x554: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x555: Return(); Pop(20)

0x556: @@ GetPosition(Stack[-5])
0x557: Pop(0)
0x558: @ GetPosition(Stack[-4])
0x559: Pop(0)
0x55a: @ GetDirection(Stack[-3])
0x55b: Pop(0)
0x55c: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x55d: Push(CvectorIndex(Stack[-2], 0))
0x55e: Push(CvectorIndex(Stack[-4], 0))
0x55f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x560: Push(CvectorIndex(Stack[-3], 2))
0x561: Push(CvectorIndex(Stack[-5], 2))
0x562: Pop(2); Push(Stack[-2] * Stack[-1]);
0x563: Pop(2); Push(Stack[-2] + Stack[-1]);
0x564: Push((int) 0)
0x565: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x566: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x567: Stack[-1] = "fhit"
0x568: GOTO 0x56a

0x569: Stack[-1] = "bhit"
0x56a: Push("hit_react")
0x56b: Push("1")
0x56c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x56d: Push("2")
0x56e: Pop(1); Push(Stack[-4] + Stack[-1]);
0x56f: Push((int) -10)
0x570: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x571: Pop(4)
0x572: Return(); Pop(20)

0x573: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x574: @@ GetPosition(Stack[-3])
0x575: Pop(0)
0x576: @ GetPosition(Stack[-2])
0x577: Pop(0)
0x578: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x579: Push(CvectorIndex(Stack[-1], 0))
0x57a: Push(CvectorIndex(Stack[-2], 2))
0x57b: @ RotateAsync(Stack[-2], Stack[-1])
0x57c: Pop(2)
0x57d: Return(); Pop(6)

0x57e: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x57f: @@ GetPosition(Stack[-7])
0x580: Pop(0)
0x581: @@ GetEyesHeight(Stack[-8])
0x582: Pop(0)
0x583: Push(CvectorIndex(Stack[-7], 1))
0x584: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x585: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x586: @ GetPosition(Stack[-6])
0x587: Pop(0)
0x588: @ GetEyesHeight(Stack[-8])
0x589: Pop(0)
0x58a: Push(CvectorIndex(Stack[-6], 1))
0x58b: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x58c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x58d: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x58e: Push(CvectorIndex(Stack[-5], 1))
0x58f: Stack[-1] = (int) 0
0x590: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x591: Pop(0); Push(Stack[-5] | Stack[-5]);
0x592: Pop(1); Push(Sqrt(Stack[-1]))
0x593: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x594: Stack[-4] = -Stack[-5]; Pop(0);
0x595: Push((int) 70)
0x596: Pop(1); Push(Stack[-6] * Stack[-1]);
0x597: PushEmpty(cvector, cvector)
0x598: Push(CVector(0.0, 1.0, 0.0))
0x599: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x59a: Call 0x5d9

0x59b: Pop(1)
0x59c: Push((int) 25)
0x59d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x59e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x59f: Push(CVector(0.0, 10.0, 0.0))
0x5a0: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x5a1: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x5a2: @ IsOverrideActive(Stack[-1])
0x5a3: Pop(0)
0x5a4: Push(Stack[-1])
0x5a5: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x5a6: Stack[-18] = (bool) 0
0x5a7: Return(); Pop(16)

0x5a8: @ StopWorld()
0x5a9: Pop(0)
0x5aa: @ CameraTransit(Stack[-2], Stack[-4])
0x5ab: Pop(0)
0x5ac: Push(CvectorIndex(Stack[-3], 0))
0x5ad: Push(CvectorIndex(Stack[-4], 2))
0x5ae: @ Rotate(Stack[-2], Stack[-1])
0x5af: Pop(2)
0x5b0: @ CameraWaitForPlayFinish()
0x5b1: Pop(0)
0x5b2: @ ResumeWorld()
0x5b3: Pop(0)
0x5b4: Stack[-18] = (bool) 1
0x5b5: Return(); Pop(16)

0x5b6: PushEmpty()
0x5b7: @ CameraSwitchToNormal()
0x5b8: Pop(0)
0x5b9: Return(); Pop(0)

0x5ba: PushEmpty(float, float, float, float)
0x5bb: Push("playing ")
0x5bc: Pop(1); Push(Stack[-1] + Stack[-6]);
0x5bd: @ Trace(Stack[-1])
0x5be: Pop(1)
0x5bf: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x5c0: Pop(0)
0x5c1: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x5c2: Pop(0)
0x5c3: Push("start: ")
0x5c4: Pop(1); Push(Stack[-1] + Stack[-3]);
0x5c5: @ Trace(Stack[-1])
0x5c6: Pop(1)
0x5c7: Push("end: ")
0x5c8: Pop(1); Push(Stack[-1] + Stack[-2]);
0x5c9: @ Trace(Stack[-1])
0x5ca: Pop(1)
0x5cb: Return(); Pop(4)

0x5cc: PushEmpty(bool)
0x5cd: Call 0x672

0x5ce: Pop(0)
0x5cf: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5d0: @ lshStopSpeech()
0x5d1: Pop(0)
0x5d2: Return(); Pop(0)

0x5d3: PushEmpty(object, object)
0x5d4: @ self(Stack[-1])
0x5d5: Pop(0)
0x5d6: Stack[-3] = Stack[-1]
0x5d7: Return(); Pop(2)

0x5d8: Stack[-1] = 0
0x5d9: PushEmpty(float, float)
0x5da: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5db: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5dc: Push((float)0.0)
0x5dd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5de: IF (Stack[-1] == 0) GOTO 0x5e1; Pop(1)

0x5df: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5e0: Return(); Pop(2)

0x5e1: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5e2: Return(); Pop(2)

0x5e3: PushEmpty()
0x5e4: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x5e5: IF (Stack[-1] == 0) GOTO 0x5e8; Pop(1)

0x5e6: Stack[-3] = Stack[-2]
0x5e7: GOTO 0x5e9

0x5e8: Stack[-3] = Stack[-1]
0x5e9: Return(); Pop(0)

0x5ea: PushEmpty()
0x5eb: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5ec: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5ed: Stack[-4] = Stack[-2]
0x5ee: Return(); Pop(0)

0x5ef: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5f0: IF (Stack[-1] == 0) GOTO 0x5f3; Pop(1)

0x5f1: Stack[-4] = Stack[-1]
0x5f2: Return(); Pop(0)

0x5f3: Stack[-4] = Stack[-3]
0x5f4: Return(); Pop(0)

0x5f5: PushEmpty(int, int)
0x5f6: @ GetVariable(Stack[-3], Stack[-1])
0x5f7: Pop(0)
0x5f8: Stack[-4] = Stack[-1]
0x5f9: Return(); Pop(2)

0x5fa: PushEmpty(object, object)
0x5fb: @ FindActor(Stack[-1], Stack[-4])
0x5fc: Pop(0)
0x5fd: Pop(0); Push((bool) Stack[-1] == 0)
0x5fe: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x5ff: Stack[-5] = (bool) 0
0x600: Return(); Pop(2)

0x601: @ Trigger(Stack[-1], Stack[-3])
0x602: Pop(0)
0x603: Stack[-5] = (bool) 1
0x604: Return(); Pop(2)

0x605: Stack[-1] = 0
0x606: PushEmpty(float, float)
0x607: @ GetGameTime(Stack[-1])
0x608: Pop(0)
0x609: Stack[-3] = Stack[-1]
0x60a: Return(); Pop(2)

0x60b: PushEmpty()
0x60c: PushEmpty(object, int, float)
0x60d: Stack[-3] = Stack[-7]
0x60e: Stack[-2] = Stack[-6]
0x60f: Stack[-1] = Stack[-5]
0x610: Call 0x530

0x611: Pop(3)
0x612: Return(); Pop(0)

0x613: PushEmpty(float, float)
0x614: Push("health")
0x615: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x616: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x617: Push("health")
0x618: @ GetProperty(Stack[-1], Stack[-2])
0x619: Pop(1)
0x61a: Push((int) 0)
0x61b: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x61c: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x61d: @ SignalDeath(Stack[-4])
0x61e: Pop(0)
0x61f: Return(); Pop(2)

0x620: PushEmpty()
0x621: PushEmpty(object)
0x622: Stack[-1] = Stack[-2]
0x623: Call 0x674

0x624: Pop(1)
0x625: Return(); Pop(0)

0x626: PushEmpty()
0x627: Push("ood5PatrolGuard1")
0x628: Push((int) 1)
0x629: @ SetVariable(Stack[-2], Stack[-1])
0x62a: Pop(2)
0x62b: Return(); Pop(0)

0x62c: PushEmpty(object, object)
0x62d: Push("d5q01")
0x62e: Push((int) 6)
0x62f: @ SetVariable(Stack[-2], Stack[-1])
0x630: Pop(2)
0x631: PushEmpty(object)
0x632: Call 0x64c

0x633: Stack[-2] = Stack[-1]
0x634: Pop(1)
0x635: Push("d5q01PatrolGotoGrif")
0x636: Push("pt_map_grif")
0x637: Push((int) 1)
0x638: Push((int) 15349)
0x639: PushEmpty(float)
0x63a: Call 0x606

0x63b: Pop(0)
0x63c: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x63d: Pop(5)
0x63e: Return(); Pop(2)

0x63f: Stack[-1] = 0
0x640: PushEmpty()
0x641: PushEmpty(int, string)
0x642: Stack[-1] = "ood5PatrolGuard1"
0x643: Call 0x5f5

0x644: Pop(1)
0x645: Push((int) 0)
0x646: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x647: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x648: Stack[-2] = (bool) 1
0x649: Return(); Pop(0)

0x64a: Stack[-2] = (bool) 0
0x64b: Return(); Pop(0)

0x64c: PushEmpty(object, object, object, object)
0x64d: @ GetMainOutdoorScene(Stack[-2])
0x64e: Pop(0)
0x64f: Pop(0); Push((bool) Stack[-2] == 0)
0x650: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x651: Push("Can't find main outdoor scene")
0x652: @ Trace(Stack[-1])
0x653: Pop(1)
0x654: Stack[-1] = 0
0x655: Stack[-5] = Stack[-1]
0x656: Return(); Pop(4)

0x657: @@ GetMap(Stack[-1])
0x658: Pop(0)
0x659: Stack[-5] = Stack[-1]
0x65a: Return(); Pop(4)

0x65b: Stack[-1] = 0
0x65c: Stack[-2] = 0
0x65d: PushEmpty(int, int)
0x65e: Push("player")
0x65f: @ GetVariable(Stack[-1], Stack[-2])
0x660: Pop(1)
0x661: Push((int) 0)
0x662: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x663: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x664: Stack[-3] = (int) 200001
0x665: Return(); Pop(2)

0x666: GOTO 0x66c

0x667: Push((int) 1)
0x668: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x669: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x66a: Stack[-3] = (int) 200002
0x66b: Return(); Pop(2)

0x66c: Stack[-3] = (int) 200003
0x66d: Return(); Pop(2)

0x66e: Stack[-1] = (int) 4031
0x66f: Return(); Pop(0)

0x670: Stack[-1] = "ui/NPC_Black.png"
0x671: Return(); Pop(0)

0x672: Stack[-1] = (bool) 0
0x673: Return(); Pop(0)

0x674: PushEmpty(bool, bool)
0x675: Push("revolver_ammo")
0x676: Push((int) 0)
0x677: Push((int) 2)
0x678: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x679: Pop(3)
0x67a: Push("alpha_pills")
0x67b: Push((int) 0)
0x67c: Push((int) 2)
0x67d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x67e: Pop(3)
0x67f: PushEmpty(object)
0x680: Stack[-1] = Stack[-4]
0x681: Push(-1, 0); TaskCall(2)
0x682: Call 0x297

0x683: Pop(-1, 0); TaskReturn
0x684: Pop(1)
0x685: Return(); Pop(2)

