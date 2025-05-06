GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

Strings:
	all
	idle
	fdie
	GetPosition
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	head
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
	walk
	run
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
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
	SetReturnValue
	player
	GenerateMoney: iMin > iMax
	Money
	hook
	watch
	alpha_pills
	meradorm
	lockpick
	rifle_ammo
	revolver_ammo
	ui/NPC_None.png
	class
	rat
	dog

Import:
	DoTrade (0 args)
	WaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	StopAnimation (0 args)
	StopTrade (0 args)
	Hold (0 args)
	GetPosition (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	Stop (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	SensePlayerOnly (1 args)
	KillTimer (1 args)
	ResetAAS (0 args)
	IsPlayerActor (2 args)
	SetTimer (2 args)
	rand (2 args)
	Sleep (1 args)
	GetCameraFarDistance (1 args)
	GetRandomPFPointInCircle (4 args)
	FindShiftedPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	RequestClearPath (1 args)
	StopGroup0 (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetPFPosition (1 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	sync (0 args)
	Speak (1 args)
	FindPathTo (2 args)
	FollowPath (5 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	GetScene (1 args)
	GetEyesHeight (1 args)
	AddActorByType (6 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	RotateAsync (2 args)
	IsLoaded (1 args)
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
	GetGameTime (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	GetVariable (2 args)
	GetInvItemByName (2 args)
	AddItem (4 args)
	ClearSubContainer (1 args)
	WorkWithCorpse (1 args)
	CanSee (2 args)
	ReportReputationChange (3 args)
	SetRTEnvelope (2 args)

RunOp = 0xaa
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0xf Vars = (int)
	GTASK_1  Params = 1
		EVENT_0 Op = 0x25 Vars = (object)
		EVENT_6 Op = 0x33 Vars = ()
		EVENT_22 Op = 0xa4 Vars = (object, int, float, float)
		EVENT_16 Op = 0xa6 Vars = (object, string)
		EVENT_41 Op = 0xa8 Vars = (object)
	GTASK_2 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0xc2 Vars = (object)
		EVENT_17 Op = 0xd6 Vars = (object)
		EVENT_30 Op = 0xea Vars = (object, object)
		EVENT_40 Op = 0x104 Vars = (object)
		EVENT_42 Op = 0x118 Vars = (object, string)
		EVENT_1 Op = 0x12e Vars = (object)
		EVENT_3 Op = 0x134 Vars = (object)
		EVENT_7 Op = 0x13a Vars = (int)
		EVENT_6 Op = 0x146 Vars = ()
		EVENT_41 Op = 0x15d Vars = (object)
		EVENT_10 Op = 0x1c7 Vars = (object)
		EVENT_28 Op = 0x1cb Vars = ()
	GTASK_3  Params = 0
		EVENT_0 Op = 0x1de Vars = (object)
		EVENT_17 Op = 0x1f2 Vars = (object)
		EVENT_30 Op = 0x206 Vars = (object, object)
		EVENT_40 Op = 0x220 Vars = (object)
		EVENT_42 Op = 0x234 Vars = (object, string)
		EVENT_6 Op = 0x24a Vars = ()
	GTASK_4 Vars = (object) Params = 1
		EVENT_0 Op = 0x2d3 Vars = (object)
		EVENT_17 Op = 0x2e7 Vars = (object)
		EVENT_30 Op = 0x2fb Vars = (object, object)
		EVENT_40 Op = 0x315 Vars = (object)
		EVENT_42 Op = 0x329 Vars = (object, string)
		EVENT_41 Op = 0x34a Vars = (object)
		EVENT_7 Op = 0x353 Vars = (int)
		EVENT_6 Op = 0x376 Vars = ()
	GTASK_5 Vars = (object, int, int, bool, int) Params = 1
	GTASK_6 Vars = (bool, object) Params = 6
		EVENT_6 Op = 0x576 Vars = ()
		EVENT_7 Op = 0x5e3 Vars = (int)
		EVENT_10 Op = 0x5f5 Vars = (object)
		EVENT_41 Op = 0x600 Vars = (object)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x6c5 Vars = (int, int)

Events:
EVENT_16 Op = 0x9a9 Vars = (object, string)
EVENT_41 Op = 0x9b6 Vars = (object)
EVENT_22 Op = 0x9bc Vars = (object, int, float, float)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: @ WaitForAnimEnd()
0x5: Pop(0)
0x6: Push("all")
0x7: Push("idle")
0x8: @ PlayAnimation(Stack[-2], Stack[-1])
0x9: Pop(2)
0xa: Push( Stack[0 + Tasks[-1].StackPointer] )
0xb: IF (Stack[-1] == 0) GOTO 0xd; Pop(1)

0xc: Return(); Pop(0)

0xd: GOTO 0x4

0xe: Return(); Pop(0)

0xf: PushEmpty()
0x10: @ StopAnimation()
0x11: Pop(0)
0x12: @ StopTrade()
0x13: Pop(0)
0x14: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x15: Return(); Pop(0)

0x16: PushEmpty()
0x17: EventDisable(0)
0x18: PushEmpty(object)
0x19: Stack[-1] = Stack[-2]
0x1a: Call 0x37

0x1b: Pop(1)
0x1c: PushEmpty(object)
0x1d: Stack[-1] = Stack[-2]
0x1e: Call 0xb44

0x1f: Pop(1)
0x20: EventEnable(0)
0x21: @ Hold()
0x22: Pop(0)
0x23: GOTO 0x21

0x24: Return(); Pop(0)

0x25: PushEmpty(int, int)
0x26: PushEmpty(int, object)
0x27: Stack[-1] = Stack[-5]
0x28: Call 0xa16

0x29: Stack[-3] = Stack[-2]
0x2a: Pop(2)
0x2b: Push((int) 0)
0x2c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2e: PushEmpty(object)
0x2f: Stack[-1] = Stack[-4]
0x30: Call 0xa19

0x31: Pop(1)
0x32: Return(); Pop(2)

0x33: PushEmpty()
0x34: Call 0xa1f

0x35: Pop(0)
0x36: Return(); Pop(0)

0x37: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x38: Pop(0); Push((bool) Stack[-21] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: PushEmpty(string)
0x3b: Stack[-1] = "fdie"
0x3c: Call 0x8e

0x3d: Pop(1)
0x3e: GOTO 0x8d

0x3f: @@ GetPosition(Stack[-10])
0x40: Pop(0)
0x41: @ GetPosition(Stack[-9])
0x42: Pop(0)
0x43: @ GetDirection(Stack[-8])
0x44: Pop(0)
0x45: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x46: Push(CvectorIndex(Stack[-7], 0))
0x47: Push(CvectorIndex(Stack[-9], 0))
0x48: Pop(2); Push(Stack[-2] * Stack[-1]);
0x49: Push(CvectorIndex(Stack[-8], 2))
0x4a: Push(CvectorIndex(Stack[-10], 2))
0x4b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4d: Push((int) 0)
0x4e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4f: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x50: Stack[-6] = "fdie"
0x51: GOTO 0x53

0x52: Stack[-6] = "bdie"
0x53: @ RemoveRTEnvelope()
0x54: Pop(0)
0x55: @ SetDeathState()
0x56: Pop(0)
0x57: @ Stop()
0x58: Pop(0)
0x59: @ StopAsync()
0x5a: Pop(0)
0x5b: Stack[-5] = Stack[-21]
0x5c: Push("GetScriptProperty")
0x5d: Push((int) 2)
0x5e: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x5f: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x60: Push("Owner")
0x61: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x62: Pop(1)
0x63: Push(Stack[-4])
0x64: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x65: Push("Owner")
0x66: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x67: Pop(1)
0x68: Pop(0); Push((bool) Stack[-5] == 0)
0x69: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x6a: Stack[-5] = Stack[-21]
0x6b: Push("@GetEyesHeight")
0x6c: Push((int) 1)
0x6d: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @@ GetEyesHeight(Stack[-2])
0x70: Pop(0)
0x71: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x72: Push(CvectorIndex(Stack[-1], 1))
0x73: Stack[-1] = Stack[-3]
0x74: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x75: Push("head")
0x76: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x77: Pop(1)
0x78: Stack[-3] = (bool) 1
0x79: GOTO 0x7b

0x7a: Stack[-3] = (bool) 0
0x7b: Push("all")
0x7c: @ PlayAnimation(Stack[-1], Stack[-7])
0x7d: Pop(1)
0x7e: @ WaitForAnimEnd()
0x7f: Pop(0)
0x80: Push(Stack[-3])
0x81: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x82: @ StopAsync()
0x83: Pop(0)
0x84: Push("head")
0x85: @ UnlookAsync(Stack[-1])
0x86: Pop(1)
0x87: Push("all")
0x88: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x89: Pop(1)
0x8a: @ RemoveEnvelope()
0x8b: Pop(0)
0x8c: Stack[-5] = 0
0x8d: Return(); Pop(20)

0x8e: PushEmpty()
0x8f: @ RemoveRTEnvelope()
0x90: Pop(0)
0x91: @ SetDeathState()
0x92: Pop(0)
0x93: @ Stop()
0x94: Pop(0)
0x95: @ StopAsync()
0x96: Pop(0)
0x97: @ StopSecondaryAnimation()
0x98: Pop(0)
0x99: Push("all")
0x9a: @ PlayAnimation(Stack[-1], Stack[-2])
0x9b: Pop(1)
0x9c: @ WaitForAnimEnd()
0x9d: Pop(0)
0x9e: Push("all")
0x9f: @ LockAnimationEnd(Stack[-1], Stack[-2])
0xa0: Pop(1)
0xa1: @ RemoveEnvelope()
0xa2: Pop(0)
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Return(); Pop(0)

0xa8: PushEmpty()
0xa9: Return(); Pop(0)

0xaa: Push((bool) 1)
0xab: @ SensePlayerOnly(Stack[-1])
0xac: Pop(1)
0xad: PushEmpty()
0xae: Call 0xad5

0xaf: Pop(0)
0xb0: PushEmpty()
0xb1: Call 0xb9

0xb2: Pop(0)
0xb3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xb4: PushEmpty()
0xb5: Call 0x18e

0xb6: Pop(0)
0xb7: GOTO 0xb3

0xb8: Return(); Pop(0)

0xb9: PushEmpty(bool)
0xba: Call 0x8bf

0xbb: Pop(0)
0xbc: Pop(1); Push((bool) Stack[-1] == 0)
0xbd: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbe: PushEmpty()
0xbf: Call 0xa1f

0xc0: Pop(0)
0xc1: Return(); Pop(0)

0xc2: PushEmpty(int, int)
0xc3: PushEmpty(int, object)
0xc4: Stack[-1] = Stack[-5]
0xc5: Call 0xa16

0xc6: Stack[-3] = Stack[-2]
0xc7: Pop(2)
0xc8: Push((int) 0)
0xc9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xcb: Push((int) 1)
0xcc: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xce: PushEmpty()
0xcf: Call 0x14d

0xd0: Pop(0)
0xd1: PushEmpty(object)
0xd2: Stack[-1] = Stack[-4]
0xd3: Call 0xa19

0xd4: Pop(1)
0xd5: Return(); Pop(2)

0xd6: PushEmpty(int, int)
0xd7: PushEmpty(int, object)
0xd8: Stack[-1] = Stack[-5]
0xd9: Call 0x9ed

0xda: Stack[-3] = Stack[-2]
0xdb: Pop(2)
0xdc: Push((int) 0)
0xdd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xdf: Push((int) 1)
0xe0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe2: PushEmpty()
0xe3: Call 0x14d

0xe4: Pop(0)
0xe5: PushEmpty(object)
0xe6: Stack[-1] = Stack[-4]
0xe7: Call 0x9f7

0xe8: Pop(1)
0xe9: Return(); Pop(2)

0xea: PushEmpty(int, int)
0xeb: PushEmpty(bool, object, object)
0xec: Stack[-2] = Stack[-7]
0xed: Stack[-1] = Stack[-6]
0xee: Call 0xb05

0xef: Pop(2)
0xf0: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xf1: PushEmpty(int, object)
0xf2: Stack[-1] = Stack[-6]
0xf3: Call 0x9ff

0xf4: Stack[-3] = Stack[-2]
0xf5: Pop(2)
0xf6: Push((int) 0)
0xf7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xf9: Push((int) 1)
0xfa: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfc: PushEmpty()
0xfd: Call 0x14d

0xfe: Pop(0)
0xff: PushEmpty(object)
0x100: Stack[-1] = Stack[-5]
0x101: Call 0xa06

0x102: Pop(1)
0x103: Return(); Pop(2)

0x104: PushEmpty(int, int)
0x105: PushEmpty(int, object)
0x106: Stack[-1] = Stack[-5]
0x107: Call 0xa0c

0x108: Stack[-3] = Stack[-2]
0x109: Pop(2)
0x10a: Push((int) 0)
0x10b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x10d: Push((int) 1)
0x10e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x110: PushEmpty()
0x111: Call 0x14d

0x112: Pop(0)
0x113: PushEmpty(object)
0x114: Stack[-1] = Stack[-4]
0x115: Call 0xa0f

0x116: Pop(1)
0x117: Return(); Pop(2)

0x118: PushEmpty(int, int)
0x119: PushEmpty(int, string, object)
0x11a: Stack[-2] = Stack[-6]
0x11b: Stack[-1] = Stack[-7]
0x11c: Call 0xa11

0x11d: Stack[-4] = Stack[-3]
0x11e: Pop(3)
0x11f: Push((int) 0)
0x120: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x122: Push((int) 1)
0x123: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x125: PushEmpty()
0x126: Call 0x14d

0x127: Pop(0)
0x128: PushEmpty(string, object)
0x129: Stack[-2] = Stack[-5]
0x12a: Stack[-1] = Stack[-6]
0x12b: Call 0xa14

0x12c: Pop(2)
0x12d: Return(); Pop(2)

0x12e: PushEmpty()
0x12f: PushEmpty(object)
0x130: Stack[-1] = Stack[-2]
0x131: Call 0x166

0x132: Pop(1)
0x133: Return(); Pop(0)

0x134: PushEmpty()
0x135: PushEmpty(object)
0x136: Stack[-1] = Stack[-2]
0x137: Call 0x166

0x138: Pop(1)
0x139: Return(); Pop(0)

0x13a: PushEmpty()
0x13b: Push((int) 110)
0x13c: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x13d: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13e: Return(); Pop(0)

0x13f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x140: Push((int) 110)
0x141: @ KillTimer(Stack[-1])
0x142: Pop(1)
0x143: @ ResetAAS()
0x144: Pop(0)
0x145: Return(); Pop(0)

0x146: PushEmpty()
0x147: Call 0x14d

0x148: Pop(0)
0x149: PushEmpty()
0x14a: Call 0xa1f

0x14b: Pop(0)
0x14c: Return(); Pop(0)

0x14d: Push((int) 110)
0x14e: @ KillTimer(Stack[-1])
0x14f: Pop(1)
0x150: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x151: PushEmpty()
0x152: Call 0x1ce

0x153: Pop(0)
0x154: Return(); Pop(0)

0x155: Push((int) 110)
0x156: @ KillTimer(Stack[-1])
0x157: Pop(1)
0x158: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x159: PushEmpty()
0x15a: Call 0x1d5

0x15b: Pop(0)
0x15c: Return(); Pop(0)

0x15d: PushEmpty()
0x15e: PushEmpty()
0x15f: Call 0x14d

0x160: Pop(0)
0x161: PushEmpty(object)
0x162: Stack[-1] = Stack[-2]
0x163: Call 0x9b6

0x164: Pop(1)
0x165: Return(); Pop(0)

0x166: PushEmpty(bool, int, bool, int)
0x167: PushEmpty(bool, object)
0x168: Stack[-1] = Stack[-7]
0x169: Call 0x859

0x16a: Pop(1)
0x16b: Pop(1); Push((bool) Stack[-1] == 0)
0x16c: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16d: Return(); Pop(4)

0x16e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x16f: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x170: Return(); Pop(4)

0x171: @ IsPlayerActor(Stack[-5], Stack[-2])
0x172: Pop(0)
0x173: Pop(0); Push((bool) Stack[-2] == 0)
0x174: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x175: Return(); Pop(4)

0x176: PushEmpty(int, object)
0x177: Stack[-1] = Stack[-7]
0x178: Call 0x9dc

0x179: Stack[-3] = Stack[-2]
0x17a: Pop(2)
0x17b: Push((int) 0)
0x17c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x17d: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x17e: Push((int) 1)
0x17f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x180: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x181: PushEmpty()
0x182: Call 0x155

0x183: Pop(0)
0x184: PushEmpty(object)
0x185: Stack[-1] = Stack[-6]
0x186: Call 0x9e5

0x187: Pop(1)
0x188: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x189: Push((int) 110)
0x18a: Push((float)10.0)
0x18b: @ SetTimer(Stack[-2], Stack[-1])
0x18c: Pop(2)
0x18d: Return(); Pop(4)

0x18e: PushEmpty(float, cvector, cvector, float, bool, object, bool, float, cvector, cvector, float, bool, object, bool)
0x18f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x190: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x191: Push((float)0.5)
0x192: @ rand(Stack[-8], Stack[-1])
0x193: Pop(1)
0x194: @ Sleep(Stack[-7])
0x195: Pop(0)
0x196: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x197: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x198: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x199: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x19a: @ GetPosition(Stack[-5])
0x19b: Pop(0)
0x19c: @ GetCameraFarDistance(Stack[-4])
0x19d: Pop(0)
0x19e: Push((float)2.5)
0x19f: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x1a0: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-4], Stack[-3])
0x1a1: Pop(0)
0x1a2: Push(Stack[-3])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a4: GOTO 0x1a9

0x1a5: Push((int) 1)
0x1a6: @ Sleep(Stack[-1])
0x1a7: Pop(1)
0x1a8: GOTO 0x19a

0x1a9: GOTO 0x1ab

0x1aa: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1ab: @ FindShiftedPathTo(Stack[-2], Stack[-6])
0x1ac: Pop(0)
0x1ad: Pop(0); Push(( Stack[-2] != 0 )
0x1ae: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1af: @ RotatePath(Stack[-2], Stack[-1])
0x1b0: Pop(0)
0x1b1: Push(Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1b3: PushEmpty(bool)
0x1b4: Call 0x1dc

0x1b5: Pop(0)
0x1b6: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x1b7: Pop(1)
0x1b8: Stack[-2] = 0
0x1b9: Push(Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bb: PushEmpty()
0x1bc: Push(-0, 0); TaskCall(3)
0x1bd: Call 0x251

0x1be: Pop(-0, 0); TaskReturn
0x1bf: Pop(0)
0x1c0: GOTO 0x1c4

0x1c1: Push((int) 1)
0x1c2: @ Sleep(Stack[-1])
0x1c3: Pop(1)
0x1c4: Stack[-2] = 0
0x1c5: GOTO 0x196

0x1c6: Return(); Pop(14)

0x1c7: PushEmpty()
0x1c8: @ RequestClearPath(Stack[-1])
0x1c9: Pop(0)
0x1ca: Return(); Pop(0)

0x1cb: @ Stop()
0x1cc: Pop(0)
0x1cd: Return(); Pop(0)

0x1ce: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1cf: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1d0: @ Stop()
0x1d1: Pop(0)
0x1d2: @ StopGroup0()
0x1d3: Pop(0)
0x1d4: Return(); Pop(0)

0x1d5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1d6: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1d7: @ Stop()
0x1d8: Pop(0)
0x1d9: @ StopGroup0()
0x1da: Pop(0)
0x1db: Return(); Pop(0)

0x1dc: Stack[-1] = (bool) 0
0x1dd: Return(); Pop(0)

0x1de: PushEmpty(int, int)
0x1df: PushEmpty(int, object)
0x1e0: Stack[-1] = Stack[-5]
0x1e1: Call 0xa16

0x1e2: Stack[-3] = Stack[-2]
0x1e3: Pop(2)
0x1e4: Push((int) 0)
0x1e5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1e7: Push((int) 1)
0x1e8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1ea: PushEmpty()
0x1eb: Call 0x296

0x1ec: Pop(0)
0x1ed: PushEmpty(object)
0x1ee: Stack[-1] = Stack[-4]
0x1ef: Call 0xa19

0x1f0: Pop(1)
0x1f1: Return(); Pop(2)

0x1f2: PushEmpty(int, int)
0x1f3: PushEmpty(int, object)
0x1f4: Stack[-1] = Stack[-5]
0x1f5: Call 0x9ed

0x1f6: Stack[-3] = Stack[-2]
0x1f7: Pop(2)
0x1f8: Push((int) 0)
0x1f9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1fb: Push((int) 1)
0x1fc: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fe: PushEmpty()
0x1ff: Call 0x296

0x200: Pop(0)
0x201: PushEmpty(object)
0x202: Stack[-1] = Stack[-4]
0x203: Call 0x9f7

0x204: Pop(1)
0x205: Return(); Pop(2)

0x206: PushEmpty(int, int)
0x207: PushEmpty(bool, object, object)
0x208: Stack[-2] = Stack[-7]
0x209: Stack[-1] = Stack[-6]
0x20a: Call 0xb05

0x20b: Pop(2)
0x20c: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x20d: PushEmpty(int, object)
0x20e: Stack[-1] = Stack[-6]
0x20f: Call 0x9ff

0x210: Stack[-3] = Stack[-2]
0x211: Pop(2)
0x212: Push((int) 0)
0x213: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x215: Push((int) 1)
0x216: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x217: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x218: PushEmpty()
0x219: Call 0x296

0x21a: Pop(0)
0x21b: PushEmpty(object)
0x21c: Stack[-1] = Stack[-5]
0x21d: Call 0xa06

0x21e: Pop(1)
0x21f: Return(); Pop(2)

0x220: PushEmpty(int, int)
0x221: PushEmpty(int, object)
0x222: Stack[-1] = Stack[-5]
0x223: Call 0xa0c

0x224: Stack[-3] = Stack[-2]
0x225: Pop(2)
0x226: Push((int) 0)
0x227: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x228: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x229: Push((int) 1)
0x22a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x22b: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22c: PushEmpty()
0x22d: Call 0x296

0x22e: Pop(0)
0x22f: PushEmpty(object)
0x230: Stack[-1] = Stack[-4]
0x231: Call 0xa0f

0x232: Pop(1)
0x233: Return(); Pop(2)

0x234: PushEmpty(int, int)
0x235: PushEmpty(int, string, object)
0x236: Stack[-2] = Stack[-6]
0x237: Stack[-1] = Stack[-7]
0x238: Call 0xa11

0x239: Stack[-4] = Stack[-3]
0x23a: Pop(3)
0x23b: Push((int) 0)
0x23c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x23e: Push((int) 1)
0x23f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x241: PushEmpty()
0x242: Call 0x296

0x243: Pop(0)
0x244: PushEmpty(string, object)
0x245: Stack[-2] = Stack[-5]
0x246: Stack[-1] = Stack[-6]
0x247: Call 0xa14

0x248: Pop(2)
0x249: Return(); Pop(2)

0x24a: PushEmpty()
0x24b: Call 0x296

0x24c: Pop(0)
0x24d: PushEmpty()
0x24e: Call 0xa1f

0x24f: Pop(0)
0x250: Return(); Pop(0)

0x251: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x252: @ WaitForAnimEnd()
0x253: Pop(0)
0x254: PushEmpty(bool)
0x255: Call 0x8bf

0x256: Pop(0)
0x257: Pop(1); Push((bool) Stack[-1] == 0)
0x258: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x259: Return(); Pop(14)

0x25a: PushEmpty(int)
0x25b: Call 0x9cb

0x25c: Stack[-8] = Stack[-1]
0x25d: Pop(1)
0x25e: Stack[-6] = (int) 0
0x25f: PushEmpty(bool)
0x260: Stack[-1] = (bool) 0
0x261: Push((int) 5)
0x262: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x263: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x264: PushEmpty(bool)
0x265: Call 0x8bf

0x266: Pop(0)
0x267: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x268: Stack[-1] = (bool) 1
0x269: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x26a: Push((int) 3)
0x26b: @ irand(Stack[-6], Stack[-1])
0x26c: Pop(1)
0x26d: Push((int) 0)
0x26e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x270: Push(Stack[-7])
0x271: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x272: @ irand(Stack[-4], Stack[-7])
0x273: Pop(0)
0x274: Push("all")
0x275: PushEmpty(string, int)
0x276: Stack[-1] = Stack[-7]
0x277: Call 0x9c4

0x278: Pop(1)
0x279: @ PlayAnimation(Stack[-2], Stack[-1])
0x27a: Pop(2)
0x27b: @ WaitForAnimEnd(Stack[-3])
0x27c: Pop(0)
0x27d: Pop(0); Push((bool) Stack[-3] == 0)
0x27e: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27f: GOTO 0x295

0x280: GOTO 0x292

0x281: Push((int) 1)
0x282: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x283: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x284: Push((int) 4)
0x285: @ rand(Stack[-3], Stack[-1])
0x286: Pop(1)
0x287: Push((int) 1)
0x288: Pop(1); Push(Stack[-3] + Stack[-1]);
0x289: @ Sleep(Stack[-1], Stack[-2])
0x28a: Pop(1)
0x28b: Pop(0); Push((bool) Stack[-1] == 0)
0x28c: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28d: GOTO 0x295

0x28e: GOTO 0x292

0x28f: Push(Stack[-6])
0x290: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x291: GOTO 0x295

0x292: Push((int) 1)
0x293: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x294: GOTO 0x25f

0x295: Return(); Pop(14)

0x296: @ StopAnimation()
0x297: Pop(0)
0x298: @ StopGroup0()
0x299: Pop(0)
0x29a: Return(); Pop(0)

0x29b: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x29c: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x29d: PushEmpty()
0x29e: Call 0x2ce

0x29f: Pop(0)
0x2a0: @ GetDirection(Stack[-3])
0x2a1: Pop(0)
0x2a2: PushEmpty(cvector, object)
0x2a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a4: Call 0x7d5

0x2a5: Stack[-4] = Stack[-2]
0x2a6: Pop(2)
0x2a7: PushEmpty(float, cvector, cvector)
0x2a8: Stack[-2] = Stack[-6]
0x2a9: Stack[-1] = Stack[-5]
0x2aa: Call 0x987

0x2ab: Pop(2)
0x2ac: Push((int) 0)
0x2ad: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2af: PushEmpty(object)
0x2b0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b1: Call 0x8b4

0x2b2: Pop(1)
0x2b3: Stack[-1] = (bool) 1
0x2b4: GOTO 0x2b8

0x2b5: Push((float)1.5)
0x2b6: @ Sleep(Stack[-1], Stack[-2])
0x2b7: Pop(1)
0x2b8: Push(Stack[-1])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2ba: PushEmpty(object)
0x2bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2bc: Call 0x8b4

0x2bd: Pop(1)
0x2be: Push((int) 111)
0x2bf: Push((float)0.5)
0x2c0: @ SetTimer(Stack[-2], Stack[-1])
0x2c1: Pop(2)
0x2c2: Push((float)5.0)
0x2c3: @ Sleep(Stack[-1])
0x2c4: Pop(1)
0x2c5: Push((int) 111)
0x2c6: @ KillTimer(Stack[-1])
0x2c7: Pop(1)
0x2c8: @ StopAsync()
0x2c9: Pop(0)
0x2ca: Push("head")
0x2cb: @ UnlookAsync(Stack[-1])
0x2cc: Pop(1)
0x2cd: Return(); Pop(6)

0x2ce: PushEmpty(object)
0x2cf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d0: Call 0x946

0x2d1: Pop(1)
0x2d2: Return(); Pop(0)

0x2d3: PushEmpty(int, int)
0x2d4: PushEmpty(int, object)
0x2d5: Stack[-1] = Stack[-5]
0x2d6: Call 0xa16

0x2d7: Stack[-3] = Stack[-2]
0x2d8: Pop(2)
0x2d9: Push((int) 0)
0x2da: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2db: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2dc: Push((int) 1)
0x2dd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2de: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2df: PushEmpty()
0x2e0: Call 0x33f

0x2e1: Pop(0)
0x2e2: PushEmpty(object)
0x2e3: Stack[-1] = Stack[-4]
0x2e4: Call 0xa19

0x2e5: Pop(1)
0x2e6: Return(); Pop(2)

0x2e7: PushEmpty(int, int)
0x2e8: PushEmpty(int, object)
0x2e9: Stack[-1] = Stack[-5]
0x2ea: Call 0x9ed

0x2eb: Stack[-3] = Stack[-2]
0x2ec: Pop(2)
0x2ed: Push((int) 0)
0x2ee: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2ef: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f0: Push((int) 1)
0x2f1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f3: PushEmpty()
0x2f4: Call 0x33f

0x2f5: Pop(0)
0x2f6: PushEmpty(object)
0x2f7: Stack[-1] = Stack[-4]
0x2f8: Call 0x9f7

0x2f9: Pop(1)
0x2fa: Return(); Pop(2)

0x2fb: PushEmpty(int, int)
0x2fc: PushEmpty(bool, object, object)
0x2fd: Stack[-2] = Stack[-7]
0x2fe: Stack[-1] = Stack[-6]
0x2ff: Call 0xb05

0x300: Pop(2)
0x301: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x302: PushEmpty(int, object)
0x303: Stack[-1] = Stack[-6]
0x304: Call 0x9ff

0x305: Stack[-3] = Stack[-2]
0x306: Pop(2)
0x307: Push((int) 0)
0x308: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x309: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30a: Push((int) 1)
0x30b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30d: PushEmpty()
0x30e: Call 0x33f

0x30f: Pop(0)
0x310: PushEmpty(object)
0x311: Stack[-1] = Stack[-5]
0x312: Call 0xa06

0x313: Pop(1)
0x314: Return(); Pop(2)

0x315: PushEmpty(int, int)
0x316: PushEmpty(int, object)
0x317: Stack[-1] = Stack[-5]
0x318: Call 0xa0c

0x319: Stack[-3] = Stack[-2]
0x31a: Pop(2)
0x31b: Push((int) 0)
0x31c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x31d: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x31e: Push((int) 1)
0x31f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x320: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x321: PushEmpty()
0x322: Call 0x33f

0x323: Pop(0)
0x324: PushEmpty(object)
0x325: Stack[-1] = Stack[-4]
0x326: Call 0xa0f

0x327: Pop(1)
0x328: Return(); Pop(2)

0x329: PushEmpty(int, int)
0x32a: PushEmpty(int, string, object)
0x32b: Stack[-2] = Stack[-6]
0x32c: Stack[-1] = Stack[-7]
0x32d: Call 0xa11

0x32e: Stack[-4] = Stack[-3]
0x32f: Pop(3)
0x330: Push((int) 0)
0x331: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x332: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x333: Push((int) 1)
0x334: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x335: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x336: PushEmpty()
0x337: Call 0x33f

0x338: Pop(0)
0x339: PushEmpty(string, object)
0x33a: Stack[-2] = Stack[-5]
0x33b: Stack[-1] = Stack[-6]
0x33c: Call 0xa14

0x33d: Pop(2)
0x33e: Return(); Pop(2)

0x33f: @ StopGroup0()
0x340: Pop(0)
0x341: @ StopAsync()
0x342: Pop(0)
0x343: Push("head")
0x344: @ UnlookAsync(Stack[-1])
0x345: Pop(1)
0x346: Push((int) 111)
0x347: @ KillTimer(Stack[-1])
0x348: Pop(1)
0x349: Return(); Pop(0)

0x34a: PushEmpty()
0x34b: PushEmpty()
0x34c: Call 0x33f

0x34d: Pop(0)
0x34e: PushEmpty(object)
0x34f: Stack[-1] = Stack[-2]
0x350: Call 0x9b6

0x351: Pop(1)
0x352: Return(); Pop(0)

0x353: PushEmpty(cvector, cvector, cvector, cvector)
0x354: Push((int) 111)
0x355: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x357: Return(); Pop(4)

0x358: PushEmpty(bool, object)
0x359: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x35a: Call 0x859

0x35b: Pop(1)
0x35c: Pop(1); Push((bool) Stack[-1] == 0)
0x35d: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x35e: PushEmpty()
0x35f: Call 0x33f

0x360: Pop(0)
0x361: Return(); Pop(4)

0x362: @ GetDirection(Stack[-2])
0x363: Pop(0)
0x364: PushEmpty(cvector, object)
0x365: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x366: Call 0x7d5

0x367: Stack[-3] = Stack[-2]
0x368: Pop(2)
0x369: PushEmpty(float, cvector, cvector)
0x36a: Stack[-2] = Stack[-5]
0x36b: Stack[-1] = Stack[-4]
0x36c: Call 0x987

0x36d: Pop(2)
0x36e: Push((float)0.5)
0x36f: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x370: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x371: PushEmpty(object)
0x372: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x373: Call 0x8b4

0x374: Pop(1)
0x375: Return(); Pop(4)

0x376: PushEmpty()
0x377: Call 0x33f

0x378: Pop(0)
0x379: PushEmpty()
0x37a: Call 0xa1f

0x37b: Pop(0)
0x37c: Return(); Pop(0)

0x37d: PushEmpty()
0x37e: PushEmpty(object, bool, float)
0x37f: Stack[-3] = Stack[-4]
0x380: Stack[-2] = (bool) 1
0x381: Stack[-1] = (float) 180.0
0x382: Call 0x38b

0x383: Pop(3)
0x384: Return(); Pop(0)

0x385: PushEmpty()
0x386: Stack[-3] = (float) 0.03
0x387: Return(); Pop(0)

0x388: PushEmpty()
0x389: Stack[-3] = (int) 0
0x38a: Return(); Pop(0)

0x38b: PushEmpty(bool, bool, float, cvector, cvector, bool, bool, cvector, float, float, bool, bool, float, cvector, cvector, bool, bool, cvector, float, float)
0x38c: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x38d: Push("all")
0x38e: Push("attack_begin")
0x38f: Push((int) 1)
0x390: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x391: Pop(2); Push(Stack[-2] + Stack[-1]);
0x392: @ HasAnimation(Stack[-12], Stack[-2], Stack[-1])
0x393: Pop(2)
0x394: Pop(0); Push((bool) Stack[-10] == 0)
0x395: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x396: GOTO 0x39a

0x397: Push((int) 1)
0x398: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x399: GOTO 0x38d

0x39a: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x39b: Push("attack")
0x39c: Push((int) 1)
0x39d: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x39e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x39f: @ IsExisting3DSound(Stack[-10], Stack[-1])
0x3a0: Pop(1)
0x3a1: Pop(0); Push((bool) Stack[-9] == 0)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a3: GOTO 0x3a7

0x3a4: Push((int) 1)
0x3a5: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x3a6: GOTO 0x39b

0x3a7: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x3a8: Push("@GetAttackDistance")
0x3a9: Push((int) 1)
0x3aa: Pop(2); Push(IsFuncExist(Stack[-25], Stack[-2], Stack[-1]))
0x3ab: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3ac: @@ GetAttackDistance(Stack[-8])
0x3ad: Pop(0)
0x3ae: Push((int) 50)
0x3af: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x3b0: GOTO 0x3b2

0x3b1: Stack[-8] = Stack[-21]
0x3b2: Push((int) 150)
0x3b3: Pop(1); Push((bool) Stack[-9] >= Stack[-1])
0x3b4: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b5: Stack[-8] = (int) 150
0x3b6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3b7: Stack[0 + Tasks[-1].StackPointer] = Stack[-23]
0x3b8: @ IsPlayerActor(Stack[-0], Stack[-5])
0x3b9: Pop(0)
0x3ba: Push(Stack[-22])
0x3bb: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bc: Stack[-4] = (bool) 0
0x3bd: GOTO 0x3bf

0x3be: Stack[-4] = (bool) 1
0x3bf: PushEmpty(bool)
0x3c0: Stack[-1] = (bool) 0
0x3c1: PushEmpty(bool, object)
0x3c2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3c3: Call 0x859

0x3c4: Pop(1)
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c6: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x3c7: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c8: Stack[-1] = (bool) 1
0x3c9: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x3ca: @@ GetPFPosition(Stack[-7])
0x3cb: Pop(0)
0x3cc: @ GetPFPosition(Stack[-6])
0x3cd: Pop(0)
0x3ce: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x3cf: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3d0: Push((float)400.0)
0x3d1: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3d2: Push((float)400.0)
0x3d3: Pop(1); Push(Stack[-1] + Stack[-10]);
0x3d4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3d5: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x3d6: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3d7: PushEmpty(bool, object, float, float, bool, bool)
0x3d8: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x3d9: Stack[-4] = Stack[-14]
0x3da: Stack[-3] = (float) 3000.0
0x3db: Stack[-2] = (bool) 1
0x3dc: Stack[-1] = (bool) 0
0x3dd: Push(-6, 2); TaskCall(6)
0x3de: Call 0x57d

0x3df: Pop(-6, 2); TaskReturn
0x3e0: Pop(5)
0x3e1: Pop(1); Push((bool) Stack[-1] == 0)
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3e3: GOTO 0x447

0x3e4: Stack[-4] = (bool) 0
0x3e5: GOTO 0x446

0x3e6: Pop(0); Push(Stack[-21] * Stack[-21]);
0x3e7: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x3e8: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x3e9: Pop(0); Push((bool) Stack[-4] == 0)
0x3ea: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3eb: PushEmpty(object)
0x3ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ed: Call 0x8b4

0x3ee: Pop(1)
0x3ef: Push("all")
0x3f0: Push("attack_on")
0x3f1: @ PlayAnimation(Stack[-2], Stack[-1])
0x3f2: Pop(2)
0x3f3: @ WaitForAnimEnd()
0x3f4: Pop(0)
0x3f5: @ StopAsync()
0x3f6: Pop(0)
0x3f7: Stack[-4] = (bool) 1
0x3f8: @ rand(Stack[-1])
0x3f9: Pop(0)
0x3fa: PushEmpty(bool)
0x3fb: Stack[-1] = (bool) 1
0x3fc: Push((float)0.6)
0x3fd: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x3fe: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3ff: PushEmpty(bool)
0x400: Call 0x543

0x401: Pop(0)
0x402: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x403: Stack[-1] = (bool) 0
0x404: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x405: @ Face(Stack[-0])
0x406: Pop(0)
0x407: Push("all")
0x408: Push("attack_stay")
0x409: @ PlayAnimation(Stack[-2], Stack[-1])
0x40a: Pop(2)
0x40b: PushEmpty(bool, float)
0x40c: Stack[-1] = Stack[-23]
0x40d: Call 0x4e7

0x40e: Pop(2)
0x40f: @ StopAsync()
0x410: Pop(0)
0x411: GOTO 0x43d

0x412: @ Face(Stack[-0])
0x413: Pop(0)
0x414: Push("all")
0x415: Push("fjump")
0x416: @ PlayAnimation(Stack[-2], Stack[-1])
0x417: Pop(2)
0x418: @ WaitForAnimEnd()
0x419: Pop(0)
0x41a: Push(CVector(0.0, 0.0, 0.0))
0x41b: @ SetSpeed(Stack[-1])
0x41c: Pop(1)
0x41d: @ Stop()
0x41e: Pop(0)
0x41f: @ StopAsync()
0x420: Pop(0)
0x421: PushEmpty(bool)
0x422: Call 0x543

0x423: Pop(0)
0x424: Pop(1); Push((bool) Stack[-1] == 0)
0x425: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x426: PushEmpty(bool, object)
0x427: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x428: Call 0x859

0x429: Pop(1)
0x42a: Pop(1); Push((bool) Stack[-1] == 0)
0x42b: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x42c: GOTO 0x447

0x42d: @@ GetPFPosition(Stack[-7])
0x42e: Pop(0)
0x42f: @ GetPFPosition(Stack[-6])
0x430: Pop(0)
0x431: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x432: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x433: Pop(0); Push(Stack[-21] * Stack[-21]);
0x434: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x435: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x436: PushEmpty(bool, float)
0x437: Stack[-1] = Stack[-23]
0x438: Call 0x47f

0x439: Pop(1)
0x43a: Pop(1); Push((bool) Stack[-1] == 0)
0x43b: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x43c: GOTO 0x447

0x43d: GOTO 0x446

0x43e: PushEmpty(bool, float)
0x43f: Stack[-1] = Stack[-23]
0x440: Call 0x47f

0x441: Pop(1)
0x442: Pop(1); Push((bool) Stack[-1] == 0)
0x443: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x444: GOTO 0x447

0x445: Stack[-4] = (bool) 1
0x446: GOTO 0x3bf

0x447: @ WaitForAnimEnd()
0x448: Pop(0)
0x449: Push( Stack[3 + Tasks[-1].StackPointer] )
0x44a: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x44b: Return(); Pop(20)

0x44c: Push("all")
0x44d: Push("attack_off")
0x44e: @ PlayAnimation(Stack[-2], Stack[-1])
0x44f: Pop(2)
0x450: @ WaitForAnimEnd()
0x451: Pop(0)
0x452: Push(Stack[-5])
0x453: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x454: Push((float)2.0)
0x455: @ Sleep(Stack[-1])
0x456: Pop(1)
0x457: Return(); Pop(20)

0x458: PushEmpty(object, float, float, object, float, float)
0x459: Push((float)0.9)
0x45a: Pop(1); Push(Stack[-9] * Stack[-1]);
0x45b: @ GetVictim(Stack[-1], Stack[-4])
0x45c: Pop(1)
0x45d: @ ReportAttack(Stack[-0])
0x45e: Pop(0)
0x45f: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x460: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x461: PushEmpty(float, object, int)
0x462: Stack[-2] = Stack[-6]
0x463: Stack[-1] = Stack[-10]
0x464: Call 0x385

0x465: Stack[-5] = Stack[-3]
0x466: Pop(3)
0x467: PushEmpty(float, object, float, int)
0x468: Stack[-3] = Stack[-7]
0x469: Stack[-2] = Stack[-6]
0x46a: PushEmpty(int, object, int)
0x46b: Stack[-2] = Stack[-10]
0x46c: Stack[-1] = Stack[-14]
0x46d: Call 0x388

0x46e: Stack[-4] = Stack[-3]
0x46f: Pop(3)
0x470: Call 0x7f0

0x471: Stack[-5] = Stack[-4]
0x472: Pop(4)
0x473: PushEmpty(int)
0x474: Call 0x56e

0x475: Pop(0)
0x476: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x477: Pop(1)
0x478: PushEmpty(object, float)
0x479: Stack[-2] = Stack[-5]
0x47a: Stack[-1] = Stack[-3]
0x47b: Call 0x570

0x47c: Pop(2)
0x47d: Return(); Pop(6)

0x47e: Stack[-3] = 0
0x47f: PushEmpty(int, bool, int, bool)
0x480: @ irand(Stack[-2], Stack[-1])
0x481: Pop(0)
0x482: Push((int) 1)
0x483: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x484: @ Face(Stack[-0])
0x485: Pop(0)
0x486: Push((bool) 1)
0x487: @ SetAttackState(Stack[-1])
0x488: Pop(1)
0x489: Push("all")
0x48a: Push("attack_begin")
0x48b: Pop(1); Push(Stack[-1] + Stack[-4]);
0x48c: @ PlayAnimation(Stack[-2], Stack[-1])
0x48d: Pop(2)
0x48e: @ WaitForAnimEnd()
0x48f: Pop(0)
0x490: PushEmpty()
0x491: Call 0x54e

0x492: Pop(0)
0x493: PushEmpty(bool, object)
0x494: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x495: Call 0x859

0x496: Pop(1)
0x497: Pop(1); Push((bool) Stack[-1] == 0)
0x498: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x499: @ StopAsync()
0x49a: Pop(0)
0x49b: Stack[-6] = (bool) 0
0x49c: Return(); Pop(4)

0x49d: PushEmpty(float, int)
0x49e: Stack[-2] = Stack[-7]
0x49f: Stack[-1] = Stack[-4]
0x4a0: Call 0x458

0x4a1: Pop(2)
0x4a2: Push("all")
0x4a3: Push("attack_middle")
0x4a4: Pop(1); Push(Stack[-1] + Stack[-4]);
0x4a5: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4a6: Pop(2)
0x4a7: Push(Stack[-1])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4a9: Push("all")
0x4aa: Push("attack_middle")
0x4ab: Pop(1); Push(Stack[-1] + Stack[-4]);
0x4ac: @ PlayAnimation(Stack[-2], Stack[-1])
0x4ad: Pop(2)
0x4ae: @ WaitForAnimEnd()
0x4af: Pop(0)
0x4b0: PushEmpty(bool, object)
0x4b1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b2: Call 0x859

0x4b3: Pop(1)
0x4b4: Pop(1); Push((bool) Stack[-1] == 0)
0x4b5: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b6: @ StopAsync()
0x4b7: Pop(0)
0x4b8: Stack[-6] = (bool) 0
0x4b9: Return(); Pop(4)

0x4ba: PushEmpty(float, int)
0x4bb: Stack[-2] = Stack[-7]
0x4bc: Stack[-1] = Stack[-4]
0x4bd: Call 0x458

0x4be: Pop(2)
0x4bf: Push((bool) 0)
0x4c0: @ SetAttackState(Stack[-1])
0x4c1: Pop(1)
0x4c2: Push("all")
0x4c3: Push("attack_end")
0x4c4: Pop(1); Push(Stack[-1] + Stack[-4]);
0x4c5: @ PlayAnimation(Stack[-2], Stack[-1])
0x4c6: Pop(2)
0x4c7: PushEmpty(bool, float)
0x4c8: Stack[-1] = (float) 0.75
0x4c9: Call 0x4cf

0x4ca: Pop(2)
0x4cb: @ StopAsync()
0x4cc: Pop(0)
0x4cd: Stack[-6] = (bool) 1
0x4ce: Return(); Pop(4)

0x4cf: PushEmpty(float, bool, float, bool)
0x4d0: @ rand(Stack[-2])
0x4d1: Pop(0)
0x4d2: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x4d3: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4d4: @ IsAnimationPlaying(Stack[-1])
0x4d5: Pop(0)
0x4d6: Pop(0); Push((bool) Stack[-1] == 0)
0x4d7: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d8: GOTO 0x4e2

0x4d9: PushEmpty(bool)
0x4da: Call 0x50f

0x4db: Pop(0)
0x4dc: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4dd: Stack[-6] = (bool) 1
0x4de: Return(); Pop(4)

0x4df: @ sync()
0x4e0: Pop(0)
0x4e1: GOTO 0x4d4

0x4e2: GOTO 0x4e5

0x4e3: @ WaitForAnimEnd()
0x4e4: Pop(0)
0x4e5: Stack[-6] = (bool) 0
0x4e6: Return(); Pop(4)

0x4e7: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x4e8: @ IsAnimationPlaying(Stack[-5])
0x4e9: Pop(0)
0x4ea: Pop(0); Push((bool) Stack[-5] == 0)
0x4eb: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4ec: GOTO 0x50d

0x4ed: PushEmpty(bool)
0x4ee: Call 0x50f

0x4ef: Pop(0)
0x4f0: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4f1: Stack[-12] = (bool) 1
0x4f2: Return(); Pop(10)

0x4f3: PushEmpty(bool, object)
0x4f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4f5: Call 0x859

0x4f6: Pop(1)
0x4f7: Pop(1); Push((bool) Stack[-1] == 0)
0x4f8: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4f9: Stack[-12] = (bool) 0
0x4fa: Return(); Pop(10)

0x4fb: @@ GetPFPosition(Stack[-4])
0x4fc: Pop(0)
0x4fd: @ GetPFPosition(Stack[-3])
0x4fe: Pop(0)
0x4ff: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x500: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x501: Pop(0); Push(Stack[-11] * Stack[-11]);
0x502: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x503: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x504: PushEmpty(bool, float)
0x505: Stack[-1] = Stack[-13]
0x506: Call 0x47f

0x507: Pop(2)
0x508: Stack[-12] = (bool) 1
0x509: Return(); Pop(10)

0x50a: @ sync()
0x50b: Pop(0)
0x50c: GOTO 0x4e8

0x50d: Stack[-12] = (bool) 0
0x50e: Return(); Pop(10)

0x50f: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x510: PushEmpty(bool, object)
0x511: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x512: Call 0x859

0x513: Pop(1)
0x514: Pop(1); Push((bool) Stack[-1] == 0)
0x515: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x516: Stack[-11] = (bool) 0
0x517: Return(); Pop(10)

0x518: PushEmpty(bool)
0x519: Call 0x543

0x51a: Pop(0)
0x51b: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x51c: @@ GetPFPosition(Stack[-5])
0x51d: Pop(0)
0x51e: @ GetPFPosition(Stack[-4])
0x51f: Pop(0)
0x520: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x521: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x522: @@ GetAttackDistance(Stack[-1])
0x523: Pop(0)
0x524: Push((int) 50)
0x525: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x526: Pop(0); Push(Stack[-1] * Stack[-1]);
0x527: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x528: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x529: PushEmpty()
0x52a: Call 0x530

0x52b: Pop(0)
0x52c: Stack[-11] = (bool) 1
0x52d: Return(); Pop(10)

0x52e: Stack[-11] = (bool) 0
0x52f: Return(); Pop(10)

0x530: PushEmpty(cvector, cvector, cvector, cvector)
0x531: @ Face(Stack[-0])
0x532: Pop(0)
0x533: Push("all")
0x534: Push("bjump")
0x535: @ PlayAnimation(Stack[-2], Stack[-1])
0x536: Pop(2)
0x537: @@ GetPFPosition(Stack[-2])
0x538: Pop(0)
0x539: @ GetPFPosition(Stack[-1])
0x53a: Pop(0)
0x53b: @ WaitForAnimEnd()
0x53c: Pop(0)
0x53d: @ StopAsync()
0x53e: Pop(0)
0x53f: Push(CVector(0.0, 0.0, 0.0))
0x540: @ SetSpeed(Stack[-1])
0x541: Pop(1)
0x542: Return(); Pop(4)

0x543: PushEmpty(bool, bool)
0x544: Push("IsAttacking")
0x545: Push((int) 1)
0x546: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x547: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x548: @@ IsAttacking(Stack[-1])
0x549: Pop(0)
0x54a: Stack[-3] = Stack[-1]
0x54b: Return(); Pop(2)

0x54c: Stack[-3] = (bool) 0
0x54d: Return(); Pop(2)

0x54e: PushEmpty(float, int, float, int)
0x54f: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x550: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x551: Return(); Pop(4)

0x552: Push( Stack[4 + Tasks[-1].StackPointer] )
0x553: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x554: Push((int) -1)
0x555: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x556: Push((int) 0)
0x557: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] > Stack[-1])
0x558: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x559: Return(); Pop(4)

0x55a: @ rand(Stack[-2])
0x55b: Pop(0)
0x55c: PushEmpty(float)
0x55d: Call 0x574

0x55e: Pop(0)
0x55f: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x560: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x561: @ irand(Stack[-1], Stack[-2])
0x562: Pop(0)
0x563: Push((int) 1)
0x564: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x565: Push("attack")
0x566: Pop(1); Push(Stack[-1] + Stack[-2]);
0x567: @ Speak(Stack[-1])
0x568: Pop(1)
0x569: PushEmpty(int)
0x56a: Call 0x572

0x56b: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x56c: Pop(1)
0x56d: Return(); Pop(4)

0x56e: Stack[-1] = (int) 0
0x56f: Return(); Pop(0)

0x570: PushEmpty()
0x571: Return(); Pop(0)

0x572: Stack[-1] = (int) 1
0x573: Return(); Pop(0)

0x574: Stack[-1] = (float) 0.5
0x575: Return(); Pop(0)

0x576: PushEmpty()
0x577: Call 0x5f9

0x578: Pop(0)
0x579: PushEmpty()
0x57a: Call 0xa1f

0x57b: Pop(0)
0x57c: Return(); Pop(0)

0x57d: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x57e: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x57f: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x580: Stack[-7] = Stack[-17]
0x581: PushEmpty(bool, object)
0x582: Stack[-1] = Stack[-23]
0x583: Call 0x609

0x584: Pop(1)
0x585: Pop(1); Push((bool) Stack[-1] == 0)
0x586: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x587: Stack[-22] = (bool) 0
0x588: Return(); Pop(16)

0x589: @@ GetPosition(Stack[-5])
0x58a: Pop(0)
0x58b: @ GetPosition(Stack[-4])
0x58c: Pop(0)
0x58d: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x58e: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x58f: PushEmpty(bool)
0x590: Stack[-1] = (bool) 0
0x591: Push((int) 0)
0x592: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x593: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x594: Pop(0); Push(Stack[-20] * Stack[-20]);
0x595: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x596: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x597: Stack[-1] = (bool) 1
0x598: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x599: @ Stop()
0x59a: Pop(0)
0x59b: Stack[-22] = (bool) 0
0x59c: Return(); Pop(16)

0x59d: Pop(0); Push(Stack[-20] * Stack[-20]);
0x59e: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x59f: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5a0: @@ GetPFPosition(Stack[-5])
0x5a1: Pop(0)
0x5a2: @ FindPathTo(Stack[-1], Stack[-5])
0x5a3: Pop(0)
0x5a4: Pop(0); Push(( Stack[-1] != 0 )
0x5a5: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x5a6: Stack[-6] = Stack[-1]
0x5a7: Stack[-1] = 0
0x5a8: Pop(0); Push(( Stack[-6] != 0 )
0x5a9: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5aa: Push(Stack[-7])
0x5ab: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5ac: Stack[-7] = (bool) 0
0x5ad: @ RotatePath(Stack[-6], Stack[-8])
0x5ae: Pop(0)
0x5af: Pop(0); Push((bool) Stack[-8] == 0)
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5b1: GOTO 0x5e1

0x5b2: Push((int) 0)
0x5b3: Push((float)0.3)
0x5b4: @ SetTimer(Stack[-2], Stack[-1])
0x5b5: Pop(2)
0x5b6: PushEmpty(string)
0x5b7: Call 0x610

0x5b8: Pop(0)
0x5b9: PushEmpty(string)
0x5ba: Call 0x612

0x5bb: Pop(0)
0x5bc: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x5bd: Pop(2)
0x5be: Pop(0); Push((bool) Stack[-8] == 0)
0x5bf: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5c0: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5c1: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5c2: Stack[-6] = 0
0x5c3: GOTO 0x5e1

0x5c4: GOTO 0x5c6

0x5c5: GOTO 0x5e0

0x5c6: GOTO 0x5c8

0x5c7: Stack[-6] = 0
0x5c8: GOTO 0x5d9

0x5c9: Push((int) 0)
0x5ca: @ KillTimer(Stack[-1])
0x5cb: Pop(1)
0x5cc: Push((float)0.5)
0x5cd: @ Sleep(Stack[-1], Stack[-9])
0x5ce: Pop(1)
0x5cf: Pop(0); Push((bool) Stack[-8] == 0)
0x5d0: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5d1: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5d3: Stack[-6] = 0
0x5d4: GOTO 0x5e1

0x5d5: Push((int) 0)
0x5d6: Push((float)0.3)
0x5d7: @ SetTimer(Stack[-2], Stack[-1])
0x5d8: Pop(2)
0x5d9: Stack[-1] = 0
0x5da: GOTO 0x5df

0x5db: Push((int) 0)
0x5dc: @ KillTimer(Stack[-1])
0x5dd: Pop(1)
0x5de: GOTO 0x5e1

0x5df: Stack[-6] = 0
0x5e0: GOTO 0x581

0x5e1: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x5e2: Return(); Pop(16)

0x5e3: PushEmpty()
0x5e4: Push((int) 0)
0x5e5: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x5e6: IF (Stack[-1] == 0) GOTO 0x5e8; Pop(1)

0x5e7: Return(); Pop(0)

0x5e8: PushEmpty(bool, object)
0x5e9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5ea: Call 0x609

0x5eb: Pop(1)
0x5ec: Pop(1); Push((bool) Stack[-1] == 0)
0x5ed: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5ee: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5ef: Push((int) 0)
0x5f0: @ KillTimer(Stack[-1])
0x5f1: Pop(1)
0x5f2: @ Stop()
0x5f3: Pop(0)
0x5f4: Return(); Pop(0)

0x5f5: PushEmpty()
0x5f6: @ RequestClearPath(Stack[-1])
0x5f7: Pop(0)
0x5f8: Return(); Pop(0)

0x5f9: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5fa: Push((int) 0)
0x5fb: @ KillTimer(Stack[-1])
0x5fc: Pop(1)
0x5fd: @ Stop()
0x5fe: Pop(0)
0x5ff: Return(); Pop(0)

0x600: PushEmpty()
0x601: PushEmpty()
0x602: Call 0x5f9

0x603: Pop(0)
0x604: PushEmpty(object)
0x605: Stack[-1] = Stack[-2]
0x606: Call 0x9b6

0x607: Pop(1)
0x608: Return(); Pop(0)

0x609: PushEmpty()
0x60a: PushEmpty(bool, object)
0x60b: Stack[-1] = Stack[-3]
0x60c: Call 0x859

0x60d: Stack[-4] = Stack[-2]
0x60e: Pop(2)
0x60f: Return(); Pop(0)

0x610: Stack[-1] = "walk"
0x611: Return(); Pop(0)

0x612: Stack[-1] = "run"
0x613: Return(); Pop(0)

0x614: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x615: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x616: PushEmpty(bool, object)
0x617: Stack[-1] = Stack[-11]
0x618: Call 0x8c4

0x619: Pop(1)
0x61a: Pop(1); Push((bool) Stack[-1] == 0)
0x61b: IF (Stack[-1] == 0) GOTO 0x61e; Pop(1)

0x61c: Stack[-10] = (int) -2
0x61d: Return(); Pop(8)

0x61e: @ CreateDialog(Stack[-4])
0x61f: Pop(0)
0x620: PushEmpty(int)
0x621: Call 0xacf

0x622: Pop(0)
0x623: @@ SetNPCName(Stack[-1])
0x624: Pop(1)
0x625: PushEmpty(string)
0x626: Call 0xad1

0x627: Pop(0)
0x628: @@ SetPhoto(Stack[-1])
0x629: Pop(1)
0x62a: PushEmpty(int)
0x62b: Call 0xa25

0x62c: Pop(0)
0x62d: @@ SetPlayerName(Stack[-1])
0x62e: Pop(1)
0x62f: Stack[-2] = (int) -1
0x630: @ IsOverrideActive(Stack[-3])
0x631: Pop(0)
0x632: Push(Stack[-3])
0x633: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x634: Stack[-10] = (int) -2
0x635: Return(); Pop(8)

0x636: @ DoDialog(Stack[-4])
0x637: Pop(0)
0x638: PushEmpty(object, object)
0x639: Stack[-2] = Stack[-11]
0x63a: Stack[-1] = Stack[-6]
0x63b: Push(-2, 4); TaskCall(8)
0x63c: Call 0x653

0x63d: Pop(-2, 4); TaskReturn
0x63e: Pop(2)
0x63f: @@ IsDialogEnd(Stack[-1])
0x640: Pop(0)
0x641: Pop(0); Push((bool) Stack[-1] == 0)
0x642: IF (Stack[-1] == 0) GOTO 0x648; Pop(1)

0x643: @ sync()
0x644: Pop(0)
0x645: @@ IsDialogEnd(Stack[-1])
0x646: Pop(0)
0x647: GOTO 0x641

0x648: PushEmpty(object)
0x649: Stack[-1] = Stack[-10]
0x64a: Call 0x8fc

0x64b: Pop(1)
0x64c: @ StopDialog(Stack[-4])
0x64d: Pop(0)
0x64e: @@ GetReturnValue(Stack[-2])
0x64f: Pop(0)
0x650: Stack[-10] = Stack[-2]
0x651: Return(); Pop(8)

0x652: Stack[-4] = 0
0x653: PushEmpty()
0x654: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x655: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x656: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x657: Push((int) 1)
0x658: IF (Stack[-1] == 0) GOTO 0x697; Pop(1)

0x659: PushEmpty(string)
0x65a: Stack[-1] = "Neutral"
0x65b: Call 0x6b5

0x65c: Pop(1)
0x65d: Push((int) 13402)
0x65e: @@ SetMessage(Stack[-1])
0x65f: Pop(1)
0x660: @@ ClearReplies()
0x661: Pop(0)
0x662: Push((int) 13403)
0x663: Push((int) -1)
0x664: Push((int) 14637)
0x665: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x666: Pop(3)
0x667: Push((int) 13404)
0x668: Push((int) -1)
0x669: Push((int) 14638)
0x66a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66b: Pop(3)
0x66c: GOTO 0x697

0x66d: PushEmpty(string)
0x66e: Stack[-1] = "Neutral"
0x66f: Call 0x6b5

0x670: Pop(1)
0x671: Push((int) 14671)
0x672: @@ SetMessage(Stack[-1])
0x673: Pop(1)
0x674: @@ ClearReplies()
0x675: Pop(0)
0x676: Push((int) 14672)
0x677: Push((int) 15911)
0x678: Push((int) 15910)
0x679: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67a: Pop(3)
0x67b: Push((int) 14681)
0x67c: Push((int) 15921)
0x67d: Push((int) 15920)
0x67e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67f: Pop(3)
0x680: GOTO 0x697

0x681: PushEmpty(string)
0x682: Stack[-1] = "Neutral"
0x683: Call 0x6b5

0x684: Pop(1)
0x685: Push((int) 14684)
0x686: @@ SetMessage(Stack[-1])
0x687: Pop(1)
0x688: @@ ClearReplies()
0x689: Pop(0)
0x68a: Push((int) 14685)
0x68b: Push((int) 15926)
0x68c: Push((int) 15925)
0x68d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68e: Pop(3)
0x68f: Push((int) 14696)
0x690: Push((int) 15937)
0x691: Push((int) 15936)
0x692: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x693: Pop(3)
0x694: GOTO 0x697

0x695: Return(); Pop(0)

0x696: GOTO 0x657

0x697: PushEmpty(bool)
0x698: Call 0xad3

0x699: Pop(0)
0x69a: IF (Stack[-1] == 0) GOTO 0x6a6; Pop(1)

0x69b: @ lshWaitForAnimEnd()
0x69c: Pop(0)
0x69d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x69e: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x69f: GOTO 0x6a5

0x6a0: PushEmpty(string)
0x6a1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x6a2: Call 0x934

0x6a3: Pop(1)
0x6a4: GOTO 0x69b

0x6a5: GOTO 0x6b4

0x6a6: Push("all")
0x6a7: Push("idle")
0x6a8: @ PlayAnimation(Stack[-2], Stack[-1])
0x6a9: Pop(2)
0x6aa: @ WaitForAnimEnd()
0x6ab: Pop(0)
0x6ac: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6ad: IF (Stack[-1] == 0) GOTO 0x6af; Pop(1)

0x6ae: GOTO 0x6b4

0x6af: Push("all")
0x6b0: Push("idle")
0x6b1: @ PlayAnimation(Stack[-2], Stack[-1])
0x6b2: Pop(2)
0x6b3: GOTO 0x6aa

0x6b4: Return(); Pop(0)

0x6b5: PushEmpty()
0x6b6: PushEmpty(bool)
0x6b7: Call 0xad3

0x6b8: Pop(0)
0x6b9: Pop(1); Push((bool) Stack[-1] == 0)
0x6ba: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x6bb: Return(); Pop(0)

0x6bc: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x6bd: IF (Stack[-1] == 0) GOTO 0x6bf; Pop(1)

0x6be: Return(); Pop(0)

0x6bf: PushEmpty(string)
0x6c0: Stack[-1] = Stack[-2]
0x6c1: Call 0x934

0x6c2: Pop(1)
0x6c3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x6c4: Return(); Pop(0)

0x6c5: PushEmpty()
0x6c6: Push((int) 1)
0x6c7: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x6c8: PushEmpty()
0x6c9: Call 0x951

0x6ca: Pop(0)
0x6cb: Push((int) 14637)
0x6cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6cd: IF (Stack[-1] == 0) GOTO 0x6d3; Pop(1)

0x6ce: PushEmpty(object, object)
0x6cf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6d1: Call 0xa20

0x6d2: Pop(2)
0x6d3: Push((int) 14636)
0x6d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d5: IF (Stack[-1] == 0) GOTO 0x712; Pop(1)

0x6d6: PushEmpty(string)
0x6d7: Stack[-1] = "Neutral"
0x6d8: Call 0x6b5

0x6d9: Pop(1)
0x6da: Push((int) 13402)
0x6db: @@ SetMessage(Stack[-1])
0x6dc: Pop(1)
0x6dd: @@ ClearReplies()
0x6de: Pop(0)
0x6df: Push((int) 13403)
0x6e0: Push((int) -1)
0x6e1: Push((int) 14637)
0x6e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e3: Pop(3)
0x6e4: Push((int) 13404)
0x6e5: Push((int) -1)
0x6e6: Push((int) 14638)
0x6e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e8: Pop(3)
0x6e9: Return(); Pop(0)

0x6ea: PushEmpty(string)
0x6eb: Stack[-1] = "Neutral"
0x6ec: Call 0x6b5

0x6ed: Pop(1)
0x6ee: Push((int) 14671)
0x6ef: @@ SetMessage(Stack[-1])
0x6f0: Pop(1)
0x6f1: @@ ClearReplies()
0x6f2: Pop(0)
0x6f3: Push((int) 14672)
0x6f4: Push((int) 15911)
0x6f5: Push((int) 15910)
0x6f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f7: Pop(3)
0x6f8: Push((int) 14681)
0x6f9: Push((int) 15921)
0x6fa: Push((int) 15920)
0x6fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fc: Pop(3)
0x6fd: Return(); Pop(0)

0x6fe: PushEmpty(string)
0x6ff: Stack[-1] = "Neutral"
0x700: Call 0x6b5

0x701: Pop(1)
0x702: Push((int) 14684)
0x703: @@ SetMessage(Stack[-1])
0x704: Pop(1)
0x705: @@ ClearReplies()
0x706: Pop(0)
0x707: Push((int) 14685)
0x708: Push((int) 15926)
0x709: Push((int) 15925)
0x70a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70b: Pop(3)
0x70c: Push((int) 14696)
0x70d: Push((int) 15937)
0x70e: Push((int) 15936)
0x70f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x710: Pop(3)
0x711: Return(); Pop(0)

0x712: Push((int) 15937)
0x713: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x714: IF (Stack[-1] == 0) GOTO 0x724; Pop(1)

0x715: PushEmpty(string)
0x716: Stack[-1] = "Neutral"
0x717: Call 0x6b5

0x718: Pop(1)
0x719: Push((int) 14697)
0x71a: @@ SetMessage(Stack[-1])
0x71b: Pop(1)
0x71c: @@ ClearReplies()
0x71d: Pop(0)
0x71e: Push((int) 14698)
0x71f: Push((int) -1)
0x720: Push((int) 15938)
0x721: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x722: Pop(3)
0x723: Return(); Pop(0)

0x724: Push((int) 15926)
0x725: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x726: IF (Stack[-1] == 0) GOTO 0x73b; Pop(1)

0x727: PushEmpty(string)
0x728: Stack[-1] = "Neutral"
0x729: Call 0x6b5

0x72a: Pop(1)
0x72b: Push((int) 14686)
0x72c: @@ SetMessage(Stack[-1])
0x72d: Pop(1)
0x72e: @@ ClearReplies()
0x72f: Pop(0)
0x730: Push((int) 14687)
0x731: Push((int) 15928)
0x732: Push((int) 15927)
0x733: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x734: Pop(3)
0x735: Push((int) 14695)
0x736: Push((int) -1)
0x737: Push((int) 15935)
0x738: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x739: Pop(3)
0x73a: Return(); Pop(0)

0x73b: Push((int) 15928)
0x73c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x73d: IF (Stack[-1] == 0) GOTO 0x752; Pop(1)

0x73e: PushEmpty(string)
0x73f: Stack[-1] = "Neutral"
0x740: Call 0x6b5

0x741: Pop(1)
0x742: Push((int) 14688)
0x743: @@ SetMessage(Stack[-1])
0x744: Pop(1)
0x745: @@ ClearReplies()
0x746: Pop(0)
0x747: Push((int) 14689)
0x748: Push((int) 15930)
0x749: Push((int) 15929)
0x74a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74b: Pop(3)
0x74c: Push((int) 14694)
0x74d: Push((int) -1)
0x74e: Push((int) 15934)
0x74f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x750: Pop(3)
0x751: Return(); Pop(0)

0x752: Push((int) 15930)
0x753: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x754: IF (Stack[-1] == 0) GOTO 0x76e; Pop(1)

0x755: PushEmpty(string)
0x756: Stack[-1] = "Neutral"
0x757: Call 0x6b5

0x758: Pop(1)
0x759: Push((int) 14690)
0x75a: @@ SetMessage(Stack[-1])
0x75b: Pop(1)
0x75c: @@ ClearReplies()
0x75d: Pop(0)
0x75e: Push((int) 14691)
0x75f: Push((int) -1)
0x760: Push((int) 15931)
0x761: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x762: Pop(3)
0x763: Push((int) 14692)
0x764: Push((int) -1)
0x765: Push((int) 15932)
0x766: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x767: Pop(3)
0x768: Push((int) 14693)
0x769: Push((int) -1)
0x76a: Push((int) 15933)
0x76b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76c: Pop(3)
0x76d: Return(); Pop(0)

0x76e: Push((int) 15921)
0x76f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x770: IF (Stack[-1] == 0) GOTO 0x780; Pop(1)

0x771: PushEmpty(string)
0x772: Stack[-1] = "Neutral"
0x773: Call 0x6b5

0x774: Pop(1)
0x775: Push((int) 14682)
0x776: @@ SetMessage(Stack[-1])
0x777: Pop(1)
0x778: @@ ClearReplies()
0x779: Pop(0)
0x77a: Push((int) 14683)
0x77b: Push((int) 15913)
0x77c: Push((int) 15922)
0x77d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77e: Pop(3)
0x77f: Return(); Pop(0)

0x780: Push((int) 15911)
0x781: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x782: IF (Stack[-1] == 0) GOTO 0x797; Pop(1)

0x783: PushEmpty(string)
0x784: Stack[-1] = "Neutral"
0x785: Call 0x6b5

0x786: Pop(1)
0x787: Push((int) 14673)
0x788: @@ SetMessage(Stack[-1])
0x789: Pop(1)
0x78a: @@ ClearReplies()
0x78b: Pop(0)
0x78c: Push((int) 14674)
0x78d: Push((int) 15913)
0x78e: Push((int) 15912)
0x78f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x790: Pop(3)
0x791: Push((int) 14678)
0x792: Push((int) 15917)
0x793: Push((int) 15916)
0x794: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x795: Pop(3)
0x796: Return(); Pop(0)

0x797: Push((int) 15917)
0x798: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x799: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x79a: PushEmpty(string)
0x79b: Stack[-1] = "Neutral"
0x79c: Call 0x6b5

0x79d: Pop(1)
0x79e: Push((int) 14679)
0x79f: @@ SetMessage(Stack[-1])
0x7a0: Pop(1)
0x7a1: @@ ClearReplies()
0x7a2: Pop(0)
0x7a3: Push((int) 14680)
0x7a4: Push((int) 15913)
0x7a5: Push((int) 15918)
0x7a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a7: Pop(3)
0x7a8: Return(); Pop(0)

0x7a9: Push((int) 15913)
0x7aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ab: IF (Stack[-1] == 0) GOTO 0x7c0; Pop(1)

0x7ac: PushEmpty(string)
0x7ad: Stack[-1] = "Neutral"
0x7ae: Call 0x6b5

0x7af: Pop(1)
0x7b0: Push((int) 14675)
0x7b1: @@ SetMessage(Stack[-1])
0x7b2: Pop(1)
0x7b3: @@ ClearReplies()
0x7b4: Pop(0)
0x7b5: Push((int) 14676)
0x7b6: Push((int) -1)
0x7b7: Push((int) 15914)
0x7b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b9: Pop(3)
0x7ba: Push((int) 14677)
0x7bb: Push((int) -1)
0x7bc: Push((int) 15915)
0x7bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7be: Pop(3)
0x7bf: Return(); Pop(0)

0x7c0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x7c1: PushEmpty(bool)
0x7c2: Call 0xad3

0x7c3: Pop(0)
0x7c4: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7c5: @ lshStopAnimation()
0x7c6: Pop(0)
0x7c7: GOTO 0x7ca

0x7c8: @ StopAnimation()
0x7c9: Pop(0)
0x7ca: Return(); Pop(0)

0x7cb: GOTO 0x6c6

0x7cc: Return(); Pop(0)

0x7cd: PushEmpty()
0x7ce: Push((int) 1)
0x7cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7d0: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7d1: Stack[-2] = "fire"
0x7d2: Return(); Pop(0)

0x7d3: Stack[-2] = "phys"
0x7d4: Return(); Pop(0)

0x7d5: PushEmpty(cvector, cvector, cvector, cvector)
0x7d6: @ GetPosition(Stack[-2])
0x7d7: Pop(0)
0x7d8: @@ GetPosition(Stack[-1])
0x7d9: Pop(0)
0x7da: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x7db: Return(); Pop(4)

0x7dc: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x7dd: @ GetPosition(Stack[-3])
0x7de: Pop(0)
0x7df: @@ GetPosition(Stack[-2])
0x7e0: Pop(0)
0x7e1: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x7e2: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x7e3: Return(); Pop(6)

0x7e4: PushEmpty(bool, bool)
0x7e5: Push("HasProperty")
0x7e6: Push((int) 2)
0x7e7: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x7e8: Pop(1); Push((bool) Stack[-1] == 0)
0x7e9: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7ea: Stack[-5] = (bool) 0
0x7eb: Return(); Pop(2)

0x7ec: @@ HasProperty(Stack[-3], Stack[-1])
0x7ed: Pop(0)
0x7ee: Stack[-5] = Stack[-1]
0x7ef: Return(); Pop(2)

0x7f0: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x7f1: PushEmpty(bool, object, string)
0x7f2: Stack[-2] = Stack[-18]
0x7f3: Stack[-1] = "health"
0x7f4: Call 0x7e4

0x7f5: Pop(2)
0x7f6: Pop(1); Push((bool) Stack[-1] == 0)
0x7f7: IF (Stack[-1] == 0) GOTO 0x7fa; Pop(1)

0x7f8: Stack[-16] = (float) 0.0
0x7f9: Return(); Pop(12)

0x7fa: PushEmpty(bool, object, string)
0x7fb: Stack[-2] = Stack[-18]
0x7fc: Stack[-1] = "armor"
0x7fd: Call 0x7e4

0x7fe: Pop(2)
0x7ff: Pop(1); Push((bool) Stack[-1] == 0)
0x800: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x801: Stack[-6] = (int) 0
0x802: GOTO 0x806

0x803: Push("armor")
0x804: @@ GetProperty(Stack[-1], Stack[-7])
0x805: Pop(1)
0x806: Push("armor_")
0x807: PushEmpty(string, int)
0x808: Stack[-1] = Stack[-16]
0x809: Call 0x7cd

0x80a: Pop(1)
0x80b: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x80c: PushEmpty(bool, object, string)
0x80d: Stack[-2] = Stack[-18]
0x80e: Stack[-1] = Stack[-8]
0x80f: Call 0x7e4

0x810: Pop(2)
0x811: Pop(1); Push((bool) Stack[-1] == 0)
0x812: IF (Stack[-1] == 0) GOTO 0x815; Pop(1)

0x813: Stack[-4] = (int) 0
0x814: GOTO 0x817

0x815: @@ GetProperty(Stack[-5], Stack[-4])
0x816: Pop(0)
0x817: PushEmpty(float, float, float)
0x818: Pop(0); Push(Stack[-9] + Stack[-7]);
0x819: Push((float)100.0)
0x81a: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x81b: Stack[-1] = (int) 1
0x81c: Call 0x962

0x81d: Stack[-6] = Stack[-3]
0x81e: Pop(3)
0x81f: Push("health")
0x820: @@ GetProperty(Stack[-1], Stack[-3])
0x821: Pop(1)
0x822: Push((int) 1)
0x823: Pop(1); Push(Stack[-1] - Stack[-4]);
0x824: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x825: Push("health")
0x826: PushEmpty(float, float, float, float)
0x827: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x828: Stack[-2] = (int) 0
0x829: Stack[-1] = (int) 1
0x82a: Call 0x969

0x82b: Pop(3)
0x82c: @@ SetProperty(Stack[-2], Stack[-1])
0x82d: Pop(2)
0x82e: Stack[-16] = Stack[-1]
0x82f: Return(); Pop(12)

0x830: PushEmpty(bool, bool)
0x831: @@ IsDead(Stack[-1])
0x832: Pop(0)
0x833: Stack[-4] = Stack[-1]
0x834: Return(); Pop(2)

0x835: PushEmpty(object, object, object, object)
0x836: Pop(0); Push((bool) Stack[-5] == 0)
0x837: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x838: Stack[-6] = (bool) 0
0x839: Return(); Pop(4)

0x83a: PushEmpty(bool)
0x83b: Stack[-1] = (bool) 0
0x83c: Push("IsDead")
0x83d: Push((int) 1)
0x83e: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x83f: IF (Stack[-1] == 0) GOTO 0x846; Pop(1)

0x840: PushEmpty(bool, object)
0x841: Stack[-1] = Stack[-8]
0x842: Call 0x830

0x843: Pop(1)
0x844: IF (Stack[-1] == 0) GOTO 0x846; Pop(1)

0x845: Stack[-1] = (bool) 1
0x846: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x847: Stack[-6] = (bool) 0
0x848: Return(); Pop(4)

0x849: @ GetScene(Stack[-2])
0x84a: Pop(0)
0x84b: Pop(0); Push((bool) Stack[-2] == 0)
0x84c: IF (Stack[-1] == 0) GOTO 0x84f; Pop(1)

0x84d: Stack[-6] = (bool) 0
0x84e: Return(); Pop(4)

0x84f: @@ GetScene(Stack[-1])
0x850: Pop(0)
0x851: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x852: IF (Stack[-1] == 0) GOTO 0x855; Pop(1)

0x853: Stack[-6] = (bool) 0
0x854: Return(); Pop(4)

0x855: Stack[-6] = (bool) 1
0x856: Return(); Pop(4)

0x857: Stack[-1] = 0
0x858: Stack[-2] = 0
0x859: PushEmpty(int, int)
0x85a: PushEmpty(bool, object)
0x85b: Stack[-1] = Stack[-5]
0x85c: Call 0x835

0x85d: Pop(1)
0x85e: Pop(1); Push((bool) Stack[-1] == 0)
0x85f: IF (Stack[-1] == 0) GOTO 0x862; Pop(1)

0x860: Stack[-4] = (bool) 0
0x861: Return(); Pop(2)

0x862: PushEmpty(bool, object, string)
0x863: Stack[-2] = Stack[-6]
0x864: Stack[-1] = "noaccess"
0x865: Call 0x7e4

0x866: Pop(2)
0x867: Pop(1); Push((bool) Stack[-1] == 0)
0x868: IF (Stack[-1] == 0) GOTO 0x86b; Pop(1)

0x869: Stack[-4] = (bool) 1
0x86a: Return(); Pop(2)

0x86b: Push("noaccess")
0x86c: @@ GetProperty(Stack[-1], Stack[-2])
0x86d: Pop(1)
0x86e: Push((int) 0)
0x86f: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x870: Return(); Pop(2)

0x871: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x872: PushEmpty(bool)
0x873: Stack[-1] = (bool) 0
0x874: Push((int) 4)
0x875: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x876: IF (Stack[-1] == 0) GOTO 0x87b; Pop(1)

0x877: Push((int) 5)
0x878: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x879: IF (Stack[-1] == 0) GOTO 0x87b; Pop(1)

0x87a: Stack[-1] = (bool) 1
0x87b: IF (Stack[-1] == 0) GOTO 0x88e; Pop(1)

0x87c: @ GetScene(Stack[-10])
0x87d: Pop(0)
0x87e: @ GetPosition(Stack[-8])
0x87f: Pop(0)
0x880: @ GetEyesHeight(Stack[-7])
0x881: Pop(0)
0x882: Push(CvectorIndex(Stack[-8], 1))
0x883: Push((int) 2)
0x884: Pop(1); Push(Stack[-9] / Stack[-1]);
0x885: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x886: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x887: Push("scripted")
0x888: Push(CVector(0.0, 0.0, 1.0))
0x889: Push("blood.xml")
0x88a: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x88b: Pop(3)
0x88c: Stack[-9] = 0
0x88d: Stack[-10] = 0
0x88e: Pop(0); Push((bool) Stack[-23] == 0)
0x88f: IF (Stack[-1] == 0) GOTO 0x891; Pop(1)

0x890: Return(); Pop(20)

0x891: @ GetSecondaryAnimationType(Stack[-6])
0x892: Pop(0)
0x893: Push((int) 0)
0x894: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x895: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x896: Return(); Pop(20)

0x897: @@ GetPosition(Stack[-5])
0x898: Pop(0)
0x899: @ GetPosition(Stack[-4])
0x89a: Pop(0)
0x89b: @ GetDirection(Stack[-3])
0x89c: Pop(0)
0x89d: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x89e: Push(CvectorIndex(Stack[-2], 0))
0x89f: Push(CvectorIndex(Stack[-4], 0))
0x8a0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8a1: Push(CvectorIndex(Stack[-3], 2))
0x8a2: Push(CvectorIndex(Stack[-5], 2))
0x8a3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8a4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8a5: Push((int) 0)
0x8a6: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x8a7: IF (Stack[-1] == 0) GOTO 0x8aa; Pop(1)

0x8a8: Stack[-1] = "fhit"
0x8a9: GOTO 0x8ab

0x8aa: Stack[-1] = "bhit"
0x8ab: Push("hit_react")
0x8ac: Push("1")
0x8ad: Pop(1); Push(Stack[-3] + Stack[-1]);
0x8ae: Push("2")
0x8af: Pop(1); Push(Stack[-4] + Stack[-1]);
0x8b0: Push((int) -10)
0x8b1: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8b2: Pop(4)
0x8b3: Return(); Pop(20)

0x8b4: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x8b5: @@ GetPosition(Stack[-3])
0x8b6: Pop(0)
0x8b7: @ GetPosition(Stack[-2])
0x8b8: Pop(0)
0x8b9: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x8ba: Push(CvectorIndex(Stack[-1], 0))
0x8bb: Push(CvectorIndex(Stack[-2], 2))
0x8bc: @ RotateAsync(Stack[-2], Stack[-1])
0x8bd: Pop(2)
0x8be: Return(); Pop(6)

0x8bf: PushEmpty(bool, bool)
0x8c0: @ IsLoaded(Stack[-1])
0x8c1: Pop(0)
0x8c2: Stack[-3] = Stack[-1]
0x8c3: Return(); Pop(2)

0x8c4: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x8c5: @@ GetPosition(Stack[-7])
0x8c6: Pop(0)
0x8c7: @@ GetEyesHeight(Stack[-8])
0x8c8: Pop(0)
0x8c9: Push(CvectorIndex(Stack[-7], 1))
0x8ca: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x8cb: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x8cc: @ GetPosition(Stack[-6])
0x8cd: Pop(0)
0x8ce: @ GetEyesHeight(Stack[-8])
0x8cf: Pop(0)
0x8d0: Push(CvectorIndex(Stack[-6], 1))
0x8d1: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x8d2: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x8d3: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x8d4: Push(CvectorIndex(Stack[-5], 1))
0x8d5: Stack[-1] = (int) 0
0x8d6: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x8d7: Pop(0); Push(Stack[-5] | Stack[-5]);
0x8d8: Pop(1); Push(Sqrt(Stack[-1]))
0x8d9: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x8da: Stack[-4] = -Stack[-5]; Pop(0);
0x8db: Push((int) 70)
0x8dc: Pop(1); Push(Stack[-6] * Stack[-1]);
0x8dd: PushEmpty(cvector, cvector)
0x8de: Push(CVector(0.0, 1.0, 0.0))
0x8df: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x8e0: Call 0x958

0x8e1: Pop(1)
0x8e2: Push((int) 25)
0x8e3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8e4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8e5: Push(CVector(0.0, 10.0, 0.0))
0x8e6: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x8e7: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x8e8: @ IsOverrideActive(Stack[-1])
0x8e9: Pop(0)
0x8ea: Push(Stack[-1])
0x8eb: IF (Stack[-1] == 0) GOTO 0x8ee; Pop(1)

0x8ec: Stack[-18] = (bool) 0
0x8ed: Return(); Pop(16)

0x8ee: @ StopWorld()
0x8ef: Pop(0)
0x8f0: @ CameraTransit(Stack[-2], Stack[-4])
0x8f1: Pop(0)
0x8f2: Push(CvectorIndex(Stack[-3], 0))
0x8f3: Push(CvectorIndex(Stack[-4], 2))
0x8f4: @ Rotate(Stack[-2], Stack[-1])
0x8f5: Pop(2)
0x8f6: @ CameraWaitForPlayFinish()
0x8f7: Pop(0)
0x8f8: @ ResumeWorld()
0x8f9: Pop(0)
0x8fa: Stack[-18] = (bool) 1
0x8fb: Return(); Pop(16)

0x8fc: PushEmpty()
0x8fd: @ CameraSwitchToNormal()
0x8fe: Pop(0)
0x8ff: Return(); Pop(0)

0x900: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x901: @@ GetPosition(Stack[-7])
0x902: Pop(0)
0x903: @@ GetEyesHeight(Stack[-8])
0x904: Pop(0)
0x905: Push(CvectorIndex(Stack[-7], 1))
0x906: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x907: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x908: @ GetPosition(Stack[-6])
0x909: Pop(0)
0x90a: @ GetEyesHeight(Stack[-8])
0x90b: Pop(0)
0x90c: Push(CvectorIndex(Stack[-6], 1))
0x90d: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x90e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x90f: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x910: Push(CvectorIndex(Stack[-5], 1))
0x911: Stack[-1] = (int) 0
0x912: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x913: Pop(0); Push(Stack[-5] | Stack[-5]);
0x914: Pop(1); Push(Sqrt(Stack[-1]))
0x915: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x916: Stack[-4] = -Stack[-5]; Pop(0);
0x917: Push((int) 70)
0x918: Pop(1); Push(Stack[-6] * Stack[-1]);
0x919: Push(CVector(0.0, 10.0, 0.0))
0x91a: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x91b: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x91c: @ IsOverrideActive(Stack[-1])
0x91d: Pop(0)
0x91e: Push(Stack[-1])
0x91f: IF (Stack[-1] == 0) GOTO 0x922; Pop(1)

0x920: Stack[-18] = (bool) 0
0x921: Return(); Pop(16)

0x922: @ StopWorld()
0x923: Pop(0)
0x924: @ CameraTransit(Stack[-2], Stack[-4])
0x925: Pop(0)
0x926: Push(CvectorIndex(Stack[-3], 0))
0x927: Push(CvectorIndex(Stack[-4], 2))
0x928: @ Rotate(Stack[-2], Stack[-1])
0x929: Pop(2)
0x92a: @ CameraWaitForPlayFinish()
0x92b: Pop(0)
0x92c: @ ResumeWorld()
0x92d: Pop(0)
0x92e: Stack[-18] = (bool) 1
0x92f: Return(); Pop(16)

0x930: PushEmpty()
0x931: @ CameraSwitchToNormal()
0x932: Pop(0)
0x933: Return(); Pop(0)

0x934: PushEmpty(float, float, float, float)
0x935: Push("playing ")
0x936: Pop(1); Push(Stack[-1] + Stack[-6]);
0x937: @ Trace(Stack[-1])
0x938: Pop(1)
0x939: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x93a: Pop(0)
0x93b: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x93c: Pop(0)
0x93d: Push("start: ")
0x93e: Pop(1); Push(Stack[-1] + Stack[-3]);
0x93f: @ Trace(Stack[-1])
0x940: Pop(1)
0x941: Push("end: ")
0x942: Pop(1); Push(Stack[-1] + Stack[-2]);
0x943: @ Trace(Stack[-1])
0x944: Pop(1)
0x945: Return(); Pop(4)

0x946: PushEmpty(float, cvector, float, cvector)
0x947: @@ GetEyesHeight(Stack[-2])
0x948: Pop(0)
0x949: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x94a: Push(CvectorIndex(Stack[-1], 1))
0x94b: Stack[-1] = Stack[-3]
0x94c: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x94d: Push("head")
0x94e: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x94f: Pop(1)
0x950: Return(); Pop(4)

0x951: PushEmpty(bool)
0x952: Call 0xad3

0x953: Pop(0)
0x954: IF (Stack[-1] == 0) GOTO 0x957; Pop(1)

0x955: @ lshStopSpeech()
0x956: Pop(0)
0x957: Return(); Pop(0)

0x958: PushEmpty(float, float)
0x959: Pop(0); Push(Stack[-3] | Stack[-3]);
0x95a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x95b: Push((float)0.0)
0x95c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x95d: IF (Stack[-1] == 0) GOTO 0x960; Pop(1)

0x95e: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x95f: Return(); Pop(2)

0x960: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x961: Return(); Pop(2)

0x962: PushEmpty()
0x963: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x964: IF (Stack[-1] == 0) GOTO 0x967; Pop(1)

0x965: Stack[-3] = Stack[-2]
0x966: GOTO 0x968

0x967: Stack[-3] = Stack[-1]
0x968: Return(); Pop(0)

0x969: PushEmpty()
0x96a: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x96b: IF (Stack[-1] == 0) GOTO 0x96e; Pop(1)

0x96c: Stack[-4] = Stack[-2]
0x96d: Return(); Pop(0)

0x96e: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x96f: IF (Stack[-1] == 0) GOTO 0x972; Pop(1)

0x970: Stack[-4] = Stack[-1]
0x971: Return(); Pop(0)

0x972: Stack[-4] = Stack[-3]
0x973: Return(); Pop(0)

0x974: PushEmpty()
0x975: Push(CvectorIndex(Stack[-2], 0))
0x976: Push(CvectorIndex(Stack[-2], 0))
0x977: Pop(2); Push(Stack[-2] * Stack[-1]);
0x978: Push(CvectorIndex(Stack[-3], 2))
0x979: Push(CvectorIndex(Stack[-3], 2))
0x97a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x97b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x97c: Return(); Pop(0)

0x97d: PushEmpty()
0x97e: Push(CvectorIndex(Stack[-1], 0))
0x97f: Push(CvectorIndex(Stack[-2], 0))
0x980: Pop(2); Push(Stack[-2] * Stack[-1]);
0x981: Push(CvectorIndex(Stack[-2], 2))
0x982: Push(CvectorIndex(Stack[-3], 2))
0x983: Pop(2); Push(Stack[-2] * Stack[-1]);
0x984: Pop(2); Push(Stack[-2] + Stack[-1]);
0x985: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x986: Return(); Pop(0)

0x987: PushEmpty()
0x988: PushEmpty(float, cvector, cvector)
0x989: Stack[-2] = Stack[-5]
0x98a: Stack[-1] = Stack[-4]
0x98b: Call 0x974

0x98c: Pop(2)
0x98d: PushEmpty(float, cvector)
0x98e: Stack[-1] = Stack[-5]
0x98f: Call 0x97d

0x990: Pop(1)
0x991: PushEmpty(float, cvector)
0x992: Stack[-1] = Stack[-5]
0x993: Call 0x97d

0x994: Pop(1)
0x995: Pop(2); Push(Stack[-2] * Stack[-1]);
0x996: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x997: Return(); Pop(0)

0x998: PushEmpty(float, float)
0x999: @ GetGameTime(Stack[-1])
0x99a: Pop(0)
0x99b: Push((int) 1)
0x99c: PushEmpty(int)
0x99d: Push((int) 24)
0x99e: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x99f: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x9a0: Return(); Pop(2)

0x9a1: PushEmpty()
0x9a2: PushEmpty(object)
0x9a3: Stack[-1] = Stack[-2]
0x9a4: Push(-1, 0); TaskCall(1)
0x9a5: Call 0x16

0x9a6: Pop(-1, 0); TaskReturn
0x9a7: Pop(1)
0x9a8: Return(); Pop(0)

0x9a9: PushEmpty(float, float)
0x9aa: Push("health")
0x9ab: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9ac: IF (Stack[-1] == 0) GOTO 0x9b5; Pop(1)

0x9ad: Push("health")
0x9ae: @ GetProperty(Stack[-1], Stack[-2])
0x9af: Pop(1)
0x9b0: Push((int) 0)
0x9b1: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x9b2: IF (Stack[-1] == 0) GOTO 0x9b5; Pop(1)

0x9b3: @ SignalDeath(Stack[-4])
0x9b4: Pop(0)
0x9b5: Return(); Pop(2)

0x9b6: PushEmpty()
0x9b7: PushEmpty(object)
0x9b8: Stack[-1] = Stack[-2]
0x9b9: Call 0x9a1

0x9ba: Pop(1)
0x9bb: Return(); Pop(0)

0x9bc: PushEmpty()
0x9bd: PushEmpty(object, int, float)
0x9be: Stack[-3] = Stack[-7]
0x9bf: Stack[-2] = Stack[-6]
0x9c0: Stack[-1] = Stack[-5]
0x9c1: Call 0x871

0x9c2: Pop(3)
0x9c3: Return(); Pop(0)

0x9c4: PushEmpty(string, string)
0x9c5: Stack[-1] = "idle"
0x9c6: Push(Stack[-3])
0x9c7: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9c8: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x9c9: Stack[-4] = Stack[-1]
0x9ca: Return(); Pop(2)

0x9cb: PushEmpty(int, bool, int, bool)
0x9cc: Stack[-2] = (int) 0
0x9cd: Push("all")
0x9ce: PushEmpty(string, int)
0x9cf: Stack[-1] = Stack[-5]
0x9d0: Call 0x9c4

0x9d1: Pop(1)
0x9d2: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x9d3: Pop(2)
0x9d4: Pop(0); Push((bool) Stack[-1] == 0)
0x9d5: IF (Stack[-1] == 0) GOTO 0x9d7; Pop(1)

0x9d6: GOTO 0x9da

0x9d7: Push((int) 1)
0x9d8: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x9d9: GOTO 0x9cd

0x9da: Stack[-5] = Stack[-2]
0x9db: Return(); Pop(4)

0x9dc: PushEmpty()
0x9dd: PushEmpty(bool)
0x9de: Call 0xb03

0x9df: Pop(0)
0x9e0: IF (Stack[-1] == 0) GOTO 0x9e3; Pop(1)

0x9e1: Stack[-2] = (int) 2
0x9e2: GOTO 0x9e4

0x9e3: Stack[-2] = (int) 0
0x9e4: Return(); Pop(0)

0x9e5: PushEmpty()
0x9e6: PushEmpty(object)
0x9e7: Stack[-1] = Stack[-2]
0x9e8: Push(-1, 1); TaskCall(4)
0x9e9: Call 0x29b

0x9ea: Pop(-1, 1); TaskReturn
0x9eb: Pop(1)
0x9ec: Return(); Pop(0)

0x9ed: PushEmpty()
0x9ee: PushEmpty(bool, object)
0x9ef: Stack[-1] = Stack[-3]
0x9f0: Call 0x859

0x9f1: Pop(1)
0x9f2: IF (Stack[-1] == 0) GOTO 0x9f5; Pop(1)

0x9f3: Stack[-2] = (int) 2
0x9f4: GOTO 0x9f6

0x9f5: Stack[-2] = (int) 0
0x9f6: Return(); Pop(0)

0x9f7: PushEmpty()
0x9f8: PushEmpty(object)
0x9f9: Stack[-1] = Stack[-2]
0x9fa: Push(-1, 5); TaskCall(5)
0x9fb: Call 0x37d

0x9fc: Pop(-1, 5); TaskReturn
0x9fd: Pop(1)
0x9fe: Return(); Pop(0)

0x9ff: PushEmpty()
0xa00: PushEmpty(int, object)
0xa01: Stack[-1] = Stack[-3]
0xa02: Call 0x9ed

0xa03: Stack[-4] = Stack[-2]
0xa04: Pop(2)
0xa05: Return(); Pop(0)

0xa06: PushEmpty()
0xa07: PushEmpty(object)
0xa08: Stack[-1] = Stack[-2]
0xa09: Call 0x9f7

0xa0a: Pop(1)
0xa0b: Return(); Pop(0)

0xa0c: PushEmpty()
0xa0d: Stack[-2] = (int) 0
0xa0e: Return(); Pop(0)

0xa0f: PushEmpty()
0xa10: Return(); Pop(0)

0xa11: PushEmpty()
0xa12: Stack[-3] = (int) 0
0xa13: Return(); Pop(0)

0xa14: PushEmpty()
0xa15: Return(); Pop(0)

0xa16: PushEmpty()
0xa17: Stack[-2] = (int) 2
0xa18: Return(); Pop(0)

0xa19: PushEmpty()
0xa1a: PushEmpty(object)
0xa1b: Stack[-1] = Stack[-2]
0xa1c: Call 0xadd

0xa1d: Pop(1)
0xa1e: Return(); Pop(0)

0xa1f: Return(); Pop(0)

0xa20: PushEmpty()
0xa21: Push((int) 1000)
0xa22: @@ SetReturnValue(Stack[-1])
0xa23: Pop(1)
0xa24: Return(); Pop(0)

0xa25: PushEmpty(int, int)
0xa26: Push("player")
0xa27: @ GetVariable(Stack[-1], Stack[-2])
0xa28: Pop(1)
0xa29: Push((int) 0)
0xa2a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2b: IF (Stack[-1] == 0) GOTO 0xa2f; Pop(1)

0xa2c: Stack[-3] = (int) 200001
0xa2d: Return(); Pop(2)

0xa2e: GOTO 0xa34

0xa2f: Push((int) 1)
0xa30: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa31: IF (Stack[-1] == 0) GOTO 0xa34; Pop(1)

0xa32: Stack[-3] = (int) 200002
0xa33: Return(); Pop(2)

0xa34: Stack[-3] = (int) 200003
0xa35: Return(); Pop(2)

0xa36: PushEmpty(int, int, int, bool, int, int, int, bool)
0xa37: Pop(0); Push((bool) Stack[-10] > Stack[-9])
0xa38: IF (Stack[-1] == 0) GOTO 0xa3d; Pop(1)

0xa39: Push("GenerateMoney: iMin > iMax")
0xa3a: @ Trace(Stack[-1])
0xa3b: Pop(1)
0xa3c: Return(); Pop(8)

0xa3d: Stack[-4] = (int) 0
0xa3e: Pop(0); Push((bool) Stack[-10] != Stack[-9])
0xa3f: IF (Stack[-1] == 0) GOTO 0xa44; Pop(1)

0xa40: Pop(0); Push(Stack[-9] - Stack[-10]);
0xa41: @ irand(Stack[-4], Stack[-1])
0xa42: Pop(1)
0xa43: GOTO 0xa48

0xa44: Push((int) 0)
0xa45: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0xa46: IF (Stack[-1] == 0) GOTO 0xa48; Pop(1)

0xa47: Return(); Pop(8)

0xa48: Stack[-4] = Stack[-4] + Stack[-10]; Pop(0);
0xa49: Push((int) 0)
0xa4a: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xa4b: IF (Stack[-1] == 0) GOTO 0xa4d; Pop(1)

0xa4c: Return(); Pop(8)

0xa4d: Push("Money")
0xa4e: @ GetInvItemByName(Stack[-3], Stack[-1])
0xa4f: Pop(1)
0xa50: Push((int) 0)
0xa51: @ AddItem(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0xa52: Pop(1)
0xa53: Return(); Pop(8)

0xa54: PushEmpty(bool, int, bool, int)
0xa55: Push((int) 0)
0xa56: @ ClearSubContainer(Stack[-1])
0xa57: Pop(1)
0xa58: PushEmpty(int, int)
0xa59: Stack[-2] = (int) 0
0xa5a: Push((int) 10)
0xa5b: PushEmpty(int)
0xa5c: Call 0x998

0xa5d: Pop(0)
0xa5e: Push((int) 10)
0xa5f: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa60: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xa61: Call 0xa36

0xa62: Pop(2)
0xa63: Push((int) 4)
0xa64: @ irand(Stack[-2], Stack[-1])
0xa65: Pop(1)
0xa66: Push((int) 0)
0xa67: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa68: IF (Stack[-1] == 0) GOTO 0xa71; Pop(1)

0xa69: PushEmpty(int, string)
0xa6a: Stack[-1] = "hook"
0xa6b: Call 0xaca

0xa6c: Pop(1)
0xa6d: Push((int) 0)
0xa6e: Push((int) 1)
0xa6f: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0xa70: Pop(3)
0xa71: Push((int) 10)
0xa72: @ irand(Stack[-2], Stack[-1])
0xa73: Pop(1)
0xa74: Push((int) 0)
0xa75: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa76: IF (Stack[-1] == 0) GOTO 0xa7f; Pop(1)

0xa77: PushEmpty(int, string)
0xa78: Stack[-1] = "watch"
0xa79: Call 0xaca

0xa7a: Pop(1)
0xa7b: Push((int) 0)
0xa7c: Push((int) 1)
0xa7d: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0xa7e: Pop(3)
0xa7f: Return(); Pop(4)

0xa80: PushEmpty(int, bool, int, bool)
0xa81: Push((int) 0)
0xa82: @ ClearSubContainer(Stack[-1])
0xa83: Pop(1)
0xa84: Push(Stack[-5])
0xa85: IF (Stack[-1] == 0) GOTO 0xaa1; Pop(1)

0xa86: Push((int) 3)
0xa87: @ irand(Stack[-3], Stack[-1])
0xa88: Pop(1)
0xa89: Push((int) 0)
0xa8a: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xa8b: IF (Stack[-1] == 0) GOTO 0xa93; Pop(1)

0xa8c: PushEmpty(int, string)
0xa8d: Stack[-1] = "alpha_pills"
0xa8e: Call 0xaca

0xa8f: Pop(1)
0xa90: Push((int) 0)
0xa91: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0xa92: Pop(2)
0xa93: Push((int) 3)
0xa94: @ irand(Stack[-3], Stack[-1])
0xa95: Pop(1)
0xa96: Push((int) 0)
0xa97: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xa98: IF (Stack[-1] == 0) GOTO 0xaa0; Pop(1)

0xa99: PushEmpty(int, string)
0xa9a: Stack[-1] = "meradorm"
0xa9b: Call 0xaca

0xa9c: Pop(1)
0xa9d: Push((int) 0)
0xa9e: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0xa9f: Pop(2)
0xaa0: GOTO 0xac9

0xaa1: Push((int) 3)
0xaa2: @ irand(Stack[-3], Stack[-1])
0xaa3: Pop(1)
0xaa4: Push((int) 0)
0xaa5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa6: IF (Stack[-1] == 0) GOTO 0xaaf; Pop(1)

0xaa7: PushEmpty(int, string)
0xaa8: Stack[-1] = "lockpick"
0xaa9: Call 0xaca

0xaaa: Pop(1)
0xaab: Push((int) 0)
0xaac: Push((int) 1)
0xaad: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xaae: Pop(3)
0xaaf: Push((int) 4)
0xab0: @ irand(Stack[-3], Stack[-1])
0xab1: Pop(1)
0xab2: Push((int) 0)
0xab3: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xab4: IF (Stack[-1] == 0) GOTO 0xabc; Pop(1)

0xab5: PushEmpty(int, string)
0xab6: Stack[-1] = "rifle_ammo"
0xab7: Call 0xaca

0xab8: Pop(1)
0xab9: Push((int) 0)
0xaba: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0xabb: Pop(2)
0xabc: Push((int) 4)
0xabd: @ irand(Stack[-3], Stack[-1])
0xabe: Pop(1)
0xabf: Push((int) 0)
0xac0: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xac1: IF (Stack[-1] == 0) GOTO 0xac9; Pop(1)

0xac2: PushEmpty(int, string)
0xac3: Stack[-1] = "revolver_ammo"
0xac4: Call 0xaca

0xac5: Pop(1)
0xac6: Push((int) 0)
0xac7: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0xac8: Pop(2)
0xac9: Return(); Pop(4)

0xaca: PushEmpty(int, int)
0xacb: @ GetInvItemByName(Stack[-1], Stack[-3])
0xacc: Pop(0)
0xacd: Stack[-4] = Stack[-1]
0xace: Return(); Pop(2)

0xacf: Stack[-1] = (int) 3343
0xad0: Return(); Pop(0)

0xad1: Stack[-1] = "ui/NPC_None.png"
0xad2: Return(); Pop(0)

0xad3: Stack[-1] = (bool) 0
0xad4: Return(); Pop(0)

0xad5: Push(GlobalVars[1])
0xad6: Stack[-1] = (bool) 0
0xad7: GlobalVars[1] = Stack[-1]; Pop(1)
0xad8: PushEmpty(bool)
0xad9: Stack[-1] = (bool) 1
0xada: Call 0xa80

0xadb: Pop(1)
0xadc: Return(); Pop(0)

0xadd: PushEmpty(bool, bool)
0xade: Push(GlobalVars[1])
0xadf: IF (Stack[-1] == 0) GOTO 0xae8; Pop(1)

0xae0: @ IsOverrideActive(Stack[-1])
0xae1: Pop(0)
0xae2: Pop(0); Push((bool) Stack[-1] == 0)
0xae3: IF (Stack[-1] == 0) GOTO 0xae6; Pop(1)

0xae4: @ WorkWithCorpse(Stack[-3])
0xae5: Pop(0)
0xae6: Return(); Pop(2)

0xae7: GOTO 0xb02

0xae8: Push((int) 1000)
0xae9: PushEmpty(int, object)
0xaea: Stack[-1] = Stack[-6]
0xaeb: Push(-2, 1); TaskCall(7)
0xaec: Call 0x614

0xaed: Pop(-2, 1); TaskReturn
0xaee: Pop(1)
0xaef: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xaf0: IF (Stack[-1] == 0) GOTO 0xb02; Pop(1)

0xaf1: PushEmpty(bool, object)
0xaf2: Stack[-1] = Stack[-5]
0xaf3: Call 0x900

0xaf4: Pop(1)
0xaf5: Pop(1); Push((bool) Stack[-1] == 0)
0xaf6: IF (Stack[-1] == 0) GOTO 0xaf8; Pop(1)

0xaf7: Return(); Pop(2)

0xaf8: PushEmpty(object)
0xaf9: Stack[-1] = Stack[-4]
0xafa: Push(-1, 1); TaskCall(0)
0xafb: Call 0x0

0xafc: Pop(-1, 1); TaskReturn
0xafd: Pop(1)
0xafe: PushEmpty(object)
0xaff: Stack[-1] = Stack[-4]
0xb00: Call 0x930

0xb01: Pop(1)
0xb02: Return(); Pop(2)

0xb03: Stack[-1] = (bool) 0
0xb04: Return(); Pop(0)

0xb05: PushEmpty(string, bool, string, bool)
0xb06: PushEmpty(bool, object, string)
0xb07: Stack[-2] = Stack[-8]
0xb08: Stack[-1] = "class"
0xb09: Call 0x7e4

0xb0a: Pop(2)
0xb0b: Pop(1); Push((bool) Stack[-1] == 0)
0xb0c: IF (Stack[-1] == 0) GOTO 0xb0f; Pop(1)

0xb0d: Stack[-7] = (bool) 0
0xb0e: Return(); Pop(4)

0xb0f: Push("class")
0xb10: @@ GetProperty(Stack[-1], Stack[-3])
0xb11: Pop(1)
0xb12: Push("rat")
0xb13: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb14: IF (Stack[-1] == 0) GOTO 0xb18; Pop(1)

0xb15: Stack[-7] = (bool) 0
0xb16: Return(); Pop(4)

0xb17: GOTO 0xb1d

0xb18: Push("dog")
0xb19: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb1a: IF (Stack[-1] == 0) GOTO 0xb1d; Pop(1)

0xb1b: Stack[-7] = (bool) 0
0xb1c: Return(); Pop(4)

0xb1d: @ CanSee(Stack[-1], Stack[-6])
0xb1e: Pop(0)
0xb1f: PushEmpty(bool)
0xb20: Stack[-1] = (bool) 1
0xb21: Push(Stack[-2])
0xb22: IF (Stack[-1] == 0) GOTO 0xb2b; Pop(1)

0xb23: PushEmpty(float, object)
0xb24: Stack[-1] = Stack[-9]
0xb25: Call 0x7dc

0xb26: Pop(1)
0xb27: Push((float)250000.0)
0xb28: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xb29: IF (Stack[-1] == 0) GOTO 0xb2b; Pop(1)

0xb2a: Stack[-1] = (bool) 0
0xb2b: IF (Stack[-1] == 0) GOTO 0xb31; Pop(1)

0xb2c: Push((float)-0.3)
0xb2d: @ ReportReputationChange(Stack[-7], Stack[-6], Stack[-1])
0xb2e: Pop(1)
0xb2f: Stack[-7] = (bool) 1
0xb30: Return(); Pop(4)

0xb31: @ CanSee(Stack[-1], Stack[-5])
0xb32: Pop(0)
0xb33: PushEmpty(bool)
0xb34: Stack[-1] = (bool) 1
0xb35: Push(Stack[-2])
0xb36: IF (Stack[-1] == 0) GOTO 0xb3f; Pop(1)

0xb37: PushEmpty(float, object)
0xb38: Stack[-1] = Stack[-8]
0xb39: Call 0x7dc

0xb3a: Pop(1)
0xb3b: Push((float)250000.0)
0xb3c: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xb3d: IF (Stack[-1] == 0) GOTO 0xb3f; Pop(1)

0xb3e: Stack[-1] = (bool) 0
0xb3f: IF (Stack[-1] == 0) GOTO 0xb42; Pop(1)

0xb40: Stack[-7] = (bool) 1
0xb41: Return(); Pop(4)

0xb42: Stack[-7] = (bool) 0
0xb43: Return(); Pop(4)

0xb44: PushEmpty()
0xb45: Push(GlobalVars[1])
0xb46: Stack[-1] = (bool) 1
0xb47: GlobalVars[1] = Stack[-1]; Pop(1)
0xb48: Push((int) 50)
0xb49: Push((int) 40)
0xb4a: @ SetRTEnvelope(Stack[-2], Stack[-1])
0xb4b: Pop(2)
0xb4c: PushEmpty(bool)
0xb4d: Stack[-1] = (bool) 1
0xb4e: Call 0xa54

0xb4f: Pop(1)
0xb50: Return(); Pop(0)

