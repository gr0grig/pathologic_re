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
	revolver_ammo
	alpha_pills
	quest_d3_01
	patrol_talk
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	Adding diary entry
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
	GetDiaryRoot (1 args)
	SetVariable (2 args)
	SetDiarySection (1 args)
	GetVariable (2 args)
	CreateDiaryEntry (4 args)

RunOp = 0x40e
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
		EVENT_11 Op = 0x3a3 Vars = (int, int)
	GTASK_5 Vars = (cvector, cvector, bool) Params = 0
		EVENT_0 Op = 0x41f Vars = (object)
		EVENT_17 Op = 0x42c Vars = (object)

Events:
EVENT_22 Op = 0x600 Vars = (object, int, float, float)
EVENT_16 Op = 0x608 Vars = (object, string)
EVENT_41 Op = 0x615 Vars = (object)

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
0x4d: Call 0x507

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
0x77: Call 0x562

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
0xb2: Call 0x507

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
0xfa: Call 0x49e

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
0x11f: Call 0x507

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
0x13c: Call 0x507

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
0x17f: Call 0x507

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
0x19c: Call 0x507

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
0x289: Call 0x615

0x28a: Pop(1)
0x28b: Return(); Pop(0)

0x28c: PushEmpty()
0x28d: PushEmpty(bool, object)
0x28e: Stack[-1] = Stack[-3]
0x28f: Call 0x507

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
0x323: Call 0x56d

0x324: Pop(1)
0x325: Pop(1); Push((bool) Stack[-1] == 0)
0x326: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x327: Stack[-10] = (int) -2
0x328: Return(); Pop(8)

0x329: @ CreateDialog(Stack[-4])
0x32a: Pop(0)
0x32b: PushEmpty(int)
0x32c: Call 0x670

0x32d: Pop(0)
0x32e: @@ SetNPCName(Stack[-1])
0x32f: Pop(1)
0x330: PushEmpty(string)
0x331: Call 0x672

0x332: Pop(0)
0x333: @@ SetPhoto(Stack[-1])
0x334: Pop(1)
0x335: PushEmpty(int)
0x336: Call 0x64f

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
0x355: Call 0x5a5

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
0x363: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x364: PushEmpty(string)
0x365: Stack[-1] = "Neutral"
0x366: Call 0x393

0x367: Pop(1)
0x368: Push((int) 9122)
0x369: @@ SetMessage(Stack[-1])
0x36a: Pop(1)
0x36b: @@ ClearReplies()
0x36c: Pop(0)
0x36d: Push((int) 9123)
0x36e: Push((int) 10004)
0x36f: Push((int) 10003)
0x370: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x371: Pop(3)
0x372: GOTO 0x375

0x373: Return(); Pop(0)

0x374: GOTO 0x362

0x375: PushEmpty(bool)
0x376: Call 0x674

0x377: Pop(0)
0x378: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x379: @ lshWaitForAnimEnd()
0x37a: Pop(0)
0x37b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x37c: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37d: GOTO 0x383

0x37e: PushEmpty(string)
0x37f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x380: Call 0x5a9

0x381: Pop(1)
0x382: GOTO 0x379

0x383: GOTO 0x392

0x384: Push("all")
0x385: Push("idle")
0x386: @ PlayAnimation(Stack[-2], Stack[-1])
0x387: Pop(2)
0x388: @ WaitForAnimEnd()
0x389: Pop(0)
0x38a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x38b: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x38c: GOTO 0x392

0x38d: Push("all")
0x38e: Push("idle")
0x38f: @ PlayAnimation(Stack[-2], Stack[-1])
0x390: Pop(2)
0x391: GOTO 0x388

0x392: Return(); Pop(0)

0x393: PushEmpty()
0x394: PushEmpty(bool)
0x395: Call 0x674

0x396: Pop(0)
0x397: Pop(1); Push((bool) Stack[-1] == 0)
0x398: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x399: Return(); Pop(0)

0x39a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x39b: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39c: Return(); Pop(0)

0x39d: PushEmpty(string)
0x39e: Stack[-1] = Stack[-2]
0x39f: Call 0x5a9

0x3a0: Pop(1)
0x3a1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3a2: Return(); Pop(0)

0x3a3: PushEmpty()
0x3a4: Push((int) 1)
0x3a5: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x3a6: PushEmpty()
0x3a7: Call 0x5bb

0x3a8: Pop(0)
0x3a9: Push((int) 10005)
0x3aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3ac: PushEmpty(object, object)
0x3ad: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3ae: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3af: Call 0x61b

0x3b0: Pop(2)
0x3b1: Push((int) 10006)
0x3b2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b3: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3b4: PushEmpty(object, object)
0x3b5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3b6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3b7: Call 0x61b

0x3b8: Pop(2)
0x3b9: Push((int) 10009)
0x3ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3bb: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3bc: PushEmpty(object, object)
0x3bd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3be: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3bf: Call 0x61b

0x3c0: Pop(2)
0x3c1: Push((int) 10002)
0x3c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c3: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3c4: PushEmpty(string)
0x3c5: Stack[-1] = "Neutral"
0x3c6: Call 0x393

0x3c7: Pop(1)
0x3c8: Push((int) 9122)
0x3c9: @@ SetMessage(Stack[-1])
0x3ca: Pop(1)
0x3cb: @@ ClearReplies()
0x3cc: Pop(0)
0x3cd: Push((int) 9123)
0x3ce: Push((int) 10004)
0x3cf: Push((int) 10003)
0x3d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d1: Pop(3)
0x3d2: Return(); Pop(0)

0x3d3: Push((int) 10004)
0x3d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3d6: PushEmpty(string)
0x3d7: Stack[-1] = "Neutral"
0x3d8: Call 0x393

0x3d9: Pop(1)
0x3da: Push((int) 9124)
0x3db: @@ SetMessage(Stack[-1])
0x3dc: Pop(1)
0x3dd: @@ ClearReplies()
0x3de: Pop(0)
0x3df: Push((int) 9125)
0x3e0: Push((int) -1)
0x3e1: Push((int) 10005)
0x3e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e3: Pop(3)
0x3e4: Push((int) 9126)
0x3e5: Push((int) -1)
0x3e6: Push((int) 10006)
0x3e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e8: Pop(3)
0x3e9: Push((int) 9127)
0x3ea: Push((int) 10008)
0x3eb: Push((int) 10007)
0x3ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ed: Pop(3)
0x3ee: Return(); Pop(0)

0x3ef: Push((int) 10008)
0x3f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3f2: PushEmpty(string)
0x3f3: Stack[-1] = "Neutral"
0x3f4: Call 0x393

0x3f5: Pop(1)
0x3f6: Push((int) 9128)
0x3f7: @@ SetMessage(Stack[-1])
0x3f8: Pop(1)
0x3f9: @@ ClearReplies()
0x3fa: Pop(0)
0x3fb: Push((int) 9129)
0x3fc: Push((int) -1)
0x3fd: Push((int) 10009)
0x3fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ff: Pop(3)
0x400: Return(); Pop(0)

0x401: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x402: PushEmpty(bool)
0x403: Call 0x674

0x404: Pop(0)
0x405: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x406: @ lshStopAnimation()
0x407: Pop(0)
0x408: GOTO 0x40b

0x409: @ StopAnimation()
0x40a: Pop(0)
0x40b: Return(); Pop(0)

0x40c: GOTO 0x3a4

0x40d: Return(); Pop(0)

0x40e: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x40f: PushEmpty()
0x410: Call 0x437

0x411: Pop(0)
0x412: Return(); Pop(0)

0x413: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x414: Return(); Pop(0)

0x415: PushEmpty()
0x416: PushEmpty(int, object)
0x417: Stack[-1] = Stack[-3]
0x418: Push(-2, 1); TaskCall(3)
0x419: Call 0x31f

0x41a: Pop(-2, 1); TaskReturn
0x41b: Pop(2)
0x41c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x41d: Return(); Pop(0)

0x41e: Return(); Pop(0)

0x41f: PushEmpty()
0x420: PushEmpty(bool)
0x421: Call 0x413

0x422: Pop(0)
0x423: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x424: PushEmpty()
0x425: Call 0x485

0x426: Pop(0)
0x427: PushEmpty(object)
0x428: Stack[-1] = Stack[-2]
0x429: Call 0x415

0x42a: Pop(1)
0x42b: Return(); Pop(0)

0x42c: PushEmpty(bool, bool)
0x42d: @ IsPlayerActor(Stack[-3], Stack[-1])
0x42e: Pop(0)
0x42f: Push(Stack[-1])
0x430: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x431: PushEmpty()
0x432: Push(-0, 5); TaskCall(0)
0x433: Call 0x0

0x434: Pop(-0, 5); TaskReturn
0x435: Pop(0)
0x436: Return(); Pop(2)

0x437: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x438: @ GetPFPosition(Stack[-1])
0x439: Pop(0)
0x43a: @ GetDirection(Stack[-0])
0x43b: Pop(0)
0x43c: Push((int) 60)
0x43d: @ irand(Stack[-5], Stack[-1])
0x43e: Pop(1)
0x43f: Push((int) 30)
0x440: Pop(1); Push(Stack[-5] + Stack[-1]);
0x441: @ Sleep(Stack[-1], Stack[-4])
0x442: Pop(1)
0x443: Push(Stack[-3])
0x444: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x445: PushEmpty()
0x446: Call 0x41e

0x447: Pop(0)
0x448: GOTO 0x483

0x449: @ GetPFPosition(Stack[-2])
0x44a: Pop(0)
0x44b: PushEmpty(float, cvector, cvector)
0x44c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x44d: Stack[-1] = Stack[-5]
0x44e: Call 0x5cc

0x44f: Pop(2)
0x450: Push((int) 40000)
0x451: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x452: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x453: @ FindPathTo(Stack[-1], Stack[-1])
0x454: Pop(0)
0x455: Pop(0); Push(( Stack[-1] != 0 )
0x456: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x457: @ RotatePath(Stack[-1], Stack[-3])
0x458: Pop(0)
0x459: Pop(0); Push((bool) Stack[-3] == 0)
0x45a: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x45b: GOTO 0x482

0x45c: Push((bool) 0)
0x45d: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x45e: Pop(1)
0x45f: Pop(0); Push((bool) Stack[-3] == 0)
0x460: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x461: GOTO 0x482

0x462: Push(CvectorIndex(Stack[-0], 0))
0x463: Push(CvectorIndex(Stack[-0], 2))
0x464: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x465: Pop(2)
0x466: Pop(0); Push((bool) Stack[-3] == 0)
0x467: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x468: GOTO 0x482

0x469: @ WaitForAnimEnd(Stack[-3])
0x46a: Pop(0)
0x46b: Pop(0); Push((bool) Stack[-3] == 0)
0x46c: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x46d: GOTO 0x482

0x46e: GOTO 0x483

0x46f: GOTO 0x473

0x470: Push((int) 1)
0x471: @ Sleep(Stack[-1])
0x472: Pop(1)
0x473: Stack[-1] = 0
0x474: GOTO 0x482

0x475: Push(CvectorIndex(Stack[-0], 0))
0x476: Push(CvectorIndex(Stack[-0], 2))
0x477: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x478: Pop(2)
0x479: Pop(0); Push((bool) Stack[-3] == 0)
0x47a: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47b: GOTO 0x482

0x47c: @ WaitForAnimEnd(Stack[-3])
0x47d: Pop(0)
0x47e: Pop(0); Push((bool) Stack[-3] == 0)
0x47f: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x480: GOTO 0x482

0x481: GOTO 0x483

0x482: GOTO 0x449

0x483: GOTO 0x43c

0x484: Return(); Pop(8)

0x485: @ StopGroup0()
0x486: Pop(0)
0x487: @ Stop()
0x488: Pop(0)
0x489: Return(); Pop(0)

0x48a: PushEmpty()
0x48b: Push((int) 1)
0x48c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x48d: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48e: Stack[-2] = "fire"
0x48f: Return(); Pop(0)

0x490: Stack[-2] = "phys"
0x491: Return(); Pop(0)

0x492: PushEmpty(bool, bool)
0x493: Push("HasProperty")
0x494: Push((int) 2)
0x495: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x496: Pop(1); Push((bool) Stack[-1] == 0)
0x497: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x498: Stack[-5] = (bool) 0
0x499: Return(); Pop(2)

0x49a: @@ HasProperty(Stack[-3], Stack[-1])
0x49b: Pop(0)
0x49c: Stack[-5] = Stack[-1]
0x49d: Return(); Pop(2)

0x49e: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x49f: PushEmpty(bool, object, string)
0x4a0: Stack[-2] = Stack[-18]
0x4a1: Stack[-1] = "health"
0x4a2: Call 0x492

0x4a3: Pop(2)
0x4a4: Pop(1); Push((bool) Stack[-1] == 0)
0x4a5: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a6: Stack[-16] = (float) 0.0
0x4a7: Return(); Pop(12)

0x4a8: PushEmpty(bool, object, string)
0x4a9: Stack[-2] = Stack[-18]
0x4aa: Stack[-1] = "armor"
0x4ab: Call 0x492

0x4ac: Pop(2)
0x4ad: Pop(1); Push((bool) Stack[-1] == 0)
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4af: Stack[-6] = (int) 0
0x4b0: GOTO 0x4b4

0x4b1: Push("armor")
0x4b2: @@ GetProperty(Stack[-1], Stack[-7])
0x4b3: Pop(1)
0x4b4: Push("armor_")
0x4b5: PushEmpty(string, int)
0x4b6: Stack[-1] = Stack[-16]
0x4b7: Call 0x48a

0x4b8: Pop(1)
0x4b9: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4ba: PushEmpty(bool, object, string)
0x4bb: Stack[-2] = Stack[-18]
0x4bc: Stack[-1] = Stack[-8]
0x4bd: Call 0x492

0x4be: Pop(2)
0x4bf: Pop(1); Push((bool) Stack[-1] == 0)
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4c1: Stack[-4] = (int) 0
0x4c2: GOTO 0x4c5

0x4c3: @@ GetProperty(Stack[-5], Stack[-4])
0x4c4: Pop(0)
0x4c5: PushEmpty(float, float, float)
0x4c6: Pop(0); Push(Stack[-9] + Stack[-7]);
0x4c7: Push((float)100.0)
0x4c8: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x4c9: Stack[-1] = (int) 1
0x4ca: Call 0x5d0

0x4cb: Stack[-6] = Stack[-3]
0x4cc: Pop(3)
0x4cd: Push("health")
0x4ce: @@ GetProperty(Stack[-1], Stack[-3])
0x4cf: Pop(1)
0x4d0: Push((int) 1)
0x4d1: Pop(1); Push(Stack[-1] - Stack[-4]);
0x4d2: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x4d3: Push("health")
0x4d4: PushEmpty(float, float, float, float)
0x4d5: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x4d6: Stack[-2] = (int) 0
0x4d7: Stack[-1] = (int) 1
0x4d8: Call 0x5d7

0x4d9: Pop(3)
0x4da: @@ SetProperty(Stack[-2], Stack[-1])
0x4db: Pop(2)
0x4dc: Stack[-16] = Stack[-1]
0x4dd: Return(); Pop(12)

0x4de: PushEmpty(bool, bool)
0x4df: @@ IsDead(Stack[-1])
0x4e0: Pop(0)
0x4e1: Stack[-4] = Stack[-1]
0x4e2: Return(); Pop(2)

0x4e3: PushEmpty(object, object, object, object)
0x4e4: Pop(0); Push((bool) Stack[-5] == 0)
0x4e5: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e6: Stack[-6] = (bool) 0
0x4e7: Return(); Pop(4)

0x4e8: PushEmpty(bool)
0x4e9: Stack[-1] = (bool) 0
0x4ea: Push("IsDead")
0x4eb: Push((int) 1)
0x4ec: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x4ed: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4ee: PushEmpty(bool, object)
0x4ef: Stack[-1] = Stack[-8]
0x4f0: Call 0x4de

0x4f1: Pop(1)
0x4f2: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4f3: Stack[-1] = (bool) 1
0x4f4: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4f5: Stack[-6] = (bool) 0
0x4f6: Return(); Pop(4)

0x4f7: @ GetScene(Stack[-2])
0x4f8: Pop(0)
0x4f9: Pop(0); Push((bool) Stack[-2] == 0)
0x4fa: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4fb: Stack[-6] = (bool) 0
0x4fc: Return(); Pop(4)

0x4fd: @@ GetScene(Stack[-1])
0x4fe: Pop(0)
0x4ff: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x500: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x501: Stack[-6] = (bool) 0
0x502: Return(); Pop(4)

0x503: Stack[-6] = (bool) 1
0x504: Return(); Pop(4)

0x505: Stack[-1] = 0
0x506: Stack[-2] = 0
0x507: PushEmpty(int, int)
0x508: PushEmpty(bool, object)
0x509: Stack[-1] = Stack[-5]
0x50a: Call 0x4e3

0x50b: Pop(1)
0x50c: Pop(1); Push((bool) Stack[-1] == 0)
0x50d: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50e: Stack[-4] = (bool) 0
0x50f: Return(); Pop(2)

0x510: PushEmpty(bool, object, string)
0x511: Stack[-2] = Stack[-6]
0x512: Stack[-1] = "noaccess"
0x513: Call 0x492

0x514: Pop(2)
0x515: Pop(1); Push((bool) Stack[-1] == 0)
0x516: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x517: Stack[-4] = (bool) 1
0x518: Return(); Pop(2)

0x519: Push("noaccess")
0x51a: @@ GetProperty(Stack[-1], Stack[-2])
0x51b: Pop(1)
0x51c: Push((int) 0)
0x51d: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x51e: Return(); Pop(2)

0x51f: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x520: PushEmpty(bool)
0x521: Stack[-1] = (bool) 0
0x522: Push((int) 4)
0x523: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x524: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x525: Push((int) 5)
0x526: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x527: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x528: Stack[-1] = (bool) 1
0x529: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x52a: @ GetScene(Stack[-10])
0x52b: Pop(0)
0x52c: @ GetPosition(Stack[-8])
0x52d: Pop(0)
0x52e: @ GetEyesHeight(Stack[-7])
0x52f: Pop(0)
0x530: Push(CvectorIndex(Stack[-8], 1))
0x531: Push((int) 2)
0x532: Pop(1); Push(Stack[-9] / Stack[-1]);
0x533: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x534: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x535: Push("scripted")
0x536: Push(CVector(0.0, 0.0, 1.0))
0x537: Push("blood.xml")
0x538: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x539: Pop(3)
0x53a: Stack[-9] = 0
0x53b: Stack[-10] = 0
0x53c: Pop(0); Push((bool) Stack[-23] == 0)
0x53d: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x53e: Return(); Pop(20)

0x53f: @ GetSecondaryAnimationType(Stack[-6])
0x540: Pop(0)
0x541: Push((int) 0)
0x542: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x543: IF (Stack[-1] == 0) GOTO 0x545; Pop(1)

0x544: Return(); Pop(20)

0x545: @@ GetPosition(Stack[-5])
0x546: Pop(0)
0x547: @ GetPosition(Stack[-4])
0x548: Pop(0)
0x549: @ GetDirection(Stack[-3])
0x54a: Pop(0)
0x54b: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x54c: Push(CvectorIndex(Stack[-2], 0))
0x54d: Push(CvectorIndex(Stack[-4], 0))
0x54e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x54f: Push(CvectorIndex(Stack[-3], 2))
0x550: Push(CvectorIndex(Stack[-5], 2))
0x551: Pop(2); Push(Stack[-2] * Stack[-1]);
0x552: Pop(2); Push(Stack[-2] + Stack[-1]);
0x553: Push((int) 0)
0x554: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x555: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x556: Stack[-1] = "fhit"
0x557: GOTO 0x559

0x558: Stack[-1] = "bhit"
0x559: Push("hit_react")
0x55a: Push("1")
0x55b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x55c: Push("2")
0x55d: Pop(1); Push(Stack[-4] + Stack[-1]);
0x55e: Push((int) -10)
0x55f: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x560: Pop(4)
0x561: Return(); Pop(20)

0x562: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x563: @@ GetPosition(Stack[-3])
0x564: Pop(0)
0x565: @ GetPosition(Stack[-2])
0x566: Pop(0)
0x567: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x568: Push(CvectorIndex(Stack[-1], 0))
0x569: Push(CvectorIndex(Stack[-2], 2))
0x56a: @ RotateAsync(Stack[-2], Stack[-1])
0x56b: Pop(2)
0x56c: Return(); Pop(6)

0x56d: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x56e: @@ GetPosition(Stack[-7])
0x56f: Pop(0)
0x570: @@ GetEyesHeight(Stack[-8])
0x571: Pop(0)
0x572: Push(CvectorIndex(Stack[-7], 1))
0x573: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x574: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x575: @ GetPosition(Stack[-6])
0x576: Pop(0)
0x577: @ GetEyesHeight(Stack[-8])
0x578: Pop(0)
0x579: Push(CvectorIndex(Stack[-6], 1))
0x57a: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x57b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x57c: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x57d: Push(CvectorIndex(Stack[-5], 1))
0x57e: Stack[-1] = (int) 0
0x57f: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x580: Pop(0); Push(Stack[-5] | Stack[-5]);
0x581: Pop(1); Push(Sqrt(Stack[-1]))
0x582: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x583: Stack[-4] = -Stack[-5]; Pop(0);
0x584: Push((int) 70)
0x585: Pop(1); Push(Stack[-6] * Stack[-1]);
0x586: PushEmpty(cvector, cvector)
0x587: Push(CVector(0.0, 1.0, 0.0))
0x588: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x589: Call 0x5c2

0x58a: Pop(1)
0x58b: Push((int) 25)
0x58c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x58d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x58e: Push(CVector(0.0, 10.0, 0.0))
0x58f: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x590: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x591: @ IsOverrideActive(Stack[-1])
0x592: Pop(0)
0x593: Push(Stack[-1])
0x594: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x595: Stack[-18] = (bool) 0
0x596: Return(); Pop(16)

0x597: @ StopWorld()
0x598: Pop(0)
0x599: @ CameraTransit(Stack[-2], Stack[-4])
0x59a: Pop(0)
0x59b: Push(CvectorIndex(Stack[-3], 0))
0x59c: Push(CvectorIndex(Stack[-4], 2))
0x59d: @ Rotate(Stack[-2], Stack[-1])
0x59e: Pop(2)
0x59f: @ CameraWaitForPlayFinish()
0x5a0: Pop(0)
0x5a1: @ ResumeWorld()
0x5a2: Pop(0)
0x5a3: Stack[-18] = (bool) 1
0x5a4: Return(); Pop(16)

0x5a5: PushEmpty()
0x5a6: @ CameraSwitchToNormal()
0x5a7: Pop(0)
0x5a8: Return(); Pop(0)

0x5a9: PushEmpty(float, float, float, float)
0x5aa: Push("playing ")
0x5ab: Pop(1); Push(Stack[-1] + Stack[-6]);
0x5ac: @ Trace(Stack[-1])
0x5ad: Pop(1)
0x5ae: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x5af: Pop(0)
0x5b0: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x5b1: Pop(0)
0x5b2: Push("start: ")
0x5b3: Pop(1); Push(Stack[-1] + Stack[-3]);
0x5b4: @ Trace(Stack[-1])
0x5b5: Pop(1)
0x5b6: Push("end: ")
0x5b7: Pop(1); Push(Stack[-1] + Stack[-2]);
0x5b8: @ Trace(Stack[-1])
0x5b9: Pop(1)
0x5ba: Return(); Pop(4)

0x5bb: PushEmpty(bool)
0x5bc: Call 0x674

0x5bd: Pop(0)
0x5be: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5bf: @ lshStopSpeech()
0x5c0: Pop(0)
0x5c1: Return(); Pop(0)

0x5c2: PushEmpty(float, float)
0x5c3: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5c4: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5c5: Push((float)0.0)
0x5c6: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5c7: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5c8: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5c9: Return(); Pop(2)

0x5ca: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5cb: Return(); Pop(2)

0x5cc: PushEmpty(cvector, cvector)
0x5cd: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x5ce: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x5cf: Return(); Pop(2)

0x5d0: PushEmpty()
0x5d1: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5d3: Stack[-3] = Stack[-2]
0x5d4: GOTO 0x5d6

0x5d5: Stack[-3] = Stack[-1]
0x5d6: Return(); Pop(0)

0x5d7: PushEmpty()
0x5d8: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5d9: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5da: Stack[-4] = Stack[-2]
0x5db: Return(); Pop(0)

0x5dc: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5dd: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5de: Stack[-4] = Stack[-1]
0x5df: Return(); Pop(0)

0x5e0: Stack[-4] = Stack[-3]
0x5e1: Return(); Pop(0)

0x5e2: PushEmpty(object, object)
0x5e3: @ FindActor(Stack[-1], Stack[-4])
0x5e4: Pop(0)
0x5e5: Pop(0); Push((bool) Stack[-1] == 0)
0x5e6: IF (Stack[-1] == 0) GOTO 0x5e9; Pop(1)

0x5e7: Stack[-5] = (bool) 0
0x5e8: Return(); Pop(2)

0x5e9: @ Trigger(Stack[-1], Stack[-3])
0x5ea: Pop(0)
0x5eb: Stack[-5] = (bool) 1
0x5ec: Return(); Pop(2)

0x5ed: Stack[-1] = 0
0x5ee: PushEmpty(bool, bool)
0x5ef: Push("revolver_ammo")
0x5f0: Push((int) 0)
0x5f1: Push((int) 2)
0x5f2: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5f3: Pop(3)
0x5f4: Push("alpha_pills")
0x5f5: Push((int) 0)
0x5f6: Push((int) 2)
0x5f7: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5f8: Pop(3)
0x5f9: PushEmpty(object)
0x5fa: Stack[-1] = Stack[-4]
0x5fb: Push(-1, 0); TaskCall(2)
0x5fc: Call 0x297

0x5fd: Pop(-1, 0); TaskReturn
0x5fe: Pop(1)
0x5ff: Return(); Pop(2)

0x600: PushEmpty()
0x601: PushEmpty(object, int, float)
0x602: Stack[-3] = Stack[-7]
0x603: Stack[-2] = Stack[-6]
0x604: Stack[-1] = Stack[-5]
0x605: Call 0x51f

0x606: Pop(3)
0x607: Return(); Pop(0)

0x608: PushEmpty(float, float)
0x609: Push("health")
0x60a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x60b: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x60c: Push("health")
0x60d: @ GetProperty(Stack[-1], Stack[-2])
0x60e: Pop(1)
0x60f: Push((int) 0)
0x610: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x611: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x612: @ SignalDeath(Stack[-4])
0x613: Pop(0)
0x614: Return(); Pop(2)

0x615: PushEmpty()
0x616: PushEmpty(object)
0x617: Stack[-1] = Stack[-2]
0x618: Call 0x5ee

0x619: Pop(1)
0x61a: Return(); Pop(0)

0x61b: PushEmpty()
0x61c: PushEmpty()
0x61d: Call 0x660

0x61e: Pop(0)
0x61f: PushEmpty(bool, string, string)
0x620: Stack[-2] = "quest_d3_01"
0x621: Stack[-1] = "patrol_talk"
0x622: Call 0x5e2

0x623: Pop(3)
0x624: Return(); Pop(0)

0x625: PushEmpty(object, object)
0x626: @ GetDiaryRoot(Stack[-1])
0x627: Pop(0)
0x628: Pop(0); Push((bool) Stack[-1] == 0)
0x629: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x62a: Push("Can't retrieve diary root")
0x62b: @ Trace(Stack[-1])
0x62c: Pop(1)
0x62d: Stack[-3] = (bool) 0
0x62e: Return(); Pop(2)

0x62f: Stack[-3] = Stack[-1]
0x630: Return(); Pop(2)

0x631: Stack[-1] = 0
0x632: PushEmpty(object, object, int, object, object, int)
0x633: PushEmpty(object)
0x634: Call 0x625

0x635: Stack[-4] = Stack[-1]
0x636: Pop(1)
0x637: @@ Find(Stack[-7], Stack[-2])
0x638: Pop(0)
0x639: Pop(0); Push((bool) Stack[-2] == 0)
0x63a: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x63b: Push("Can't find diary parent with id: ")
0x63c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x63d: @ Trace(Stack[-1])
0x63e: Pop(1)
0x63f: Stack[-9] = (bool) 0
0x640: Return(); Pop(6)

0x641: @@ AddChild(Stack[-8])
0x642: Pop(0)
0x643: Push("player_diary")
0x644: Push((int) 1)
0x645: @ SetVariable(Stack[-2], Stack[-1])
0x646: Pop(2)
0x647: @@ GetCategory(Stack[-1])
0x648: Pop(0)
0x649: @ SetDiarySection(Stack[-1])
0x64a: Pop(0)
0x64b: Stack[-9] = (bool) 0
0x64c: Return(); Pop(6)

0x64d: Stack[-2] = 0
0x64e: Stack[-3] = 0
0x64f: PushEmpty(int, int)
0x650: Push("player")
0x651: @ GetVariable(Stack[-1], Stack[-2])
0x652: Pop(1)
0x653: Push((int) 0)
0x654: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x655: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x656: Stack[-3] = (int) 200001
0x657: Return(); Pop(2)

0x658: GOTO 0x65e

0x659: Push((int) 1)
0x65a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x65b: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x65c: Stack[-3] = (int) 200002
0x65d: Return(); Pop(2)

0x65e: Stack[-3] = (int) 200003
0x65f: Return(); Pop(2)

0x660: PushEmpty(object, object)
0x661: Push("Adding diary entry")
0x662: @ Trace(Stack[-1])
0x663: Pop(1)
0x664: Push((int) 72)
0x665: Push((int) 1)
0x666: Push((int) 12154)
0x667: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x668: Pop(3)
0x669: PushEmpty(bool, object, int)
0x66a: Stack[-2] = Stack[-4]
0x66b: Stack[-1] = (int) 25
0x66c: Call 0x632

0x66d: Pop(3)
0x66e: Return(); Pop(2)

0x66f: Stack[-1] = 0
0x670: Stack[-1] = (int) 4031
0x671: Return(); Pop(0)

0x672: Stack[-1] = "ui/NPC_Black.png"
0x673: Return(); Pop(0)

0x674: Stack[-1] = (bool) 0
0x675: Return(); Pop(0)

