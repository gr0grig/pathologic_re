GlobalVarCount = 3
	G_VAR_0 bool 
	G_VAR_1 object 
	G_VAR_2 bool 

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
	kill_player
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
	quest_d2_02
	player_attack
	mpatrol_unload
	revolver_ammo
	alpha_pills
	completed
	ui/NPC_Black.png

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
	FollowPath (3 args)
	Rotate (3 args)
	WaitForAnimEnd (1 args)
	StopGroup0 (0 args)
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
	AddItem (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	GetVariable (2 args)

RunOp = 0x3e2
RunTask = 5

GlobalTasks: 
	GTASK_0 Vars = (object, int, int, bool, int) Params = 0
	GTASK_1 Vars = (bool, object) Params = 6
		EVENT_7 Op = 0x266 Vars = (int)
		EVENT_10 Op = 0x278 Vars = (object)
		EVENT_41 Op = 0x283 Vars = (object)
	GTASK_2  Params = 1
		EVENT_0 Op = 0x2a4 Vars = (object)
		EVENT_22 Op = 0x319 Vars = (object, int, float, float)
		EVENT_16 Op = 0x31b Vars = (object, string)
		EVENT_41 Op = 0x31d Vars = (object)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3a8 Vars = (int, int)
	GTASK_5 Vars = (cvector, cvector) Params = 0
		EVENT_0 Op = 0x3ff Vars = (object)
		EVENT_26 Op = 0x40c Vars = (string)

Events:
EVENT_17 Op = 0x5cd Vars = (object)
EVENT_6 Op = 0x5de Vars = ()
EVENT_22 Op = 0x5f6 Vars = (object, int, float, float)
EVENT_16 Op = 0x5fe Vars = (object, string)
EVENT_41 Op = 0x60b Vars = (object)

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
0x4d: Call 0x4e6

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
0x77: Call 0x541

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
0xb2: Call 0x4e6

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
0xfa: Call 0x47d

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
0x11f: Call 0x4e6

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
0x13c: Call 0x4e6

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
0x17f: Call 0x4e6

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
0x19c: Call 0x4e6

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
0x289: Call 0x60b

0x28a: Pop(1)
0x28b: Return(); Pop(0)

0x28c: PushEmpty()
0x28d: PushEmpty(bool, object)
0x28e: Stack[-1] = Stack[-3]
0x28f: Call 0x4e6

0x290: Stack[-4] = Stack[-2]
0x291: Pop(2)
0x292: Return(); Pop(0)

0x293: Stack[-1] = "walk"
0x294: Return(); Pop(0)

0x295: Stack[-1] = "run"
0x296: Return(); Pop(0)

0x297: PushEmpty()
0x298: PushEmpty(object)
0x299: Stack[-1] = Stack[-2]
0x29a: Call 0x2ac

0x29b: Pop(1)
0x29c: Push((int) 50)
0x29d: Push((int) 40)
0x29e: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x29f: Pop(2)
0x2a0: @ Hold()
0x2a1: Pop(0)
0x2a2: GOTO 0x2a0

0x2a3: Return(); Pop(0)

0x2a4: PushEmpty(bool, bool)
0x2a5: @ IsOverrideActive(Stack[-1])
0x2a6: Pop(0)
0x2a7: Pop(0); Push((bool) Stack[-1] == 0)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a9: @ WorkWithCorpse(Stack[-3])
0x2aa: Pop(0)
0x2ab: Return(); Pop(2)

0x2ac: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x2ad: Pop(0); Push((bool) Stack[-21] == 0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2af: PushEmpty(string)
0x2b0: Stack[-1] = "fdie"
0x2b1: Call 0x303

0x2b2: Pop(1)
0x2b3: GOTO 0x302

0x2b4: @@ GetPosition(Stack[-10])
0x2b5: Pop(0)
0x2b6: @ GetPosition(Stack[-9])
0x2b7: Pop(0)
0x2b8: @ GetDirection(Stack[-8])
0x2b9: Pop(0)
0x2ba: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x2bb: Push(CvectorIndex(Stack[-7], 0))
0x2bc: Push(CvectorIndex(Stack[-9], 0))
0x2bd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2be: Push(CvectorIndex(Stack[-8], 2))
0x2bf: Push(CvectorIndex(Stack[-10], 2))
0x2c0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2c1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2c2: Push((int) 0)
0x2c3: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c5: Stack[-6] = "fdie"
0x2c6: GOTO 0x2c8

0x2c7: Stack[-6] = "bdie"
0x2c8: @ RemoveRTEnvelope()
0x2c9: Pop(0)
0x2ca: @ SetDeathState()
0x2cb: Pop(0)
0x2cc: @ Stop()
0x2cd: Pop(0)
0x2ce: @ StopAsync()
0x2cf: Pop(0)
0x2d0: Stack[-5] = Stack[-21]
0x2d1: Push("GetScriptProperty")
0x2d2: Push((int) 2)
0x2d3: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x2d4: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2d5: Push("Owner")
0x2d6: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x2d7: Pop(1)
0x2d8: Push(Stack[-4])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2da: Push("Owner")
0x2db: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x2dc: Pop(1)
0x2dd: Pop(0); Push((bool) Stack[-5] == 0)
0x2de: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2df: Stack[-5] = Stack[-21]
0x2e0: Push("@GetEyesHeight")
0x2e1: Push((int) 1)
0x2e2: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x2e3: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2e4: @@ GetEyesHeight(Stack[-2])
0x2e5: Pop(0)
0x2e6: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2e7: Push(CvectorIndex(Stack[-1], 1))
0x2e8: Stack[-1] = Stack[-3]
0x2e9: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2ea: Push("head")
0x2eb: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x2ec: Pop(1)
0x2ed: Stack[-3] = (bool) 1
0x2ee: GOTO 0x2f0

0x2ef: Stack[-3] = (bool) 0
0x2f0: Push("all")
0x2f1: @ PlayAnimation(Stack[-1], Stack[-7])
0x2f2: Pop(1)
0x2f3: @ WaitForAnimEnd()
0x2f4: Pop(0)
0x2f5: Push(Stack[-3])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2f7: @ StopAsync()
0x2f8: Pop(0)
0x2f9: Push("head")
0x2fa: @ UnlookAsync(Stack[-1])
0x2fb: Pop(1)
0x2fc: Push("all")
0x2fd: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x2fe: Pop(1)
0x2ff: @ RemoveEnvelope()
0x300: Pop(0)
0x301: Stack[-5] = 0
0x302: Return(); Pop(20)

0x303: PushEmpty()
0x304: @ RemoveRTEnvelope()
0x305: Pop(0)
0x306: @ SetDeathState()
0x307: Pop(0)
0x308: @ Stop()
0x309: Pop(0)
0x30a: @ StopAsync()
0x30b: Pop(0)
0x30c: @ StopSecondaryAnimation()
0x30d: Pop(0)
0x30e: Push("all")
0x30f: @ PlayAnimation(Stack[-1], Stack[-2])
0x310: Pop(1)
0x311: @ WaitForAnimEnd()
0x312: Pop(0)
0x313: Push("all")
0x314: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x315: Pop(1)
0x316: @ RemoveEnvelope()
0x317: Pop(0)
0x318: Return(); Pop(0)

0x319: PushEmpty()
0x31a: Return(); Pop(0)

0x31b: PushEmpty()
0x31c: Return(); Pop(0)

0x31d: PushEmpty()
0x31e: Return(); Pop(0)

0x31f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x320: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x321: PushEmpty(bool, object)
0x322: Stack[-1] = Stack[-11]
0x323: Call 0x54c

0x324: Pop(1)
0x325: Pop(1); Push((bool) Stack[-1] == 0)
0x326: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x327: Stack[-10] = (int) -2
0x328: Return(); Pop(8)

0x329: @ CreateDialog(Stack[-4])
0x32a: Pop(0)
0x32b: PushEmpty(int)
0x32c: Call 0x630

0x32d: Pop(0)
0x32e: @@ SetNPCName(Stack[-1])
0x32f: Pop(1)
0x330: PushEmpty(string)
0x331: Call 0x632

0x332: Pop(0)
0x333: @@ SetPhoto(Stack[-1])
0x334: Pop(1)
0x335: PushEmpty(int)
0x336: Call 0x61f

0x337: Pop(0)
0x338: @@ SetPlayerName(Stack[-1])
0x339: Pop(1)
0x33a: Stack[-2] = (int) -1
0x33b: @ IsOverrideActive(Stack[-3])
0x33c: Pop(0)
0x33d: Push(Stack[-3])
0x33e: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x33f: Stack[-10] = (int) -2
0x340: Return(); Pop(8)

0x341: @ DoDialog(Stack[-4])
0x342: Pop(0)
0x343: PushEmpty(object, object)
0x344: Stack[-2] = Stack[-11]
0x345: Stack[-1] = Stack[-6]
0x346: Push(-2, 4); TaskCall(4)
0x347: Call 0x35e

0x348: Pop(-2, 4); TaskReturn
0x349: Pop(2)
0x34a: @@ IsDialogEnd(Stack[-1])
0x34b: Pop(0)
0x34c: Pop(0); Push((bool) Stack[-1] == 0)
0x34d: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x34e: @ sync()
0x34f: Pop(0)
0x350: @@ IsDialogEnd(Stack[-1])
0x351: Pop(0)
0x352: GOTO 0x34c

0x353: PushEmpty(object)
0x354: Stack[-1] = Stack[-10]
0x355: Call 0x584

0x356: Pop(1)
0x357: @ StopDialog(Stack[-4])
0x358: Pop(0)
0x359: @@ GetReturnValue(Stack[-2])
0x35a: Pop(0)
0x35b: Stack[-10] = Stack[-2]
0x35c: Return(); Pop(8)

0x35d: Stack[-4] = 0
0x35e: PushEmpty()
0x35f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x360: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x361: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x362: Push((int) 1)
0x363: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x364: PushEmpty(string)
0x365: Stack[-1] = "Neutral"
0x366: Call 0x398

0x367: Pop(1)
0x368: Push((int) 7522)
0x369: @@ SetMessage(Stack[-1])
0x36a: Pop(1)
0x36b: @@ ClearReplies()
0x36c: Pop(0)
0x36d: Push((int) 7523)
0x36e: Push((int) -1)
0x36f: Push((int) 8305)
0x370: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x371: Pop(3)
0x372: Push((int) 7524)
0x373: Push((int) -1)
0x374: Push((int) 8306)
0x375: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x376: Pop(3)
0x377: GOTO 0x37a

0x378: Return(); Pop(0)

0x379: GOTO 0x362

0x37a: PushEmpty(bool)
0x37b: Call 0x634

0x37c: Pop(0)
0x37d: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x37e: @ lshWaitForAnimEnd()
0x37f: Pop(0)
0x380: Push( Stack[3 + Tasks[-1].StackPointer] )
0x381: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x382: GOTO 0x388

0x383: PushEmpty(string)
0x384: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x385: Call 0x588

0x386: Pop(1)
0x387: GOTO 0x37e

0x388: GOTO 0x397

0x389: Push("all")
0x38a: Push("idle")
0x38b: @ PlayAnimation(Stack[-2], Stack[-1])
0x38c: Pop(2)
0x38d: @ WaitForAnimEnd()
0x38e: Pop(0)
0x38f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x390: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x391: GOTO 0x397

0x392: Push("all")
0x393: Push("idle")
0x394: @ PlayAnimation(Stack[-2], Stack[-1])
0x395: Pop(2)
0x396: GOTO 0x38d

0x397: Return(); Pop(0)

0x398: PushEmpty()
0x399: PushEmpty(bool)
0x39a: Call 0x634

0x39b: Pop(0)
0x39c: Pop(1); Push((bool) Stack[-1] == 0)
0x39d: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39e: Return(); Pop(0)

0x39f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x3a1: Return(); Pop(0)

0x3a2: PushEmpty(string)
0x3a3: Stack[-1] = Stack[-2]
0x3a4: Call 0x588

0x3a5: Pop(1)
0x3a6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3a7: Return(); Pop(0)

0x3a8: PushEmpty()
0x3a9: Push((int) 1)
0x3aa: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3ab: PushEmpty()
0x3ac: Call 0x59a

0x3ad: Pop(0)
0x3ae: Push((int) 8305)
0x3af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b1: PushEmpty(object, object)
0x3b2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3b4: Call 0x611

0x3b5: Pop(2)
0x3b6: Push((int) 8306)
0x3b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b8: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3b9: PushEmpty(object, object)
0x3ba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3bc: Call 0x618

0x3bd: Pop(2)
0x3be: Push((int) 8304)
0x3bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3c1: PushEmpty(string)
0x3c2: Stack[-1] = "Neutral"
0x3c3: Call 0x398

0x3c4: Pop(1)
0x3c5: Push((int) 7522)
0x3c6: @@ SetMessage(Stack[-1])
0x3c7: Pop(1)
0x3c8: @@ ClearReplies()
0x3c9: Pop(0)
0x3ca: Push((int) 7523)
0x3cb: Push((int) -1)
0x3cc: Push((int) 8305)
0x3cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ce: Pop(3)
0x3cf: Push((int) 7524)
0x3d0: Push((int) -1)
0x3d1: Push((int) 8306)
0x3d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d3: Pop(3)
0x3d4: Return(); Pop(0)

0x3d5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3d6: PushEmpty(bool)
0x3d7: Call 0x634

0x3d8: Pop(0)
0x3d9: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3da: @ lshStopAnimation()
0x3db: Pop(0)
0x3dc: GOTO 0x3df

0x3dd: @ StopAnimation()
0x3de: Pop(0)
0x3df: Return(); Pop(0)

0x3e0: GOTO 0x3a9

0x3e1: Return(); Pop(0)

0x3e2: Push(GlobalVars[2])
0x3e3: Stack[-1] = (bool) 0
0x3e4: GlobalVars[2] = Stack[-1]; Pop(1)
0x3e5: PushEmpty()
0x3e6: Call 0x3f7

0x3e7: Pop(0)
0x3e8: Return(); Pop(0)

0x3e9: PushEmpty()
0x3ea: PushEmpty(int, object)
0x3eb: Stack[-1] = Stack[-3]
0x3ec: Push(-2, 1); TaskCall(3)
0x3ed: Call 0x31f

0x3ee: Pop(-2, 1); TaskReturn
0x3ef: Pop(2)
0x3f0: Push(GlobalVars[2])
0x3f1: Stack[-1] = (bool) 1
0x3f2: GlobalVars[2] = Stack[-1]; Pop(1)
0x3f3: Return(); Pop(0)

0x3f4: Push(GlobalVars[2])
0x3f5: Stack[-2] = !Stack[-1]; Pop(1);
0x3f6: Return(); Pop(0)

0x3f7: Push(GlobalVars[0])
0x3f8: Stack[-1] = (bool) 0
0x3f9: GlobalVars[0] = Stack[-1]; Pop(1)
0x3fa: PushEmpty()
0x3fb: Call 0x416

0x3fc: Pop(0)
0x3fd: Return(); Pop(0)

0x3fe: Return(); Pop(0)

0x3ff: PushEmpty()
0x400: PushEmpty(bool)
0x401: Call 0x3f4

0x402: Pop(0)
0x403: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x404: PushEmpty()
0x405: Call 0x464

0x406: Pop(0)
0x407: PushEmpty(object)
0x408: Stack[-1] = Stack[-2]
0x409: Call 0x3e9

0x40a: Pop(1)
0x40b: Return(); Pop(0)

0x40c: PushEmpty()
0x40d: Push("kill_player")
0x40e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x40f: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x410: PushEmpty()
0x411: Push(-0, 5); TaskCall(0)
0x412: Call 0x0

0x413: Pop(-0, 5); TaskReturn
0x414: Pop(0)
0x415: Return(); Pop(0)

0x416: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x417: @ GetPFPosition(Stack[-1])
0x418: Pop(0)
0x419: @ GetDirection(Stack[-0])
0x41a: Pop(0)
0x41b: Push((int) 60)
0x41c: @ irand(Stack[-5], Stack[-1])
0x41d: Pop(1)
0x41e: Push((int) 30)
0x41f: Pop(1); Push(Stack[-5] + Stack[-1]);
0x420: @ Sleep(Stack[-1], Stack[-4])
0x421: Pop(1)
0x422: Push(Stack[-3])
0x423: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x424: PushEmpty()
0x425: Call 0x3fe

0x426: Pop(0)
0x427: GOTO 0x462

0x428: @ GetPFPosition(Stack[-2])
0x429: Pop(0)
0x42a: PushEmpty(float, cvector, cvector)
0x42b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x42c: Stack[-1] = Stack[-5]
0x42d: Call 0x5ab

0x42e: Pop(2)
0x42f: Push((int) 40000)
0x430: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x431: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x432: @ FindPathTo(Stack[-1], Stack[-1])
0x433: Pop(0)
0x434: Pop(0); Push(( Stack[-1] != 0 )
0x435: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x436: @ RotatePath(Stack[-1], Stack[-3])
0x437: Pop(0)
0x438: Pop(0); Push((bool) Stack[-3] == 0)
0x439: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x43a: GOTO 0x461

0x43b: Push((bool) 0)
0x43c: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x43d: Pop(1)
0x43e: Pop(0); Push((bool) Stack[-3] == 0)
0x43f: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x440: GOTO 0x461

0x441: Push(CvectorIndex(Stack[-0], 0))
0x442: Push(CvectorIndex(Stack[-0], 2))
0x443: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x444: Pop(2)
0x445: Pop(0); Push((bool) Stack[-3] == 0)
0x446: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x447: GOTO 0x461

0x448: @ WaitForAnimEnd(Stack[-3])
0x449: Pop(0)
0x44a: Pop(0); Push((bool) Stack[-3] == 0)
0x44b: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x44c: GOTO 0x461

0x44d: GOTO 0x462

0x44e: GOTO 0x452

0x44f: Push((int) 1)
0x450: @ Sleep(Stack[-1])
0x451: Pop(1)
0x452: Stack[-1] = 0
0x453: GOTO 0x461

0x454: Push(CvectorIndex(Stack[-0], 0))
0x455: Push(CvectorIndex(Stack[-0], 2))
0x456: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x457: Pop(2)
0x458: Pop(0); Push((bool) Stack[-3] == 0)
0x459: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x45a: GOTO 0x461

0x45b: @ WaitForAnimEnd(Stack[-3])
0x45c: Pop(0)
0x45d: Pop(0); Push((bool) Stack[-3] == 0)
0x45e: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x45f: GOTO 0x461

0x460: GOTO 0x462

0x461: GOTO 0x428

0x462: GOTO 0x41b

0x463: Return(); Pop(8)

0x464: @ StopGroup0()
0x465: Pop(0)
0x466: @ Stop()
0x467: Pop(0)
0x468: Return(); Pop(0)

0x469: PushEmpty()
0x46a: Push((int) 1)
0x46b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46c: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46d: Stack[-2] = "fire"
0x46e: Return(); Pop(0)

0x46f: Stack[-2] = "phys"
0x470: Return(); Pop(0)

0x471: PushEmpty(bool, bool)
0x472: Push("HasProperty")
0x473: Push((int) 2)
0x474: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x475: Pop(1); Push((bool) Stack[-1] == 0)
0x476: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x477: Stack[-5] = (bool) 0
0x478: Return(); Pop(2)

0x479: @@ HasProperty(Stack[-3], Stack[-1])
0x47a: Pop(0)
0x47b: Stack[-5] = Stack[-1]
0x47c: Return(); Pop(2)

0x47d: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x47e: PushEmpty(bool, object, string)
0x47f: Stack[-2] = Stack[-18]
0x480: Stack[-1] = "health"
0x481: Call 0x471

0x482: Pop(2)
0x483: Pop(1); Push((bool) Stack[-1] == 0)
0x484: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x485: Stack[-16] = (float) 0.0
0x486: Return(); Pop(12)

0x487: PushEmpty(bool, object, string)
0x488: Stack[-2] = Stack[-18]
0x489: Stack[-1] = "armor"
0x48a: Call 0x471

0x48b: Pop(2)
0x48c: Pop(1); Push((bool) Stack[-1] == 0)
0x48d: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48e: Stack[-6] = (int) 0
0x48f: GOTO 0x493

0x490: Push("armor")
0x491: @@ GetProperty(Stack[-1], Stack[-7])
0x492: Pop(1)
0x493: Push("armor_")
0x494: PushEmpty(string, int)
0x495: Stack[-1] = Stack[-16]
0x496: Call 0x469

0x497: Pop(1)
0x498: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x499: PushEmpty(bool, object, string)
0x49a: Stack[-2] = Stack[-18]
0x49b: Stack[-1] = Stack[-8]
0x49c: Call 0x471

0x49d: Pop(2)
0x49e: Pop(1); Push((bool) Stack[-1] == 0)
0x49f: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x4a0: Stack[-4] = (int) 0
0x4a1: GOTO 0x4a4

0x4a2: @@ GetProperty(Stack[-5], Stack[-4])
0x4a3: Pop(0)
0x4a4: PushEmpty(float, float, float)
0x4a5: Pop(0); Push(Stack[-9] + Stack[-7]);
0x4a6: Push((float)100.0)
0x4a7: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x4a8: Stack[-1] = (int) 1
0x4a9: Call 0x5af

0x4aa: Stack[-6] = Stack[-3]
0x4ab: Pop(3)
0x4ac: Push("health")
0x4ad: @@ GetProperty(Stack[-1], Stack[-3])
0x4ae: Pop(1)
0x4af: Push((int) 1)
0x4b0: Pop(1); Push(Stack[-1] - Stack[-4]);
0x4b1: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x4b2: Push("health")
0x4b3: PushEmpty(float, float, float, float)
0x4b4: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x4b5: Stack[-2] = (int) 0
0x4b6: Stack[-1] = (int) 1
0x4b7: Call 0x5b6

0x4b8: Pop(3)
0x4b9: @@ SetProperty(Stack[-2], Stack[-1])
0x4ba: Pop(2)
0x4bb: Stack[-16] = Stack[-1]
0x4bc: Return(); Pop(12)

0x4bd: PushEmpty(bool, bool)
0x4be: @@ IsDead(Stack[-1])
0x4bf: Pop(0)
0x4c0: Stack[-4] = Stack[-1]
0x4c1: Return(); Pop(2)

0x4c2: PushEmpty(object, object, object, object)
0x4c3: Pop(0); Push((bool) Stack[-5] == 0)
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c5: Stack[-6] = (bool) 0
0x4c6: Return(); Pop(4)

0x4c7: PushEmpty(bool)
0x4c8: Stack[-1] = (bool) 0
0x4c9: Push("IsDead")
0x4ca: Push((int) 1)
0x4cb: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x4cc: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4cd: PushEmpty(bool, object)
0x4ce: Stack[-1] = Stack[-8]
0x4cf: Call 0x4bd

0x4d0: Pop(1)
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4d2: Stack[-1] = (bool) 1
0x4d3: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d4: Stack[-6] = (bool) 0
0x4d5: Return(); Pop(4)

0x4d6: @ GetScene(Stack[-2])
0x4d7: Pop(0)
0x4d8: Pop(0); Push((bool) Stack[-2] == 0)
0x4d9: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4da: Stack[-6] = (bool) 0
0x4db: Return(); Pop(4)

0x4dc: @@ GetScene(Stack[-1])
0x4dd: Pop(0)
0x4de: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x4df: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4e0: Stack[-6] = (bool) 0
0x4e1: Return(); Pop(4)

0x4e2: Stack[-6] = (bool) 1
0x4e3: Return(); Pop(4)

0x4e4: Stack[-1] = 0
0x4e5: Stack[-2] = 0
0x4e6: PushEmpty(int, int)
0x4e7: PushEmpty(bool, object)
0x4e8: Stack[-1] = Stack[-5]
0x4e9: Call 0x4c2

0x4ea: Pop(1)
0x4eb: Pop(1); Push((bool) Stack[-1] == 0)
0x4ec: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4ed: Stack[-4] = (bool) 0
0x4ee: Return(); Pop(2)

0x4ef: PushEmpty(bool, object, string)
0x4f0: Stack[-2] = Stack[-6]
0x4f1: Stack[-1] = "noaccess"
0x4f2: Call 0x471

0x4f3: Pop(2)
0x4f4: Pop(1); Push((bool) Stack[-1] == 0)
0x4f5: IF (Stack[-1] == 0) GOTO 0x4f8; Pop(1)

0x4f6: Stack[-4] = (bool) 1
0x4f7: Return(); Pop(2)

0x4f8: Push("noaccess")
0x4f9: @@ GetProperty(Stack[-1], Stack[-2])
0x4fa: Pop(1)
0x4fb: Push((int) 0)
0x4fc: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x4fd: Return(); Pop(2)

0x4fe: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x4ff: PushEmpty(bool)
0x500: Stack[-1] = (bool) 0
0x501: Push((int) 4)
0x502: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x503: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x504: Push((int) 5)
0x505: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x506: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x507: Stack[-1] = (bool) 1
0x508: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x509: @ GetScene(Stack[-10])
0x50a: Pop(0)
0x50b: @ GetPosition(Stack[-8])
0x50c: Pop(0)
0x50d: @ GetEyesHeight(Stack[-7])
0x50e: Pop(0)
0x50f: Push(CvectorIndex(Stack[-8], 1))
0x510: Push((int) 2)
0x511: Pop(1); Push(Stack[-9] / Stack[-1]);
0x512: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x513: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x514: Push("scripted")
0x515: Push(CVector(0.0, 0.0, 1.0))
0x516: Push("blood.xml")
0x517: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x518: Pop(3)
0x519: Stack[-9] = 0
0x51a: Stack[-10] = 0
0x51b: Pop(0); Push((bool) Stack[-23] == 0)
0x51c: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x51d: Return(); Pop(20)

0x51e: @ GetSecondaryAnimationType(Stack[-6])
0x51f: Pop(0)
0x520: Push((int) 0)
0x521: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x522: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x523: Return(); Pop(20)

0x524: @@ GetPosition(Stack[-5])
0x525: Pop(0)
0x526: @ GetPosition(Stack[-4])
0x527: Pop(0)
0x528: @ GetDirection(Stack[-3])
0x529: Pop(0)
0x52a: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x52b: Push(CvectorIndex(Stack[-2], 0))
0x52c: Push(CvectorIndex(Stack[-4], 0))
0x52d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x52e: Push(CvectorIndex(Stack[-3], 2))
0x52f: Push(CvectorIndex(Stack[-5], 2))
0x530: Pop(2); Push(Stack[-2] * Stack[-1]);
0x531: Pop(2); Push(Stack[-2] + Stack[-1]);
0x532: Push((int) 0)
0x533: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x534: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x535: Stack[-1] = "fhit"
0x536: GOTO 0x538

0x537: Stack[-1] = "bhit"
0x538: Push("hit_react")
0x539: Push("1")
0x53a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x53b: Push("2")
0x53c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x53d: Push((int) -10)
0x53e: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x53f: Pop(4)
0x540: Return(); Pop(20)

0x541: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x542: @@ GetPosition(Stack[-3])
0x543: Pop(0)
0x544: @ GetPosition(Stack[-2])
0x545: Pop(0)
0x546: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x547: Push(CvectorIndex(Stack[-1], 0))
0x548: Push(CvectorIndex(Stack[-2], 2))
0x549: @ RotateAsync(Stack[-2], Stack[-1])
0x54a: Pop(2)
0x54b: Return(); Pop(6)

0x54c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x54d: @@ GetPosition(Stack[-7])
0x54e: Pop(0)
0x54f: @@ GetEyesHeight(Stack[-8])
0x550: Pop(0)
0x551: Push(CvectorIndex(Stack[-7], 1))
0x552: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x553: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x554: @ GetPosition(Stack[-6])
0x555: Pop(0)
0x556: @ GetEyesHeight(Stack[-8])
0x557: Pop(0)
0x558: Push(CvectorIndex(Stack[-6], 1))
0x559: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x55a: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x55b: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x55c: Push(CvectorIndex(Stack[-5], 1))
0x55d: Stack[-1] = (int) 0
0x55e: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x55f: Pop(0); Push(Stack[-5] | Stack[-5]);
0x560: Pop(1); Push(Sqrt(Stack[-1]))
0x561: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x562: Stack[-4] = -Stack[-5]; Pop(0);
0x563: Push((int) 70)
0x564: Pop(1); Push(Stack[-6] * Stack[-1]);
0x565: PushEmpty(cvector, cvector)
0x566: Push(CVector(0.0, 1.0, 0.0))
0x567: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x568: Call 0x5a1

0x569: Pop(1)
0x56a: Push((int) 25)
0x56b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x56c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x56d: Push(CVector(0.0, 10.0, 0.0))
0x56e: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x56f: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x570: @ IsOverrideActive(Stack[-1])
0x571: Pop(0)
0x572: Push(Stack[-1])
0x573: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x574: Stack[-18] = (bool) 0
0x575: Return(); Pop(16)

0x576: @ StopWorld()
0x577: Pop(0)
0x578: @ CameraTransit(Stack[-2], Stack[-4])
0x579: Pop(0)
0x57a: Push(CvectorIndex(Stack[-3], 0))
0x57b: Push(CvectorIndex(Stack[-4], 2))
0x57c: @ Rotate(Stack[-2], Stack[-1])
0x57d: Pop(2)
0x57e: @ CameraWaitForPlayFinish()
0x57f: Pop(0)
0x580: @ ResumeWorld()
0x581: Pop(0)
0x582: Stack[-18] = (bool) 1
0x583: Return(); Pop(16)

0x584: PushEmpty()
0x585: @ CameraSwitchToNormal()
0x586: Pop(0)
0x587: Return(); Pop(0)

0x588: PushEmpty(float, float, float, float)
0x589: Push("playing ")
0x58a: Pop(1); Push(Stack[-1] + Stack[-6]);
0x58b: @ Trace(Stack[-1])
0x58c: Pop(1)
0x58d: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x58e: Pop(0)
0x58f: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x590: Pop(0)
0x591: Push("start: ")
0x592: Pop(1); Push(Stack[-1] + Stack[-3]);
0x593: @ Trace(Stack[-1])
0x594: Pop(1)
0x595: Push("end: ")
0x596: Pop(1); Push(Stack[-1] + Stack[-2]);
0x597: @ Trace(Stack[-1])
0x598: Pop(1)
0x599: Return(); Pop(4)

0x59a: PushEmpty(bool)
0x59b: Call 0x634

0x59c: Pop(0)
0x59d: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59e: @ lshStopSpeech()
0x59f: Pop(0)
0x5a0: Return(); Pop(0)

0x5a1: PushEmpty(float, float)
0x5a2: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5a3: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5a4: Push((float)0.0)
0x5a5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5a6: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a7: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5a8: Return(); Pop(2)

0x5a9: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5aa: Return(); Pop(2)

0x5ab: PushEmpty(cvector, cvector)
0x5ac: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x5ad: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x5ae: Return(); Pop(2)

0x5af: PushEmpty()
0x5b0: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x5b1: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5b2: Stack[-3] = Stack[-2]
0x5b3: GOTO 0x5b5

0x5b4: Stack[-3] = Stack[-1]
0x5b5: Return(); Pop(0)

0x5b6: PushEmpty()
0x5b7: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5b8: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5b9: Stack[-4] = Stack[-2]
0x5ba: Return(); Pop(0)

0x5bb: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5bc: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5bd: Stack[-4] = Stack[-1]
0x5be: Return(); Pop(0)

0x5bf: Stack[-4] = Stack[-3]
0x5c0: Return(); Pop(0)

0x5c1: PushEmpty(object, object)
0x5c2: @ FindActor(Stack[-1], Stack[-4])
0x5c3: Pop(0)
0x5c4: Pop(0); Push((bool) Stack[-1] == 0)
0x5c5: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5c6: Stack[-5] = (bool) 0
0x5c7: Return(); Pop(2)

0x5c8: @ Trigger(Stack[-1], Stack[-3])
0x5c9: Pop(0)
0x5ca: Stack[-5] = (bool) 1
0x5cb: Return(); Pop(2)

0x5cc: Stack[-1] = 0
0x5cd: PushEmpty(bool, bool)
0x5ce: Push(GlobalVars[0])
0x5cf: IF (Stack[-1] == 0) GOTO 0x5d1; Pop(1)

0x5d0: Return(); Pop(2)

0x5d1: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5d2: Pop(0)
0x5d3: Push(Stack[-1])
0x5d4: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5d5: Push(GlobalVars[0])
0x5d6: Stack[-1] = (bool) 1
0x5d7: GlobalVars[0] = Stack[-1]; Pop(1)
0x5d8: PushEmpty(bool, string, string)
0x5d9: Stack[-2] = "quest_d2_02"
0x5da: Stack[-1] = "player_attack"
0x5db: Call 0x5c1

0x5dc: Pop(3)
0x5dd: Return(); Pop(2)

0x5de: PushEmpty(bool, string, string)
0x5df: Stack[-2] = "quest_d2_02"
0x5e0: Stack[-1] = "mpatrol_unload"
0x5e1: Call 0x5c1

0x5e2: Pop(3)
0x5e3: Return(); Pop(0)

0x5e4: PushEmpty(bool, bool)
0x5e5: Push("revolver_ammo")
0x5e6: Push((int) 0)
0x5e7: Push((int) 2)
0x5e8: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5e9: Pop(3)
0x5ea: Push("alpha_pills")
0x5eb: Push((int) 0)
0x5ec: Push((int) 2)
0x5ed: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5ee: Pop(3)
0x5ef: PushEmpty(object)
0x5f0: Stack[-1] = Stack[-4]
0x5f1: Push(-1, 0); TaskCall(2)
0x5f2: Call 0x297

0x5f3: Pop(-1, 0); TaskReturn
0x5f4: Pop(1)
0x5f5: Return(); Pop(2)

0x5f6: PushEmpty()
0x5f7: PushEmpty(object, int, float)
0x5f8: Stack[-3] = Stack[-7]
0x5f9: Stack[-2] = Stack[-6]
0x5fa: Stack[-1] = Stack[-5]
0x5fb: Call 0x4fe

0x5fc: Pop(3)
0x5fd: Return(); Pop(0)

0x5fe: PushEmpty(float, float)
0x5ff: Push("health")
0x600: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x601: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x602: Push("health")
0x603: @ GetProperty(Stack[-1], Stack[-2])
0x604: Pop(1)
0x605: Push((int) 0)
0x606: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x607: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x608: @ SignalDeath(Stack[-4])
0x609: Pop(0)
0x60a: Return(); Pop(2)

0x60b: PushEmpty()
0x60c: PushEmpty(object)
0x60d: Stack[-1] = Stack[-2]
0x60e: Call 0x5e4

0x60f: Pop(1)
0x610: Return(); Pop(0)

0x611: PushEmpty()
0x612: PushEmpty(bool, string, string)
0x613: Stack[-2] = "quest_d2_02"
0x614: Stack[-1] = "player_attack"
0x615: Call 0x5c1

0x616: Pop(3)
0x617: Return(); Pop(0)

0x618: PushEmpty()
0x619: PushEmpty(bool, string, string)
0x61a: Stack[-2] = "quest_d2_02"
0x61b: Stack[-1] = "completed"
0x61c: Call 0x5c1

0x61d: Pop(3)
0x61e: Return(); Pop(0)

0x61f: PushEmpty(int, int)
0x620: Push("player")
0x621: @ GetVariable(Stack[-1], Stack[-2])
0x622: Pop(1)
0x623: Push((int) 0)
0x624: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x625: IF (Stack[-1] == 0) GOTO 0x629; Pop(1)

0x626: Stack[-3] = (int) 200001
0x627: Return(); Pop(2)

0x628: GOTO 0x62e

0x629: Push((int) 1)
0x62a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x62b: IF (Stack[-1] == 0) GOTO 0x62e; Pop(1)

0x62c: Stack[-3] = (int) 200002
0x62d: Return(); Pop(2)

0x62e: Stack[-3] = (int) 200003
0x62f: Return(); Pop(2)

0x630: Stack[-1] = (int) 4031
0x631: Return(); Pop(0)

0x632: Stack[-1] = "ui/NPC_Black.png"
0x633: Return(); Pop(0)

0x634: Stack[-1] = (bool) 0
0x635: Return(); Pop(0)

