GlobalVarCount = 1
	G_VAR_0 object 

Strings:
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
	all
	shoot_begin
	shot
	shoot_end
	attack_on
	attack_off
	hunt
	@Stop hunt
	attack_begin1
	scripted
	richochet.xml
	Material
	SetScriptProperty
	attack_end1
	quest_d11_01
	soldier_attack
	spine
	in
	fire
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
	blood.xml
	fhit
	bhit
	hit_react
	2
	GenerateMoney: iMin > iMax
	Money
	rifle_ammo
	rusk
	add
	reputation
	RemoveStationaryActor

Import:
	SetRTEnvelope (2 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	WorkWithCorpse (1 args)
	GetPosition (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	Stop (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	Face (1 args)
	Sleep (2 args)
	KillTimer (1 args)
	StopGroup0 (0 args)
	SetTimer (2 args)
	CanSee (2 args)
	WaitForAnimEnd (1 args)
	Speak (1 args)
	SetAttackState (1 args)
	Sleep (1 args)
	Trace (1 args)
	StopAnimation (0 args)
	ReportAttack (1 args)
	RandVecCone3D (3 args)
	GetVictimMaterial (4 args)
	ReportHit (4 args)
	GetScene (1 args)
	AddActorByType (6 args)
	IsPlayerActor (2 args)
	GetEyesHeight (1 args)
	DirLookAsyncRel (3 args)
	GetPFPosition (1 args)
	irand (2 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	Rotate (3 args)
	FindActor (2 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	RotateAsync (2 args)
	RotateAsync (3 args)
	self (1 args)
	CreateObjectSet (1 args)
	Trigger (2 args)
	GetInvItemByName (2 args)
	AddItem (4 args)
	ClearSubContainer (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ResetAAS (0 args)
	ReportReputationChange (3 args)

RunOp = 0x2cc
RunTask = 4

GlobalTasks: 
	GTASK_0  Params = 1
		EVENT_0 Op = 0x18 Vars = (object)
		EVENT_22 Op = 0x8d Vars = (object, int, float, float)
		EVENT_16 Op = 0x8f Vars = (object, string)
		EVENT_41 Op = 0x91 Vars = (object)
	GTASK_1 Vars = (object) Params = 1
		EVENT_41 Op = 0xb3 Vars = (object)
		EVENT_3 Op = 0xbc Vars = (object)
		EVENT_4 Op = 0xc5 Vars = (object)
		EVENT_17 Op = 0xd1 Vars = (object)
		EVENT_30 Op = 0xe5 Vars = (object, object)
		EVENT_1 Op = 0xf1 Vars = (object)
		EVENT_7 Op = 0xff Vars = (int)
	GTASK_2 Vars = (object, bool) Params = 1
		EVENT_17 Op = 0x175 Vars = (object)
		EVENT_30 Op = 0x189 Vars = (object, object)
		EVENT_41 Op = 0x19c Vars = (object)
	GTASK_3 Vars = (object, object, bool) Params = 2
		EVENT_3 Op = 0x22a Vars = (object)
		EVENT_1 Op = 0x238 Vars = (object)
		EVENT_17 Op = 0x2a8 Vars = (object)
		EVENT_30 Op = 0x2c0 Vars = (object, object)
	GTASK_4  Params = 0
		EVENT_1 Op = 0x2d0 Vars = (object)
		EVENT_17 Op = 0x2dc Vars = (object)
		EVENT_26 Op = 0x2e3 Vars = (string)
	GTASK_5 Vars = (object, bool) Params = 1
		EVENT_2 Op = 0x302 Vars = (object)
		EVENT_17 Op = 0x309 Vars = (object)
		EVENT_26 Op = 0x310 Vars = (string)
	GTASK_6 Vars = (object) Params = 2
		EVENT_6 Op = 0x37b Vars = ()
		EVENT_2 Op = 0x37e Vars = (object)
		EVENT_17 Op = 0x384 Vars = (object)
		EVENT_26 Op = 0x38b Vars = (string)
	GTASK_7 Vars = (cvector, cvector) Params = 1
		EVENT_3 Op = 0x3af Vars = (object)
		EVENT_17 Op = 0x3cd Vars = (object)
		EVENT_30 Op = 0x3e1 Vars = (object, object)
		EVENT_1 Op = 0x3ed Vars = (object)

Events:
EVENT_22 Op = 0x5fb Vars = (object, int, float, float)
EVENT_16 Op = 0x603 Vars = (object, string)
EVENT_41 Op = 0x610 Vars = (object)

0x0: PushEmpty()
0x1: PushEmpty()
0x2: Call 0x5c9

0x3: Pop(0)
0x4: PushEmpty(object)
0x5: Stack[-1] = Stack[-2]
0x6: Call 0x9

0x7: Pop(1)
0x8: Return(); Pop(0)

0x9: PushEmpty()
0xa: EventDisable(0)
0xb: PushEmpty(object)
0xc: Stack[-1] = Stack[-2]
0xd: Call 0x20

0xe: Pop(1)
0xf: Push((int) 50)
0x10: Push((int) 40)
0x11: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x12: Pop(2)
0x13: EventEnable(0)
0x14: @ Hold()
0x15: Pop(0)
0x16: GOTO 0x14

0x17: Return(); Pop(0)

0x18: PushEmpty(bool, bool)
0x19: @ IsOverrideActive(Stack[-1])
0x1a: Pop(0)
0x1b: Pop(0); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: @ WorkWithCorpse(Stack[-3])
0x1e: Pop(0)
0x1f: Return(); Pop(2)

0x20: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x21: Pop(0); Push((bool) Stack[-21] == 0)
0x22: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x23: PushEmpty(string)
0x24: Stack[-1] = "fdie"
0x25: Call 0x77

0x26: Pop(1)
0x27: GOTO 0x76

0x28: @@ GetPosition(Stack[-10])
0x29: Pop(0)
0x2a: @ GetPosition(Stack[-9])
0x2b: Pop(0)
0x2c: @ GetDirection(Stack[-8])
0x2d: Pop(0)
0x2e: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x2f: Push(CvectorIndex(Stack[-7], 0))
0x30: Push(CvectorIndex(Stack[-9], 0))
0x31: Pop(2); Push(Stack[-2] * Stack[-1]);
0x32: Push(CvectorIndex(Stack[-8], 2))
0x33: Push(CvectorIndex(Stack[-10], 2))
0x34: Pop(2); Push(Stack[-2] * Stack[-1]);
0x35: Pop(2); Push(Stack[-2] + Stack[-1]);
0x36: Push((int) 0)
0x37: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-6] = "fdie"
0x3a: GOTO 0x3c

0x3b: Stack[-6] = "bdie"
0x3c: @ RemoveRTEnvelope()
0x3d: Pop(0)
0x3e: @ SetDeathState()
0x3f: Pop(0)
0x40: @ Stop()
0x41: Pop(0)
0x42: @ StopAsync()
0x43: Pop(0)
0x44: Stack[-5] = Stack[-21]
0x45: Push("GetScriptProperty")
0x46: Push((int) 2)
0x47: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x48: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x49: Push("Owner")
0x4a: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x4b: Pop(1)
0x4c: Push(Stack[-4])
0x4d: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x4e: Push("Owner")
0x4f: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x50: Pop(1)
0x51: Pop(0); Push((bool) Stack[-5] == 0)
0x52: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x53: Stack[-5] = Stack[-21]
0x54: Push("@GetEyesHeight")
0x55: Push((int) 1)
0x56: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x57: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x58: @@ GetEyesHeight(Stack[-2])
0x59: Pop(0)
0x5a: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x5b: Push(CvectorIndex(Stack[-1], 1))
0x5c: Stack[-1] = Stack[-3]
0x5d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5e: Push("head")
0x5f: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x60: Pop(1)
0x61: Stack[-3] = (bool) 1
0x62: GOTO 0x64

0x63: Stack[-3] = (bool) 0
0x64: Push("all")
0x65: @ PlayAnimation(Stack[-1], Stack[-7])
0x66: Pop(1)
0x67: @ WaitForAnimEnd()
0x68: Pop(0)
0x69: Push(Stack[-3])
0x6a: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6b: @ StopAsync()
0x6c: Pop(0)
0x6d: Push("head")
0x6e: @ UnlookAsync(Stack[-1])
0x6f: Pop(1)
0x70: Push("all")
0x71: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x72: Pop(1)
0x73: @ RemoveEnvelope()
0x74: Pop(0)
0x75: Stack[-5] = 0
0x76: Return(); Pop(20)

0x77: PushEmpty()
0x78: @ RemoveRTEnvelope()
0x79: Pop(0)
0x7a: @ SetDeathState()
0x7b: Pop(0)
0x7c: @ Stop()
0x7d: Pop(0)
0x7e: @ StopAsync()
0x7f: Pop(0)
0x80: @ StopSecondaryAnimation()
0x81: Pop(0)
0x82: Push("all")
0x83: @ PlayAnimation(Stack[-1], Stack[-2])
0x84: Pop(1)
0x85: @ WaitForAnimEnd()
0x86: Pop(0)
0x87: Push("all")
0x88: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x89: Pop(1)
0x8a: @ RemoveEnvelope()
0x8b: Pop(0)
0x8c: Return(); Pop(0)

0x8d: PushEmpty()
0x8e: Return(); Pop(0)

0x8f: PushEmpty()
0x90: Return(); Pop(0)

0x91: PushEmpty()
0x92: Return(); Pop(0)

0x93: PushEmpty(bool, bool)
0x94: Stack[0 + Tasks[-1].StackPointer] = Stack[-3]
0x95: @ Face(Stack[-3])
0x96: Pop(0)
0x97: Push((float)0.5)
0x98: @ Sleep(Stack[-1], Stack[-2])
0x99: Pop(1)
0x9a: PushEmpty(bool)
0x9b: Stack[-1] = (bool) 1
0x9c: Pop(0); Push((bool) Stack[-2] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9e: PushEmpty(bool, object)
0x9f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa0: Call 0x4e1

0xa1: Pop(1)
0xa2: Pop(1); Push((bool) Stack[-1] == 0)
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: Stack[-1] = (bool) 0
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: GOTO 0xa8

0xa7: GOTO 0x97

0xa8: @ StopAsync()
0xa9: Pop(0)
0xaa: Return(); Pop(2)

0xab: @ StopAsync()
0xac: Pop(0)
0xad: Push((int) 100)
0xae: @ KillTimer(Stack[-1])
0xaf: Pop(1)
0xb0: @ StopGroup0()
0xb1: Pop(0)
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: PushEmpty()
0xb5: Call 0xab

0xb6: Pop(0)
0xb7: PushEmpty(object)
0xb8: Stack[-1] = Stack[-2]
0xb9: Call 0x610

0xba: Pop(1)
0xbb: Return(); Pop(0)

0xbc: PushEmpty()
0xbd: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0xbe: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbf: Push((int) 100)
0xc0: @ KillTimer(Stack[-1])
0xc1: Pop(1)
0xc2: @ Face(Stack[-0])
0xc3: Pop(0)
0xc4: Return(); Pop(0)

0xc5: PushEmpty()
0xc6: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0xc7: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xc8: Push((int) 100)
0xc9: Push((float)3.0)
0xca: @ SetTimer(Stack[-2], Stack[-1])
0xcb: Pop(2)
0xcc: PushEmpty(object)
0xcd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xce: Call 0x53c

0xcf: Pop(1)
0xd0: Return(); Pop(0)

0xd1: PushEmpty()
0xd2: PushEmpty(bool, object)
0xd3: Stack[-1] = Stack[-3]
0xd4: Call 0x4e1

0xd5: Pop(1)
0xd6: Pop(1); Push((bool) Stack[-1] == 0)
0xd7: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd8: PushEmpty(object)
0xd9: Stack[-1] = Stack[-2]
0xda: Call 0x628

0xdb: Pop(1)
0xdc: Return(); Pop(0)

0xdd: PushEmpty()
0xde: Call 0xab

0xdf: Pop(0)
0xe0: PushEmpty(object)
0xe1: Stack[-1] = Stack[-2]
0xe2: Call 0x635

0xe3: Pop(1)
0xe4: Return(); Pop(0)

0xe5: PushEmpty()
0xe6: PushEmpty(bool, object, object)
0xe7: Stack[-2] = Stack[-5]
0xe8: Stack[-1] = Stack[-4]
0xe9: Call 0x67e

0xea: Pop(2)
0xeb: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xec: PushEmpty(object)
0xed: Stack[-1] = Stack[-3]
0xee: Call 0xd1

0xef: Pop(1)
0xf0: Return(); Pop(0)

0xf1: PushEmpty()
0xf2: PushEmpty(bool, object)
0xf3: Stack[-1] = Stack[-3]
0xf4: Call 0x662

0xf5: Pop(1)
0xf6: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xf7: PushEmpty()
0xf8: Call 0xab

0xf9: Pop(0)
0xfa: PushEmpty(object)
0xfb: Stack[-1] = Stack[-2]
0xfc: Call 0x678

0xfd: Pop(1)
0xfe: Return(); Pop(0)

0xff: PushEmpty()
0x100: Push((int) 100)
0x101: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x102: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0x103: Return(); Pop(0)

0x104: Push((int) 100)
0x105: @ KillTimer(Stack[-1])
0x106: Pop(1)
0x107: @ StopGroup0()
0x108: Pop(0)
0x109: Return(); Pop(0)

0x10a: PushEmpty(bool, int, int, bool, int, int)
0x10b: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x10c: @ CanSee(Stack[-1], Stack[-0])
0x10d: Pop(0)
0x10e: Push( Stack[1 + Tasks[-1].StackPointer] )
0x10f: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x110: PushEmpty(bool, object)
0x111: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x112: Call 0x655

0x113: Pop(1)
0x114: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x115: PushEmpty(object, bool)
0x116: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x117: Stack[-1] = (bool) 1
0x118: Call 0x61d

0x119: Pop(2)
0x11a: Return(); Pop(6)

0x11b: @ Face(Stack[-0])
0x11c: Pop(0)
0x11d: Push("all")
0x11e: Push("shoot_begin")
0x11f: @ PlayAnimation(Stack[-2], Stack[-1])
0x120: Pop(2)
0x121: @ WaitForAnimEnd(Stack[-3])
0x122: Pop(0)
0x123: Pop(0); Push((bool) Stack[-3] == 0)
0x124: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x125: @ StopAsync()
0x126: Pop(0)
0x127: Return(); Pop(6)

0x128: Push("shot")
0x129: @ Speak(Stack[-1])
0x12a: Pop(1)
0x12b: Push("all")
0x12c: Push("shoot_end")
0x12d: @ PlayAnimation(Stack[-2], Stack[-1])
0x12e: Pop(2)
0x12f: @ WaitForAnimEnd(Stack[-3])
0x130: Pop(0)
0x131: Pop(0); Push((bool) Stack[-3] == 0)
0x132: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x133: @ StopAsync()
0x134: Pop(0)
0x135: Return(); Pop(6)

0x136: Push("all")
0x137: Push("attack_on")
0x138: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x139: Pop(2)
0x13a: Stack[-2] = (int) 0
0x13b: Stack[-1] = (int) 0
0x13c: Push((int) 20)
0x13d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x13f: Push((float)0.5)
0x140: @ Sleep(Stack[-1], Stack[-4])
0x141: Pop(1)
0x142: Pop(0); Push((bool) Stack[-3] == 0)
0x143: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x144: Return(); Pop(6)

0x145: @ CanSee(Stack[-1], Stack[-0])
0x146: Pop(0)
0x147: Push( Stack[1 + Tasks[-1].StackPointer] )
0x148: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x149: Stack[-2] = (int) 0
0x14a: PushEmpty(bool, object)
0x14b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14c: Call 0x655

0x14d: Pop(1)
0x14e: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x14f: PushEmpty()
0x150: Call 0x195

0x151: Pop(0)
0x152: PushEmpty(object, bool)
0x153: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x154: Stack[-1] = (bool) 0
0x155: Call 0x61d

0x156: Pop(2)
0x157: Return(); Pop(6)

0x158: @ Face(Stack[-0])
0x159: Pop(0)
0x15a: GOTO 0x169

0x15b: @ StopAsync()
0x15c: Pop(0)
0x15d: Push((int) 1)
0x15e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x15f: Push((int) 4)
0x160: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x162: Push("all")
0x163: Push("attack_off")
0x164: @ PlayAnimation(Stack[-2], Stack[-1])
0x165: Pop(2)
0x166: @ WaitForAnimEnd()
0x167: Pop(0)
0x168: Return(); Pop(6)

0x169: Push((int) 1)
0x16a: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x16b: GOTO 0x13c

0x16c: PushEmpty()
0x16d: Call 0x195

0x16e: Pop(0)
0x16f: PushEmpty(object, bool)
0x170: Stack[-2] = Stack[-9]
0x171: Stack[-1] = (bool) 0
0x172: Call 0x61d

0x173: Pop(2)
0x174: Return(); Pop(6)

0x175: PushEmpty()
0x176: PushEmpty(bool, object)
0x177: Stack[-1] = Stack[-3]
0x178: Call 0x4e1

0x179: Pop(1)
0x17a: Pop(1); Push((bool) Stack[-1] == 0)
0x17b: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17c: PushEmpty(object)
0x17d: Stack[-1] = Stack[-2]
0x17e: Call 0x628

0x17f: Pop(1)
0x180: Return(); Pop(0)

0x181: PushEmpty()
0x182: Call 0x195

0x183: Pop(0)
0x184: PushEmpty(object)
0x185: Stack[-1] = Stack[-2]
0x186: Call 0x635

0x187: Pop(1)
0x188: Return(); Pop(0)

0x189: PushEmpty()
0x18a: PushEmpty(bool, object, object)
0x18b: Stack[-2] = Stack[-5]
0x18c: Stack[-1] = Stack[-4]
0x18d: Call 0x67e

0x18e: Pop(2)
0x18f: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x190: PushEmpty(object)
0x191: Stack[-1] = Stack[-3]
0x192: Call 0x175

0x193: Pop(1)
0x194: Return(); Pop(0)

0x195: @ StopAsync()
0x196: Pop(0)
0x197: @ StopGroup0()
0x198: Pop(0)
0x199: @ Stop()
0x19a: Pop(0)
0x19b: Return(); Pop(0)

0x19c: PushEmpty()
0x19d: PushEmpty()
0x19e: Call 0x195

0x19f: Pop(0)
0x1a0: PushEmpty(object)
0x1a1: Stack[-1] = Stack[-2]
0x1a2: Call 0x610

0x1a3: Pop(1)
0x1a4: Return(); Pop(0)

0x1a5: PushEmpty(bool, bool, bool, bool)
0x1a6: Stack[0 + Tasks[-1].StackPointer] = Stack[-6]
0x1a7: @ Face(Stack[-0])
0x1a8: Pop(0)
0x1a9: Push(Stack[-5])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1ab: Push("all")
0x1ac: Push("attack_on")
0x1ad: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ae: Pop(2)
0x1af: @ WaitForAnimEnd()
0x1b0: Pop(0)
0x1b1: Push("all")
0x1b2: Push("attack_on")
0x1b3: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x1b4: Pop(2)
0x1b5: Push((bool) 1)
0x1b6: @ SetAttackState(Stack[-1])
0x1b7: Pop(1)
0x1b8: PushEmpty(bool, object)
0x1b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ba: Call 0x4e1

0x1bb: Pop(1)
0x1bc: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x1bd: @ CanSee(Stack[-1], Stack[-0])
0x1be: Pop(0)
0x1bf: Push(Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c1: PushEmpty()
0x1c2: Call 0x24e

0x1c3: Pop(0)
0x1c4: GOTO 0x214

0x1c5: PushEmpty(object)
0x1c6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c7: Call 0x53c

0x1c8: Pop(1)
0x1c9: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1ca: Push("all")
0x1cb: Push("hunt")
0x1cc: @ PlayAnimation(Stack[-2], Stack[-1])
0x1cd: Pop(2)
0x1ce: @ WaitForAnimEnd(Stack[-2])
0x1cf: Pop(0)
0x1d0: Pop(0); Push((bool) Stack[-2] == 0)
0x1d1: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d2: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d4: PushEmpty()
0x1d5: Call 0x249

0x1d6: Pop(0)
0x1d7: Push("all")
0x1d8: Push("attack_on")
0x1d9: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x1da: Pop(2)
0x1db: GOTO 0x1b8

0x1dc: PushEmpty(bool, object)
0x1dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1de: Call 0x4e1

0x1df: Pop(1)
0x1e0: Pop(1); Push((bool) Stack[-1] == 0)
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1e2: GOTO 0x21e

0x1e3: @ CanSee(Stack[-1], Stack[-0])
0x1e4: Pop(0)
0x1e5: Push(Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1e7: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1e8: @ Face(Stack[-0])
0x1e9: Pop(0)
0x1ea: PushEmpty()
0x1eb: Call 0x24e

0x1ec: Pop(0)
0x1ed: GOTO 0x214

0x1ee: Push("all")
0x1ef: Push("attack_on")
0x1f0: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x1f1: Pop(2)
0x1f2: Push((int) 3)
0x1f3: @ Sleep(Stack[-1], Stack[-3])
0x1f4: Pop(1)
0x1f5: Pop(0); Push((bool) Stack[-2] == 0)
0x1f6: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1f7: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f9: PushEmpty()
0x1fa: Call 0x249

0x1fb: Pop(0)
0x1fc: Push("all")
0x1fd: Push("attack_on")
0x1fe: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x1ff: Pop(2)
0x200: GOTO 0x1b8

0x201: PushEmpty(bool, object)
0x202: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x203: Call 0x4e1

0x204: Pop(1)
0x205: Pop(1); Push((bool) Stack[-1] == 0)
0x206: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x207: GOTO 0x21e

0x208: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x209: @ CanSee(Stack[-1], Stack[-0])
0x20a: Pop(0)
0x20b: Push(Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x20d: @ Face(Stack[-0])
0x20e: Pop(0)
0x20f: PushEmpty()
0x210: Call 0x24e

0x211: Pop(0)
0x212: GOTO 0x214

0x213: GOTO 0x21e

0x214: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x215: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x216: PushEmpty()
0x217: Call 0x249

0x218: Pop(0)
0x219: GOTO 0x21d

0x21a: Push((int) 2)
0x21b: @ Sleep(Stack[-1])
0x21c: Pop(1)
0x21d: GOTO 0x1b8

0x21e: Push((bool) 0)
0x21f: @ SetAttackState(Stack[-1])
0x220: Pop(1)
0x221: @ StopAsync()
0x222: Pop(0)
0x223: Push("all")
0x224: Push("attack_off")
0x225: @ PlayAnimation(Stack[-2], Stack[-1])
0x226: Pop(2)
0x227: @ WaitForAnimEnd()
0x228: Pop(0)
0x229: Return(); Pop(4)

0x22a: PushEmpty()
0x22b: PushEmpty(bool)
0x22c: Stack[-1] = (bool) 0
0x22d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x22e: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x22f: Pop(0); Push((bool) Stack[-2] == Stack[0 + Tasks[-1].StackPointer])
0x230: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x231: Stack[-1] = (bool) 1
0x232: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x233: PushEmpty(object)
0x234: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x235: Call 0x53c

0x236: Pop(1)
0x237: Return(); Pop(0)

0x238: PushEmpty()
0x239: PushEmpty(bool)
0x23a: Stack[-1] = (bool) 0
0x23b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x23c: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23d: Pop(0); Push((bool) Stack[-2] == Stack[0 + Tasks[-1].StackPointer])
0x23e: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23f: Stack[-1] = (bool) 1
0x240: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x241: Push("@Stop hunt")
0x242: @ Trace(Stack[-1])
0x243: Pop(1)
0x244: @ StopAnimation()
0x245: Pop(0)
0x246: @ StopGroup0()
0x247: Pop(0)
0x248: Return(); Pop(0)

0x249: Stack[0 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer]
0x24a: Stack[1 + Tasks[-1].StackPointer] = 0
0x24b: @ Face(Stack[-0])
0x24c: Pop(0)
0x24d: Return(); Pop(0)

0x24e: PushEmpty(cvector, cvector, cvector, object, int, cvector, float, object, object, cvector, cvector, cvector, object, int, cvector, float, object, object)
0x24f: @ ReportAttack(Stack[-0])
0x250: Pop(0)
0x251: @ GetDirection(Stack[-9])
0x252: Pop(0)
0x253: PushEmpty(cvector, object)
0x254: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x255: Call 0x456

0x256: Stack[-10] = Stack[-2]
0x257: Pop(2)
0x258: PushEmpty(float, cvector, cvector)
0x259: Stack[-2] = Stack[-12]
0x25a: Stack[-1] = Stack[-11]
0x25b: Call 0x58e

0x25c: Pop(2)
0x25d: Push((float)0.96593)
0x25e: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x260: Return(); Pop(18)

0x261: Push("all")
0x262: Push("attack_begin1")
0x263: @ PlayAnimation(Stack[-2], Stack[-1])
0x264: Pop(2)
0x265: @ WaitForAnimEnd()
0x266: Pop(0)
0x267: Push("shot")
0x268: @ Speak(Stack[-1])
0x269: Pop(1)
0x26a: @ GetDirection(Stack[-9])
0x26b: Pop(0)
0x26c: PushEmpty(cvector, object)
0x26d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x26e: Call 0x456

0x26f: Stack[-10] = Stack[-2]
0x270: Pop(2)
0x271: Push(CvectorIndex(Stack[-8], 1))
0x272: PushEmpty(float, object)
0x273: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x274: Call 0x552

0x275: Pop(1)
0x276: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x277: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x278: Push((float)0.2618)
0x279: @ RandVecCone3D(Stack[-8], Stack[-9], Stack[-1])
0x27a: Pop(1)
0x27b: @ GetVictimMaterial(Stack[-7], Stack[-6], Stack[-5], Stack[-4])
0x27c: Pop(0)
0x27d: Pop(0); Push(( Stack[-6] != 0 )
0x27e: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x27f: Pop(0); Push((bool) Stack[-6] == Stack[0 + Tasks[-1].StackPointer])
0x280: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x281: PushEmpty(float, object, float, int)
0x282: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x283: Stack[-2] = (float) 1.5
0x284: Stack[-1] = (int) 0
0x285: Call 0x478

0x286: Stack[-7] = Stack[-4]
0x287: Pop(4)
0x288: Push((int) 2)
0x289: Push((float)1.5)
0x28a: @ ReportHit(Stack[-0], Stack[-2], Stack[-5], Stack[-1])
0x28b: Pop(2)
0x28c: GOTO 0x29c

0x28d: Push((int) -1)
0x28e: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x28f: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x290: @ GetScene(Stack[-2])
0x291: Pop(0)
0x292: Push("scripted")
0x293: Push(CVector(0.0, 0.0, 1.0))
0x294: Push("richochet.xml")
0x295: @ AddActorByType(Stack[-4], Stack[-3], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0x296: Pop(3)
0x297: Push("Material")
0x298: @@ SetScriptProperty(Stack[-1], Stack[-6])
0x299: Pop(1)
0x29a: Stack[-1] = 0
0x29b: Stack[-2] = 0
0x29c: Push("all")
0x29d: Push("attack_end1")
0x29e: @ PlayAnimation(Stack[-2], Stack[-1])
0x29f: Pop(2)
0x2a0: @ WaitForAnimEnd()
0x2a1: Pop(0)
0x2a2: Push("all")
0x2a3: Push("attack_on")
0x2a4: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x2a5: Pop(2)
0x2a6: Return(); Pop(18)

0x2a7: Stack[-6] = 0
0x2a8: PushEmpty()
0x2a9: PushEmpty(bool, object)
0x2aa: Stack[-1] = Stack[-3]
0x2ab: Call 0x4e1

0x2ac: Pop(1)
0x2ad: Pop(1); Push((bool) Stack[-1] == 0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2af: Return(); Pop(0)

0x2b0: PushEmpty(object)
0x2b1: Stack[-1] = Stack[-2]
0x2b2: Call 0x628

0x2b3: Pop(1)
0x2b4: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b6: Stack[1 + Tasks[-1].StackPointer] = 0
0x2b7: GOTO 0x2bf

0x2b8: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x2b9: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2bb: @ StopAnimation()
0x2bc: Pop(0)
0x2bd: @ StopGroup0()
0x2be: Pop(0)
0x2bf: Return(); Pop(0)

0x2c0: PushEmpty()
0x2c1: PushEmpty(bool, object, object)
0x2c2: Stack[-2] = Stack[-5]
0x2c3: Stack[-1] = Stack[-4]
0x2c4: Call 0x67e

0x2c5: Pop(2)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c7: PushEmpty(object)
0x2c8: Stack[-1] = Stack[-3]
0x2c9: Call 0x2a8

0x2ca: Pop(1)
0x2cb: Return(); Pop(0)

0x2cc: @ Hold()
0x2cd: Pop(0)
0x2ce: GOTO 0x2cc

0x2cf: Return(); Pop(0)

0x2d0: PushEmpty(bool, bool)
0x2d1: @ IsPlayerActor(Stack[-3], Stack[-1])
0x2d2: Pop(0)
0x2d3: Push(Stack[-1])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d5: PushEmpty(object)
0x2d6: Stack[-1] = Stack[-4]
0x2d7: Push(-1, 2); TaskCall(5)
0x2d8: Call 0x2f1

0x2d9: Pop(-1, 2); TaskReturn
0x2da: Pop(1)
0x2db: Return(); Pop(2)

0x2dc: PushEmpty()
0x2dd: PushEmpty(bool, string, string)
0x2de: Stack[-2] = "quest_d11_01"
0x2df: Stack[-1] = "soldier_attack"
0x2e0: Call 0x59f

0x2e1: Pop(3)
0x2e2: Return(); Pop(0)

0x2e3: PushEmpty()
0x2e4: Push("attack")
0x2e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2e7: PushEmpty(object)
0x2e8: PushEmpty(object)
0x2e9: Call 0x465

0x2ea: Stack[-2] = Stack[-1]
0x2eb: Pop(1)
0x2ec: Push(-1, 2); TaskCall(7)
0x2ed: Call 0x399

0x2ee: Pop(-1, 2); TaskReturn
0x2ef: Pop(1)
0x2f0: Return(); Pop(0)

0x2f1: PushEmpty()
0x2f2: PushEmpty(bool, object)
0x2f3: Stack[-1] = Stack[-3]
0x2f4: Push(-2, 1); TaskCall(6)
0x2f5: Call 0x365

0x2f6: Pop(-2, 1); TaskReturn
0x2f7: Pop(1)
0x2f8: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2f9: PushEmpty(object)
0x2fa: Stack[-1] = Stack[-2]
0x2fb: Call 0x323

0x2fc: Pop(1)
0x2fd: Push("all")
0x2fe: Push("attack_off")
0x2ff: @ PlayAnimation(Stack[-2], Stack[-1])
0x300: Pop(2)
0x301: Return(); Pop(0)

0x302: PushEmpty()
0x303: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x304: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x305: PushEmpty()
0x306: Call 0x361

0x307: Pop(0)
0x308: Return(); Pop(0)

0x309: PushEmpty()
0x30a: PushEmpty(bool, string, string)
0x30b: Stack[-2] = "quest_d11_01"
0x30c: Stack[-1] = "soldier_attack"
0x30d: Call 0x59f

0x30e: Pop(3)
0x30f: Return(); Pop(0)

0x310: PushEmpty()
0x311: Push("attack")
0x312: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x313: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x314: PushEmpty(object)
0x315: PushEmpty(object)
0x316: Call 0x465

0x317: Stack[-2] = Stack[-1]
0x318: Pop(1)
0x319: Push(-1, 2); TaskCall(7)
0x31a: Call 0x399

0x31b: Pop(-1, 2); TaskReturn
0x31c: Pop(1)
0x31d: Return(); Pop(0)

0x31e: Push("all")
0x31f: Push("attack_on")
0x320: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x321: Pop(2)
0x322: Return(); Pop(0)

0x323: PushEmpty(cvector, cvector, cvector, cvector)
0x324: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x325: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x326: PushEmpty()
0x327: Call 0x354

0x328: Pop(0)
0x329: @ GetDirection(Stack[-2])
0x32a: Pop(0)
0x32b: PushEmpty(cvector, object)
0x32c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x32d: Call 0x456

0x32e: Stack[-3] = Stack[-2]
0x32f: Pop(2)
0x330: PushEmpty(float, cvector, cvector)
0x331: Stack[-2] = Stack[-5]
0x332: Stack[-1] = Stack[-4]
0x333: Call 0x58e

0x334: Pop(2)
0x335: Push((float)0.70711)
0x336: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x337: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x338: PushEmpty(object, float)
0x339: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x33a: Stack[-1] = (float) 4.71239
0x33b: Call 0x547

0x33c: Pop(2)
0x33d: PushEmpty()
0x33e: Call 0x31e

0x33f: Pop(0)
0x340: Push((float)0.5)
0x341: @ Sleep(Stack[-1])
0x342: Pop(1)
0x343: PushEmpty(bool)
0x344: Stack[-1] = (bool) 0
0x345: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x346: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x347: PushEmpty(bool, object)
0x348: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x349: Call 0x4e1

0x34a: Pop(1)
0x34b: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x34c: Stack[-1] = (bool) 1
0x34d: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x34e: @ StopAsync()
0x34f: Pop(0)
0x350: Push("spine")
0x351: @ UnlookAsync(Stack[-1])
0x352: Pop(1)
0x353: Return(); Pop(4)

0x354: PushEmpty(float, float, cvector, float, float, cvector)
0x355: @ GetEyesHeight(Stack[-3])
0x356: Pop(0)
0x357: @@ GetEyesHeight(Stack[-2])
0x358: Pop(0)
0x359: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x35a: Push(CvectorIndex(Stack[-1], 1))
0x35b: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x35c: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x35d: Push("spine")
0x35e: @ DirLookAsyncRel(Stack[-0], Stack[-1], Stack[-2])
0x35f: Pop(1)
0x360: Return(); Pop(6)

0x361: @ StopGroup0()
0x362: Pop(0)
0x363: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x364: Return(); Pop(0)

0x365: PushEmpty(bool, bool)
0x366: Stack[0 + Tasks[-1].StackPointer] = Stack[-3]
0x367: PushEmpty(object)
0x368: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x369: Call 0x53c

0x36a: Pop(1)
0x36b: Push("all")
0x36c: Push("attack_on")
0x36d: @ PlayAnimation(Stack[-2], Stack[-1])
0x36e: Pop(2)
0x36f: @ WaitForAnimEnd(Stack[-1])
0x370: Pop(0)
0x371: Pop(0); Push((bool) Stack[-1] == 0)
0x372: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x373: Stack[-4] = (bool) 0
0x374: Return(); Pop(2)

0x375: Push("all")
0x376: Push("attack_on")
0x377: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x378: Pop(2)
0x379: Stack[-4] = (bool) 1
0x37a: Return(); Pop(2)

0x37b: @ StopAnimation()
0x37c: Pop(0)
0x37d: Return(); Pop(0)

0x37e: PushEmpty()
0x37f: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x380: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x381: @ StopAnimation()
0x382: Pop(0)
0x383: Return(); Pop(0)

0x384: PushEmpty()
0x385: PushEmpty(bool, string, string)
0x386: Stack[-2] = "quest_d11_01"
0x387: Stack[-1] = "soldier_attack"
0x388: Call 0x59f

0x389: Pop(3)
0x38a: Return(); Pop(0)

0x38b: PushEmpty()
0x38c: Push("attack")
0x38d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x38e: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x38f: PushEmpty(object)
0x390: PushEmpty(object)
0x391: Call 0x465

0x392: Stack[-2] = Stack[-1]
0x393: Pop(1)
0x394: Push(-1, 2); TaskCall(7)
0x395: Call 0x399

0x396: Pop(-1, 2); TaskReturn
0x397: Pop(1)
0x398: Return(); Pop(0)

0x399: PushEmpty()
0x39a: PushEmpty()
0x39b: Call 0x616

0x39c: Pop(0)
0x39d: PushEmpty(object)
0x39e: Stack[-1] = Stack[-2]
0x39f: Call 0x3cd

0x3a0: Pop(1)
0x3a1: PushEmpty()
0x3a2: Call 0x3a6

0x3a3: Pop(0)
0x3a4: GOTO 0x3a1

0x3a5: Return(); Pop(0)

0x3a6: PushEmpty()
0x3a7: Call 0x616

0x3a8: Pop(0)
0x3a9: PushEmpty()
0x3aa: Call 0x3fb

0x3ab: Pop(0)
0x3ac: GOTO 0x3a9

0x3ad: Return(); Pop(0)

0x3ae: Return(); Pop(0)

0x3af: PushEmpty(bool, bool)
0x3b0: PushEmpty(bool, object)
0x3b1: Stack[-1] = Stack[-5]
0x3b2: Call 0x4e1

0x3b3: Pop(1)
0x3b4: Pop(1); Push((bool) Stack[-1] == 0)
0x3b5: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b6: Return(); Pop(2)

0x3b7: PushEmpty(bool, object)
0x3b8: Stack[-1] = Stack[-5]
0x3b9: Call 0x65d

0x3ba: Pop(1)
0x3bb: Pop(1); Push((bool) Stack[-1] == 0)
0x3bc: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3bd: Push(GlobalVars[0])
0x3be: @@ in(Stack[-2], Stack[-4])
0x3bf: Pop(1)
0x3c0: Pop(0); Push((bool) Stack[-1] == 0)
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c2: Return(); Pop(2)

0x3c3: PushEmpty()
0x3c4: Call 0x449

0x3c5: Pop(0)
0x3c6: PushEmpty(object)
0x3c7: Stack[-1] = Stack[-4]
0x3c8: Push(-1, 1); TaskCall(1)
0x3c9: Call 0x93

0x3ca: Pop(-1, 1); TaskReturn
0x3cb: Pop(1)
0x3cc: Return(); Pop(2)

0x3cd: PushEmpty()
0x3ce: PushEmpty(bool, object)
0x3cf: Stack[-1] = Stack[-3]
0x3d0: Call 0x4e1

0x3d1: Pop(1)
0x3d2: Pop(1); Push((bool) Stack[-1] == 0)
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d4: PushEmpty(object)
0x3d5: Stack[-1] = Stack[-2]
0x3d6: Call 0x628

0x3d7: Pop(1)
0x3d8: Return(); Pop(0)

0x3d9: PushEmpty()
0x3da: Call 0x449

0x3db: Pop(0)
0x3dc: PushEmpty(object)
0x3dd: Stack[-1] = Stack[-2]
0x3de: Call 0x635

0x3df: Pop(1)
0x3e0: Return(); Pop(0)

0x3e1: PushEmpty()
0x3e2: PushEmpty(bool, object, object)
0x3e3: Stack[-2] = Stack[-5]
0x3e4: Stack[-1] = Stack[-4]
0x3e5: Call 0x67e

0x3e6: Pop(2)
0x3e7: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3e8: PushEmpty(object)
0x3e9: Stack[-1] = Stack[-3]
0x3ea: Call 0x3cd

0x3eb: Pop(1)
0x3ec: Return(); Pop(0)

0x3ed: PushEmpty()
0x3ee: PushEmpty(bool, object)
0x3ef: Stack[-1] = Stack[-3]
0x3f0: Call 0x662

0x3f1: Pop(1)
0x3f2: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f3: PushEmpty()
0x3f4: Call 0x449

0x3f5: Pop(0)
0x3f6: PushEmpty(object)
0x3f7: Stack[-1] = Stack[-2]
0x3f8: Call 0x6a6

0x3f9: Pop(1)
0x3fa: Return(); Pop(0)

0x3fb: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x3fc: @ GetPFPosition(Stack[-1])
0x3fd: Pop(0)
0x3fe: @ GetDirection(Stack[-0])
0x3ff: Pop(0)
0x400: Push((int) 60)
0x401: @ irand(Stack[-5], Stack[-1])
0x402: Pop(1)
0x403: Push((int) 30)
0x404: Pop(1); Push(Stack[-5] + Stack[-1]);
0x405: @ Sleep(Stack[-1], Stack[-4])
0x406: Pop(1)
0x407: Push(Stack[-3])
0x408: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x409: PushEmpty()
0x40a: Call 0x3ae

0x40b: Pop(0)
0x40c: GOTO 0x447

0x40d: @ GetPFPosition(Stack[-2])
0x40e: Pop(0)
0x40f: PushEmpty(float, cvector, cvector)
0x410: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x411: Stack[-1] = Stack[-5]
0x412: Call 0x55f

0x413: Pop(2)
0x414: Push((int) 40000)
0x415: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x416: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x417: @ FindPathTo(Stack[-1], Stack[-1])
0x418: Pop(0)
0x419: Pop(0); Push(( Stack[-1] != 0 )
0x41a: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x41b: @ RotatePath(Stack[-1], Stack[-3])
0x41c: Pop(0)
0x41d: Pop(0); Push((bool) Stack[-3] == 0)
0x41e: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41f: GOTO 0x446

0x420: Push((bool) 0)
0x421: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x422: Pop(1)
0x423: Pop(0); Push((bool) Stack[-3] == 0)
0x424: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x425: GOTO 0x446

0x426: Push(CvectorIndex(Stack[-0], 0))
0x427: Push(CvectorIndex(Stack[-0], 2))
0x428: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x429: Pop(2)
0x42a: Pop(0); Push((bool) Stack[-3] == 0)
0x42b: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x42c: GOTO 0x446

0x42d: @ WaitForAnimEnd(Stack[-3])
0x42e: Pop(0)
0x42f: Pop(0); Push((bool) Stack[-3] == 0)
0x430: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x431: GOTO 0x446

0x432: GOTO 0x447

0x433: GOTO 0x437

0x434: Push((int) 1)
0x435: @ Sleep(Stack[-1])
0x436: Pop(1)
0x437: Stack[-1] = 0
0x438: GOTO 0x446

0x439: Push(CvectorIndex(Stack[-0], 0))
0x43a: Push(CvectorIndex(Stack[-0], 2))
0x43b: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x43c: Pop(2)
0x43d: Pop(0); Push((bool) Stack[-3] == 0)
0x43e: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x43f: GOTO 0x446

0x440: @ WaitForAnimEnd(Stack[-3])
0x441: Pop(0)
0x442: Pop(0); Push((bool) Stack[-3] == 0)
0x443: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x444: GOTO 0x446

0x445: GOTO 0x447

0x446: GOTO 0x40d

0x447: GOTO 0x400

0x448: Return(); Pop(8)

0x449: @ StopGroup0()
0x44a: Pop(0)
0x44b: @ Stop()
0x44c: Pop(0)
0x44d: Return(); Pop(0)

0x44e: PushEmpty()
0x44f: Push((int) 1)
0x450: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x451: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x452: Stack[-2] = "fire"
0x453: Return(); Pop(0)

0x454: Stack[-2] = "phys"
0x455: Return(); Pop(0)

0x456: PushEmpty(cvector, cvector, cvector, cvector)
0x457: @ GetPosition(Stack[-2])
0x458: Pop(0)
0x459: @@ GetPosition(Stack[-1])
0x45a: Pop(0)
0x45b: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x45c: Return(); Pop(4)

0x45d: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x45e: @ GetPosition(Stack[-3])
0x45f: Pop(0)
0x460: @@ GetPosition(Stack[-2])
0x461: Pop(0)
0x462: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x463: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x464: Return(); Pop(6)

0x465: PushEmpty(object, object)
0x466: Push("player")
0x467: @ FindActor(Stack[-2], Stack[-1])
0x468: Pop(1)
0x469: Stack[-3] = Stack[-1]
0x46a: Return(); Pop(2)

0x46b: Stack[-1] = 0
0x46c: PushEmpty(bool, bool)
0x46d: Push("HasProperty")
0x46e: Push((int) 2)
0x46f: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x470: Pop(1); Push((bool) Stack[-1] == 0)
0x471: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x472: Stack[-5] = (bool) 0
0x473: Return(); Pop(2)

0x474: @@ HasProperty(Stack[-3], Stack[-1])
0x475: Pop(0)
0x476: Stack[-5] = Stack[-1]
0x477: Return(); Pop(2)

0x478: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x479: PushEmpty(bool, object, string)
0x47a: Stack[-2] = Stack[-18]
0x47b: Stack[-1] = "health"
0x47c: Call 0x46c

0x47d: Pop(2)
0x47e: Pop(1); Push((bool) Stack[-1] == 0)
0x47f: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x480: Stack[-16] = (float) 0.0
0x481: Return(); Pop(12)

0x482: PushEmpty(bool, object, string)
0x483: Stack[-2] = Stack[-18]
0x484: Stack[-1] = "armor"
0x485: Call 0x46c

0x486: Pop(2)
0x487: Pop(1); Push((bool) Stack[-1] == 0)
0x488: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x489: Stack[-6] = (int) 0
0x48a: GOTO 0x48e

0x48b: Push("armor")
0x48c: @@ GetProperty(Stack[-1], Stack[-7])
0x48d: Pop(1)
0x48e: Push("armor_")
0x48f: PushEmpty(string, int)
0x490: Stack[-1] = Stack[-16]
0x491: Call 0x44e

0x492: Pop(1)
0x493: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x494: PushEmpty(bool, object, string)
0x495: Stack[-2] = Stack[-18]
0x496: Stack[-1] = Stack[-8]
0x497: Call 0x46c

0x498: Pop(2)
0x499: Pop(1); Push((bool) Stack[-1] == 0)
0x49a: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x49b: Stack[-4] = (int) 0
0x49c: GOTO 0x49f

0x49d: @@ GetProperty(Stack[-5], Stack[-4])
0x49e: Pop(0)
0x49f: PushEmpty(float, float, float)
0x4a0: Pop(0); Push(Stack[-9] + Stack[-7]);
0x4a1: Push((float)100.0)
0x4a2: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x4a3: Stack[-1] = (int) 1
0x4a4: Call 0x563

0x4a5: Stack[-6] = Stack[-3]
0x4a6: Pop(3)
0x4a7: Push("health")
0x4a8: @@ GetProperty(Stack[-1], Stack[-3])
0x4a9: Pop(1)
0x4aa: Push((int) 1)
0x4ab: Pop(1); Push(Stack[-1] - Stack[-4]);
0x4ac: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x4ad: Push("health")
0x4ae: PushEmpty(float, float, float, float)
0x4af: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x4b0: Stack[-2] = (int) 0
0x4b1: Stack[-1] = (int) 1
0x4b2: Call 0x56a

0x4b3: Pop(3)
0x4b4: @@ SetProperty(Stack[-2], Stack[-1])
0x4b5: Pop(2)
0x4b6: Stack[-16] = Stack[-1]
0x4b7: Return(); Pop(12)

0x4b8: PushEmpty(bool, bool)
0x4b9: @@ IsDead(Stack[-1])
0x4ba: Pop(0)
0x4bb: Stack[-4] = Stack[-1]
0x4bc: Return(); Pop(2)

0x4bd: PushEmpty(object, object, object, object)
0x4be: Pop(0); Push((bool) Stack[-5] == 0)
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4c0: Stack[-6] = (bool) 0
0x4c1: Return(); Pop(4)

0x4c2: PushEmpty(bool)
0x4c3: Stack[-1] = (bool) 0
0x4c4: Push("IsDead")
0x4c5: Push((int) 1)
0x4c6: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x4c7: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4c8: PushEmpty(bool, object)
0x4c9: Stack[-1] = Stack[-8]
0x4ca: Call 0x4b8

0x4cb: Pop(1)
0x4cc: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4cd: Stack[-1] = (bool) 1
0x4ce: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4cf: Stack[-6] = (bool) 0
0x4d0: Return(); Pop(4)

0x4d1: @ GetScene(Stack[-2])
0x4d2: Pop(0)
0x4d3: Pop(0); Push((bool) Stack[-2] == 0)
0x4d4: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d5: Stack[-6] = (bool) 0
0x4d6: Return(); Pop(4)

0x4d7: @@ GetScene(Stack[-1])
0x4d8: Pop(0)
0x4d9: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x4da: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4db: Stack[-6] = (bool) 0
0x4dc: Return(); Pop(4)

0x4dd: Stack[-6] = (bool) 1
0x4de: Return(); Pop(4)

0x4df: Stack[-1] = 0
0x4e0: Stack[-2] = 0
0x4e1: PushEmpty(int, int)
0x4e2: PushEmpty(bool, object)
0x4e3: Stack[-1] = Stack[-5]
0x4e4: Call 0x4bd

0x4e5: Pop(1)
0x4e6: Pop(1); Push((bool) Stack[-1] == 0)
0x4e7: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e8: Stack[-4] = (bool) 0
0x4e9: Return(); Pop(2)

0x4ea: PushEmpty(bool, object, string)
0x4eb: Stack[-2] = Stack[-6]
0x4ec: Stack[-1] = "noaccess"
0x4ed: Call 0x46c

0x4ee: Pop(2)
0x4ef: Pop(1); Push((bool) Stack[-1] == 0)
0x4f0: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4f1: Stack[-4] = (bool) 1
0x4f2: Return(); Pop(2)

0x4f3: Push("noaccess")
0x4f4: @@ GetProperty(Stack[-1], Stack[-2])
0x4f5: Pop(1)
0x4f6: Push((int) 0)
0x4f7: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x4f8: Return(); Pop(2)

0x4f9: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x4fa: PushEmpty(bool)
0x4fb: Stack[-1] = (bool) 0
0x4fc: Push((int) 4)
0x4fd: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x4fe: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x4ff: Push((int) 5)
0x500: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x501: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x502: Stack[-1] = (bool) 1
0x503: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x504: @ GetScene(Stack[-10])
0x505: Pop(0)
0x506: @ GetPosition(Stack[-8])
0x507: Pop(0)
0x508: @ GetEyesHeight(Stack[-7])
0x509: Pop(0)
0x50a: Push(CvectorIndex(Stack[-8], 1))
0x50b: Push((int) 2)
0x50c: Pop(1); Push(Stack[-9] / Stack[-1]);
0x50d: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x50e: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x50f: Push("scripted")
0x510: Push(CVector(0.0, 0.0, 1.0))
0x511: Push("blood.xml")
0x512: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x513: Pop(3)
0x514: Stack[-9] = 0
0x515: Stack[-10] = 0
0x516: Pop(0); Push((bool) Stack[-23] == 0)
0x517: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x518: Return(); Pop(20)

0x519: @ GetSecondaryAnimationType(Stack[-6])
0x51a: Pop(0)
0x51b: Push((int) 0)
0x51c: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x51d: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51e: Return(); Pop(20)

0x51f: @@ GetPosition(Stack[-5])
0x520: Pop(0)
0x521: @ GetPosition(Stack[-4])
0x522: Pop(0)
0x523: @ GetDirection(Stack[-3])
0x524: Pop(0)
0x525: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x526: Push(CvectorIndex(Stack[-2], 0))
0x527: Push(CvectorIndex(Stack[-4], 0))
0x528: Pop(2); Push(Stack[-2] * Stack[-1]);
0x529: Push(CvectorIndex(Stack[-3], 2))
0x52a: Push(CvectorIndex(Stack[-5], 2))
0x52b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x52c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x52d: Push((int) 0)
0x52e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x52f: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x530: Stack[-1] = "fhit"
0x531: GOTO 0x533

0x532: Stack[-1] = "bhit"
0x533: Push("hit_react")
0x534: Push("1")
0x535: Pop(1); Push(Stack[-3] + Stack[-1]);
0x536: Push("2")
0x537: Pop(1); Push(Stack[-4] + Stack[-1]);
0x538: Push((int) -10)
0x539: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x53a: Pop(4)
0x53b: Return(); Pop(20)

0x53c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x53d: @@ GetPosition(Stack[-3])
0x53e: Pop(0)
0x53f: @ GetPosition(Stack[-2])
0x540: Pop(0)
0x541: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x542: Push(CvectorIndex(Stack[-1], 0))
0x543: Push(CvectorIndex(Stack[-2], 2))
0x544: @ RotateAsync(Stack[-2], Stack[-1])
0x545: Pop(2)
0x546: Return(); Pop(6)

0x547: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x548: @@ GetPosition(Stack[-3])
0x549: Pop(0)
0x54a: @ GetPosition(Stack[-2])
0x54b: Pop(0)
0x54c: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x54d: Push(CvectorIndex(Stack[-1], 0))
0x54e: Push(CvectorIndex(Stack[-2], 2))
0x54f: @ RotateAsync(Stack[-2], Stack[-1], Stack[-9])
0x550: Pop(2)
0x551: Return(); Pop(6)

0x552: PushEmpty(float, float, float, float)
0x553: @ GetEyesHeight(Stack[-2])
0x554: Pop(0)
0x555: @@ GetEyesHeight(Stack[-1])
0x556: Pop(0)
0x557: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x558: Return(); Pop(4)

0x559: PushEmpty(object, object)
0x55a: @ self(Stack[-1])
0x55b: Pop(0)
0x55c: Stack[-3] = Stack[-1]
0x55d: Return(); Pop(2)

0x55e: Stack[-1] = 0
0x55f: PushEmpty(cvector, cvector)
0x560: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x561: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x562: Return(); Pop(2)

0x563: PushEmpty()
0x564: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x565: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x566: Stack[-3] = Stack[-2]
0x567: GOTO 0x569

0x568: Stack[-3] = Stack[-1]
0x569: Return(); Pop(0)

0x56a: PushEmpty()
0x56b: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x56c: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x56d: Stack[-4] = Stack[-2]
0x56e: Return(); Pop(0)

0x56f: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x570: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x571: Stack[-4] = Stack[-1]
0x572: Return(); Pop(0)

0x573: Stack[-4] = Stack[-3]
0x574: Return(); Pop(0)

0x575: PushEmpty(object, object)
0x576: @ CreateObjectSet(Stack[-1])
0x577: Pop(0)
0x578: Stack[-3] = Stack[-1]
0x579: Return(); Pop(2)

0x57a: Stack[-1] = 0
0x57b: PushEmpty()
0x57c: Push(CvectorIndex(Stack[-2], 0))
0x57d: Push(CvectorIndex(Stack[-2], 0))
0x57e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x57f: Push(CvectorIndex(Stack[-3], 2))
0x580: Push(CvectorIndex(Stack[-3], 2))
0x581: Pop(2); Push(Stack[-2] * Stack[-1]);
0x582: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x583: Return(); Pop(0)

0x584: PushEmpty()
0x585: Push(CvectorIndex(Stack[-1], 0))
0x586: Push(CvectorIndex(Stack[-2], 0))
0x587: Pop(2); Push(Stack[-2] * Stack[-1]);
0x588: Push(CvectorIndex(Stack[-2], 2))
0x589: Push(CvectorIndex(Stack[-3], 2))
0x58a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x58b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x58c: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x58d: Return(); Pop(0)

0x58e: PushEmpty()
0x58f: PushEmpty(float, cvector, cvector)
0x590: Stack[-2] = Stack[-5]
0x591: Stack[-1] = Stack[-4]
0x592: Call 0x57b

0x593: Pop(2)
0x594: PushEmpty(float, cvector)
0x595: Stack[-1] = Stack[-5]
0x596: Call 0x584

0x597: Pop(1)
0x598: PushEmpty(float, cvector)
0x599: Stack[-1] = Stack[-5]
0x59a: Call 0x584

0x59b: Pop(1)
0x59c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x59d: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x59e: Return(); Pop(0)

0x59f: PushEmpty(object, object)
0x5a0: @ FindActor(Stack[-1], Stack[-4])
0x5a1: Pop(0)
0x5a2: Pop(0); Push((bool) Stack[-1] == 0)
0x5a3: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a4: Stack[-5] = (bool) 0
0x5a5: Return(); Pop(2)

0x5a6: @ Trigger(Stack[-1], Stack[-3])
0x5a7: Pop(0)
0x5a8: Stack[-5] = (bool) 1
0x5a9: Return(); Pop(2)

0x5aa: Stack[-1] = 0
0x5ab: PushEmpty(int, int, int, bool, int, int, int, bool)
0x5ac: Pop(0); Push((bool) Stack[-10] > Stack[-9])
0x5ad: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5ae: Push("GenerateMoney: iMin > iMax")
0x5af: @ Trace(Stack[-1])
0x5b0: Pop(1)
0x5b1: Return(); Pop(8)

0x5b2: Stack[-4] = (int) 0
0x5b3: Pop(0); Push((bool) Stack[-10] != Stack[-9])
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b9; Pop(1)

0x5b5: Pop(0); Push(Stack[-9] - Stack[-10]);
0x5b6: @ irand(Stack[-4], Stack[-1])
0x5b7: Pop(1)
0x5b8: GOTO 0x5bd

0x5b9: Push((int) 0)
0x5ba: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x5bb: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5bc: Return(); Pop(8)

0x5bd: Stack[-4] = Stack[-4] + Stack[-10]; Pop(0);
0x5be: Push((int) 0)
0x5bf: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x5c0: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5c1: Return(); Pop(8)

0x5c2: Push("Money")
0x5c3: @ GetInvItemByName(Stack[-3], Stack[-1])
0x5c4: Pop(1)
0x5c5: Push((int) 0)
0x5c6: @ AddItem(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x5c7: Pop(1)
0x5c8: Return(); Pop(8)

0x5c9: PushEmpty(int, bool, int, bool)
0x5ca: Push((int) 0)
0x5cb: @ ClearSubContainer(Stack[-1])
0x5cc: Pop(1)
0x5cd: PushEmpty(int, int)
0x5ce: Stack[-2] = (int) 500
0x5cf: Stack[-1] = (int) 1000
0x5d0: Call 0x5ab

0x5d1: Pop(2)
0x5d2: Push((int) 4)
0x5d3: @ irand(Stack[-3], Stack[-1])
0x5d4: Pop(1)
0x5d5: Push((int) 0)
0x5d6: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x5d7: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5d8: PushEmpty(int, string)
0x5d9: Stack[-1] = "rifle_ammo"
0x5da: Call 0x5ee

0x5db: Pop(1)
0x5dc: Push((int) 0)
0x5dd: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x5de: Pop(2)
0x5df: Push((int) 3)
0x5e0: @ irand(Stack[-3], Stack[-1])
0x5e1: Pop(1)
0x5e2: Push((int) 0)
0x5e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e4: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5e5: PushEmpty(int, string)
0x5e6: Stack[-1] = "rusk"
0x5e7: Call 0x5ee

0x5e8: Pop(1)
0x5e9: Push((int) 0)
0x5ea: Push((int) 1)
0x5eb: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5ec: Pop(3)
0x5ed: Return(); Pop(4)

0x5ee: PushEmpty(int, int)
0x5ef: @ GetInvItemByName(Stack[-1], Stack[-3])
0x5f0: Pop(0)
0x5f1: Stack[-4] = Stack[-1]
0x5f2: Return(); Pop(2)

0x5f3: PushEmpty()
0x5f4: PushEmpty(object)
0x5f5: Stack[-1] = Stack[-2]
0x5f6: Push(-1, 0); TaskCall(0)
0x5f7: Call 0x0

0x5f8: Pop(-1, 0); TaskReturn
0x5f9: Pop(1)
0x5fa: Return(); Pop(0)

0x5fb: PushEmpty()
0x5fc: PushEmpty(object, int, float)
0x5fd: Stack[-3] = Stack[-7]
0x5fe: Stack[-2] = Stack[-6]
0x5ff: Stack[-1] = Stack[-5]
0x600: Call 0x4f9

0x601: Pop(3)
0x602: Return(); Pop(0)

0x603: PushEmpty(float, float)
0x604: Push("health")
0x605: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x606: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x607: Push("health")
0x608: @ GetProperty(Stack[-1], Stack[-2])
0x609: Pop(1)
0x60a: Push((int) 0)
0x60b: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x60c: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x60d: @ SignalDeath(Stack[-4])
0x60e: Pop(0)
0x60f: Return(); Pop(2)

0x610: PushEmpty()
0x611: PushEmpty(object)
0x612: Stack[-1] = Stack[-2]
0x613: Call 0x6ac

0x614: Pop(1)
0x615: Return(); Pop(0)

0x616: Push(GlobalVars[0])
0x617: PushEmpty(object)
0x618: Call 0x575

0x619: Stack[-2] = Stack[-1]
0x61a: Pop(1)
0x61b: GlobalVars[0] = Stack[-1]; Pop(1)
0x61c: Return(); Pop(0)

0x61d: PushEmpty()
0x61e: PushEmpty(object, bool)
0x61f: Stack[-2] = Stack[-4]
0x620: Stack[-1] = Stack[-3]
0x621: Push(-2, 3); TaskCall(3)
0x622: Call 0x1a5

0x623: Pop(-2, 3); TaskReturn
0x624: Pop(2)
0x625: @ ResetAAS()
0x626: Pop(0)
0x627: Return(); Pop(0)

0x628: PushEmpty(bool, bool)
0x629: Pop(0); Push((bool) Stack[-3] == 0)
0x62a: IF (Stack[-1] == 0) GOTO 0x62c; Pop(1)

0x62b: Return(); Pop(2)

0x62c: Push(GlobalVars[0])
0x62d: @@ in(Stack[-2], Stack[-4])
0x62e: Pop(1)
0x62f: Pop(0); Push((bool) Stack[-1] == 0)
0x630: IF (Stack[-1] == 0) GOTO 0x634; Pop(1)

0x631: Push(GlobalVars[0])
0x632: @@ add(Stack[-4])
0x633: Pop(1)
0x634: Return(); Pop(2)

0x635: PushEmpty()
0x636: PushEmpty(object)
0x637: Stack[-1] = Stack[-2]
0x638: Call 0x628

0x639: Pop(1)
0x63a: PushEmpty(object, bool)
0x63b: Stack[-2] = Stack[-3]
0x63c: Stack[-1] = (bool) 1
0x63d: Call 0x61d

0x63e: Pop(2)
0x63f: Return(); Pop(0)

0x640: PushEmpty(bool, bool)
0x641: Push(GlobalVars[0])
0x642: @@ in(Stack[-2], Stack[-4])
0x643: Pop(1)
0x644: Push(Stack[-1])
0x645: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x646: PushEmpty(object, bool)
0x647: Stack[-2] = Stack[-5]
0x648: Stack[-1] = (bool) 1
0x649: Call 0x61d

0x64a: Pop(2)
0x64b: GOTO 0x654

0x64c: PushEmpty(object)
0x64d: Stack[-1] = Stack[-4]
0x64e: Push(-1, 2); TaskCall(2)
0x64f: Call 0x10a

0x650: Pop(-1, 2); TaskReturn
0x651: Pop(1)
0x652: @ ResetAAS()
0x653: Pop(0)
0x654: Return(); Pop(2)

0x655: PushEmpty()
0x656: PushEmpty(float, object)
0x657: Stack[-1] = Stack[-3]
0x658: Call 0x45d

0x659: Pop(1)
0x65a: Push((float)40000.0)
0x65b: Stack[-4] = Stack[-2] <= Stack[-1]; Pop(2);
0x65c: Return(); Pop(0)

0x65d: PushEmpty(bool, bool)
0x65e: @ IsPlayerActor(Stack[-3], Stack[-1])
0x65f: Pop(0)
0x660: Stack[-4] = Stack[-1]
0x661: Return(); Pop(2)

0x662: PushEmpty(bool, bool)
0x663: PushEmpty(bool, object)
0x664: Stack[-1] = Stack[-5]
0x665: Call 0x4e1

0x666: Pop(1)
0x667: Pop(1); Push((bool) Stack[-1] == 0)
0x668: IF (Stack[-1] == 0) GOTO 0x66b; Pop(1)

0x669: Stack[-4] = (bool) 0
0x66a: Return(); Pop(2)

0x66b: Push(GlobalVars[0])
0x66c: @@ in(Stack[-2], Stack[-4])
0x66d: Pop(1)
0x66e: Push(Stack[-1])
0x66f: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x670: Stack[-4] = (bool) 1
0x671: Return(); Pop(2)

0x672: PushEmpty(bool, object)
0x673: Stack[-1] = Stack[-5]
0x674: Call 0x65d

0x675: Stack[-6] = Stack[-2]
0x676: Pop(2)
0x677: Return(); Pop(2)

0x678: PushEmpty()
0x679: PushEmpty(object)
0x67a: Stack[-1] = Stack[-2]
0x67b: Call 0x6a6

0x67c: Pop(1)
0x67d: Return(); Pop(0)

0x67e: PushEmpty(float, bool, float, bool)
0x67f: PushEmpty(bool, object, string)
0x680: Stack[-2] = Stack[-8]
0x681: Stack[-1] = "reputation"
0x682: Call 0x46c

0x683: Pop(2)
0x684: Pop(1); Push((bool) Stack[-1] == 0)
0x685: IF (Stack[-1] == 0) GOTO 0x688; Pop(1)

0x686: Stack[-7] = (bool) 0
0x687: Return(); Pop(4)

0x688: Push("reputation")
0x689: @@ GetProperty(Stack[-1], Stack[-3])
0x68a: Pop(1)
0x68b: Push((float)0.5)
0x68c: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x68d: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x68e: Stack[-7] = (bool) 0
0x68f: Return(); Pop(4)

0x690: @ CanSee(Stack[-1], Stack[-6])
0x691: Pop(0)
0x692: PushEmpty(bool)
0x693: Stack[-1] = (bool) 1
0x694: Push(Stack[-2])
0x695: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x696: PushEmpty(float, object)
0x697: Stack[-1] = Stack[-9]
0x698: Call 0x45d

0x699: Pop(1)
0x69a: Push((float)160000.0)
0x69b: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x69c: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x69d: Stack[-1] = (bool) 0
0x69e: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x69f: Push((float)-0.2)
0x6a0: @ ReportReputationChange(Stack[-7], Stack[-6], Stack[-1])
0x6a1: Pop(1)
0x6a2: Stack[-7] = (bool) 1
0x6a3: Return(); Pop(4)

0x6a4: Stack[-7] = (bool) 0
0x6a5: Return(); Pop(4)

0x6a6: PushEmpty()
0x6a7: PushEmpty(object)
0x6a8: Stack[-1] = Stack[-2]
0x6a9: Call 0x640

0x6aa: Pop(1)
0x6ab: Return(); Pop(0)

0x6ac: PushEmpty(object, object)
0x6ad: @ GetScene(Stack[-1])
0x6ae: Pop(0)
0x6af: PushEmpty(object)
0x6b0: Call 0x559

0x6b1: Pop(0)
0x6b2: @@ RemoveStationaryActor(Stack[-1])
0x6b3: Pop(1)
0x6b4: PushEmpty(object)
0x6b5: Stack[-1] = Stack[-4]
0x6b6: Call 0x5f3

0x6b7: Pop(1)
0x6b8: Return(); Pop(2)

0x6b9: Stack[-1] = 0
