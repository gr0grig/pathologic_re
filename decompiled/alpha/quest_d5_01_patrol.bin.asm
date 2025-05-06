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
	Trigger (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	GetVariable (2 args)
	AddItem (4 args)

RunOp = 0x3dd
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
		EVENT_11 Op = 0x3b0 Vars = (int, int)
	GTASK_5  Params = 0
		EVENT_0 Op = 0x3e1 Vars = (object)
		EVENT_17 Op = 0x3ed Vars = (object)
		EVENT_26 Op = 0x3f8 Vars = (string)

Events:
EVENT_22 Op = 0x568 Vars = (object, int, float, float)
EVENT_16 Op = 0x570 Vars = (object, string)
EVENT_41 Op = 0x57d Vars = (object)

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
0x4d: Call 0x47f

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
0x77: Call 0x4da

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
0xb2: Call 0x47f

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
0xfa: Call 0x416

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
0x11f: Call 0x47f

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
0x13c: Call 0x47f

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
0x17f: Call 0x47f

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
0x19c: Call 0x47f

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
0x289: Call 0x57d

0x28a: Pop(1)
0x28b: Return(); Pop(0)

0x28c: PushEmpty()
0x28d: PushEmpty(bool, object)
0x28e: Stack[-1] = Stack[-3]
0x28f: Call 0x47f

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
0x29b: Call 0x55c

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
0x2b2: Call 0x53a

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
0x330: Call 0x4e5

0x331: Pop(1)
0x332: Pop(1); Push((bool) Stack[-1] == 0)
0x333: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x334: Stack[-10] = (int) -2
0x335: Return(); Pop(8)

0x336: @ CreateDialog(Stack[-4])
0x337: Pop(0)
0x338: PushEmpty(int)
0x339: Call 0x594

0x33a: Pop(0)
0x33b: @@ SetNPCName(Stack[-1])
0x33c: Pop(1)
0x33d: PushEmpty(string)
0x33e: Call 0x596

0x33f: Pop(0)
0x340: @@ SetPhoto(Stack[-1])
0x341: Pop(1)
0x342: PushEmpty(int)
0x343: Call 0x583

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
0x362: Call 0x51d

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
0x370: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x371: PushEmpty(string)
0x372: Stack[-1] = "Neutral"
0x373: Call 0x3a0

0x374: Pop(1)
0x375: Push((int) 12541)
0x376: @@ SetMessage(Stack[-1])
0x377: Pop(1)
0x378: @@ ClearReplies()
0x379: Pop(0)
0x37a: Push((int) 12542)
0x37b: Push((int) -1)
0x37c: Push((int) 13711)
0x37d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37e: Pop(3)
0x37f: GOTO 0x382

0x380: Return(); Pop(0)

0x381: GOTO 0x36f

0x382: PushEmpty(bool)
0x383: Call 0x598

0x384: Pop(0)
0x385: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x386: @ lshWaitForAnimEnd()
0x387: Pop(0)
0x388: Push( Stack[3 + Tasks[-1].StackPointer] )
0x389: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x38a: GOTO 0x390

0x38b: PushEmpty(string)
0x38c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x38d: Call 0x521

0x38e: Pop(1)
0x38f: GOTO 0x386

0x390: GOTO 0x39f

0x391: Push("all")
0x392: Push("idle")
0x393: @ PlayAnimation(Stack[-2], Stack[-1])
0x394: Pop(2)
0x395: @ WaitForAnimEnd()
0x396: Pop(0)
0x397: Push( Stack[3 + Tasks[-1].StackPointer] )
0x398: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x399: GOTO 0x39f

0x39a: Push("all")
0x39b: Push("idle")
0x39c: @ PlayAnimation(Stack[-2], Stack[-1])
0x39d: Pop(2)
0x39e: GOTO 0x395

0x39f: Return(); Pop(0)

0x3a0: PushEmpty()
0x3a1: PushEmpty(bool)
0x3a2: Call 0x598

0x3a3: Pop(0)
0x3a4: Pop(1); Push((bool) Stack[-1] == 0)
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a6: Return(); Pop(0)

0x3a7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3a8: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a9: Return(); Pop(0)

0x3aa: PushEmpty(string)
0x3ab: Stack[-1] = Stack[-2]
0x3ac: Call 0x521

0x3ad: Pop(1)
0x3ae: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3af: Return(); Pop(0)

0x3b0: PushEmpty()
0x3b1: Push((int) 1)
0x3b2: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3b3: PushEmpty()
0x3b4: Call 0x533

0x3b5: Pop(0)
0x3b6: Push((int) 13710)
0x3b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b8: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3b9: PushEmpty(string)
0x3ba: Stack[-1] = "Neutral"
0x3bb: Call 0x3a0

0x3bc: Pop(1)
0x3bd: Push((int) 12541)
0x3be: @@ SetMessage(Stack[-1])
0x3bf: Pop(1)
0x3c0: @@ ClearReplies()
0x3c1: Pop(0)
0x3c2: Push((int) 12542)
0x3c3: Push((int) -1)
0x3c4: Push((int) 13711)
0x3c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c6: Pop(3)
0x3c7: Return(); Pop(0)

0x3c8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3c9: PushEmpty(bool)
0x3ca: Call 0x598

0x3cb: Pop(0)
0x3cc: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3cd: @ lshStopAnimation()
0x3ce: Pop(0)
0x3cf: GOTO 0x3d2

0x3d0: @ StopAnimation()
0x3d1: Pop(0)
0x3d2: Return(); Pop(0)

0x3d3: GOTO 0x3b1

0x3d4: Return(); Pop(0)

0x3d5: PushEmpty()
0x3d6: PushEmpty(int, object)
0x3d7: Stack[-1] = Stack[-3]
0x3d8: Push(-2, 1); TaskCall(3)
0x3d9: Call 0x32c

0x3da: Pop(-2, 1); TaskReturn
0x3db: Pop(2)
0x3dc: Return(); Pop(0)

0x3dd: @ Hold()
0x3de: Pop(0)
0x3df: GOTO 0x3dd

0x3e0: Return(); Pop(0)

0x3e1: PushEmpty()
0x3e2: PushEmpty(bool)
0x3e3: Call 0x3eb

0x3e4: Pop(0)
0x3e5: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e6: PushEmpty(object)
0x3e7: Stack[-1] = Stack[-2]
0x3e8: Call 0x3d5

0x3e9: Pop(1)
0x3ea: Return(); Pop(0)

0x3eb: Stack[-1] = (bool) 1
0x3ec: Return(); Pop(0)

0x3ed: PushEmpty(bool, bool)
0x3ee: @ IsPlayerActor(Stack[-3], Stack[-1])
0x3ef: Pop(0)
0x3f0: Push(Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f2: PushEmpty(bool, string, string)
0x3f3: Stack[-2] = "quest_d5_01"
0x3f4: Stack[-1] = "factory_fight"
0x3f5: Call 0x55c

0x3f6: Pop(3)
0x3f7: Return(); Pop(2)

0x3f8: PushEmpty()
0x3f9: Push("attack")
0x3fa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3fb: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3fc: PushEmpty()
0x3fd: Push(-0, 5); TaskCall(0)
0x3fe: Call 0x0

0x3ff: Pop(-0, 5); TaskReturn
0x400: Pop(0)
0x401: Return(); Pop(0)

0x402: PushEmpty()
0x403: Push((int) 1)
0x404: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x405: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x406: Stack[-2] = "fire"
0x407: Return(); Pop(0)

0x408: Stack[-2] = "phys"
0x409: Return(); Pop(0)

0x40a: PushEmpty(bool, bool)
0x40b: Push("HasProperty")
0x40c: Push((int) 2)
0x40d: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x40e: Pop(1); Push((bool) Stack[-1] == 0)
0x40f: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x410: Stack[-5] = (bool) 0
0x411: Return(); Pop(2)

0x412: @@ HasProperty(Stack[-3], Stack[-1])
0x413: Pop(0)
0x414: Stack[-5] = Stack[-1]
0x415: Return(); Pop(2)

0x416: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x417: PushEmpty(bool, object, string)
0x418: Stack[-2] = Stack[-18]
0x419: Stack[-1] = "health"
0x41a: Call 0x40a

0x41b: Pop(2)
0x41c: Pop(1); Push((bool) Stack[-1] == 0)
0x41d: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41e: Stack[-16] = (float) 0.0
0x41f: Return(); Pop(12)

0x420: PushEmpty(bool, object, string)
0x421: Stack[-2] = Stack[-18]
0x422: Stack[-1] = "armor"
0x423: Call 0x40a

0x424: Pop(2)
0x425: Pop(1); Push((bool) Stack[-1] == 0)
0x426: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x427: Stack[-6] = (int) 0
0x428: GOTO 0x42c

0x429: Push("armor")
0x42a: @@ GetProperty(Stack[-1], Stack[-7])
0x42b: Pop(1)
0x42c: Push("armor_")
0x42d: PushEmpty(string, int)
0x42e: Stack[-1] = Stack[-16]
0x42f: Call 0x402

0x430: Pop(1)
0x431: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x432: PushEmpty(bool, object, string)
0x433: Stack[-2] = Stack[-18]
0x434: Stack[-1] = Stack[-8]
0x435: Call 0x40a

0x436: Pop(2)
0x437: Pop(1); Push((bool) Stack[-1] == 0)
0x438: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x439: Stack[-4] = (int) 0
0x43a: GOTO 0x43d

0x43b: @@ GetProperty(Stack[-5], Stack[-4])
0x43c: Pop(0)
0x43d: PushEmpty(float, float, float)
0x43e: Pop(0); Push(Stack[-9] + Stack[-7]);
0x43f: Push((float)100.0)
0x440: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x441: Stack[-1] = (int) 1
0x442: Call 0x54a

0x443: Stack[-6] = Stack[-3]
0x444: Pop(3)
0x445: Push("health")
0x446: @@ GetProperty(Stack[-1], Stack[-3])
0x447: Pop(1)
0x448: Push((int) 1)
0x449: Pop(1); Push(Stack[-1] - Stack[-4]);
0x44a: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x44b: Push("health")
0x44c: PushEmpty(float, float, float, float)
0x44d: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x44e: Stack[-2] = (int) 0
0x44f: Stack[-1] = (int) 1
0x450: Call 0x551

0x451: Pop(3)
0x452: @@ SetProperty(Stack[-2], Stack[-1])
0x453: Pop(2)
0x454: Stack[-16] = Stack[-1]
0x455: Return(); Pop(12)

0x456: PushEmpty(bool, bool)
0x457: @@ IsDead(Stack[-1])
0x458: Pop(0)
0x459: Stack[-4] = Stack[-1]
0x45a: Return(); Pop(2)

0x45b: PushEmpty(object, object, object, object)
0x45c: Pop(0); Push((bool) Stack[-5] == 0)
0x45d: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x45e: Stack[-6] = (bool) 0
0x45f: Return(); Pop(4)

0x460: PushEmpty(bool)
0x461: Stack[-1] = (bool) 0
0x462: Push("IsDead")
0x463: Push((int) 1)
0x464: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x465: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x466: PushEmpty(bool, object)
0x467: Stack[-1] = Stack[-8]
0x468: Call 0x456

0x469: Pop(1)
0x46a: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x46b: Stack[-1] = (bool) 1
0x46c: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46d: Stack[-6] = (bool) 0
0x46e: Return(); Pop(4)

0x46f: @ GetScene(Stack[-2])
0x470: Pop(0)
0x471: Pop(0); Push((bool) Stack[-2] == 0)
0x472: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x473: Stack[-6] = (bool) 0
0x474: Return(); Pop(4)

0x475: @@ GetScene(Stack[-1])
0x476: Pop(0)
0x477: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x478: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x479: Stack[-6] = (bool) 0
0x47a: Return(); Pop(4)

0x47b: Stack[-6] = (bool) 1
0x47c: Return(); Pop(4)

0x47d: Stack[-1] = 0
0x47e: Stack[-2] = 0
0x47f: PushEmpty(int, int)
0x480: PushEmpty(bool, object)
0x481: Stack[-1] = Stack[-5]
0x482: Call 0x45b

0x483: Pop(1)
0x484: Pop(1); Push((bool) Stack[-1] == 0)
0x485: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x486: Stack[-4] = (bool) 0
0x487: Return(); Pop(2)

0x488: PushEmpty(bool, object, string)
0x489: Stack[-2] = Stack[-6]
0x48a: Stack[-1] = "noaccess"
0x48b: Call 0x40a

0x48c: Pop(2)
0x48d: Pop(1); Push((bool) Stack[-1] == 0)
0x48e: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x48f: Stack[-4] = (bool) 1
0x490: Return(); Pop(2)

0x491: Push("noaccess")
0x492: @@ GetProperty(Stack[-1], Stack[-2])
0x493: Pop(1)
0x494: Push((int) 0)
0x495: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x496: Return(); Pop(2)

0x497: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x498: PushEmpty(bool)
0x499: Stack[-1] = (bool) 0
0x49a: Push((int) 4)
0x49b: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x49c: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x49d: Push((int) 5)
0x49e: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x49f: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x4a0: Stack[-1] = (bool) 1
0x4a1: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4a2: @ GetScene(Stack[-10])
0x4a3: Pop(0)
0x4a4: @ GetPosition(Stack[-8])
0x4a5: Pop(0)
0x4a6: @ GetEyesHeight(Stack[-7])
0x4a7: Pop(0)
0x4a8: Push(CvectorIndex(Stack[-8], 1))
0x4a9: Push((int) 2)
0x4aa: Pop(1); Push(Stack[-9] / Stack[-1]);
0x4ab: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x4ac: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x4ad: Push("scripted")
0x4ae: Push(CVector(0.0, 0.0, 1.0))
0x4af: Push("blood.xml")
0x4b0: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x4b1: Pop(3)
0x4b2: Stack[-9] = 0
0x4b3: Stack[-10] = 0
0x4b4: Pop(0); Push((bool) Stack[-23] == 0)
0x4b5: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b6: Return(); Pop(20)

0x4b7: @ GetSecondaryAnimationType(Stack[-6])
0x4b8: Pop(0)
0x4b9: Push((int) 0)
0x4ba: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x4bb: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4bc: Return(); Pop(20)

0x4bd: @@ GetPosition(Stack[-5])
0x4be: Pop(0)
0x4bf: @ GetPosition(Stack[-4])
0x4c0: Pop(0)
0x4c1: @ GetDirection(Stack[-3])
0x4c2: Pop(0)
0x4c3: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x4c4: Push(CvectorIndex(Stack[-2], 0))
0x4c5: Push(CvectorIndex(Stack[-4], 0))
0x4c6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4c7: Push(CvectorIndex(Stack[-3], 2))
0x4c8: Push(CvectorIndex(Stack[-5], 2))
0x4c9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4ca: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4cb: Push((int) 0)
0x4cc: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4cd: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4ce: Stack[-1] = "fhit"
0x4cf: GOTO 0x4d1

0x4d0: Stack[-1] = "bhit"
0x4d1: Push("hit_react")
0x4d2: Push("1")
0x4d3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4d4: Push("2")
0x4d5: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4d6: Push((int) -10)
0x4d7: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4d8: Pop(4)
0x4d9: Return(); Pop(20)

0x4da: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x4db: @@ GetPosition(Stack[-3])
0x4dc: Pop(0)
0x4dd: @ GetPosition(Stack[-2])
0x4de: Pop(0)
0x4df: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x4e0: Push(CvectorIndex(Stack[-1], 0))
0x4e1: Push(CvectorIndex(Stack[-2], 2))
0x4e2: @ RotateAsync(Stack[-2], Stack[-1])
0x4e3: Pop(2)
0x4e4: Return(); Pop(6)

0x4e5: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x4e6: @@ GetPosition(Stack[-7])
0x4e7: Pop(0)
0x4e8: @@ GetEyesHeight(Stack[-8])
0x4e9: Pop(0)
0x4ea: Push(CvectorIndex(Stack[-7], 1))
0x4eb: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x4ec: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x4ed: @ GetPosition(Stack[-6])
0x4ee: Pop(0)
0x4ef: @ GetEyesHeight(Stack[-8])
0x4f0: Pop(0)
0x4f1: Push(CvectorIndex(Stack[-6], 1))
0x4f2: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x4f3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x4f4: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x4f5: Push(CvectorIndex(Stack[-5], 1))
0x4f6: Stack[-1] = (int) 0
0x4f7: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x4f8: Pop(0); Push(Stack[-5] | Stack[-5]);
0x4f9: Pop(1); Push(Sqrt(Stack[-1]))
0x4fa: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x4fb: Stack[-4] = -Stack[-5]; Pop(0);
0x4fc: Push((int) 70)
0x4fd: Pop(1); Push(Stack[-6] * Stack[-1]);
0x4fe: PushEmpty(cvector, cvector)
0x4ff: Push(CVector(0.0, 1.0, 0.0))
0x500: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x501: Call 0x540

0x502: Pop(1)
0x503: Push((int) 25)
0x504: Pop(2); Push(Stack[-2] * Stack[-1]);
0x505: Pop(2); Push(Stack[-2] + Stack[-1]);
0x506: Push(CVector(0.0, 10.0, 0.0))
0x507: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x508: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x509: @ IsOverrideActive(Stack[-1])
0x50a: Pop(0)
0x50b: Push(Stack[-1])
0x50c: IF (Stack[-1] == 0) GOTO 0x50f; Pop(1)

0x50d: Stack[-18] = (bool) 0
0x50e: Return(); Pop(16)

0x50f: @ StopWorld()
0x510: Pop(0)
0x511: @ CameraTransit(Stack[-2], Stack[-4])
0x512: Pop(0)
0x513: Push(CvectorIndex(Stack[-3], 0))
0x514: Push(CvectorIndex(Stack[-4], 2))
0x515: @ Rotate(Stack[-2], Stack[-1])
0x516: Pop(2)
0x517: @ CameraWaitForPlayFinish()
0x518: Pop(0)
0x519: @ ResumeWorld()
0x51a: Pop(0)
0x51b: Stack[-18] = (bool) 1
0x51c: Return(); Pop(16)

0x51d: PushEmpty()
0x51e: @ CameraSwitchToNormal()
0x51f: Pop(0)
0x520: Return(); Pop(0)

0x521: PushEmpty(float, float, float, float)
0x522: Push("playing ")
0x523: Pop(1); Push(Stack[-1] + Stack[-6]);
0x524: @ Trace(Stack[-1])
0x525: Pop(1)
0x526: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x527: Pop(0)
0x528: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x529: Pop(0)
0x52a: Push("start: ")
0x52b: Pop(1); Push(Stack[-1] + Stack[-3]);
0x52c: @ Trace(Stack[-1])
0x52d: Pop(1)
0x52e: Push("end: ")
0x52f: Pop(1); Push(Stack[-1] + Stack[-2]);
0x530: @ Trace(Stack[-1])
0x531: Pop(1)
0x532: Return(); Pop(4)

0x533: PushEmpty(bool)
0x534: Call 0x598

0x535: Pop(0)
0x536: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x537: @ lshStopSpeech()
0x538: Pop(0)
0x539: Return(); Pop(0)

0x53a: PushEmpty(object, object)
0x53b: @ self(Stack[-1])
0x53c: Pop(0)
0x53d: Stack[-3] = Stack[-1]
0x53e: Return(); Pop(2)

0x53f: Stack[-1] = 0
0x540: PushEmpty(float, float)
0x541: Pop(0); Push(Stack[-3] | Stack[-3]);
0x542: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x543: Push((float)0.0)
0x544: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x545: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x546: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x547: Return(); Pop(2)

0x548: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x549: Return(); Pop(2)

0x54a: PushEmpty()
0x54b: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x54c: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x54d: Stack[-3] = Stack[-2]
0x54e: GOTO 0x550

0x54f: Stack[-3] = Stack[-1]
0x550: Return(); Pop(0)

0x551: PushEmpty()
0x552: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x553: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x554: Stack[-4] = Stack[-2]
0x555: Return(); Pop(0)

0x556: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x557: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x558: Stack[-4] = Stack[-1]
0x559: Return(); Pop(0)

0x55a: Stack[-4] = Stack[-3]
0x55b: Return(); Pop(0)

0x55c: PushEmpty(object, object)
0x55d: @ FindActor(Stack[-1], Stack[-4])
0x55e: Pop(0)
0x55f: Pop(0); Push((bool) Stack[-1] == 0)
0x560: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x561: Stack[-5] = (bool) 0
0x562: Return(); Pop(2)

0x563: @ Trigger(Stack[-1], Stack[-3])
0x564: Pop(0)
0x565: Stack[-5] = (bool) 1
0x566: Return(); Pop(2)

0x567: Stack[-1] = 0
0x568: PushEmpty()
0x569: PushEmpty(object, int, float)
0x56a: Stack[-3] = Stack[-7]
0x56b: Stack[-2] = Stack[-6]
0x56c: Stack[-1] = Stack[-5]
0x56d: Call 0x497

0x56e: Pop(3)
0x56f: Return(); Pop(0)

0x570: PushEmpty(float, float)
0x571: Push("health")
0x572: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x573: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x574: Push("health")
0x575: @ GetProperty(Stack[-1], Stack[-2])
0x576: Pop(1)
0x577: Push((int) 0)
0x578: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x579: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x57a: @ SignalDeath(Stack[-4])
0x57b: Pop(0)
0x57c: Return(); Pop(2)

0x57d: PushEmpty()
0x57e: PushEmpty(object)
0x57f: Stack[-1] = Stack[-2]
0x580: Call 0x59a

0x581: Pop(1)
0x582: Return(); Pop(0)

0x583: PushEmpty(int, int)
0x584: Push("player")
0x585: @ GetVariable(Stack[-1], Stack[-2])
0x586: Pop(1)
0x587: Push((int) 0)
0x588: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x589: IF (Stack[-1] == 0) GOTO 0x58d; Pop(1)

0x58a: Stack[-3] = (int) 200001
0x58b: Return(); Pop(2)

0x58c: GOTO 0x592

0x58d: Push((int) 1)
0x58e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x58f: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x590: Stack[-3] = (int) 200002
0x591: Return(); Pop(2)

0x592: Stack[-3] = (int) 200003
0x593: Return(); Pop(2)

0x594: Stack[-1] = (int) 4031
0x595: Return(); Pop(0)

0x596: Stack[-1] = "ui/NPC_Black.png"
0x597: Return(); Pop(0)

0x598: Stack[-1] = (bool) 0
0x599: Return(); Pop(0)

0x59a: PushEmpty(bool, bool)
0x59b: Push("revolver_ammo")
0x59c: Push((int) 0)
0x59d: Push((int) 2)
0x59e: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x59f: Pop(3)
0x5a0: Push("alpha_pills")
0x5a1: Push((int) 0)
0x5a2: Push((int) 2)
0x5a3: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5a4: Pop(3)
0x5a5: PushEmpty(object)
0x5a6: Stack[-1] = Stack[-4]
0x5a7: Push(-1, 0); TaskCall(2)
0x5a8: Call 0x297

0x5a9: Pop(-1, 0); TaskReturn
0x5aa: Pop(1)
0x5ab: Return(); Pop(2)

