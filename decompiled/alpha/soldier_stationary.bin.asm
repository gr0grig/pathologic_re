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
	in
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
	GetPFPosition (1 args)
	irand (2 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	Rotate (3 args)
	GetEyesHeight (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	RotateAsync (2 args)
	CreateObjectSet (1 args)
	GetInvItemByName (2 args)
	AddItem (4 args)
	ClearSubContainer (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ResetAAS (0 args)
	IsPlayerActor (2 args)
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
	GTASK_4 Vars = (cvector, cvector) Params = 0
		EVENT_3 Op = 0x2d5 Vars = (object)
		EVENT_17 Op = 0x2f3 Vars = (object)
		EVENT_30 Op = 0x307 Vars = (object, object)
		EVENT_1 Op = 0x313 Vars = (object)

Events:
EVENT_22 Op = 0x4fd Vars = (object, int, float, float)
EVENT_16 Op = 0x505 Vars = (object, string)
EVENT_41 Op = 0x512 Vars = (object)

0x0: PushEmpty()
0x1: PushEmpty()
0x2: Call 0x4cb

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
0xa0: Call 0x400

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
0xb9: Call 0x512

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
0xce: Call 0x45b

0xcf: Pop(1)
0xd0: Return(); Pop(0)

0xd1: PushEmpty()
0xd2: PushEmpty(bool, object)
0xd3: Stack[-1] = Stack[-3]
0xd4: Call 0x400

0xd5: Pop(1)
0xd6: Pop(1); Push((bool) Stack[-1] == 0)
0xd7: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd8: PushEmpty(object)
0xd9: Stack[-1] = Stack[-2]
0xda: Call 0x52a

0xdb: Pop(1)
0xdc: Return(); Pop(0)

0xdd: PushEmpty()
0xde: Call 0xab

0xdf: Pop(0)
0xe0: PushEmpty(object)
0xe1: Stack[-1] = Stack[-2]
0xe2: Call 0x537

0xe3: Pop(1)
0xe4: Return(); Pop(0)

0xe5: PushEmpty()
0xe6: PushEmpty(bool, object, object)
0xe7: Stack[-2] = Stack[-5]
0xe8: Stack[-1] = Stack[-4]
0xe9: Call 0x580

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
0xf4: Call 0x564

0xf5: Pop(1)
0xf6: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xf7: PushEmpty()
0xf8: Call 0xab

0xf9: Pop(0)
0xfa: PushEmpty(object)
0xfb: Stack[-1] = Stack[-2]
0xfc: Call 0x57a

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
0x112: Call 0x557

0x113: Pop(1)
0x114: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x115: PushEmpty(object, bool)
0x116: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x117: Stack[-1] = (bool) 1
0x118: Call 0x51f

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
0x14c: Call 0x557

0x14d: Pop(1)
0x14e: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x14f: PushEmpty()
0x150: Call 0x195

0x151: Pop(0)
0x152: PushEmpty(object, bool)
0x153: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x154: Stack[-1] = (bool) 0
0x155: Call 0x51f

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
0x172: Call 0x51f

0x173: Pop(2)
0x174: Return(); Pop(6)

0x175: PushEmpty()
0x176: PushEmpty(bool, object)
0x177: Stack[-1] = Stack[-3]
0x178: Call 0x400

0x179: Pop(1)
0x17a: Pop(1); Push((bool) Stack[-1] == 0)
0x17b: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17c: PushEmpty(object)
0x17d: Stack[-1] = Stack[-2]
0x17e: Call 0x52a

0x17f: Pop(1)
0x180: Return(); Pop(0)

0x181: PushEmpty()
0x182: Call 0x195

0x183: Pop(0)
0x184: PushEmpty(object)
0x185: Stack[-1] = Stack[-2]
0x186: Call 0x537

0x187: Pop(1)
0x188: Return(); Pop(0)

0x189: PushEmpty()
0x18a: PushEmpty(bool, object, object)
0x18b: Stack[-2] = Stack[-5]
0x18c: Stack[-1] = Stack[-4]
0x18d: Call 0x580

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
0x1a2: Call 0x512

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
0x1ba: Call 0x400

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
0x1c7: Call 0x45b

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
0x1de: Call 0x400

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
0x203: Call 0x400

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
0x235: Call 0x45b

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
0x255: Call 0x37c

0x256: Stack[-10] = Stack[-2]
0x257: Pop(2)
0x258: PushEmpty(float, cvector, cvector)
0x259: Stack[-2] = Stack[-12]
0x25a: Stack[-1] = Stack[-11]
0x25b: Call 0x49c

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
0x26e: Call 0x37c

0x26f: Stack[-10] = Stack[-2]
0x270: Pop(2)
0x271: Push(CvectorIndex(Stack[-8], 1))
0x272: PushEmpty(float, object)
0x273: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x274: Call 0x466

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
0x285: Call 0x397

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
0x2ab: Call 0x400

0x2ac: Pop(1)
0x2ad: Pop(1); Push((bool) Stack[-1] == 0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2af: Return(); Pop(0)

0x2b0: PushEmpty(object)
0x2b1: Stack[-1] = Stack[-2]
0x2b2: Call 0x52a

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
0x2c4: Call 0x580

0x2c5: Pop(2)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c7: PushEmpty(object)
0x2c8: Stack[-1] = Stack[-3]
0x2c9: Call 0x2a8

0x2ca: Pop(1)
0x2cb: Return(); Pop(0)

0x2cc: PushEmpty()
0x2cd: Call 0x518

0x2ce: Pop(0)
0x2cf: PushEmpty()
0x2d0: Call 0x321

0x2d1: Pop(0)
0x2d2: GOTO 0x2cf

0x2d3: Return(); Pop(0)

0x2d4: Return(); Pop(0)

0x2d5: PushEmpty(bool, bool)
0x2d6: PushEmpty(bool, object)
0x2d7: Stack[-1] = Stack[-5]
0x2d8: Call 0x400

0x2d9: Pop(1)
0x2da: Pop(1); Push((bool) Stack[-1] == 0)
0x2db: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2dc: Return(); Pop(2)

0x2dd: PushEmpty(bool, object)
0x2de: Stack[-1] = Stack[-5]
0x2df: Call 0x55f

0x2e0: Pop(1)
0x2e1: Pop(1); Push((bool) Stack[-1] == 0)
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e3: Push(GlobalVars[0])
0x2e4: @@ in(Stack[-2], Stack[-4])
0x2e5: Pop(1)
0x2e6: Pop(0); Push((bool) Stack[-1] == 0)
0x2e7: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e8: Return(); Pop(2)

0x2e9: PushEmpty()
0x2ea: Call 0x36f

0x2eb: Pop(0)
0x2ec: PushEmpty(object)
0x2ed: Stack[-1] = Stack[-4]
0x2ee: Push(-1, 1); TaskCall(1)
0x2ef: Call 0x93

0x2f0: Pop(-1, 1); TaskReturn
0x2f1: Pop(1)
0x2f2: Return(); Pop(2)

0x2f3: PushEmpty()
0x2f4: PushEmpty(bool, object)
0x2f5: Stack[-1] = Stack[-3]
0x2f6: Call 0x400

0x2f7: Pop(1)
0x2f8: Pop(1); Push((bool) Stack[-1] == 0)
0x2f9: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fa: PushEmpty(object)
0x2fb: Stack[-1] = Stack[-2]
0x2fc: Call 0x52a

0x2fd: Pop(1)
0x2fe: Return(); Pop(0)

0x2ff: PushEmpty()
0x300: Call 0x36f

0x301: Pop(0)
0x302: PushEmpty(object)
0x303: Stack[-1] = Stack[-2]
0x304: Call 0x537

0x305: Pop(1)
0x306: Return(); Pop(0)

0x307: PushEmpty()
0x308: PushEmpty(bool, object, object)
0x309: Stack[-2] = Stack[-5]
0x30a: Stack[-1] = Stack[-4]
0x30b: Call 0x580

0x30c: Pop(2)
0x30d: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x30e: PushEmpty(object)
0x30f: Stack[-1] = Stack[-3]
0x310: Call 0x2f3

0x311: Pop(1)
0x312: Return(); Pop(0)

0x313: PushEmpty()
0x314: PushEmpty(bool, object)
0x315: Stack[-1] = Stack[-3]
0x316: Call 0x564

0x317: Pop(1)
0x318: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x319: PushEmpty()
0x31a: Call 0x36f

0x31b: Pop(0)
0x31c: PushEmpty(object)
0x31d: Stack[-1] = Stack[-2]
0x31e: Call 0x5a8

0x31f: Pop(1)
0x320: Return(); Pop(0)

0x321: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x322: @ GetPFPosition(Stack[-1])
0x323: Pop(0)
0x324: @ GetDirection(Stack[-0])
0x325: Pop(0)
0x326: Push((int) 60)
0x327: @ irand(Stack[-5], Stack[-1])
0x328: Pop(1)
0x329: Push((int) 30)
0x32a: Pop(1); Push(Stack[-5] + Stack[-1]);
0x32b: @ Sleep(Stack[-1], Stack[-4])
0x32c: Pop(1)
0x32d: Push(Stack[-3])
0x32e: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x32f: PushEmpty()
0x330: Call 0x2d4

0x331: Pop(0)
0x332: GOTO 0x36d

0x333: @ GetPFPosition(Stack[-2])
0x334: Pop(0)
0x335: PushEmpty(float, cvector, cvector)
0x336: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x337: Stack[-1] = Stack[-5]
0x338: Call 0x46d

0x339: Pop(2)
0x33a: Push((int) 40000)
0x33b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x33c: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x33d: @ FindPathTo(Stack[-1], Stack[-1])
0x33e: Pop(0)
0x33f: Pop(0); Push(( Stack[-1] != 0 )
0x340: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x341: @ RotatePath(Stack[-1], Stack[-3])
0x342: Pop(0)
0x343: Pop(0); Push((bool) Stack[-3] == 0)
0x344: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x345: GOTO 0x36c

0x346: Push((bool) 0)
0x347: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x348: Pop(1)
0x349: Pop(0); Push((bool) Stack[-3] == 0)
0x34a: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x34b: GOTO 0x36c

0x34c: Push(CvectorIndex(Stack[-0], 0))
0x34d: Push(CvectorIndex(Stack[-0], 2))
0x34e: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x34f: Pop(2)
0x350: Pop(0); Push((bool) Stack[-3] == 0)
0x351: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x352: GOTO 0x36c

0x353: @ WaitForAnimEnd(Stack[-3])
0x354: Pop(0)
0x355: Pop(0); Push((bool) Stack[-3] == 0)
0x356: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x357: GOTO 0x36c

0x358: GOTO 0x36d

0x359: GOTO 0x35d

0x35a: Push((int) 1)
0x35b: @ Sleep(Stack[-1])
0x35c: Pop(1)
0x35d: Stack[-1] = 0
0x35e: GOTO 0x36c

0x35f: Push(CvectorIndex(Stack[-0], 0))
0x360: Push(CvectorIndex(Stack[-0], 2))
0x361: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x362: Pop(2)
0x363: Pop(0); Push((bool) Stack[-3] == 0)
0x364: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x365: GOTO 0x36c

0x366: @ WaitForAnimEnd(Stack[-3])
0x367: Pop(0)
0x368: Pop(0); Push((bool) Stack[-3] == 0)
0x369: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x36a: GOTO 0x36c

0x36b: GOTO 0x36d

0x36c: GOTO 0x333

0x36d: GOTO 0x326

0x36e: Return(); Pop(8)

0x36f: @ StopGroup0()
0x370: Pop(0)
0x371: @ Stop()
0x372: Pop(0)
0x373: Return(); Pop(0)

0x374: PushEmpty()
0x375: Push((int) 1)
0x376: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x377: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x378: Stack[-2] = "fire"
0x379: Return(); Pop(0)

0x37a: Stack[-2] = "phys"
0x37b: Return(); Pop(0)

0x37c: PushEmpty(cvector, cvector, cvector, cvector)
0x37d: @ GetPosition(Stack[-2])
0x37e: Pop(0)
0x37f: @@ GetPosition(Stack[-1])
0x380: Pop(0)
0x381: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x382: Return(); Pop(4)

0x383: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x384: @ GetPosition(Stack[-3])
0x385: Pop(0)
0x386: @@ GetPosition(Stack[-2])
0x387: Pop(0)
0x388: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x389: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x38a: Return(); Pop(6)

0x38b: PushEmpty(bool, bool)
0x38c: Push("HasProperty")
0x38d: Push((int) 2)
0x38e: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x38f: Pop(1); Push((bool) Stack[-1] == 0)
0x390: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x391: Stack[-5] = (bool) 0
0x392: Return(); Pop(2)

0x393: @@ HasProperty(Stack[-3], Stack[-1])
0x394: Pop(0)
0x395: Stack[-5] = Stack[-1]
0x396: Return(); Pop(2)

0x397: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x398: PushEmpty(bool, object, string)
0x399: Stack[-2] = Stack[-18]
0x39a: Stack[-1] = "health"
0x39b: Call 0x38b

0x39c: Pop(2)
0x39d: Pop(1); Push((bool) Stack[-1] == 0)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39f: Stack[-16] = (float) 0.0
0x3a0: Return(); Pop(12)

0x3a1: PushEmpty(bool, object, string)
0x3a2: Stack[-2] = Stack[-18]
0x3a3: Stack[-1] = "armor"
0x3a4: Call 0x38b

0x3a5: Pop(2)
0x3a6: Pop(1); Push((bool) Stack[-1] == 0)
0x3a7: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a8: Stack[-6] = (int) 0
0x3a9: GOTO 0x3ad

0x3aa: Push("armor")
0x3ab: @@ GetProperty(Stack[-1], Stack[-7])
0x3ac: Pop(1)
0x3ad: Push("armor_")
0x3ae: PushEmpty(string, int)
0x3af: Stack[-1] = Stack[-16]
0x3b0: Call 0x374

0x3b1: Pop(1)
0x3b2: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3b3: PushEmpty(bool, object, string)
0x3b4: Stack[-2] = Stack[-18]
0x3b5: Stack[-1] = Stack[-8]
0x3b6: Call 0x38b

0x3b7: Pop(2)
0x3b8: Pop(1); Push((bool) Stack[-1] == 0)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3ba: Stack[-4] = (int) 0
0x3bb: GOTO 0x3be

0x3bc: @@ GetProperty(Stack[-5], Stack[-4])
0x3bd: Pop(0)
0x3be: PushEmpty(float, float, float)
0x3bf: Pop(0); Push(Stack[-9] + Stack[-7]);
0x3c0: Push((float)100.0)
0x3c1: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x3c2: Stack[-1] = (int) 1
0x3c3: Call 0x471

0x3c4: Stack[-6] = Stack[-3]
0x3c5: Pop(3)
0x3c6: Push("health")
0x3c7: @@ GetProperty(Stack[-1], Stack[-3])
0x3c8: Pop(1)
0x3c9: Push((int) 1)
0x3ca: Pop(1); Push(Stack[-1] - Stack[-4]);
0x3cb: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x3cc: Push("health")
0x3cd: PushEmpty(float, float, float, float)
0x3ce: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x3cf: Stack[-2] = (int) 0
0x3d0: Stack[-1] = (int) 1
0x3d1: Call 0x478

0x3d2: Pop(3)
0x3d3: @@ SetProperty(Stack[-2], Stack[-1])
0x3d4: Pop(2)
0x3d5: Stack[-16] = Stack[-1]
0x3d6: Return(); Pop(12)

0x3d7: PushEmpty(bool, bool)
0x3d8: @@ IsDead(Stack[-1])
0x3d9: Pop(0)
0x3da: Stack[-4] = Stack[-1]
0x3db: Return(); Pop(2)

0x3dc: PushEmpty(object, object, object, object)
0x3dd: Pop(0); Push((bool) Stack[-5] == 0)
0x3de: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3df: Stack[-6] = (bool) 0
0x3e0: Return(); Pop(4)

0x3e1: PushEmpty(bool)
0x3e2: Stack[-1] = (bool) 0
0x3e3: Push("IsDead")
0x3e4: Push((int) 1)
0x3e5: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x3e6: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3e7: PushEmpty(bool, object)
0x3e8: Stack[-1] = Stack[-8]
0x3e9: Call 0x3d7

0x3ea: Pop(1)
0x3eb: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3ec: Stack[-1] = (bool) 1
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ee: Stack[-6] = (bool) 0
0x3ef: Return(); Pop(4)

0x3f0: @ GetScene(Stack[-2])
0x3f1: Pop(0)
0x3f2: Pop(0); Push((bool) Stack[-2] == 0)
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f4: Stack[-6] = (bool) 0
0x3f5: Return(); Pop(4)

0x3f6: @@ GetScene(Stack[-1])
0x3f7: Pop(0)
0x3f8: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fa: Stack[-6] = (bool) 0
0x3fb: Return(); Pop(4)

0x3fc: Stack[-6] = (bool) 1
0x3fd: Return(); Pop(4)

0x3fe: Stack[-1] = 0
0x3ff: Stack[-2] = 0
0x400: PushEmpty(int, int)
0x401: PushEmpty(bool, object)
0x402: Stack[-1] = Stack[-5]
0x403: Call 0x3dc

0x404: Pop(1)
0x405: Pop(1); Push((bool) Stack[-1] == 0)
0x406: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x407: Stack[-4] = (bool) 0
0x408: Return(); Pop(2)

0x409: PushEmpty(bool, object, string)
0x40a: Stack[-2] = Stack[-6]
0x40b: Stack[-1] = "noaccess"
0x40c: Call 0x38b

0x40d: Pop(2)
0x40e: Pop(1); Push((bool) Stack[-1] == 0)
0x40f: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x410: Stack[-4] = (bool) 1
0x411: Return(); Pop(2)

0x412: Push("noaccess")
0x413: @@ GetProperty(Stack[-1], Stack[-2])
0x414: Pop(1)
0x415: Push((int) 0)
0x416: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x417: Return(); Pop(2)

0x418: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x419: PushEmpty(bool)
0x41a: Stack[-1] = (bool) 0
0x41b: Push((int) 4)
0x41c: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x41e: Push((int) 5)
0x41f: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x420: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x421: Stack[-1] = (bool) 1
0x422: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x423: @ GetScene(Stack[-10])
0x424: Pop(0)
0x425: @ GetPosition(Stack[-8])
0x426: Pop(0)
0x427: @ GetEyesHeight(Stack[-7])
0x428: Pop(0)
0x429: Push(CvectorIndex(Stack[-8], 1))
0x42a: Push((int) 2)
0x42b: Pop(1); Push(Stack[-9] / Stack[-1]);
0x42c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x42d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x42e: Push("scripted")
0x42f: Push(CVector(0.0, 0.0, 1.0))
0x430: Push("blood.xml")
0x431: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x432: Pop(3)
0x433: Stack[-9] = 0
0x434: Stack[-10] = 0
0x435: Pop(0); Push((bool) Stack[-23] == 0)
0x436: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x437: Return(); Pop(20)

0x438: @ GetSecondaryAnimationType(Stack[-6])
0x439: Pop(0)
0x43a: Push((int) 0)
0x43b: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x43c: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43d: Return(); Pop(20)

0x43e: @@ GetPosition(Stack[-5])
0x43f: Pop(0)
0x440: @ GetPosition(Stack[-4])
0x441: Pop(0)
0x442: @ GetDirection(Stack[-3])
0x443: Pop(0)
0x444: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x445: Push(CvectorIndex(Stack[-2], 0))
0x446: Push(CvectorIndex(Stack[-4], 0))
0x447: Pop(2); Push(Stack[-2] * Stack[-1]);
0x448: Push(CvectorIndex(Stack[-3], 2))
0x449: Push(CvectorIndex(Stack[-5], 2))
0x44a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x44b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x44c: Push((int) 0)
0x44d: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x44e: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x44f: Stack[-1] = "fhit"
0x450: GOTO 0x452

0x451: Stack[-1] = "bhit"
0x452: Push("hit_react")
0x453: Push("1")
0x454: Pop(1); Push(Stack[-3] + Stack[-1]);
0x455: Push("2")
0x456: Pop(1); Push(Stack[-4] + Stack[-1]);
0x457: Push((int) -10)
0x458: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x459: Pop(4)
0x45a: Return(); Pop(20)

0x45b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x45c: @@ GetPosition(Stack[-3])
0x45d: Pop(0)
0x45e: @ GetPosition(Stack[-2])
0x45f: Pop(0)
0x460: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x461: Push(CvectorIndex(Stack[-1], 0))
0x462: Push(CvectorIndex(Stack[-2], 2))
0x463: @ RotateAsync(Stack[-2], Stack[-1])
0x464: Pop(2)
0x465: Return(); Pop(6)

0x466: PushEmpty(float, float, float, float)
0x467: @ GetEyesHeight(Stack[-2])
0x468: Pop(0)
0x469: @@ GetEyesHeight(Stack[-1])
0x46a: Pop(0)
0x46b: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x46c: Return(); Pop(4)

0x46d: PushEmpty(cvector, cvector)
0x46e: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x46f: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x470: Return(); Pop(2)

0x471: PushEmpty()
0x472: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x473: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x474: Stack[-3] = Stack[-2]
0x475: GOTO 0x477

0x476: Stack[-3] = Stack[-1]
0x477: Return(); Pop(0)

0x478: PushEmpty()
0x479: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x47a: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x47b: Stack[-4] = Stack[-2]
0x47c: Return(); Pop(0)

0x47d: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x47e: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47f: Stack[-4] = Stack[-1]
0x480: Return(); Pop(0)

0x481: Stack[-4] = Stack[-3]
0x482: Return(); Pop(0)

0x483: PushEmpty(object, object)
0x484: @ CreateObjectSet(Stack[-1])
0x485: Pop(0)
0x486: Stack[-3] = Stack[-1]
0x487: Return(); Pop(2)

0x488: Stack[-1] = 0
0x489: PushEmpty()
0x48a: Push(CvectorIndex(Stack[-2], 0))
0x48b: Push(CvectorIndex(Stack[-2], 0))
0x48c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x48d: Push(CvectorIndex(Stack[-3], 2))
0x48e: Push(CvectorIndex(Stack[-3], 2))
0x48f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x490: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x491: Return(); Pop(0)

0x492: PushEmpty()
0x493: Push(CvectorIndex(Stack[-1], 0))
0x494: Push(CvectorIndex(Stack[-2], 0))
0x495: Pop(2); Push(Stack[-2] * Stack[-1]);
0x496: Push(CvectorIndex(Stack[-2], 2))
0x497: Push(CvectorIndex(Stack[-3], 2))
0x498: Pop(2); Push(Stack[-2] * Stack[-1]);
0x499: Pop(2); Push(Stack[-2] + Stack[-1]);
0x49a: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x49b: Return(); Pop(0)

0x49c: PushEmpty()
0x49d: PushEmpty(float, cvector, cvector)
0x49e: Stack[-2] = Stack[-5]
0x49f: Stack[-1] = Stack[-4]
0x4a0: Call 0x489

0x4a1: Pop(2)
0x4a2: PushEmpty(float, cvector)
0x4a3: Stack[-1] = Stack[-5]
0x4a4: Call 0x492

0x4a5: Pop(1)
0x4a6: PushEmpty(float, cvector)
0x4a7: Stack[-1] = Stack[-5]
0x4a8: Call 0x492

0x4a9: Pop(1)
0x4aa: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4ab: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x4ac: Return(); Pop(0)

0x4ad: PushEmpty(int, int, int, bool, int, int, int, bool)
0x4ae: Pop(0); Push((bool) Stack[-10] > Stack[-9])
0x4af: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b0: Push("GenerateMoney: iMin > iMax")
0x4b1: @ Trace(Stack[-1])
0x4b2: Pop(1)
0x4b3: Return(); Pop(8)

0x4b4: Stack[-4] = (int) 0
0x4b5: Pop(0); Push((bool) Stack[-10] != Stack[-9])
0x4b6: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b7: Pop(0); Push(Stack[-9] - Stack[-10]);
0x4b8: @ irand(Stack[-4], Stack[-1])
0x4b9: Pop(1)
0x4ba: GOTO 0x4bf

0x4bb: Push((int) 0)
0x4bc: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4be: Return(); Pop(8)

0x4bf: Stack[-4] = Stack[-4] + Stack[-10]; Pop(0);
0x4c0: Push((int) 0)
0x4c1: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4c3: Return(); Pop(8)

0x4c4: Push("Money")
0x4c5: @ GetInvItemByName(Stack[-3], Stack[-1])
0x4c6: Pop(1)
0x4c7: Push((int) 0)
0x4c8: @ AddItem(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x4c9: Pop(1)
0x4ca: Return(); Pop(8)

0x4cb: PushEmpty(int, bool, int, bool)
0x4cc: Push((int) 0)
0x4cd: @ ClearSubContainer(Stack[-1])
0x4ce: Pop(1)
0x4cf: PushEmpty(int, int)
0x4d0: Stack[-2] = (int) 500
0x4d1: Stack[-1] = (int) 1000
0x4d2: Call 0x4ad

0x4d3: Pop(2)
0x4d4: Push((int) 4)
0x4d5: @ irand(Stack[-3], Stack[-1])
0x4d6: Pop(1)
0x4d7: Push((int) 0)
0x4d8: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x4d9: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4da: PushEmpty(int, string)
0x4db: Stack[-1] = "rifle_ammo"
0x4dc: Call 0x4f0

0x4dd: Pop(1)
0x4de: Push((int) 0)
0x4df: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x4e0: Pop(2)
0x4e1: Push((int) 3)
0x4e2: @ irand(Stack[-3], Stack[-1])
0x4e3: Pop(1)
0x4e4: Push((int) 0)
0x4e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e6: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4e7: PushEmpty(int, string)
0x4e8: Stack[-1] = "rusk"
0x4e9: Call 0x4f0

0x4ea: Pop(1)
0x4eb: Push((int) 0)
0x4ec: Push((int) 1)
0x4ed: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4ee: Pop(3)
0x4ef: Return(); Pop(4)

0x4f0: PushEmpty(int, int)
0x4f1: @ GetInvItemByName(Stack[-1], Stack[-3])
0x4f2: Pop(0)
0x4f3: Stack[-4] = Stack[-1]
0x4f4: Return(); Pop(2)

0x4f5: PushEmpty()
0x4f6: PushEmpty(object)
0x4f7: Stack[-1] = Stack[-2]
0x4f8: Push(-1, 0); TaskCall(0)
0x4f9: Call 0x0

0x4fa: Pop(-1, 0); TaskReturn
0x4fb: Pop(1)
0x4fc: Return(); Pop(0)

0x4fd: PushEmpty()
0x4fe: PushEmpty(object, int, float)
0x4ff: Stack[-3] = Stack[-7]
0x500: Stack[-2] = Stack[-6]
0x501: Stack[-1] = Stack[-5]
0x502: Call 0x418

0x503: Pop(3)
0x504: Return(); Pop(0)

0x505: PushEmpty(float, float)
0x506: Push("health")
0x507: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x508: IF (Stack[-1] == 0) GOTO 0x511; Pop(1)

0x509: Push("health")
0x50a: @ GetProperty(Stack[-1], Stack[-2])
0x50b: Pop(1)
0x50c: Push((int) 0)
0x50d: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x50e: IF (Stack[-1] == 0) GOTO 0x511; Pop(1)

0x50f: @ SignalDeath(Stack[-4])
0x510: Pop(0)
0x511: Return(); Pop(2)

0x512: PushEmpty()
0x513: PushEmpty(object)
0x514: Stack[-1] = Stack[-2]
0x515: Call 0x5ae

0x516: Pop(1)
0x517: Return(); Pop(0)

0x518: Push(GlobalVars[0])
0x519: PushEmpty(object)
0x51a: Call 0x483

0x51b: Stack[-2] = Stack[-1]
0x51c: Pop(1)
0x51d: GlobalVars[0] = Stack[-1]; Pop(1)
0x51e: Return(); Pop(0)

0x51f: PushEmpty()
0x520: PushEmpty(object, bool)
0x521: Stack[-2] = Stack[-4]
0x522: Stack[-1] = Stack[-3]
0x523: Push(-2, 3); TaskCall(3)
0x524: Call 0x1a5

0x525: Pop(-2, 3); TaskReturn
0x526: Pop(2)
0x527: @ ResetAAS()
0x528: Pop(0)
0x529: Return(); Pop(0)

0x52a: PushEmpty(bool, bool)
0x52b: Pop(0); Push((bool) Stack[-3] == 0)
0x52c: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52d: Return(); Pop(2)

0x52e: Push(GlobalVars[0])
0x52f: @@ in(Stack[-2], Stack[-4])
0x530: Pop(1)
0x531: Pop(0); Push((bool) Stack[-1] == 0)
0x532: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x533: Push(GlobalVars[0])
0x534: @@ add(Stack[-4])
0x535: Pop(1)
0x536: Return(); Pop(2)

0x537: PushEmpty()
0x538: PushEmpty(object)
0x539: Stack[-1] = Stack[-2]
0x53a: Call 0x52a

0x53b: Pop(1)
0x53c: PushEmpty(object, bool)
0x53d: Stack[-2] = Stack[-3]
0x53e: Stack[-1] = (bool) 1
0x53f: Call 0x51f

0x540: Pop(2)
0x541: Return(); Pop(0)

0x542: PushEmpty(bool, bool)
0x543: Push(GlobalVars[0])
0x544: @@ in(Stack[-2], Stack[-4])
0x545: Pop(1)
0x546: Push(Stack[-1])
0x547: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x548: PushEmpty(object, bool)
0x549: Stack[-2] = Stack[-5]
0x54a: Stack[-1] = (bool) 1
0x54b: Call 0x51f

0x54c: Pop(2)
0x54d: GOTO 0x556

0x54e: PushEmpty(object)
0x54f: Stack[-1] = Stack[-4]
0x550: Push(-1, 2); TaskCall(2)
0x551: Call 0x10a

0x552: Pop(-1, 2); TaskReturn
0x553: Pop(1)
0x554: @ ResetAAS()
0x555: Pop(0)
0x556: Return(); Pop(2)

0x557: PushEmpty()
0x558: PushEmpty(float, object)
0x559: Stack[-1] = Stack[-3]
0x55a: Call 0x383

0x55b: Pop(1)
0x55c: Push((float)40000.0)
0x55d: Stack[-4] = Stack[-2] <= Stack[-1]; Pop(2);
0x55e: Return(); Pop(0)

0x55f: PushEmpty(bool, bool)
0x560: @ IsPlayerActor(Stack[-3], Stack[-1])
0x561: Pop(0)
0x562: Stack[-4] = Stack[-1]
0x563: Return(); Pop(2)

0x564: PushEmpty(bool, bool)
0x565: PushEmpty(bool, object)
0x566: Stack[-1] = Stack[-5]
0x567: Call 0x400

0x568: Pop(1)
0x569: Pop(1); Push((bool) Stack[-1] == 0)
0x56a: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x56b: Stack[-4] = (bool) 0
0x56c: Return(); Pop(2)

0x56d: Push(GlobalVars[0])
0x56e: @@ in(Stack[-2], Stack[-4])
0x56f: Pop(1)
0x570: Push(Stack[-1])
0x571: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x572: Stack[-4] = (bool) 1
0x573: Return(); Pop(2)

0x574: PushEmpty(bool, object)
0x575: Stack[-1] = Stack[-5]
0x576: Call 0x55f

0x577: Stack[-6] = Stack[-2]
0x578: Pop(2)
0x579: Return(); Pop(2)

0x57a: PushEmpty()
0x57b: PushEmpty(object)
0x57c: Stack[-1] = Stack[-2]
0x57d: Call 0x5a8

0x57e: Pop(1)
0x57f: Return(); Pop(0)

0x580: PushEmpty(float, bool, float, bool)
0x581: PushEmpty(bool, object, string)
0x582: Stack[-2] = Stack[-8]
0x583: Stack[-1] = "reputation"
0x584: Call 0x38b

0x585: Pop(2)
0x586: Pop(1); Push((bool) Stack[-1] == 0)
0x587: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x588: Stack[-7] = (bool) 0
0x589: Return(); Pop(4)

0x58a: Push("reputation")
0x58b: @@ GetProperty(Stack[-1], Stack[-3])
0x58c: Pop(1)
0x58d: Push((float)0.5)
0x58e: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x58f: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x590: Stack[-7] = (bool) 0
0x591: Return(); Pop(4)

0x592: @ CanSee(Stack[-1], Stack[-6])
0x593: Pop(0)
0x594: PushEmpty(bool)
0x595: Stack[-1] = (bool) 1
0x596: Push(Stack[-2])
0x597: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x598: PushEmpty(float, object)
0x599: Stack[-1] = Stack[-9]
0x59a: Call 0x383

0x59b: Pop(1)
0x59c: Push((float)160000.0)
0x59d: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x59e: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59f: Stack[-1] = (bool) 0
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a1: Push((float)-0.2)
0x5a2: @ ReportReputationChange(Stack[-7], Stack[-6], Stack[-1])
0x5a3: Pop(1)
0x5a4: Stack[-7] = (bool) 1
0x5a5: Return(); Pop(4)

0x5a6: Stack[-7] = (bool) 0
0x5a7: Return(); Pop(4)

0x5a8: PushEmpty()
0x5a9: PushEmpty(object)
0x5aa: Stack[-1] = Stack[-2]
0x5ab: Call 0x542

0x5ac: Pop(1)
0x5ad: Return(); Pop(0)

0x5ae: PushEmpty()
0x5af: PushEmpty(object)
0x5b0: Stack[-1] = Stack[-2]
0x5b1: Call 0x4f5

0x5b2: Pop(1)
0x5b3: Return(); Pop(0)

