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
	attack
	execute
	quest_d11_02
	soldier_attack
	cleanup
	restore
	in
	attack_begin2
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
	GenerateMoney: iMin > iMax
	Money
	rifle_ammo
	rusk
	add
	reputation
	actor_unload
	soldier_dead

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
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetPFPosition (1 args)
	irand (2 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	Rotate (3 args)
	FindActor (2 args)
	GetEyesHeight (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	RotateAsync (2 args)
	self (1 args)
	CreateObjectSet (1 args)
	Trigger (2 args)
	GetInvItemByName (2 args)
	AddItem (4 args)
	ClearSubContainer (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ResetAAS (0 args)
	IsPlayerActor (2 args)
	ReportReputationChange (3 args)

RunOp = 0x2ef
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
	GTASK_4 Vars = (bool) Params = 0
		EVENT_26 Op = 0x2cc Vars = (string)
		EVENT_17 Op = 0x2e8 Vars = (object)
		EVENT_6 Op = 0x30f Vars = ()
	GTASK_5 Vars = (cvector, cvector) Params = 1
		EVENT_3 Op = 0x337 Vars = (object)
		EVENT_17 Op = 0x355 Vars = (object)
		EVENT_30 Op = 0x369 Vars = (object, object)
		EVENT_1 Op = 0x375 Vars = (object)
	GTASK_6 Vars = (bool) Params = 0
		EVENT_17 Op = 0x40e Vars = (object)
		EVENT_26 Op = 0x415 Vars = (string)

Events:
EVENT_22 Op = 0x5bf Vars = (object, int, float, float)
EVENT_16 Op = 0x5c7 Vars = (object, string)
EVENT_41 Op = 0x5d4 Vars = (object)
EVENT_6 Op = 0x66a Vars = ()

0x0: PushEmpty()
0x1: PushEmpty()
0x2: Call 0x58d

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
0xa0: Call 0x4b0

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
0xb9: Call 0x5d4

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
0xce: Call 0x50b

0xcf: Pop(1)
0xd0: Return(); Pop(0)

0xd1: PushEmpty()
0xd2: PushEmpty(bool, object)
0xd3: Stack[-1] = Stack[-3]
0xd4: Call 0x4b0

0xd5: Pop(1)
0xd6: Pop(1); Push((bool) Stack[-1] == 0)
0xd7: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd8: PushEmpty(object)
0xd9: Stack[-1] = Stack[-2]
0xda: Call 0x5ec

0xdb: Pop(1)
0xdc: Return(); Pop(0)

0xdd: PushEmpty()
0xde: Call 0xab

0xdf: Pop(0)
0xe0: PushEmpty(object)
0xe1: Stack[-1] = Stack[-2]
0xe2: Call 0x5f9

0xe3: Pop(1)
0xe4: Return(); Pop(0)

0xe5: PushEmpty()
0xe6: PushEmpty(bool, object, object)
0xe7: Stack[-2] = Stack[-5]
0xe8: Stack[-1] = Stack[-4]
0xe9: Call 0x642

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
0xf4: Call 0x626

0xf5: Pop(1)
0xf6: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xf7: PushEmpty()
0xf8: Call 0xab

0xf9: Pop(0)
0xfa: PushEmpty(object)
0xfb: Stack[-1] = Stack[-2]
0xfc: Call 0x63c

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
0x112: Call 0x619

0x113: Pop(1)
0x114: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x115: PushEmpty(object, bool)
0x116: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x117: Stack[-1] = (bool) 1
0x118: Call 0x5e1

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
0x14c: Call 0x619

0x14d: Pop(1)
0x14e: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x14f: PushEmpty()
0x150: Call 0x195

0x151: Pop(0)
0x152: PushEmpty(object, bool)
0x153: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x154: Stack[-1] = (bool) 0
0x155: Call 0x5e1

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
0x172: Call 0x5e1

0x173: Pop(2)
0x174: Return(); Pop(6)

0x175: PushEmpty()
0x176: PushEmpty(bool, object)
0x177: Stack[-1] = Stack[-3]
0x178: Call 0x4b0

0x179: Pop(1)
0x17a: Pop(1); Push((bool) Stack[-1] == 0)
0x17b: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17c: PushEmpty(object)
0x17d: Stack[-1] = Stack[-2]
0x17e: Call 0x5ec

0x17f: Pop(1)
0x180: Return(); Pop(0)

0x181: PushEmpty()
0x182: Call 0x195

0x183: Pop(0)
0x184: PushEmpty(object)
0x185: Stack[-1] = Stack[-2]
0x186: Call 0x5f9

0x187: Pop(1)
0x188: Return(); Pop(0)

0x189: PushEmpty()
0x18a: PushEmpty(bool, object, object)
0x18b: Stack[-2] = Stack[-5]
0x18c: Stack[-1] = Stack[-4]
0x18d: Call 0x642

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
0x1a2: Call 0x5d4

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
0x1ba: Call 0x4b0

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
0x1c7: Call 0x50b

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
0x1de: Call 0x4b0

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
0x203: Call 0x4b0

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
0x235: Call 0x50b

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
0x255: Call 0x425

0x256: Stack[-10] = Stack[-2]
0x257: Pop(2)
0x258: PushEmpty(float, cvector, cvector)
0x259: Stack[-2] = Stack[-12]
0x25a: Stack[-1] = Stack[-11]
0x25b: Call 0x552

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
0x26e: Call 0x425

0x26f: Stack[-10] = Stack[-2]
0x270: Pop(2)
0x271: Push(CvectorIndex(Stack[-8], 1))
0x272: PushEmpty(float, object)
0x273: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x274: Call 0x516

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
0x285: Call 0x447

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
0x2ab: Call 0x4b0

0x2ac: Pop(1)
0x2ad: Pop(1); Push((bool) Stack[-1] == 0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2af: Return(); Pop(0)

0x2b0: PushEmpty(object)
0x2b1: Stack[-1] = Stack[-2]
0x2b2: Call 0x5ec

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
0x2c4: Call 0x642

0x2c5: Pop(2)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c7: PushEmpty(object)
0x2c8: Stack[-1] = Stack[-3]
0x2c9: Call 0x2a8

0x2ca: Pop(1)
0x2cb: Return(); Pop(0)

0x2cc: PushEmpty()
0x2cd: Push("attack")
0x2ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2cf: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d0: PushEmpty(object)
0x2d1: PushEmpty(object)
0x2d2: Call 0x434

0x2d3: Stack[-2] = Stack[-1]
0x2d4: Pop(1)
0x2d5: Push(-1, 2); TaskCall(5)
0x2d6: Call 0x321

0x2d7: Pop(-1, 2); TaskReturn
0x2d8: Pop(1)
0x2d9: GOTO 0x2e7

0x2da: Push("execute")
0x2db: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2dd: PushEmpty()
0x2de: Push(-0, 1); TaskCall(6)
0x2df: Call 0x3d6

0x2e0: Pop(-0, 1); TaskReturn
0x2e1: Pop(0)
0x2e2: GOTO 0x2e7

0x2e3: PushEmpty(string)
0x2e4: Stack[-1] = Stack[-2]
0x2e5: Call 0x2f3

0x2e6: Pop(1)
0x2e7: Return(); Pop(0)

0x2e8: PushEmpty()
0x2e9: PushEmpty(bool, string, string)
0x2ea: Stack[-2] = "quest_d11_02"
0x2eb: Stack[-1] = "soldier_attack"
0x2ec: Call 0x563

0x2ed: Pop(3)
0x2ee: Return(); Pop(0)

0x2ef: @ Hold()
0x2f0: Pop(0)
0x2f1: GOTO 0x2ef

0x2f2: Return(); Pop(0)

0x2f3: PushEmpty(bool, bool)
0x2f4: Push("cleanup")
0x2f5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x2f7: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2f8: @ IsLoaded(Stack[-1])
0x2f9: Pop(0)
0x2fa: PushEmpty(bool)
0x2fb: Stack[-1] = (bool) 0
0x2fc: Pop(0); Push((bool) Stack[-2] == 0)
0x2fd: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x2fe: PushEmpty(bool)
0x2ff: Call 0x31f

0x300: Pop(0)
0x301: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x302: Stack[-1] = (bool) 1
0x303: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x304: PushEmpty(object)
0x305: Call 0x51d

0x306: Pop(0)
0x307: @ RemoveActor(Stack[-1])
0x308: Pop(1)
0x309: GOTO 0x30e

0x30a: Push("restore")
0x30b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30d: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x30e: Return(); Pop(2)

0x30f: PushEmpty(bool)
0x310: Stack[-1] = (bool) 0
0x311: Push( Stack[0 + Tasks[-1].StackPointer] )
0x312: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x313: PushEmpty(bool)
0x314: Call 0x31f

0x315: Pop(0)
0x316: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x317: Stack[-1] = (bool) 1
0x318: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x319: PushEmpty(object)
0x31a: Call 0x51d

0x31b: Pop(0)
0x31c: @ RemoveActor(Stack[-1])
0x31d: Pop(1)
0x31e: Return(); Pop(0)

0x31f: Stack[-1] = (bool) 1
0x320: Return(); Pop(0)

0x321: PushEmpty()
0x322: PushEmpty()
0x323: Call 0x5da

0x324: Pop(0)
0x325: PushEmpty(object)
0x326: Stack[-1] = Stack[-2]
0x327: Call 0x355

0x328: Pop(1)
0x329: PushEmpty()
0x32a: Call 0x32e

0x32b: Pop(0)
0x32c: GOTO 0x329

0x32d: Return(); Pop(0)

0x32e: PushEmpty()
0x32f: Call 0x5da

0x330: Pop(0)
0x331: PushEmpty()
0x332: Call 0x383

0x333: Pop(0)
0x334: GOTO 0x331

0x335: Return(); Pop(0)

0x336: Return(); Pop(0)

0x337: PushEmpty(bool, bool)
0x338: PushEmpty(bool, object)
0x339: Stack[-1] = Stack[-5]
0x33a: Call 0x4b0

0x33b: Pop(1)
0x33c: Pop(1); Push((bool) Stack[-1] == 0)
0x33d: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33e: Return(); Pop(2)

0x33f: PushEmpty(bool, object)
0x340: Stack[-1] = Stack[-5]
0x341: Call 0x621

0x342: Pop(1)
0x343: Pop(1); Push((bool) Stack[-1] == 0)
0x344: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x345: Push(GlobalVars[0])
0x346: @@ in(Stack[-2], Stack[-4])
0x347: Pop(1)
0x348: Pop(0); Push((bool) Stack[-1] == 0)
0x349: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x34a: Return(); Pop(2)

0x34b: PushEmpty()
0x34c: Call 0x3d1

0x34d: Pop(0)
0x34e: PushEmpty(object)
0x34f: Stack[-1] = Stack[-4]
0x350: Push(-1, 1); TaskCall(1)
0x351: Call 0x93

0x352: Pop(-1, 1); TaskReturn
0x353: Pop(1)
0x354: Return(); Pop(2)

0x355: PushEmpty()
0x356: PushEmpty(bool, object)
0x357: Stack[-1] = Stack[-3]
0x358: Call 0x4b0

0x359: Pop(1)
0x35a: Pop(1); Push((bool) Stack[-1] == 0)
0x35b: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x35c: PushEmpty(object)
0x35d: Stack[-1] = Stack[-2]
0x35e: Call 0x5ec

0x35f: Pop(1)
0x360: Return(); Pop(0)

0x361: PushEmpty()
0x362: Call 0x3d1

0x363: Pop(0)
0x364: PushEmpty(object)
0x365: Stack[-1] = Stack[-2]
0x366: Call 0x5f9

0x367: Pop(1)
0x368: Return(); Pop(0)

0x369: PushEmpty()
0x36a: PushEmpty(bool, object, object)
0x36b: Stack[-2] = Stack[-5]
0x36c: Stack[-1] = Stack[-4]
0x36d: Call 0x642

0x36e: Pop(2)
0x36f: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x370: PushEmpty(object)
0x371: Stack[-1] = Stack[-3]
0x372: Call 0x355

0x373: Pop(1)
0x374: Return(); Pop(0)

0x375: PushEmpty()
0x376: PushEmpty(bool, object)
0x377: Stack[-1] = Stack[-3]
0x378: Call 0x626

0x379: Pop(1)
0x37a: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x37b: PushEmpty()
0x37c: Call 0x3d1

0x37d: Pop(0)
0x37e: PushEmpty(object)
0x37f: Stack[-1] = Stack[-2]
0x380: Call 0x677

0x381: Pop(1)
0x382: Return(); Pop(0)

0x383: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x384: @ GetPFPosition(Stack[-1])
0x385: Pop(0)
0x386: @ GetDirection(Stack[-0])
0x387: Pop(0)
0x388: Push((int) 60)
0x389: @ irand(Stack[-5], Stack[-1])
0x38a: Pop(1)
0x38b: Push((int) 30)
0x38c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x38d: @ Sleep(Stack[-1], Stack[-4])
0x38e: Pop(1)
0x38f: Push(Stack[-3])
0x390: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x391: PushEmpty()
0x392: Call 0x336

0x393: Pop(0)
0x394: GOTO 0x3cf

0x395: @ GetPFPosition(Stack[-2])
0x396: Pop(0)
0x397: PushEmpty(float, cvector, cvector)
0x398: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x399: Stack[-1] = Stack[-5]
0x39a: Call 0x523

0x39b: Pop(2)
0x39c: Push((int) 40000)
0x39d: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x39e: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x39f: @ FindPathTo(Stack[-1], Stack[-1])
0x3a0: Pop(0)
0x3a1: Pop(0); Push(( Stack[-1] != 0 )
0x3a2: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3a3: @ RotatePath(Stack[-1], Stack[-3])
0x3a4: Pop(0)
0x3a5: Pop(0); Push((bool) Stack[-3] == 0)
0x3a6: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a7: GOTO 0x3ce

0x3a8: Push((bool) 0)
0x3a9: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x3aa: Pop(1)
0x3ab: Pop(0); Push((bool) Stack[-3] == 0)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3ad: GOTO 0x3ce

0x3ae: Push(CvectorIndex(Stack[-0], 0))
0x3af: Push(CvectorIndex(Stack[-0], 2))
0x3b0: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x3b1: Pop(2)
0x3b2: Pop(0); Push((bool) Stack[-3] == 0)
0x3b3: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b4: GOTO 0x3ce

0x3b5: @ WaitForAnimEnd(Stack[-3])
0x3b6: Pop(0)
0x3b7: Pop(0); Push((bool) Stack[-3] == 0)
0x3b8: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b9: GOTO 0x3ce

0x3ba: GOTO 0x3cf

0x3bb: GOTO 0x3bf

0x3bc: Push((int) 1)
0x3bd: @ Sleep(Stack[-1])
0x3be: Pop(1)
0x3bf: Stack[-1] = 0
0x3c0: GOTO 0x3ce

0x3c1: Push(CvectorIndex(Stack[-0], 0))
0x3c2: Push(CvectorIndex(Stack[-0], 2))
0x3c3: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x3c4: Pop(2)
0x3c5: Pop(0); Push((bool) Stack[-3] == 0)
0x3c6: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c7: GOTO 0x3ce

0x3c8: @ WaitForAnimEnd(Stack[-3])
0x3c9: Pop(0)
0x3ca: Pop(0); Push((bool) Stack[-3] == 0)
0x3cb: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3cc: GOTO 0x3ce

0x3cd: GOTO 0x3cf

0x3ce: GOTO 0x395

0x3cf: GOTO 0x388

0x3d0: Return(); Pop(8)

0x3d1: @ StopGroup0()
0x3d2: Pop(0)
0x3d3: @ Stop()
0x3d4: Pop(0)
0x3d5: Return(); Pop(0)

0x3d6: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x3d7: Push("all")
0x3d8: Push("attack_on")
0x3d9: @ PlayAnimation(Stack[-2], Stack[-1])
0x3da: Pop(2)
0x3db: @ WaitForAnimEnd()
0x3dc: Pop(0)
0x3dd: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x3de: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3df: Push("all")
0x3e0: Push("attack_on")
0x3e1: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x3e2: Pop(2)
0x3e3: Push((int) 20)
0x3e4: @ Sleep(Stack[-1])
0x3e5: Pop(1)
0x3e6: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x3e7: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3e8: Push("all")
0x3e9: Push("attack_begin1")
0x3ea: @ PlayAnimation(Stack[-2], Stack[-1])
0x3eb: Pop(2)
0x3ec: @ WaitForAnimEnd()
0x3ed: Pop(0)
0x3ee: PushEmpty(bool, string, string)
0x3ef: Stack[-2] = "quest_d11_02"
0x3f0: Stack[-1] = "execute"
0x3f1: Call 0x563

0x3f2: Pop(3)
0x3f3: Push("shot")
0x3f4: @ Speak(Stack[-1])
0x3f5: Pop(1)
0x3f6: Push("all")
0x3f7: Push("attack_begin2")
0x3f8: @ PlayAnimation(Stack[-2], Stack[-1])
0x3f9: Pop(2)
0x3fa: @ WaitForAnimEnd()
0x3fb: Pop(0)
0x3fc: Push("all")
0x3fd: Push("attack_off")
0x3fe: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ff: Pop(2)
0x400: @ WaitForAnimEnd()
0x401: Pop(0)
0x402: Push( Stack[0 + Tasks[-1].StackPointer] )
0x403: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x404: PushEmpty(object)
0x405: PushEmpty(object)
0x406: Call 0x434

0x407: Stack[-2] = Stack[-1]
0x408: Pop(1)
0x409: Push(-1, 2); TaskCall(5)
0x40a: Call 0x321

0x40b: Pop(-1, 2); TaskReturn
0x40c: Pop(1)
0x40d: Return(); Pop(0)

0x40e: PushEmpty()
0x40f: PushEmpty(bool, string, string)
0x410: Stack[-2] = "quest_d11_02"
0x411: Stack[-1] = "soldier_attack"
0x412: Call 0x563

0x413: Pop(3)
0x414: Return(); Pop(0)

0x415: PushEmpty()
0x416: Push("attack")
0x417: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x418: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x419: @ StopGroup0()
0x41a: Pop(0)
0x41b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x41c: Return(); Pop(0)

0x41d: PushEmpty()
0x41e: Push((int) 1)
0x41f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x420: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x421: Stack[-2] = "fire"
0x422: Return(); Pop(0)

0x423: Stack[-2] = "phys"
0x424: Return(); Pop(0)

0x425: PushEmpty(cvector, cvector, cvector, cvector)
0x426: @ GetPosition(Stack[-2])
0x427: Pop(0)
0x428: @@ GetPosition(Stack[-1])
0x429: Pop(0)
0x42a: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x42b: Return(); Pop(4)

0x42c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x42d: @ GetPosition(Stack[-3])
0x42e: Pop(0)
0x42f: @@ GetPosition(Stack[-2])
0x430: Pop(0)
0x431: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x432: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x433: Return(); Pop(6)

0x434: PushEmpty(object, object)
0x435: Push("player")
0x436: @ FindActor(Stack[-2], Stack[-1])
0x437: Pop(1)
0x438: Stack[-3] = Stack[-1]
0x439: Return(); Pop(2)

0x43a: Stack[-1] = 0
0x43b: PushEmpty(bool, bool)
0x43c: Push("HasProperty")
0x43d: Push((int) 2)
0x43e: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x43f: Pop(1); Push((bool) Stack[-1] == 0)
0x440: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x441: Stack[-5] = (bool) 0
0x442: Return(); Pop(2)

0x443: @@ HasProperty(Stack[-3], Stack[-1])
0x444: Pop(0)
0x445: Stack[-5] = Stack[-1]
0x446: Return(); Pop(2)

0x447: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x448: PushEmpty(bool, object, string)
0x449: Stack[-2] = Stack[-18]
0x44a: Stack[-1] = "health"
0x44b: Call 0x43b

0x44c: Pop(2)
0x44d: Pop(1); Push((bool) Stack[-1] == 0)
0x44e: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x44f: Stack[-16] = (float) 0.0
0x450: Return(); Pop(12)

0x451: PushEmpty(bool, object, string)
0x452: Stack[-2] = Stack[-18]
0x453: Stack[-1] = "armor"
0x454: Call 0x43b

0x455: Pop(2)
0x456: Pop(1); Push((bool) Stack[-1] == 0)
0x457: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x458: Stack[-6] = (int) 0
0x459: GOTO 0x45d

0x45a: Push("armor")
0x45b: @@ GetProperty(Stack[-1], Stack[-7])
0x45c: Pop(1)
0x45d: Push("armor_")
0x45e: PushEmpty(string, int)
0x45f: Stack[-1] = Stack[-16]
0x460: Call 0x41d

0x461: Pop(1)
0x462: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x463: PushEmpty(bool, object, string)
0x464: Stack[-2] = Stack[-18]
0x465: Stack[-1] = Stack[-8]
0x466: Call 0x43b

0x467: Pop(2)
0x468: Pop(1); Push((bool) Stack[-1] == 0)
0x469: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x46a: Stack[-4] = (int) 0
0x46b: GOTO 0x46e

0x46c: @@ GetProperty(Stack[-5], Stack[-4])
0x46d: Pop(0)
0x46e: PushEmpty(float, float, float)
0x46f: Pop(0); Push(Stack[-9] + Stack[-7]);
0x470: Push((float)100.0)
0x471: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x472: Stack[-1] = (int) 1
0x473: Call 0x527

0x474: Stack[-6] = Stack[-3]
0x475: Pop(3)
0x476: Push("health")
0x477: @@ GetProperty(Stack[-1], Stack[-3])
0x478: Pop(1)
0x479: Push((int) 1)
0x47a: Pop(1); Push(Stack[-1] - Stack[-4]);
0x47b: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x47c: Push("health")
0x47d: PushEmpty(float, float, float, float)
0x47e: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x47f: Stack[-2] = (int) 0
0x480: Stack[-1] = (int) 1
0x481: Call 0x52e

0x482: Pop(3)
0x483: @@ SetProperty(Stack[-2], Stack[-1])
0x484: Pop(2)
0x485: Stack[-16] = Stack[-1]
0x486: Return(); Pop(12)

0x487: PushEmpty(bool, bool)
0x488: @@ IsDead(Stack[-1])
0x489: Pop(0)
0x48a: Stack[-4] = Stack[-1]
0x48b: Return(); Pop(2)

0x48c: PushEmpty(object, object, object, object)
0x48d: Pop(0); Push((bool) Stack[-5] == 0)
0x48e: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x48f: Stack[-6] = (bool) 0
0x490: Return(); Pop(4)

0x491: PushEmpty(bool)
0x492: Stack[-1] = (bool) 0
0x493: Push("IsDead")
0x494: Push((int) 1)
0x495: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x496: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x497: PushEmpty(bool, object)
0x498: Stack[-1] = Stack[-8]
0x499: Call 0x487

0x49a: Pop(1)
0x49b: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x49c: Stack[-1] = (bool) 1
0x49d: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49e: Stack[-6] = (bool) 0
0x49f: Return(); Pop(4)

0x4a0: @ GetScene(Stack[-2])
0x4a1: Pop(0)
0x4a2: Pop(0); Push((bool) Stack[-2] == 0)
0x4a3: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x4a4: Stack[-6] = (bool) 0
0x4a5: Return(); Pop(4)

0x4a6: @@ GetScene(Stack[-1])
0x4a7: Pop(0)
0x4a8: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x4a9: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4aa: Stack[-6] = (bool) 0
0x4ab: Return(); Pop(4)

0x4ac: Stack[-6] = (bool) 1
0x4ad: Return(); Pop(4)

0x4ae: Stack[-1] = 0
0x4af: Stack[-2] = 0
0x4b0: PushEmpty(int, int)
0x4b1: PushEmpty(bool, object)
0x4b2: Stack[-1] = Stack[-5]
0x4b3: Call 0x48c

0x4b4: Pop(1)
0x4b5: Pop(1); Push((bool) Stack[-1] == 0)
0x4b6: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b7: Stack[-4] = (bool) 0
0x4b8: Return(); Pop(2)

0x4b9: PushEmpty(bool, object, string)
0x4ba: Stack[-2] = Stack[-6]
0x4bb: Stack[-1] = "noaccess"
0x4bc: Call 0x43b

0x4bd: Pop(2)
0x4be: Pop(1); Push((bool) Stack[-1] == 0)
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4c0: Stack[-4] = (bool) 1
0x4c1: Return(); Pop(2)

0x4c2: Push("noaccess")
0x4c3: @@ GetProperty(Stack[-1], Stack[-2])
0x4c4: Pop(1)
0x4c5: Push((int) 0)
0x4c6: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x4c7: Return(); Pop(2)

0x4c8: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x4c9: PushEmpty(bool)
0x4ca: Stack[-1] = (bool) 0
0x4cb: Push((int) 4)
0x4cc: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x4cd: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4ce: Push((int) 5)
0x4cf: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4d1: Stack[-1] = (bool) 1
0x4d2: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4d3: @ GetScene(Stack[-10])
0x4d4: Pop(0)
0x4d5: @ GetPosition(Stack[-8])
0x4d6: Pop(0)
0x4d7: @ GetEyesHeight(Stack[-7])
0x4d8: Pop(0)
0x4d9: Push(CvectorIndex(Stack[-8], 1))
0x4da: Push((int) 2)
0x4db: Pop(1); Push(Stack[-9] / Stack[-1]);
0x4dc: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x4dd: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x4de: Push("scripted")
0x4df: Push(CVector(0.0, 0.0, 1.0))
0x4e0: Push("blood.xml")
0x4e1: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x4e2: Pop(3)
0x4e3: Stack[-9] = 0
0x4e4: Stack[-10] = 0
0x4e5: Pop(0); Push((bool) Stack[-23] == 0)
0x4e6: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e7: Return(); Pop(20)

0x4e8: @ GetSecondaryAnimationType(Stack[-6])
0x4e9: Pop(0)
0x4ea: Push((int) 0)
0x4eb: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x4ec: IF (Stack[-1] == 0) GOTO 0x4ee; Pop(1)

0x4ed: Return(); Pop(20)

0x4ee: @@ GetPosition(Stack[-5])
0x4ef: Pop(0)
0x4f0: @ GetPosition(Stack[-4])
0x4f1: Pop(0)
0x4f2: @ GetDirection(Stack[-3])
0x4f3: Pop(0)
0x4f4: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x4f5: Push(CvectorIndex(Stack[-2], 0))
0x4f6: Push(CvectorIndex(Stack[-4], 0))
0x4f7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4f8: Push(CvectorIndex(Stack[-3], 2))
0x4f9: Push(CvectorIndex(Stack[-5], 2))
0x4fa: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4fb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4fc: Push((int) 0)
0x4fd: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4fe: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4ff: Stack[-1] = "fhit"
0x500: GOTO 0x502

0x501: Stack[-1] = "bhit"
0x502: Push("hit_react")
0x503: Push("1")
0x504: Pop(1); Push(Stack[-3] + Stack[-1]);
0x505: Push("2")
0x506: Pop(1); Push(Stack[-4] + Stack[-1]);
0x507: Push((int) -10)
0x508: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x509: Pop(4)
0x50a: Return(); Pop(20)

0x50b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x50c: @@ GetPosition(Stack[-3])
0x50d: Pop(0)
0x50e: @ GetPosition(Stack[-2])
0x50f: Pop(0)
0x510: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x511: Push(CvectorIndex(Stack[-1], 0))
0x512: Push(CvectorIndex(Stack[-2], 2))
0x513: @ RotateAsync(Stack[-2], Stack[-1])
0x514: Pop(2)
0x515: Return(); Pop(6)

0x516: PushEmpty(float, float, float, float)
0x517: @ GetEyesHeight(Stack[-2])
0x518: Pop(0)
0x519: @@ GetEyesHeight(Stack[-1])
0x51a: Pop(0)
0x51b: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x51c: Return(); Pop(4)

0x51d: PushEmpty(object, object)
0x51e: @ self(Stack[-1])
0x51f: Pop(0)
0x520: Stack[-3] = Stack[-1]
0x521: Return(); Pop(2)

0x522: Stack[-1] = 0
0x523: PushEmpty(cvector, cvector)
0x524: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x525: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x526: Return(); Pop(2)

0x527: PushEmpty()
0x528: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x529: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x52a: Stack[-3] = Stack[-2]
0x52b: GOTO 0x52d

0x52c: Stack[-3] = Stack[-1]
0x52d: Return(); Pop(0)

0x52e: PushEmpty()
0x52f: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x530: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x531: Stack[-4] = Stack[-2]
0x532: Return(); Pop(0)

0x533: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x534: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x535: Stack[-4] = Stack[-1]
0x536: Return(); Pop(0)

0x537: Stack[-4] = Stack[-3]
0x538: Return(); Pop(0)

0x539: PushEmpty(object, object)
0x53a: @ CreateObjectSet(Stack[-1])
0x53b: Pop(0)
0x53c: Stack[-3] = Stack[-1]
0x53d: Return(); Pop(2)

0x53e: Stack[-1] = 0
0x53f: PushEmpty()
0x540: Push(CvectorIndex(Stack[-2], 0))
0x541: Push(CvectorIndex(Stack[-2], 0))
0x542: Pop(2); Push(Stack[-2] * Stack[-1]);
0x543: Push(CvectorIndex(Stack[-3], 2))
0x544: Push(CvectorIndex(Stack[-3], 2))
0x545: Pop(2); Push(Stack[-2] * Stack[-1]);
0x546: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x547: Return(); Pop(0)

0x548: PushEmpty()
0x549: Push(CvectorIndex(Stack[-1], 0))
0x54a: Push(CvectorIndex(Stack[-2], 0))
0x54b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x54c: Push(CvectorIndex(Stack[-2], 2))
0x54d: Push(CvectorIndex(Stack[-3], 2))
0x54e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x54f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x550: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x551: Return(); Pop(0)

0x552: PushEmpty()
0x553: PushEmpty(float, cvector, cvector)
0x554: Stack[-2] = Stack[-5]
0x555: Stack[-1] = Stack[-4]
0x556: Call 0x53f

0x557: Pop(2)
0x558: PushEmpty(float, cvector)
0x559: Stack[-1] = Stack[-5]
0x55a: Call 0x548

0x55b: Pop(1)
0x55c: PushEmpty(float, cvector)
0x55d: Stack[-1] = Stack[-5]
0x55e: Call 0x548

0x55f: Pop(1)
0x560: Pop(2); Push(Stack[-2] * Stack[-1]);
0x561: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x562: Return(); Pop(0)

0x563: PushEmpty(object, object)
0x564: @ FindActor(Stack[-1], Stack[-4])
0x565: Pop(0)
0x566: Pop(0); Push((bool) Stack[-1] == 0)
0x567: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x568: Stack[-5] = (bool) 0
0x569: Return(); Pop(2)

0x56a: @ Trigger(Stack[-1], Stack[-3])
0x56b: Pop(0)
0x56c: Stack[-5] = (bool) 1
0x56d: Return(); Pop(2)

0x56e: Stack[-1] = 0
0x56f: PushEmpty(int, int, int, bool, int, int, int, bool)
0x570: Pop(0); Push((bool) Stack[-10] > Stack[-9])
0x571: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x572: Push("GenerateMoney: iMin > iMax")
0x573: @ Trace(Stack[-1])
0x574: Pop(1)
0x575: Return(); Pop(8)

0x576: Stack[-4] = (int) 0
0x577: Pop(0); Push((bool) Stack[-10] != Stack[-9])
0x578: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x579: Pop(0); Push(Stack[-9] - Stack[-10]);
0x57a: @ irand(Stack[-4], Stack[-1])
0x57b: Pop(1)
0x57c: GOTO 0x581

0x57d: Push((int) 0)
0x57e: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x57f: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x580: Return(); Pop(8)

0x581: Stack[-4] = Stack[-4] + Stack[-10]; Pop(0);
0x582: Push((int) 0)
0x583: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x584: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x585: Return(); Pop(8)

0x586: Push("Money")
0x587: @ GetInvItemByName(Stack[-3], Stack[-1])
0x588: Pop(1)
0x589: Push((int) 0)
0x58a: @ AddItem(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x58b: Pop(1)
0x58c: Return(); Pop(8)

0x58d: PushEmpty(int, bool, int, bool)
0x58e: Push((int) 0)
0x58f: @ ClearSubContainer(Stack[-1])
0x590: Pop(1)
0x591: PushEmpty(int, int)
0x592: Stack[-2] = (int) 500
0x593: Stack[-1] = (int) 1000
0x594: Call 0x56f

0x595: Pop(2)
0x596: Push((int) 4)
0x597: @ irand(Stack[-3], Stack[-1])
0x598: Pop(1)
0x599: Push((int) 0)
0x59a: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x59b: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x59c: PushEmpty(int, string)
0x59d: Stack[-1] = "rifle_ammo"
0x59e: Call 0x5b2

0x59f: Pop(1)
0x5a0: Push((int) 0)
0x5a1: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x5a2: Pop(2)
0x5a3: Push((int) 3)
0x5a4: @ irand(Stack[-3], Stack[-1])
0x5a5: Pop(1)
0x5a6: Push((int) 0)
0x5a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a8: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5a9: PushEmpty(int, string)
0x5aa: Stack[-1] = "rusk"
0x5ab: Call 0x5b2

0x5ac: Pop(1)
0x5ad: Push((int) 0)
0x5ae: Push((int) 1)
0x5af: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5b0: Pop(3)
0x5b1: Return(); Pop(4)

0x5b2: PushEmpty(int, int)
0x5b3: @ GetInvItemByName(Stack[-1], Stack[-3])
0x5b4: Pop(0)
0x5b5: Stack[-4] = Stack[-1]
0x5b6: Return(); Pop(2)

0x5b7: PushEmpty()
0x5b8: PushEmpty(object)
0x5b9: Stack[-1] = Stack[-2]
0x5ba: Push(-1, 0); TaskCall(0)
0x5bb: Call 0x0

0x5bc: Pop(-1, 0); TaskReturn
0x5bd: Pop(1)
0x5be: Return(); Pop(0)

0x5bf: PushEmpty()
0x5c0: PushEmpty(object, int, float)
0x5c1: Stack[-3] = Stack[-7]
0x5c2: Stack[-2] = Stack[-6]
0x5c3: Stack[-1] = Stack[-5]
0x5c4: Call 0x4c8

0x5c5: Pop(3)
0x5c6: Return(); Pop(0)

0x5c7: PushEmpty(float, float)
0x5c8: Push("health")
0x5c9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5ca: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5cb: Push("health")
0x5cc: @ GetProperty(Stack[-1], Stack[-2])
0x5cd: Pop(1)
0x5ce: Push((int) 0)
0x5cf: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x5d0: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5d1: @ SignalDeath(Stack[-4])
0x5d2: Pop(0)
0x5d3: Return(); Pop(2)

0x5d4: PushEmpty()
0x5d5: PushEmpty(object)
0x5d6: Stack[-1] = Stack[-2]
0x5d7: Call 0x67d

0x5d8: Pop(1)
0x5d9: Return(); Pop(0)

0x5da: Push(GlobalVars[0])
0x5db: PushEmpty(object)
0x5dc: Call 0x539

0x5dd: Stack[-2] = Stack[-1]
0x5de: Pop(1)
0x5df: GlobalVars[0] = Stack[-1]; Pop(1)
0x5e0: Return(); Pop(0)

0x5e1: PushEmpty()
0x5e2: PushEmpty(object, bool)
0x5e3: Stack[-2] = Stack[-4]
0x5e4: Stack[-1] = Stack[-3]
0x5e5: Push(-2, 3); TaskCall(3)
0x5e6: Call 0x1a5

0x5e7: Pop(-2, 3); TaskReturn
0x5e8: Pop(2)
0x5e9: @ ResetAAS()
0x5ea: Pop(0)
0x5eb: Return(); Pop(0)

0x5ec: PushEmpty(bool, bool)
0x5ed: Pop(0); Push((bool) Stack[-3] == 0)
0x5ee: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5ef: Return(); Pop(2)

0x5f0: Push(GlobalVars[0])
0x5f1: @@ in(Stack[-2], Stack[-4])
0x5f2: Pop(1)
0x5f3: Pop(0); Push((bool) Stack[-1] == 0)
0x5f4: IF (Stack[-1] == 0) GOTO 0x5f8; Pop(1)

0x5f5: Push(GlobalVars[0])
0x5f6: @@ add(Stack[-4])
0x5f7: Pop(1)
0x5f8: Return(); Pop(2)

0x5f9: PushEmpty()
0x5fa: PushEmpty(object)
0x5fb: Stack[-1] = Stack[-2]
0x5fc: Call 0x5ec

0x5fd: Pop(1)
0x5fe: PushEmpty(object, bool)
0x5ff: Stack[-2] = Stack[-3]
0x600: Stack[-1] = (bool) 1
0x601: Call 0x5e1

0x602: Pop(2)
0x603: Return(); Pop(0)

0x604: PushEmpty(bool, bool)
0x605: Push(GlobalVars[0])
0x606: @@ in(Stack[-2], Stack[-4])
0x607: Pop(1)
0x608: Push(Stack[-1])
0x609: IF (Stack[-1] == 0) GOTO 0x610; Pop(1)

0x60a: PushEmpty(object, bool)
0x60b: Stack[-2] = Stack[-5]
0x60c: Stack[-1] = (bool) 1
0x60d: Call 0x5e1

0x60e: Pop(2)
0x60f: GOTO 0x618

0x610: PushEmpty(object)
0x611: Stack[-1] = Stack[-4]
0x612: Push(-1, 2); TaskCall(2)
0x613: Call 0x10a

0x614: Pop(-1, 2); TaskReturn
0x615: Pop(1)
0x616: @ ResetAAS()
0x617: Pop(0)
0x618: Return(); Pop(2)

0x619: PushEmpty()
0x61a: PushEmpty(float, object)
0x61b: Stack[-1] = Stack[-3]
0x61c: Call 0x42c

0x61d: Pop(1)
0x61e: Push((float)40000.0)
0x61f: Stack[-4] = Stack[-2] <= Stack[-1]; Pop(2);
0x620: Return(); Pop(0)

0x621: PushEmpty(bool, bool)
0x622: @ IsPlayerActor(Stack[-3], Stack[-1])
0x623: Pop(0)
0x624: Stack[-4] = Stack[-1]
0x625: Return(); Pop(2)

0x626: PushEmpty(bool, bool)
0x627: PushEmpty(bool, object)
0x628: Stack[-1] = Stack[-5]
0x629: Call 0x4b0

0x62a: Pop(1)
0x62b: Pop(1); Push((bool) Stack[-1] == 0)
0x62c: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x62d: Stack[-4] = (bool) 0
0x62e: Return(); Pop(2)

0x62f: Push(GlobalVars[0])
0x630: @@ in(Stack[-2], Stack[-4])
0x631: Pop(1)
0x632: Push(Stack[-1])
0x633: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x634: Stack[-4] = (bool) 1
0x635: Return(); Pop(2)

0x636: PushEmpty(bool, object)
0x637: Stack[-1] = Stack[-5]
0x638: Call 0x621

0x639: Stack[-6] = Stack[-2]
0x63a: Pop(2)
0x63b: Return(); Pop(2)

0x63c: PushEmpty()
0x63d: PushEmpty(object)
0x63e: Stack[-1] = Stack[-2]
0x63f: Call 0x677

0x640: Pop(1)
0x641: Return(); Pop(0)

0x642: PushEmpty(float, bool, float, bool)
0x643: PushEmpty(bool, object, string)
0x644: Stack[-2] = Stack[-8]
0x645: Stack[-1] = "reputation"
0x646: Call 0x43b

0x647: Pop(2)
0x648: Pop(1); Push((bool) Stack[-1] == 0)
0x649: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x64a: Stack[-7] = (bool) 0
0x64b: Return(); Pop(4)

0x64c: Push("reputation")
0x64d: @@ GetProperty(Stack[-1], Stack[-3])
0x64e: Pop(1)
0x64f: Push((float)0.5)
0x650: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x651: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x652: Stack[-7] = (bool) 0
0x653: Return(); Pop(4)

0x654: @ CanSee(Stack[-1], Stack[-6])
0x655: Pop(0)
0x656: PushEmpty(bool)
0x657: Stack[-1] = (bool) 1
0x658: Push(Stack[-2])
0x659: IF (Stack[-1] == 0) GOTO 0x662; Pop(1)

0x65a: PushEmpty(float, object)
0x65b: Stack[-1] = Stack[-9]
0x65c: Call 0x42c

0x65d: Pop(1)
0x65e: Push((float)160000.0)
0x65f: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x660: IF (Stack[-1] == 0) GOTO 0x662; Pop(1)

0x661: Stack[-1] = (bool) 0
0x662: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x663: Push((float)-0.2)
0x664: @ ReportReputationChange(Stack[-7], Stack[-6], Stack[-1])
0x665: Pop(1)
0x666: Stack[-7] = (bool) 1
0x667: Return(); Pop(4)

0x668: Stack[-7] = (bool) 0
0x669: Return(); Pop(4)

0x66a: PushEmpty(bool, string, string)
0x66b: Stack[-2] = "quest_d11_02"
0x66c: Stack[-1] = "actor_unload"
0x66d: Call 0x563

0x66e: Pop(3)
0x66f: PushEmpty(object)
0x670: Call 0x51d

0x671: Pop(0)
0x672: @ RemoveActor(Stack[-1])
0x673: Pop(1)
0x674: @ Hold()
0x675: Pop(0)
0x676: Return(); Pop(0)

0x677: PushEmpty()
0x678: PushEmpty(object)
0x679: Stack[-1] = Stack[-2]
0x67a: Call 0x604

0x67b: Pop(1)
0x67c: Return(); Pop(0)

0x67d: PushEmpty()
0x67e: PushEmpty(bool, string, string)
0x67f: Stack[-2] = "quest_d11_02"
0x680: Stack[-1] = "soldier_dead"
0x681: Call 0x563

0x682: Pop(3)
0x683: PushEmpty(object)
0x684: Stack[-1] = Stack[-2]
0x685: Call 0x5b7

0x686: Pop(1)
0x687: Return(); Pop(0)

