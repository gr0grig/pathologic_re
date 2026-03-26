GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:all
	W:hunt
	W:player
	A:GetPosition
	A:GetPFPosition
	W:walk
	W:run
	W:@GetAttackDistance
	A:GetAttackDistance
	W:attack_on
	W:attack_stay
	W:fjump
	W:attack_off
	W:attack_begin
	W:attack
	W:bjump
	W:attack_middle
	W:attack_end
	W:IsAttacking
	A:IsAttacking
	W:reputation
	W:fdie
	W:bdie
	W:GetScriptProperty
	W:Owner
	A:HasScriptProperty
	A:GetScriptProperty
	W:@GetEyesHeight
	A:GetEyesHeight
	W:head
	W:fire
	W:phys
	W:HasProperty
	A:HasProperty
	A:GetProperty
	A:SetProperty
	W:health
	W:armor
	W:armor_
	A:IsDead
	W:IsDead
	A:GetScene
	W:noaccess
	W:scripted
	W:blood.xml
	W:fhit
	W:bhit
	W:hit_react
	W:1
	W:2
	W:GenerateMoney: iMin > iMax
	W:Money
	W:bottle_water
	W:rusk
	W:bandage
	W:tourniquet
	W:packet
	W:hook
	W:watch
	W:alpha_pills
	W:beta_pills
	W:gamma_pills
	W:revolver_ammo
	W:rifle_ammo
	A:in
	A:add
// @pool_raw:61006c006c000000680075006e007400000070006c0061007900650072000000476574506f736974696f6e004765745046506f736974696f6e00770061006c006b000000720075006e0000004000470065007400410074007400610063006b00440069007300740061006e0063006500000047657441747461636b44697374616e636500610074007400610063006b005f006f006e000000610074007400610063006b005f007300740061007900000066006a0075006d0070000000610074007400610063006b005f006f00660066000000610074007400610063006b005f0062006500670069006e000000610074007400610063006b00000062006a0075006d0070000000610074007400610063006b005f006d006900640064006c0065000000610074007400610063006b005f0065006e006400000049007300410074007400610063006b0069006e0067000000497341747461636b696e6700720065007000750074006100740069006f006e0000006600640069006500000062006400690065000000470065007400530063007200690070007400500072006f007000650072007400790000004f0077006e0065007200000048617353637269707450726f70657274790047657453637269707450726f7065727479004000470065007400450079006500730048006500690067006800740000004765744579657348656967687400680065006100640000006600690072006500000070006800790073000000480061007300500072006f0070006500720074007900000048617350726f70657274790047657450726f70657274790053657450726f7065727479006800650061006c00740068000000610072006d006f0072000000610072006d006f0072005f0000004973446561640049007300440065006100640000004765745363656e65006e006f00610063006300650073007300000073006300720069007000740065006400000062006c006f006f0064002e0078006d006c00000066006800690074000000620068006900740000006800690074005f007200650061006300740000003100000032000000470065006e00650072006100740065004d006f006e00650079003a00200069004d0069006e0020003e00200069004d006100780000004d006f006e0065007900000062006f00740074006c0065005f007700610074006500720000007200750073006b000000620061006e006400610067006500000074006f00750072006e006900710075006500740000007000610063006b0065007400000068006f006f006b00000077006100740063006800000061006c007000680061005f00700069006c006c007300000062006500740061005f00700069006c006c0073000000670061006d006d0061005f00700069006c006c00730000007200650076006f006c007600650072005f0061006d006d006f0000007200690066006c0065005f0061006d006d006f000000696e0061646400

Import:
	GetSeeThreshold (1 args)
	GetSeeFOV (1 args)
	SetSeeThreshold (1 args)
	SetSeeFOV (1 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	Face (1 args)
	SetTimer (2 args)
	irand (2 args)
	Sleep (2 args)
	StopAsync (0 args)
	KillTimer (1 args)
	Stop (0 args)
	StopGroup0 (0 args)
	FindActor (2 args)
	CanSee (2 args)
	GetPFPosition (1 args)
	GetDirection (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	Rotate (3 args)
	Sleep (1 args)
	GetPosition (1 args)
	FollowPath (5 args)
	RequestClearPath (1 args)
	IsPlayerActor (2 args)
	CanReachByPF (2 args)
	WaitForAnimEnd (0 args)
	rand (1 args)
	SetSpeed (1 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetAnimationOffset (3 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	sync (0 args)
	GetScene (1 args)
	FindDirLength (3 args)
	Speak (1 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	WorkWithCorpse (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	LookAsync (3 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	GetEyesHeight (1 args)
	AddActorByType (6 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	RotateAsync (2 args)
	CreateObjectSet (1 args)
	GetGameTime (1 args)
	Trace (1 args)
	GetInvItemByName (2 args)
	AddItem (4 args)
	ClearSubContainer (1 args)
	ResetAAS (0 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (3 args)

RunOp = 0xa7
RunTask = 1

GlobalTasks: 
	GTASK_0 Vars = (object, float, float) Params = 1
		EVENT_1 Op = 0xe Vars = (object)
		EVENT_17 Op = 0x1c Vars = (object)
		EVENT_7 Op = 0x30 Vars = (int)
		EVENT_30 Op = 0x39 Vars = (object, object)
		EVENT_41 Op = 0x4d Vars = (object)
		EVENT_3 Op = 0x80 Vars = (object)
		EVENT_4 Op = 0x93 Vars = (object)
	GTASK_1 Vars = (cvector, cvector, int) Params = 0
		EVENT_41 Op = 0xb2 Vars = (object)
		EVENT_1 Op = 0xbc Vars = (object)
		EVENT_3 Op = 0xca Vars = (object)
		EVENT_17 Op = 0xd8 Vars = (object)
		EVENT_30 Op = 0xec Vars = (object, object)
		EVENT_7 Op = 0xfe Vars = (int)
	GTASK_2 Vars = (bool, object) Params = 6
		EVENT_17 Op = 0x177 Vars = (object)
		EVENT_30 Op = 0x17d Vars = (object, object)
		EVENT_7 Op = 0x1ea Vars = (int)
		EVENT_10 Op = 0x1fc Vars = (object)
		EVENT_41 Op = 0x207 Vars = (object)
	GTASK_3 Vars = (object, int, int, bool, float, int) Params = 2
		EVENT_17 Op = 0x229 Vars = (object)
		EVENT_30 Op = 0x22f Vars = (object, object)
	GTASK_4  Params = 1
		EVENT_0 Op = 0x473 Vars = (object)
		EVENT_22 Op = 0x4e8 Vars = (object, int, float, float)
		EVENT_16 Op = 0x4ea Vars = (object, string)
		EVENT_41 Op = 0x4ec Vars = (object)

Events:
EVENT_22 Op = 0x777 Vars = (object, int, float, float)
EVENT_16 Op = 0x77f Vars = (object, string)
EVENT_41 Op = 0x78c Vars = (object)

0x0: PushEmpty()
0x1: @ GetSeeThreshold(Stack[-1]T)
0x2: Pop(0)
0x3: @ GetSeeFOV(Stack[-2]T)
0x4: Pop(0)
0x5: Push((float)1.5)
0x6: Pop(1); Push(Stack[1 + Tasks[-1].StackPointer] / Stack[-1]);
0x7: @ SetSeeThreshold(Stack[-1])
0x8: Pop(1)
0x9: PushEmpty(object)
0xa: Stack[-2] = Stack[-1]
0xb: Call 0x65

0xc: Pop(1)
0xd: Return(); Pop(0)

0xe: PushEmpty()
0xf: PushEmpty(bool, object)
0x10: Stack[-3] = Stack[-1]
0x11: Call 0x741

0x12: Pop(1)
0x13: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x14: PushEmpty()
0x15: Call 0x45

0x16: Pop(0)
0x17: PushEmpty(object)
0x18: Stack[-2] = Stack[-1]
0x19: Call 0x748

0x1a: Pop(1)
0x1b: Return(); Pop(0)

0x1c: PushEmpty()
0x1d: PushEmpty(bool, object)
0x1e: Stack[-3] = Stack[-1]
0x1f: Call 0x590

0x20: Pop(1)
0x21: Pop(1); Push((bool) Stack[-1] == 0)
0x22: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x23: PushEmpty(object)
0x24: Stack[-2] = Stack[-1]
0x25: Call 0x753

0x26: Pop(1)
0x27: Return(); Pop(0)

0x28: PushEmpty()
0x29: Call 0x45

0x2a: Pop(0)
0x2b: PushEmpty(object)
0x2c: Stack[-2] = Stack[-1]
0x2d: Call 0x760

0x2e: Pop(1)
0x2f: Return(); Pop(0)

0x30: PushEmpty()
0x31: Push((int) 100)
0x32: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x34: Return(); Pop(0)

0x35: PushEmpty()
0x36: Call 0x45

0x37: Pop(0)
0x38: Return(); Pop(0)

0x39: PushEmpty()
0x3a: PushEmpty(bool, object, object)
0x3b: Stack[-5] = Stack[-2]
0x3c: Stack[-4] = Stack[-1]
0x3d: Call 0x792

0x3e: Pop(2)
0x3f: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x40: PushEmpty(object)
0x41: Stack[-3] = Stack[-1]
0x42: Call 0x1c

0x43: Pop(1)
0x44: Return(); Pop(0)

0x45: @ SetSeeThreshold(Stack[-1]T)
0x46: Pop(0)
0x47: @ SetSeeFOV(Stack[-2]T)
0x48: Pop(0)
0x49: PushEmpty()
0x4a: Call 0x9c

0x4b: Pop(0)
0x4c: Return(); Pop(0)

0x4d: PushEmpty()
0x4e: PushEmpty()
0x4f: Call 0x45

0x50: Pop(0)
0x51: PushEmpty(object)
0x52: Stack[-2] = Stack[-1]
0x53: Call 0x78c

0x54: Pop(1)
0x55: Return(); Pop(0)

0x56: PushEmpty(bool, bool)
0x57: Push((float)1.7999999523162842)
0x58: Pop(1); Push(Stack[2 + Tasks[-1].StackPointer] * Stack[-1]);
0x59: @ SetSeeFOV(Stack[-1])
0x5a: Pop(1)
0x5b: Push("all") // @poff=0
0x5c: Push("hunt") // @poff=8
0x5d: @ PlayAnimation(Stack[-2], Stack[-1])
0x5e: Pop(2)
0x5f: @ WaitForAnimEnd(Stack[-1])
0x60: Pop(0)
0x61: @ SetSeeFOV(Stack[-2]T)
0x62: Pop(0)
0x63: Stack[-3] = !Stack[-1]; Pop(0);
0x64: Return(); Pop(2)

0x65: PushEmpty(bool, int, bool, int)
0x66: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x67: @ Face(Stack[-0]T)
0x68: Pop(0)
0x69: Push((int) 100)
0x6a: Push((int) 15)
0x6b: @ SetTimer(Stack[-2], Stack[-1])
0x6c: Pop(2)
0x6d: Pop(0); Push(( Stack[0 + Tasks[-1].StackPointer] != 0 )
0x6e: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x6f: Push((int) 5)
0x70: @ irand(Stack[-2], Stack[-1])
0x71: Pop(1)
0x72: Push((int) 5)
0x73: Pop(1); Push(Stack[-2] + Stack[-1]);
0x74: @ Sleep(Stack[-1], Stack[-3])
0x75: Pop(1)
0x76: PushEmpty(bool)
0x77: Call 0x56

0x78: Pop(0)
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x7c

0x7b: GOTO 0x6d

0x7c: PushEmpty()
0x7d: Call 0x45

0x7e: Pop(0)
0x7f: Return(); Pop(4)

0x80: PushEmpty()
0x81: PushEmpty(bool)
0x82: Stack[-1] = (bool) 0
0x83: Pop(0); Push((bool) Stack[-2] == Stack[0 + Tasks[-1].StackPointer])
0x84: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x85: PushEmpty(bool, object)
0x86: Stack[-4] = Stack[-1]
0x87: Call 0x72c

0x88: Pop(1)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Stack[-1] = (bool) 1
0x8b: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8c: @ Face(Stack[-0]T)
0x8d: Pop(0)
0x8e: Push((int) 100)
0x8f: Push((int) 15)
0x90: @ SetTimer(Stack[-2], Stack[-1])
0x91: Pop(2)
0x92: Return(); Pop(0)

0x93: PushEmpty()
0x94: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x95: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x96: @ StopAsync()
0x97: Pop(0)
0x98: Push((int) 100)
0x99: @ KillTimer(Stack[-1])
0x9a: Pop(1)
0x9b: Return(); Pop(0)

0x9c: @ Stop()
0x9d: Pop(0)
0x9e: @ StopGroup0()
0x9f: Pop(0)
0xa0: @ StopAsync()
0xa1: Pop(0)
0xa2: Push((int) 100)
0xa3: @ KillTimer(Stack[-1])
0xa4: Pop(1)
0xa5: Stack[0 + Tasks[-1].StackPointer] = 0
0xa6: Return(); Pop(0)

0xa7: PushEmpty()
0xa8: Call 0x706

0xa9: Pop(0)
0xaa: PushEmpty()
0xab: Call 0x120

0xac: Pop(0)
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Call 0x172

0xb0: Pop(0)
0xb1: Return(); Pop(0)

0xb2: PushEmpty()
0xb3: PushEmpty()
0xb4: Call 0xae

0xb5: Pop(0)
0xb6: PushEmpty(object)
0xb7: Stack[-2] = Stack[-1]
0xb8: Call 0x78c

0xb9: Pop(1)
0xba: Return(); Pop(0)

0xbb: Return(); Pop(0)

0xbc: PushEmpty()
0xbd: PushEmpty(bool, object)
0xbe: Stack[-3] = Stack[-1]
0xbf: Call 0x741

0xc0: Pop(1)
0xc1: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc2: PushEmpty()
0xc3: Call 0xae

0xc4: Pop(0)
0xc5: PushEmpty(object)
0xc6: Stack[-2] = Stack[-1]
0xc7: Call 0x748

0xc8: Pop(1)
0xc9: Return(); Pop(0)

0xca: PushEmpty()
0xcb: PushEmpty(bool, object)
0xcc: Stack[-3] = Stack[-1]
0xcd: Call 0x72c

0xce: Pop(1)
0xcf: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd0: PushEmpty()
0xd1: Call 0xae

0xd2: Pop(0)
0xd3: PushEmpty(object)
0xd4: Stack[-2] = Stack[-1]
0xd5: Call 0x739

0xd6: Pop(1)
0xd7: Return(); Pop(0)

0xd8: PushEmpty()
0xd9: PushEmpty(bool, object)
0xda: Stack[-3] = Stack[-1]
0xdb: Call 0x590

0xdc: Pop(1)
0xdd: Pop(1); Push((bool) Stack[-1] == 0)
0xde: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xdf: PushEmpty(object)
0xe0: Stack[-2] = Stack[-1]
0xe1: Call 0x753

0xe2: Pop(1)
0xe3: Return(); Pop(0)

0xe4: PushEmpty()
0xe5: Call 0xae

0xe6: Pop(0)
0xe7: PushEmpty(object)
0xe8: Stack[-2] = Stack[-1]
0xe9: Call 0x760

0xea: Pop(1)
0xeb: Return(); Pop(0)

0xec: PushEmpty()
0xed: PushEmpty(bool, object, object)
0xee: Stack[-5] = Stack[-2]
0xef: Stack[-4] = Stack[-1]
0xf0: Call 0x792

0xf1: Pop(2)
0xf2: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf3: PushEmpty(object)
0xf4: Stack[-3] = Stack[-1]
0xf5: Call 0xd8

0xf6: Pop(1)
0xf7: Return(); Pop(0)

0xf8: PushEmpty()
0xf9: PushEmpty(object)
0xfa: Stack[-2] = Stack[-1]
0xfb: Call 0xd8

0xfc: Pop(1)
0xfd: Return(); Pop(0)

0xfe: PushEmpty(object, bool, object, bool)
0xff: Push((int) 25)
0x100: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x102: Push("player") // @poff=18
0x103: @ FindActor(Stack[-3], Stack[-1])
0x104: Pop(1)
0x105: @ CanSee(Stack[-1], Stack[-2])
0x106: Pop(0)
0x107: PushEmpty(bool)
0x108: Stack[-1] = (bool) 1
0x109: Push(Stack[-2])
0x10a: IF (Stack[-1] == 1) GOTO 0x113; Pop(1)

0x10b: PushEmpty(float, object)
0x10c: Stack[-5] = Stack[-1]
0x10d: Call 0x4fd

0x10e: Pop(1)
0x10f: Push((int) 22500)
0x110: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x111: IF (Stack[-1] == 1) GOTO 0x113; Pop(1)

0x112: Stack[-1] = (bool) 0
0x113: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x114: Push((int) 1)
0x115: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x116: Push((int) 5)
0x117: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] > Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x119: PushEmpty(object)
0x11a: Stack[-3] = Stack[-1]
0x11b: Call 0xf8

0x11c: Pop(1)
0x11d: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x11e: Stack[-2] = 0
0x11f: Return(); Pop(4)

0x120: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x121: @ GetPFPosition(Stack[-1]T)
0x122: Pop(0)
0x123: @ GetDirection(Stack[-0]T)
0x124: Pop(0)
0x125: Push((int) 25)
0x126: Push((int) 1)
0x127: @ SetTimer(Stack[-2], Stack[-1])
0x128: Pop(2)
0x129: Push((int) 60)
0x12a: @ irand(Stack[-5], Stack[-1])
0x12b: Pop(1)
0x12c: Push((int) 30)
0x12d: Pop(1); Push(Stack[-5] + Stack[-1]);
0x12e: @ Sleep(Stack[-1], Stack[-4])
0x12f: Pop(1)
0x130: Push(Stack[-3])
0x131: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x132: PushEmpty()
0x133: Call 0xbb

0x134: Pop(0)
0x135: GOTO 0x170

0x136: @ GetPFPosition(Stack[-2])
0x137: Pop(0)
0x138: PushEmpty(float, cvector, cvector)
0x139: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13a: Stack[-5] = Stack[-1]
0x13b: Call 0x5f6

0x13c: Pop(2)
0x13d: Push((int) 40000)
0x13e: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x13f: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x140: @ FindPathTo(Stack[-1], Stack[-1]T)
0x141: Pop(0)
0x142: Pop(0); Push(( Stack[-1] != 0 )
0x143: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x144: @ RotatePath(Stack[-1], Stack[-3])
0x145: Pop(0)
0x146: Pop(0); Push((bool) Stack[-3] == 0)
0x147: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x148: GOTO 0x16f

0x149: Push((bool) 0)
0x14a: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x14b: Pop(1)
0x14c: Pop(0); Push((bool) Stack[-3] == 0)
0x14d: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14e: GOTO 0x16f

0x14f: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x150: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x151: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x152: Pop(2)
0x153: Pop(0); Push((bool) Stack[-3] == 0)
0x154: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x155: GOTO 0x16f

0x156: @ WaitForAnimEnd(Stack[-3])
0x157: Pop(0)
0x158: Pop(0); Push((bool) Stack[-3] == 0)
0x159: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x15a: GOTO 0x16f

0x15b: GOTO 0x170

0x15c: GOTO 0x160

0x15d: Push((int) 1)
0x15e: @ Sleep(Stack[-1])
0x15f: Pop(1)
0x160: Stack[-1] = 0
0x161: GOTO 0x16f

0x162: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x163: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x164: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x165: Pop(2)
0x166: Pop(0); Push((bool) Stack[-3] == 0)
0x167: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x168: GOTO 0x16f

0x169: @ WaitForAnimEnd(Stack[-3])
0x16a: Pop(0)
0x16b: Pop(0); Push((bool) Stack[-3] == 0)
0x16c: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16d: GOTO 0x16f

0x16e: GOTO 0x170

0x16f: GOTO 0x136

0x170: GOTO 0x125

0x171: Return(); Pop(8)

0x172: @ StopGroup0()
0x173: Pop(0)
0x174: @ Stop()
0x175: Pop(0)
0x176: Return(); Pop(0)

0x177: PushEmpty()
0x178: PushEmpty(object)
0x179: Stack[-2] = Stack[-1]
0x17a: Call 0x753

0x17b: Pop(1)
0x17c: Return(); Pop(0)

0x17d: PushEmpty()
0x17e: PushEmpty(bool, object, object)
0x17f: Stack[-5] = Stack[-2]
0x180: Stack[-4] = Stack[-1]
0x181: Call 0x792

0x182: Pop(3)
0x183: Return(); Pop(0)

0x184: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x185: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x186: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x187: Stack[-17] = Stack[-7]
0x188: PushEmpty(bool, object)
0x189: Stack[-23] = Stack[-1]
0x18a: Call 0x210

0x18b: Pop(1)
0x18c: Pop(1); Push((bool) Stack[-1] == 0)
0x18d: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18e: Stack[-22] = (bool) 0
0x18f: Return(); Pop(16)

0x190: @@ GetPosition(Stack[-5]); Obj=21 // @poff=32
0x191: Pop(0)
0x192: @ GetPosition(Stack[-4])
0x193: Pop(0)
0x194: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x195: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x196: PushEmpty(bool)
0x197: Stack[-1] = (bool) 0
0x198: Push((int) 0)
0x199: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19b: Pop(0); Push(Stack[-20] * Stack[-20]);
0x19c: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x19d: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19e: Stack[-1] = (bool) 1
0x19f: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x1a0: @ Stop()
0x1a1: Pop(0)
0x1a2: Stack[-22] = (bool) 0
0x1a3: Return(); Pop(16)

0x1a4: Pop(0); Push(Stack[-20] * Stack[-20]);
0x1a5: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1a7: @@ GetPFPosition(Stack[-5]); Obj=21 // @poff=44
0x1a8: Pop(0)
0x1a9: @ FindPathTo(Stack[-1], Stack[-5])
0x1aa: Pop(0)
0x1ab: Pop(0); Push(( Stack[-1] != 0 )
0x1ac: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ad: Stack[-1] = Stack[-6]
0x1ae: Stack[-1] = 0
0x1af: Pop(0); Push(( Stack[-6] != 0 )
0x1b0: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1b1: Push(Stack[-7])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b3: Stack[-7] = (bool) 0
0x1b4: @ RotatePath(Stack[-6], Stack[-8])
0x1b5: Pop(0)
0x1b6: Pop(0); Push((bool) Stack[-8] == 0)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: GOTO 0x1e8

0x1b9: Push((int) 0)
0x1ba: Push((float)0.30000001192092896)
0x1bb: @ SetTimer(Stack[-2], Stack[-1])
0x1bc: Pop(2)
0x1bd: PushEmpty(string)
0x1be: Call 0x217

0x1bf: Pop(0)
0x1c0: PushEmpty(string)
0x1c1: Call 0x219

0x1c2: Pop(0)
0x1c3: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x1c4: Pop(2)
0x1c5: Pop(0); Push((bool) Stack[-8] == 0)
0x1c6: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c7: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1c8: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c9: Stack[-6] = 0
0x1ca: GOTO 0x1e8

0x1cb: GOTO 0x1cd

0x1cc: GOTO 0x1e7

0x1cd: GOTO 0x1cf

0x1ce: Stack[-6] = 0
0x1cf: GOTO 0x1e0

0x1d0: Push((int) 0)
0x1d1: @ KillTimer(Stack[-1])
0x1d2: Pop(1)
0x1d3: Push((float)0.5)
0x1d4: @ Sleep(Stack[-1], Stack[-9])
0x1d5: Pop(1)
0x1d6: Pop(0); Push((bool) Stack[-8] == 0)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d8: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1d9: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1da: Stack[-6] = 0
0x1db: GOTO 0x1e8

0x1dc: Push((int) 0)
0x1dd: Push((float)0.30000001192092896)
0x1de: @ SetTimer(Stack[-2], Stack[-1])
0x1df: Pop(2)
0x1e0: Stack[-1] = 0
0x1e1: GOTO 0x1e6

0x1e2: Push((int) 0)
0x1e3: @ KillTimer(Stack[-1])
0x1e4: Pop(1)
0x1e5: GOTO 0x1e8

0x1e6: Stack[-6] = 0
0x1e7: GOTO 0x188

0x1e8: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1e9: Return(); Pop(16)

0x1ea: PushEmpty()
0x1eb: Push((int) 0)
0x1ec: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1ed: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ee: Return(); Pop(0)

0x1ef: PushEmpty(bool, object)
0x1f0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f1: Call 0x210

0x1f2: Pop(1)
0x1f3: Pop(1); Push((bool) Stack[-1] == 0)
0x1f4: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1f6: Push((int) 0)
0x1f7: @ KillTimer(Stack[-1])
0x1f8: Pop(1)
0x1f9: @ Stop()
0x1fa: Pop(0)
0x1fb: Return(); Pop(0)

0x1fc: PushEmpty()
0x1fd: @ RequestClearPath(Stack[-1])
0x1fe: Pop(0)
0x1ff: Return(); Pop(0)

0x200: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x201: Push((int) 0)
0x202: @ KillTimer(Stack[-1])
0x203: Pop(1)
0x204: @ Stop()
0x205: Pop(0)
0x206: Return(); Pop(0)

0x207: PushEmpty()
0x208: PushEmpty()
0x209: Call 0x200

0x20a: Pop(0)
0x20b: PushEmpty(object)
0x20c: Stack[-2] = Stack[-1]
0x20d: Call 0x78c

0x20e: Pop(1)
0x20f: Return(); Pop(0)

0x210: PushEmpty()
0x211: PushEmpty(bool, object)
0x212: Stack[-3] = Stack[-1]
0x213: Call 0x590

0x214: Stack[-2] = Stack[-4]
0x215: Pop(2)
0x216: Return(); Pop(0)

0x217: Stack[-1] = "walk" // @poff=58
0x218: Return(); Pop(0)

0x219: Stack[-1] = "run" // @poff=68
0x21a: Return(); Pop(0)

0x21b: PushEmpty()
0x21c: PushEmpty(object, bool, float)
0x21d: Stack[-5] = Stack[-3]
0x21e: Stack[-4] = Stack[-2]
0x21f: Stack[-1] = (float) 180.0
0x220: Call 0x236

0x221: Pop(3)
0x222: Return(); Pop(0)

0x223: PushEmpty()
0x224: Stack[-3] = (float) 0.10000000149011612
0x225: Return(); Pop(0)

0x226: PushEmpty()
0x227: Stack[-3] = (int) 0
0x228: Return(); Pop(0)

0x229: PushEmpty()
0x22a: PushEmpty(object)
0x22b: Stack[-2] = Stack[-1]
0x22c: Call 0x753

0x22d: Pop(1)
0x22e: Return(); Pop(0)

0x22f: PushEmpty()
0x230: PushEmpty(bool, object, object)
0x231: Stack[-5] = Stack[-2]
0x232: Stack[-4] = Stack[-1]
0x233: Call 0x792

0x234: Pop(3)
0x235: Return(); Pop(0)

0x236: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x237: PushEmpty()
0x238: Call 0x2fe

0x239: Pop(0)
0x23a: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x23b: Push("@GetAttackDistance") // @poff=76
0x23c: Push((int) 1)
0x23d: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x23e: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23f: @@ GetAttackDistance(Stack[-11]); Obj=25 // @poff=114
0x240: Pop(0)
0x241: Push((int) 50)
0x242: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x243: GOTO 0x245

0x244: Stack[-23] = Stack[-11]
0x245: Push((int) 150)
0x246: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x247: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x248: Stack[-11] = (int) 150
0x249: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x24a: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x24b: @ IsPlayerActor(Stack[-0]T, Stack[-8])
0x24c: Pop(0)
0x24d: Push(Stack[-24])
0x24e: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24f: Stack[-7] = (bool) 0
0x250: GOTO 0x252

0x251: Stack[-7] = (bool) 1
0x252: Push((float)300.0)
0x253: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x254: PushEmpty(bool)
0x255: Stack[-1] = (bool) 0
0x256: PushEmpty(bool, object)
0x257: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x258: Call 0x590

0x259: Pop(1)
0x25a: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25b: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x25c: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25d: Stack[-1] = (bool) 1
0x25e: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x25f: @@@ GetPFPosition(Stack[-10]); Obj=0 // @poff=44
0x260: Pop(0)
0x261: @ GetPFPosition(Stack[-9])
0x262: Pop(0)
0x263: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x264: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x265: Pop(0); Push(Stack[-6] * Stack[-6]);
0x266: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x267: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x268: PushEmpty(bool, object, float, float, bool, bool)
0x269: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x26a: Stack[-17] = Stack[-4]
0x26b: Stack[-3] = (float) 3000.0
0x26c: Stack[-2] = (bool) 1
0x26d: Stack[-1] = (bool) 0
0x26e: Push(-6, 2); TaskCall(2)
0x26f: Call 0x184

0x270: Pop(-6, 2); TaskReturn
0x271: Pop(5)
0x272: Pop(1); Push((bool) Stack[-1] == 0)
0x273: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x274: GOTO 0x2ed

0x275: Stack[-7] = (bool) 0
0x276: GOTO 0x2ec

0x277: Pop(0); Push(Stack[-23] * Stack[-23]);
0x278: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x27a: @@@ GetPFPosition(Stack[-3]); Obj=0 // @poff=44
0x27b: Pop(0)
0x27c: @ CanReachByPF(Stack[-2], Stack[-3])
0x27d: Pop(0)
0x27e: Pop(0); Push((bool) Stack[-2] == 0)
0x27f: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x280: PushEmpty(bool, object, float, float, bool, bool)
0x281: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x282: Stack[-17] = Stack[-4]
0x283: Stack[-3] = (float) 3000.0
0x284: Stack[-2] = (bool) 1
0x285: Stack[-1] = (bool) 0
0x286: Push(-6, 2); TaskCall(2)
0x287: Call 0x184

0x288: Pop(-6, 2); TaskReturn
0x289: Pop(5)
0x28a: Pop(1); Push((bool) Stack[-1] == 0)
0x28b: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x28c: GOTO 0x2ed

0x28d: Stack[-7] = (bool) 0
0x28e: GOTO 0x254

0x28f: Pop(0); Push((bool) Stack[-7] == 0)
0x290: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x291: PushEmpty(object)
0x292: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x293: Call 0x5eb

0x294: Pop(1)
0x295: Push("all") // @poff=0
0x296: Push("attack_on") // @poff=132
0x297: @ PlayAnimation(Stack[-2], Stack[-1])
0x298: Pop(2)
0x299: @ WaitForAnimEnd()
0x29a: Pop(0)
0x29b: @ StopAsync()
0x29c: Pop(0)
0x29d: Stack[-7] = (bool) 1
0x29e: @ rand(Stack[-1])
0x29f: Pop(0)
0x2a0: PushEmpty(bool)
0x2a1: Stack[-1] = (bool) 1
0x2a2: Push((float)0.6000000238418579)
0x2a3: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2a4: IF (Stack[-1] == 1) GOTO 0x2aa; Pop(1)

0x2a5: PushEmpty(bool)
0x2a6: Call 0x41c

0x2a7: Pop(0)
0x2a8: IF (Stack[-1] == 1) GOTO 0x2aa; Pop(1)

0x2a9: Stack[-1] = (bool) 0
0x2aa: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2ab: @ Face(Stack[-0]T)
0x2ac: Pop(0)
0x2ad: Push("all") // @poff=0
0x2ae: Push("attack_stay") // @poff=152
0x2af: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b0: Pop(2)
0x2b1: PushEmpty(bool, float)
0x2b2: Stack[-25] = Stack[-1]
0x2b3: Call 0x3b0

0x2b4: Pop(2)
0x2b5: @ StopAsync()
0x2b6: Pop(0)
0x2b7: GOTO 0x2e3

0x2b8: @ Face(Stack[-0]T)
0x2b9: Pop(0)
0x2ba: Push("all") // @poff=0
0x2bb: Push("fjump") // @poff=176
0x2bc: @ PlayAnimation(Stack[-2], Stack[-1])
0x2bd: Pop(2)
0x2be: @ WaitForAnimEnd()
0x2bf: Pop(0)
0x2c0: Push(CVector(0.0, 0.0, 0.0))
0x2c1: @ SetSpeed(Stack[-1])
0x2c2: Pop(1)
0x2c3: @ Stop()
0x2c4: Pop(0)
0x2c5: @ StopAsync()
0x2c6: Pop(0)
0x2c7: PushEmpty(bool)
0x2c8: Call 0x41c

0x2c9: Pop(0)
0x2ca: Pop(1); Push((bool) Stack[-1] == 0)
0x2cb: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2cc: PushEmpty(bool, object)
0x2cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ce: Call 0x590

0x2cf: Pop(1)
0x2d0: Pop(1); Push((bool) Stack[-1] == 0)
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d2: GOTO 0x2ed

0x2d3: @@@ GetPFPosition(Stack[-10]); Obj=0 // @poff=44
0x2d4: Pop(0)
0x2d5: @ GetPFPosition(Stack[-9])
0x2d6: Pop(0)
0x2d7: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x2d8: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2d9: Pop(0); Push(Stack[-23] * Stack[-23]);
0x2da: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2db: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2dc: PushEmpty(bool, float)
0x2dd: Stack[-25] = Stack[-1]
0x2de: Call 0x348

0x2df: Pop(1)
0x2e0: Pop(1); Push((bool) Stack[-1] == 0)
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2e2: GOTO 0x2ed

0x2e3: GOTO 0x2ec

0x2e4: PushEmpty(bool, float)
0x2e5: Stack[-25] = Stack[-1]
0x2e6: Call 0x348

0x2e7: Pop(1)
0x2e8: Pop(1); Push((bool) Stack[-1] == 0)
0x2e9: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2ea: GOTO 0x2ed

0x2eb: Stack[-7] = (bool) 1
0x2ec: GOTO 0x254

0x2ed: @ WaitForAnimEnd()
0x2ee: Pop(0)
0x2ef: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f1: Return(); Pop(22)

0x2f2: Push("all") // @poff=0
0x2f3: Push("attack_off") // @poff=188
0x2f4: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f5: Pop(2)
0x2f6: @ WaitForAnimEnd()
0x2f7: Pop(0)
0x2f8: Push(Stack[-8])
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fa: Push((float)2.0)
0x2fb: @ Sleep(Stack[-1])
0x2fc: Pop(1)
0x2fd: Return(); Pop(22)

0x2fe: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x2ff: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x300: Push("all") // @poff=0
0x301: Push("attack_begin") // @poff=210
0x302: Push((int) 1)
0x303: Pop(1); Push(Stack[1 + Tasks[-1].StackPointer] + Stack[-1]);
0x304: Pop(2); Push(Stack[-2] + Stack[-1]);
0x305: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x306: Pop(2)
0x307: Pop(0); Push((bool) Stack[-3] == 0)
0x308: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x309: GOTO 0x30d

0x30a: Push((int) 1)
0x30b: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x30c: GOTO 0x300

0x30d: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x30e: Push("attack") // @poff=236
0x30f: Push((int) 1)
0x310: Pop(1); Push(Stack[2 + Tasks[-1].StackPointer] + Stack[-1]);
0x311: Pop(2); Push(Stack[-2] + Stack[-1]);
0x312: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x313: Pop(1)
0x314: Pop(0); Push((bool) Stack[-2] == 0)
0x315: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x316: GOTO 0x31a

0x317: Push((int) 1)
0x318: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x319: GOTO 0x30e

0x31a: Push("all") // @poff=0
0x31b: Push("bjump") // @poff=250
0x31c: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x31d: Pop(2)
0x31e: Push(CvectorIndex(Stack[-1], 2))
0x31f: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x320: Return(); Pop(6)

0x321: PushEmpty(object, float, float, object, float, float)
0x322: Push((float)0.8999999761581421)
0x323: Pop(1); Push(Stack[-9] * Stack[-1]);
0x324: @ GetVictim(Stack[-1], Stack[-4])
0x325: Pop(1)
0x326: @ ReportAttack(Stack[-0]T)
0x327: Pop(0)
0x328: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x329: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x32a: PushEmpty(float, object, int)
0x32b: Stack[-6] = Stack[-2]
0x32c: Stack[-10] = Stack[-1]
0x32d: Call 0x223

0x32e: Stack[-3] = Stack[-5]
0x32f: Pop(3)
0x330: PushEmpty(float, object, float, int)
0x331: Stack[-7] = Stack[-3]
0x332: Stack[-6] = Stack[-2]
0x333: PushEmpty(int, object, int)
0x334: Stack[-10] = Stack[-2]
0x335: Stack[-14] = Stack[-1]
0x336: Call 0x226

0x337: Stack[-3] = Stack[-4]
0x338: Pop(3)
0x339: Call 0x527

0x33a: Stack[-4] = Stack[-5]
0x33b: Pop(4)
0x33c: PushEmpty(int)
0x33d: Call 0x447

0x33e: Pop(0)
0x33f: @ ReportHit(Stack[-0]T, Stack[-1], Stack[-2], Stack[-3])
0x340: Pop(1)
0x341: PushEmpty(object, float)
0x342: Stack[-5] = Stack[-2]
0x343: Stack[-3] = Stack[-1]
0x344: Call 0x449

0x345: Pop(2)
0x346: Return(); Pop(6)

0x347: Stack[-3] = 0
0x348: PushEmpty(int, bool, int, bool)
0x349: @ irand(Stack[-2], Stack[-1]T)
0x34a: Pop(0)
0x34b: Push((int) 1)
0x34c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x34d: @ Face(Stack[-0]T)
0x34e: Pop(0)
0x34f: Push((bool) 1)
0x350: @ SetAttackState(Stack[-1])
0x351: Pop(1)
0x352: Push("all") // @poff=0
0x353: Push("attack_begin") // @poff=210
0x354: Pop(1); Push(Stack[-1] + Stack[-4]);
0x355: @ PlayAnimation(Stack[-2], Stack[-1])
0x356: Pop(2)
0x357: @ WaitForAnimEnd()
0x358: Pop(0)
0x359: PushEmpty()
0x35a: Call 0x427

0x35b: Pop(0)
0x35c: PushEmpty(bool, object)
0x35d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x35e: Call 0x590

0x35f: Pop(1)
0x360: Pop(1); Push((bool) Stack[-1] == 0)
0x361: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x362: @ StopAsync()
0x363: Pop(0)
0x364: Stack[-6] = (bool) 0
0x365: Return(); Pop(4)

0x366: PushEmpty(float, int)
0x367: Stack[-7] = Stack[-2]
0x368: Stack[-4] = Stack[-1]
0x369: Call 0x321

0x36a: Pop(2)
0x36b: Push("all") // @poff=0
0x36c: Push("attack_middle") // @poff=262
0x36d: Pop(1); Push(Stack[-1] + Stack[-4]);
0x36e: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x36f: Pop(2)
0x370: Push(Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x372: Push("all") // @poff=0
0x373: Push("attack_middle") // @poff=262
0x374: Pop(1); Push(Stack[-1] + Stack[-4]);
0x375: @ PlayAnimation(Stack[-2], Stack[-1])
0x376: Pop(2)
0x377: @ WaitForAnimEnd()
0x378: Pop(0)
0x379: PushEmpty(bool, object)
0x37a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x37b: Call 0x590

0x37c: Pop(1)
0x37d: Pop(1); Push((bool) Stack[-1] == 0)
0x37e: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x37f: @ StopAsync()
0x380: Pop(0)
0x381: Stack[-6] = (bool) 0
0x382: Return(); Pop(4)

0x383: PushEmpty(float, int)
0x384: Stack[-7] = Stack[-2]
0x385: Stack[-4] = Stack[-1]
0x386: Call 0x321

0x387: Pop(2)
0x388: Push((bool) 0)
0x389: @ SetAttackState(Stack[-1])
0x38a: Pop(1)
0x38b: Push("all") // @poff=0
0x38c: Push("attack_end") // @poff=290
0x38d: Pop(1); Push(Stack[-1] + Stack[-4]);
0x38e: @ PlayAnimation(Stack[-2], Stack[-1])
0x38f: Pop(2)
0x390: PushEmpty(bool, float)
0x391: Stack[-1] = (float) 0.75
0x392: Call 0x398

0x393: Pop(2)
0x394: @ StopAsync()
0x395: Pop(0)
0x396: Stack[-6] = (bool) 1
0x397: Return(); Pop(4)

0x398: PushEmpty(float, bool, float, bool)
0x399: @ rand(Stack[-2])
0x39a: Pop(0)
0x39b: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x39c: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x39d: @ IsAnimationPlaying(Stack[-1])
0x39e: Pop(0)
0x39f: Pop(0); Push((bool) Stack[-1] == 0)
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x3a1: GOTO 0x3ab

0x3a2: PushEmpty(bool)
0x3a3: Call 0x3d8

0x3a4: Pop(0)
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a6: Stack[-6] = (bool) 1
0x3a7: Return(); Pop(4)

0x3a8: @ sync()
0x3a9: Pop(0)
0x3aa: GOTO 0x39d

0x3ab: GOTO 0x3ae

0x3ac: @ WaitForAnimEnd()
0x3ad: Pop(0)
0x3ae: Stack[-6] = (bool) 0
0x3af: Return(); Pop(4)

0x3b0: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x3b1: @ IsAnimationPlaying(Stack[-5])
0x3b2: Pop(0)
0x3b3: Pop(0); Push((bool) Stack[-5] == 0)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b5: GOTO 0x3d6

0x3b6: PushEmpty(bool)
0x3b7: Call 0x3d8

0x3b8: Pop(0)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3ba: Stack[-12] = (bool) 1
0x3bb: Return(); Pop(10)

0x3bc: PushEmpty(bool, object)
0x3bd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3be: Call 0x590

0x3bf: Pop(1)
0x3c0: Pop(1); Push((bool) Stack[-1] == 0)
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c2: Stack[-12] = (bool) 0
0x3c3: Return(); Pop(10)

0x3c4: @@@ GetPFPosition(Stack[-4]); Obj=0 // @poff=44
0x3c5: Pop(0)
0x3c6: @ GetPFPosition(Stack[-3])
0x3c7: Pop(0)
0x3c8: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x3c9: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x3ca: Pop(0); Push(Stack[-11] * Stack[-11]);
0x3cb: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3cc: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3cd: PushEmpty(bool, float)
0x3ce: Stack[-13] = Stack[-1]
0x3cf: Call 0x348

0x3d0: Pop(2)
0x3d1: Stack[-12] = (bool) 1
0x3d2: Return(); Pop(10)

0x3d3: @ sync()
0x3d4: Pop(0)
0x3d5: GOTO 0x3b1

0x3d6: Stack[-12] = (bool) 0
0x3d7: Return(); Pop(10)

0x3d8: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x3d9: PushEmpty(bool, object)
0x3da: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3db: Call 0x590

0x3dc: Pop(1)
0x3dd: Pop(1); Push((bool) Stack[-1] == 0)
0x3de: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3df: Stack[-11] = (bool) 0
0x3e0: Return(); Pop(10)

0x3e1: PushEmpty(bool)
0x3e2: Call 0x41c

0x3e3: Pop(0)
0x3e4: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3e5: @@@ GetPFPosition(Stack[-5]); Obj=0 // @poff=44
0x3e6: Pop(0)
0x3e7: @ GetPFPosition(Stack[-4])
0x3e8: Pop(0)
0x3e9: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3ea: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3eb: @@@ GetAttackDistance(Stack[-1]); Obj=0 // @poff=114
0x3ec: Pop(0)
0x3ed: Push((int) 50)
0x3ee: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3ef: Pop(0); Push(Stack[-1] * Stack[-1]);
0x3f0: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f2: PushEmpty(bool)
0x3f3: Call 0x3fa

0x3f4: Pop(0)
0x3f5: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f6: Stack[-11] = (bool) 1
0x3f7: Return(); Pop(10)

0x3f8: Stack[-11] = (bool) 0
0x3f9: Return(); Pop(10)

0x3fa: PushEmpty(object, float, cvector, cvector, object, float, cvector, cvector)
0x3fb: @ GetScene(Stack[-4])
0x3fc: Pop(0)
0x3fd: PushEmpty(cvector, object)
0x3fe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ff: Call 0x4f6

0x400: Pop(1)
0x401: Pop(1); Push(( -Stack[-1])
0x402: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4]T)
0x403: Pop(1)
0x404: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x405: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x406: Stack[-9] = (bool) 0
0x407: Return(); Pop(8)

0x408: @ Face(Stack[-0]T)
0x409: Pop(0)
0x40a: Push("all") // @poff=0
0x40b: Push("bjump") // @poff=250
0x40c: @ PlayAnimation(Stack[-2], Stack[-1])
0x40d: Pop(2)
0x40e: @@@ GetPFPosition(Stack[-2]); Obj=0 // @poff=44
0x40f: Pop(0)
0x410: @ GetPFPosition(Stack[-1])
0x411: Pop(0)
0x412: @ WaitForAnimEnd()
0x413: Pop(0)
0x414: @ StopAsync()
0x415: Pop(0)
0x416: Push(CVector(0.0, 0.0, 0.0))
0x417: @ SetSpeed(Stack[-1])
0x418: Pop(1)
0x419: Stack[-9] = (bool) 1
0x41a: Return(); Pop(8)

0x41b: Stack[-4] = 0
0x41c: PushEmpty(bool, bool)
0x41d: Push("IsAttacking") // @poff=312
0x41e: Push((int) 1)
0x41f: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x420: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x421: @@@ IsAttacking(Stack[-1]); Obj=0 // @poff=336
0x422: Pop(0)
0x423: Stack[-1] = Stack[-3]
0x424: Return(); Pop(2)

0x425: Stack[-3] = (bool) 0
0x426: Return(); Pop(2)

0x427: PushEmpty(float, int, float, int)
0x428: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x429: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x42a: Return(); Pop(4)

0x42b: Push( Stack[5 + Tasks[-1].StackPointer] )
0x42c: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x42d: Push((int) -1)
0x42e: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x42f: Push((int) 0)
0x430: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x431: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x432: Return(); Pop(4)

0x433: @ rand(Stack[-2])
0x434: Pop(0)
0x435: PushEmpty(float)
0x436: Call 0x44d

0x437: Pop(0)
0x438: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x439: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x43a: @ irand(Stack[-1], Stack[-2]T)
0x43b: Pop(0)
0x43c: Push((int) 1)
0x43d: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x43e: Push("attack") // @poff=236
0x43f: Pop(1); Push(Stack[-1] + Stack[-2]);
0x440: @ Speak(Stack[-1])
0x441: Pop(1)
0x442: PushEmpty(int)
0x443: Call 0x44b

0x444: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x445: Pop(1)
0x446: Return(); Pop(4)

0x447: Stack[-1] = (int) 0
0x448: Return(); Pop(0)

0x449: PushEmpty()
0x44a: Return(); Pop(0)

0x44b: Stack[-1] = (int) 1
0x44c: Return(); Pop(0)

0x44d: Stack[-1] = (float) 0.5
0x44e: Return(); Pop(0)

0x44f: PushEmpty(bool, bool)
0x450: @ IsPlayerActor(Stack[-3], Stack[-1])
0x451: Pop(0)
0x452: Push(Stack[-1])
0x453: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x454: PushEmpty(bool, object, string, float, float, float)
0x455: Stack[-9] = Stack[-5]
0x456: Stack[-4] = "reputation" // @poff=348
0x457: Stack[-3] = (float) -0.30000001192092896
0x458: Stack[-2] = (int) 0
0x459: Stack[-1] = (int) 1
0x45a: Call 0x511

0x45b: Pop(6)
0x45c: PushEmpty()
0x45d: Call 0x639

0x45e: Pop(0)
0x45f: PushEmpty(object)
0x460: Stack[-4] = Stack[-1]
0x461: Call 0x464

0x462: Pop(1)
0x463: Return(); Pop(2)

0x464: PushEmpty()
0x465: EventDisable(0)
0x466: PushEmpty(object)
0x467: Stack[-2] = Stack[-1]
0x468: Call 0x47b

0x469: Pop(1)
0x46a: Push((int) 50)
0x46b: Push((int) 40)
0x46c: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x46d: Pop(2)
0x46e: EventEnable(0)
0x46f: @ Hold()
0x470: Pop(0)
0x471: GOTO 0x46f

0x472: Return(); Pop(0)

0x473: PushEmpty(bool, bool)
0x474: @ IsOverrideActive(Stack[-1])
0x475: Pop(0)
0x476: Pop(0); Push((bool) Stack[-1] == 0)
0x477: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x478: @ WorkWithCorpse(Stack[-3])
0x479: Pop(0)
0x47a: Return(); Pop(2)

0x47b: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x47c: Pop(0); PushNull((bool) Stack[-21] == 0)
0x47d: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x47e: PushEmpty(string)
0x47f: Stack[-1] = "fdie" // @poff=370
0x480: Call 0x4d2

0x481: Pop(1)
0x482: GOTO 0x4d1

0x483: @@ GetPosition(Stack[-10]); Obj=21 // @poff=32
0x484: Pop(0)
0x485: @ GetPosition(Stack[-9])
0x486: Pop(0)
0x487: @ GetDirection(Stack[-8])
0x488: Pop(0)
0x489: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x48a: Push(CvectorIndex(Stack[-7], 0))
0x48b: Push(CvectorIndex(Stack[-9], 0))
0x48c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x48d: Push(CvectorIndex(Stack[-8], 2))
0x48e: Push(CvectorIndex(Stack[-10], 2))
0x48f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x490: Pop(2); Push(Stack[-2] + Stack[-1]);
0x491: Push((int) 0)
0x492: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x493: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x494: Stack[-6] = "fdie" // @poff=370
0x495: GOTO 0x497

0x496: Stack[-6] = "bdie" // @poff=380
0x497: @ RemoveRTEnvelope()
0x498: Pop(0)
0x499: @ SetDeathState()
0x49a: Pop(0)
0x49b: @ Stop()
0x49c: Pop(0)
0x49d: @ StopAsync()
0x49e: Pop(0)
0x49f: Stack[-21] = Stack[-5]
0x4a0: Push("GetScriptProperty") // @poff=390
0x4a1: Push((int) 2)
0x4a2: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x4a3: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4a4: Push("Owner") // @poff=426
0x4a5: @@ HasScriptProperty(Stack[-5], Stack[-1]); Obj=22 // @poff=438
0x4a6: Pop(1)
0x4a7: Push(Stack[-4])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4a9: Push("Owner") // @poff=426
0x4aa: @@ GetScriptProperty(Stack[-6], Stack[-1]); Obj=22 // @poff=456
0x4ab: Pop(1)
0x4ac: Pop(0); PushNull((bool) Stack[-5] == 0)
0x4ad: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4ae: Stack[-21] = Stack[-5]
0x4af: Push("@GetEyesHeight") // @poff=474
0x4b0: Push((int) 1)
0x4b1: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x4b2: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4b3: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=504
0x4b4: Pop(0)
0x4b5: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x4b6: Push(CvectorIndex(Stack[-1], 1))
0x4b7: Stack[-3] = Stack[-1]
0x4b8: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x4b9: Push("head") // @poff=518
0x4ba: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x4bb: Pop(1)
0x4bc: Stack[-3] = (bool) 1
0x4bd: GOTO 0x4bf

0x4be: Stack[-3] = (bool) 0
0x4bf: Push("all") // @poff=0
0x4c0: @ PlayAnimation(Stack[-1], Stack[-7])
0x4c1: Pop(1)
0x4c2: @ WaitForAnimEnd()
0x4c3: Pop(0)
0x4c4: Push(Stack[-3])
0x4c5: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c6: @ StopAsync()
0x4c7: Pop(0)
0x4c8: Push("head") // @poff=518
0x4c9: @ UnlookAsync(Stack[-1])
0x4ca: Pop(1)
0x4cb: Push("all") // @poff=0
0x4cc: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x4cd: Pop(1)
0x4ce: @ RemoveEnvelope()
0x4cf: Pop(0)
0x4d0: Stack[-5] = 0
0x4d1: Return(); Pop(20)

0x4d2: PushEmpty()
0x4d3: @ RemoveRTEnvelope()
0x4d4: Pop(0)
0x4d5: @ SetDeathState()
0x4d6: Pop(0)
0x4d7: @ Stop()
0x4d8: Pop(0)
0x4d9: @ StopAsync()
0x4da: Pop(0)
0x4db: @ StopSecondaryAnimation()
0x4dc: Pop(0)
0x4dd: Push("all") // @poff=0
0x4de: @ PlayAnimation(Stack[-1], Stack[-2])
0x4df: Pop(1)
0x4e0: @ WaitForAnimEnd()
0x4e1: Pop(0)
0x4e2: Push("all") // @poff=0
0x4e3: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x4e4: Pop(1)
0x4e5: @ RemoveEnvelope()
0x4e6: Pop(0)
0x4e7: Return(); Pop(0)

0x4e8: PushEmpty()
0x4e9: Return(); Pop(0)

0x4ea: PushEmpty()
0x4eb: Return(); Pop(0)

0x4ec: PushEmpty()
0x4ed: Return(); Pop(0)

0x4ee: PushEmpty()
0x4ef: Push((int) 1)
0x4f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4f2: Stack[-2] = "fire" // @poff=528
0x4f3: Return(); Pop(0)

0x4f4: Stack[-2] = "phys" // @poff=538
0x4f5: Return(); Pop(0)

0x4f6: PushEmpty(cvector, cvector, cvector, cvector)
0x4f7: @ GetPosition(Stack[-2])
0x4f8: Pop(0)
0x4f9: @@ GetPosition(Stack[-1]); Obj=5 // @poff=32
0x4fa: Pop(0)
0x4fb: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x4fc: Return(); Pop(4)

0x4fd: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x4fe: @ GetPosition(Stack[-3])
0x4ff: Pop(0)
0x500: @@ GetPosition(Stack[-2]); Obj=7 // @poff=32
0x501: Pop(0)
0x502: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x503: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x504: Return(); Pop(6)

0x505: PushEmpty(bool, bool)
0x506: Push("HasProperty") // @poff=548
0x507: Push((int) 2)
0x508: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x509: Pop(1); Push((bool) Stack[-1] == 0)
0x50a: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50b: Stack[-5] = (bool) 0
0x50c: Return(); Pop(2)

0x50d: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=572
0x50e: Pop(0)
0x50f: Stack[-1] = Stack[-5]
0x510: Return(); Pop(2)

0x511: PushEmpty(float, float)
0x512: PushEmpty(bool, object, string)
0x513: Stack[-10] = Stack[-2]
0x514: Stack[-9] = Stack[-1]
0x515: Call 0x505

0x516: Pop(2)
0x517: Pop(1); Push((bool) Stack[-1] == 0)
0x518: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x519: Stack[-8] = (bool) 0
0x51a: Return(); Pop(2)

0x51b: @@ GetProperty(Stack[-6], Stack[-1]); Obj=7 // @poff=584
0x51c: Pop(0)
0x51d: PushEmpty(float, float, float, float)
0x51e: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x51f: Stack[-8] = Stack[-2]
0x520: Stack[-7] = Stack[-1]
0x521: Call 0x601

0x522: Pop(3)
0x523: @@ SetProperty(Stack[-7], Stack[-1]); Obj=8 // @poff=596
0x524: Pop(1)
0x525: Stack[-8] = (bool) 1
0x526: Return(); Pop(2)

0x527: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x528: PushEmpty(bool, object, string)
0x529: Stack[-18] = Stack[-2]
0x52a: Stack[-1] = "health" // @poff=608
0x52b: Call 0x505

0x52c: Pop(2)
0x52d: Pop(1); Push((bool) Stack[-1] == 0)
0x52e: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x52f: Stack[-16] = (float) 0.0
0x530: Return(); Pop(12)

0x531: PushEmpty(bool, object, string)
0x532: Stack[-18] = Stack[-2]
0x533: Stack[-1] = "armor" // @poff=622
0x534: Call 0x505

0x535: Pop(2)
0x536: Pop(1); Push((bool) Stack[-1] == 0)
0x537: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x538: Stack[-6] = (int) 0
0x539: GOTO 0x53d

0x53a: Push("armor") // @poff=622
0x53b: @@ GetProperty(Stack[-1], Stack[-7]); Obj=16 // @poff=584
0x53c: Pop(1)
0x53d: Push("armor_") // @poff=634
0x53e: PushEmpty(string, int)
0x53f: Stack[-16] = Stack[-1]
0x540: Call 0x4ee

0x541: Pop(1)
0x542: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x543: PushEmpty(bool, object, string)
0x544: Stack[-18] = Stack[-2]
0x545: Stack[-8] = Stack[-1]
0x546: Call 0x505

0x547: Pop(2)
0x548: Pop(1); Push((bool) Stack[-1] == 0)
0x549: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x54a: Stack[-4] = (int) 0
0x54b: GOTO 0x54e

0x54c: @@ GetProperty(Stack[-5], Stack[-4]); Obj=15 // @poff=584
0x54d: Pop(0)
0x54e: PushEmpty(float, float, float)
0x54f: Pop(0); Push(Stack[-9] + Stack[-7]);
0x550: Push((float)100.0)
0x551: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x552: Stack[-1] = (int) 1
0x553: Call 0x5fa

0x554: Stack[-3] = Stack[-6]
0x555: Pop(3)
0x556: Push("health") // @poff=608
0x557: @@ GetProperty(Stack[-1], Stack[-3]); Obj=16 // @poff=584
0x558: Pop(1)
0x559: Push((int) 1)
0x55a: Pop(1); Push(Stack[-1] - Stack[-4]);
0x55b: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x55c: Push("health") // @poff=608
0x55d: PushEmpty(float, float, float, float)
0x55e: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x55f: Stack[-2] = (int) 0
0x560: Stack[-1] = (int) 1
0x561: Call 0x601

0x562: Pop(3)
0x563: @@ SetProperty(Stack[-2], Stack[-1]); Obj=17 // @poff=596
0x564: Pop(2)
0x565: Stack[-1] = Stack[-16]
0x566: Return(); Pop(12)

0x567: PushEmpty(bool, bool)
0x568: @@ IsDead(Stack[-1]); Obj=3 // @poff=648
0x569: Pop(0)
0x56a: Stack[-1] = Stack[-4]
0x56b: Return(); Pop(2)

0x56c: PushEmpty(object, object, object, object)
0x56d: Pop(0); PushNull((bool) Stack[-5] == 0)
0x56e: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56f: Stack[-6] = (bool) 0
0x570: Return(); Pop(4)

0x571: PushEmpty(bool)
0x572: Stack[-1] = (bool) 0
0x573: Push("IsDead") // @poff=655
0x574: Push((int) 1)
0x575: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x576: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x577: PushEmpty(bool, object)
0x578: Stack[-8] = Stack[-1]
0x579: Call 0x567

0x57a: Pop(1)
0x57b: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x57c: Stack[-1] = (bool) 1
0x57d: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x57e: Stack[-6] = (bool) 0
0x57f: Return(); Pop(4)

0x580: @ GetScene(Stack[-2])
0x581: Pop(0)
0x582: Pop(0); PushNull((bool) Stack[-2] == 0)
0x583: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x584: Stack[-6] = (bool) 0
0x585: Return(); Pop(4)

0x586: @@ GetScene(Stack[-1]); Obj=5 // @poff=669
0x587: Pop(0)
0x588: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x589: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x58a: Stack[-6] = (bool) 0
0x58b: Return(); Pop(4)

0x58c: Stack[-6] = (bool) 1
0x58d: Return(); Pop(4)

0x58e: Stack[-1] = 0
0x58f: Stack[-2] = 0
0x590: PushEmpty(int, int)
0x591: PushEmpty(bool, object)
0x592: Stack[-5] = Stack[-1]
0x593: Call 0x56c

0x594: Pop(1)
0x595: Pop(1); Push((bool) Stack[-1] == 0)
0x596: IF (Stack[-1] == 0) GOTO 0x599; Pop(1)

0x597: Stack[-4] = (bool) 0
0x598: Return(); Pop(2)

0x599: PushEmpty(bool, object, string)
0x59a: Stack[-6] = Stack[-2]
0x59b: Stack[-1] = "noaccess" // @poff=678
0x59c: Call 0x505

0x59d: Pop(2)
0x59e: Pop(1); Push((bool) Stack[-1] == 0)
0x59f: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x5a0: Stack[-4] = (bool) 1
0x5a1: Return(); Pop(2)

0x5a2: Push("noaccess") // @poff=678
0x5a3: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=584
0x5a4: Pop(1)
0x5a5: Push((int) 0)
0x5a6: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x5a7: Return(); Pop(2)

0x5a8: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x5a9: PushEmpty(bool)
0x5aa: Stack[-1] = (bool) 0
0x5ab: Push((int) 4)
0x5ac: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x5ad: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5ae: Push((int) 5)
0x5af: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5b1: Stack[-1] = (bool) 1
0x5b2: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5b3: @ GetScene(Stack[-10])
0x5b4: Pop(0)
0x5b5: @ GetPosition(Stack[-8])
0x5b6: Pop(0)
0x5b7: @ GetEyesHeight(Stack[-7])
0x5b8: Pop(0)
0x5b9: Push(CvectorIndex(Stack[-8], 1))
0x5ba: Push((int) 2)
0x5bb: Pop(1); Push(Stack[-9] / Stack[-1]);
0x5bc: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x5bd: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x5be: Push("scripted") // @poff=696
0x5bf: Push(CVector(0.0, 0.0, 1.0))
0x5c0: Push("blood.xml") // @poff=714
0x5c1: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x5c2: Pop(3)
0x5c3: Stack[-9] = 0
0x5c4: Stack[-10] = 0
0x5c5: Pop(0); PushNull((bool) Stack[-23] == 0)
0x5c6: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5c7: Return(); Pop(20)

0x5c8: @ GetSecondaryAnimationType(Stack[-6])
0x5c9: Pop(0)
0x5ca: Push((int) 0)
0x5cb: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x5cc: IF (Stack[-1] == 0) GOTO 0x5ce; Pop(1)

0x5cd: Return(); Pop(20)

0x5ce: @@ GetPosition(Stack[-5]); Obj=23 // @poff=32
0x5cf: Pop(0)
0x5d0: @ GetPosition(Stack[-4])
0x5d1: Pop(0)
0x5d2: @ GetDirection(Stack[-3])
0x5d3: Pop(0)
0x5d4: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x5d5: Push(CvectorIndex(Stack[-2], 0))
0x5d6: Push(CvectorIndex(Stack[-4], 0))
0x5d7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5d8: Push(CvectorIndex(Stack[-3], 2))
0x5d9: Push(CvectorIndex(Stack[-5], 2))
0x5da: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5db: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5dc: Push((int) 0)
0x5dd: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5de: IF (Stack[-1] == 0) GOTO 0x5e1; Pop(1)

0x5df: Stack[-1] = "fhit" // @poff=734
0x5e0: GOTO 0x5e2

0x5e1: Stack[-1] = "bhit" // @poff=744
0x5e2: Push("hit_react") // @poff=754
0x5e3: Push("1") // @poff=774
0x5e4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5e5: Push("2") // @poff=778
0x5e6: Pop(1); Push(Stack[-4] + Stack[-1]);
0x5e7: Push((int) -10)
0x5e8: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5e9: Pop(4)
0x5ea: Return(); Pop(20)

0x5eb: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5ec: @@ GetPosition(Stack[-3]); Obj=7 // @poff=32
0x5ed: Pop(0)
0x5ee: @ GetPosition(Stack[-2])
0x5ef: Pop(0)
0x5f0: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x5f1: Push(CvectorIndex(Stack[-1], 0))
0x5f2: Push(CvectorIndex(Stack[-2], 2))
0x5f3: @ RotateAsync(Stack[-2], Stack[-1])
0x5f4: Pop(2)
0x5f5: Return(); Pop(6)

0x5f6: PushEmpty(cvector, cvector)
0x5f7: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x5f8: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x5f9: Return(); Pop(2)

0x5fa: PushEmpty()
0x5fb: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x5fc: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fd: Stack[-2] = Stack[-3]
0x5fe: GOTO 0x600

0x5ff: Stack[-1] = Stack[-3]
0x600: Return(); Pop(0)

0x601: PushEmpty()
0x602: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x603: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x604: Stack[-2] = Stack[-4]
0x605: Return(); Pop(0)

0x606: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x607: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x608: Stack[-1] = Stack[-4]
0x609: Return(); Pop(0)

0x60a: Stack[-3] = Stack[-4]
0x60b: Return(); Pop(0)

0x60c: PushEmpty(object, object)
0x60d: @ CreateObjectSet(Stack[-1])
0x60e: Pop(0)
0x60f: Stack[-1] = Stack[-3]
0x610: Return(); Pop(2)

0x611: Stack[-1] = 0
0x612: PushEmpty(float, float)
0x613: @ GetGameTime(Stack[-1])
0x614: Pop(0)
0x615: Push((int) 1)
0x616: PushEmpty(int)
0x617: Push((int) 24)
0x618: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x619: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x61a: Return(); Pop(2)

0x61b: PushEmpty(int, int, int, bool, int, int, int, bool)
0x61c: Pop(0); Push((bool) Stack[-10] > Stack[-9])
0x61d: IF (Stack[-1] == 0) GOTO 0x622; Pop(1)

0x61e: Push("GenerateMoney: iMin > iMax") // @poff=782
0x61f: @ Trace(Stack[-1])
0x620: Pop(1)
0x621: Return(); Pop(8)

0x622: Stack[-4] = (int) 0
0x623: Pop(0); Push((bool) Stack[-10] != Stack[-9])
0x624: IF (Stack[-1] == 0) GOTO 0x629; Pop(1)

0x625: Pop(0); Push(Stack[-9] - Stack[-10]);
0x626: @ irand(Stack[-4], Stack[-1])
0x627: Pop(1)
0x628: GOTO 0x62d

0x629: Push((int) 0)
0x62a: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x62b: IF (Stack[-1] == 0) GOTO 0x62d; Pop(1)

0x62c: Return(); Pop(8)

0x62d: Stack[-4] = Stack[-4] + Stack[-10]; Pop(0);
0x62e: Push((int) 0)
0x62f: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x630: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x631: Return(); Pop(8)

0x632: Push("Money") // @poff=836
0x633: @ GetInvItemByName(Stack[-3], Stack[-1])
0x634: Pop(1)
0x635: Push((int) 0)
0x636: @ AddItem(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x637: Pop(1)
0x638: Return(); Pop(8)

0x639: PushEmpty(int, bool, int, int, bool, int)
0x63a: Push((int) 0)
0x63b: @ ClearSubContainer(Stack[-1])
0x63c: Pop(1)
0x63d: PushEmpty(int, int)
0x63e: Stack[-2] = (int) 0
0x63f: Push((int) 100)
0x640: PushEmpty(int)
0x641: Call 0x612

0x642: Pop(0)
0x643: Push((int) 100)
0x644: Pop(2); Push(Stack[-2] * Stack[-1]);
0x645: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x646: Call 0x61b

0x647: Pop(2)
0x648: PushEmpty(int)
0x649: Call 0x612

0x64a: Stack[-1] = Stack[-2]
0x64b: Pop(1)
0x64c: Push((int) 3)
0x64d: @ irand(Stack[-4], Stack[-1])
0x64e: Pop(1)
0x64f: Push((int) 0)
0x650: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x651: IF (Stack[-1] == 0) GOTO 0x65a; Pop(1)

0x652: PushEmpty(int, string)
0x653: Stack[-1] = "bottle_water" // @poff=848
0x654: Call 0x701

0x655: Pop(1)
0x656: Push((int) 0)
0x657: Push((int) 1)
0x658: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x659: Pop(3)
0x65a: Push((int) 3)
0x65b: @ irand(Stack[-4], Stack[-1])
0x65c: Pop(1)
0x65d: Push((int) 0)
0x65e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x65f: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x660: PushEmpty(int, string)
0x661: Stack[-1] = "rusk" // @poff=874
0x662: Call 0x701

0x663: Pop(1)
0x664: Push((int) 0)
0x665: Push((int) 1)
0x666: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x667: Pop(3)
0x668: Push((int) 7)
0x669: @ irand(Stack[-4], Stack[-1])
0x66a: Pop(1)
0x66b: Push((int) 0)
0x66c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x66d: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x66e: PushEmpty(int, string)
0x66f: Stack[-1] = "bandage" // @poff=884
0x670: Call 0x701

0x671: Pop(1)
0x672: Push((int) 0)
0x673: Push((int) 1)
0x674: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x675: Pop(3)
0x676: Push((int) 7)
0x677: @ irand(Stack[-4], Stack[-1])
0x678: Pop(1)
0x679: Push((int) 0)
0x67a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x67b: IF (Stack[-1] == 0) GOTO 0x684; Pop(1)

0x67c: PushEmpty(int, string)
0x67d: Stack[-1] = "tourniquet" // @poff=900
0x67e: Call 0x701

0x67f: Pop(1)
0x680: Push((int) 0)
0x681: Push((int) 1)
0x682: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x683: Pop(3)
0x684: Push((int) 20)
0x685: @ irand(Stack[-4], Stack[-1])
0x686: Pop(1)
0x687: Push((int) 0)
0x688: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x689: IF (Stack[-1] == 0) GOTO 0x692; Pop(1)

0x68a: PushEmpty(int, string)
0x68b: Stack[-1] = "packet" // @poff=922
0x68c: Call 0x701

0x68d: Pop(1)
0x68e: Push((int) 0)
0x68f: Push((int) 1)
0x690: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x691: Pop(3)
0x692: Push((int) 20)
0x693: @ irand(Stack[-4], Stack[-1])
0x694: Pop(1)
0x695: Push((int) 0)
0x696: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x697: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x698: PushEmpty(int, string)
0x699: Stack[-1] = "hook" // @poff=936
0x69a: Call 0x701

0x69b: Pop(1)
0x69c: Push((int) 0)
0x69d: Push((int) 1)
0x69e: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x69f: Pop(3)
0x6a0: Push((int) 30)
0x6a1: @ irand(Stack[-4], Stack[-1])
0x6a2: Pop(1)
0x6a3: Push((int) 0)
0x6a4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6a5: IF (Stack[-1] == 0) GOTO 0x6ae; Pop(1)

0x6a6: PushEmpty(int, string)
0x6a7: Stack[-1] = "watch" // @poff=946
0x6a8: Call 0x701

0x6a9: Pop(1)
0x6aa: Push((int) 0)
0x6ab: Push((int) 1)
0x6ac: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x6ad: Pop(3)
0x6ae: Push((int) 3)
0x6af: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x6b0: IF (Stack[-1] == 0) GOTO 0x6bf; Pop(1)

0x6b1: Push((int) 2)
0x6b2: @ irand(Stack[-4], Stack[-1])
0x6b3: Pop(1)
0x6b4: Push((int) 0)
0x6b5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6b6: IF (Stack[-1] == 0) GOTO 0x6bf; Pop(1)

0x6b7: PushEmpty(int, string)
0x6b8: Stack[-1] = "alpha_pills" // @poff=958
0x6b9: Call 0x701

0x6ba: Pop(1)
0x6bb: Push((int) 0)
0x6bc: Push((int) 1)
0x6bd: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x6be: Pop(3)
0x6bf: Push((int) 4)
0x6c0: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x6c1: IF (Stack[-1] == 0) GOTO 0x6d0; Pop(1)

0x6c2: Push((int) 5)
0x6c3: @ irand(Stack[-4], Stack[-1])
0x6c4: Pop(1)
0x6c5: Push((int) 0)
0x6c6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6c7: IF (Stack[-1] == 0) GOTO 0x6d0; Pop(1)

0x6c8: PushEmpty(int, string)
0x6c9: Stack[-1] = "beta_pills" // @poff=982
0x6ca: Call 0x701

0x6cb: Pop(1)
0x6cc: Push((int) 0)
0x6cd: Push((int) 1)
0x6ce: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x6cf: Pop(3)
0x6d0: Push((int) 6)
0x6d1: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x6d2: IF (Stack[-1] == 0) GOTO 0x6e1; Pop(1)

0x6d3: Push((int) 8)
0x6d4: @ irand(Stack[-4], Stack[-1])
0x6d5: Pop(1)
0x6d6: Push((int) 0)
0x6d7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6d8: IF (Stack[-1] == 0) GOTO 0x6e1; Pop(1)

0x6d9: PushEmpty(int, string)
0x6da: Stack[-1] = "gamma_pills" // @poff=1004
0x6db: Call 0x701

0x6dc: Pop(1)
0x6dd: Push((int) 0)
0x6de: Push((int) 1)
0x6df: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x6e0: Pop(3)
0x6e1: Push((int) 8)
0x6e2: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x6e3: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6e4: Push((int) 2)
0x6e5: @ irand(Stack[-4], Stack[-1])
0x6e6: Pop(1)
0x6e7: Push((int) 0)
0x6e8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6e9: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6ea: PushEmpty(int, string)
0x6eb: Stack[-1] = "revolver_ammo" // @poff=1028
0x6ec: Call 0x701

0x6ed: Pop(1)
0x6ee: Push((int) 0)
0x6ef: Push((int) 1)
0x6f0: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x6f1: Pop(3)
0x6f2: Push((int) 2)
0x6f3: @ irand(Stack[-4], Stack[-1])
0x6f4: Pop(1)
0x6f5: Push((int) 0)
0x6f6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6f7: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6f8: PushEmpty(int, string)
0x6f9: Stack[-1] = "rifle_ammo" // @poff=1056
0x6fa: Call 0x701

0x6fb: Pop(1)
0x6fc: Push((int) 0)
0x6fd: Push((int) 1)
0x6fe: @ AddItem(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x6ff: Pop(3)
0x700: Return(); Pop(6)

0x701: PushEmpty(int, int)
0x702: @ GetInvItemByName(Stack[-1], Stack[-3])
0x703: Pop(0)
0x704: Stack[-1] = Stack[-4]
0x705: Return(); Pop(2)

0x706: Push(GlobalVars[0])
0x707: PushEmpty(object)
0x708: Call 0x60c

0x709: Stack[-1] = Stack[-2]
0x70a: Pop(1)
0x70b: GlobalVars[0] = Stack[-1]; Pop(1)
0x70c: Return(); Pop(0)

0x70d: PushEmpty(bool, float, bool, float)
0x70e: PushEmpty(bool, object)
0x70f: Stack[-7] = Stack[-1]
0x710: Call 0x590

0x711: Pop(1)
0x712: Pop(1); Push((bool) Stack[-1] == 0)
0x713: IF (Stack[-1] == 0) GOTO 0x716; Pop(1)

0x714: Stack[-6] = (bool) 0
0x715: Return(); Pop(4)

0x716: Push(GlobalVars[0])
0x717: @@ in(Stack[-3], Stack[-6]); Obj=1 // @poff=1078
0x718: Pop(1)
0x719: Push(Stack[-2])
0x71a: IF (Stack[-1] == 0) GOTO 0x71d; Pop(1)

0x71b: Stack[-6] = (bool) 1
0x71c: Return(); Pop(4)

0x71d: PushEmpty(bool, object, string)
0x71e: Stack[-8] = Stack[-2]
0x71f: Stack[-1] = "reputation" // @poff=348
0x720: Call 0x505

0x721: Pop(2)
0x722: Pop(1); Push((bool) Stack[-1] == 0)
0x723: IF (Stack[-1] == 0) GOTO 0x726; Pop(1)

0x724: Stack[-6] = (bool) 0
0x725: Return(); Pop(4)

0x726: Push("reputation") // @poff=348
0x727: @@ GetProperty(Stack[-1], Stack[-2]); Obj=6 // @poff=584
0x728: Pop(1)
0x729: Push((float)0.10000000149011612)
0x72a: Stack[-7] = Stack[-2] < Stack[-1]; Pop(1);
0x72b: Return(); Pop(4)

0x72c: PushEmpty(bool, bool)
0x72d: @ IsPlayerActor(Stack[-3], Stack[-1])
0x72e: Pop(0)
0x72f: Pop(0); Push((bool) Stack[-1] == 0)
0x730: IF (Stack[-1] == 0) GOTO 0x733; Pop(1)

0x731: Stack[-4] = (bool) 0
0x732: Return(); Pop(2)

0x733: PushEmpty(bool, object)
0x734: Stack[-5] = Stack[-1]
0x735: Call 0x70d

0x736: Stack[-2] = Stack[-6]
0x737: Pop(2)
0x738: Return(); Pop(2)

0x739: PushEmpty()
0x73a: PushEmpty(object)
0x73b: Stack[-2] = Stack[-1]
0x73c: Push(-1, 3); TaskCall(0)
0x73d: Call 0x0

0x73e: Pop(-1, 3); TaskReturn
0x73f: Pop(1)
0x740: Return(); Pop(0)

0x741: PushEmpty()
0x742: PushEmpty(bool, object)
0x743: Stack[-3] = Stack[-1]
0x744: Call 0x70d

0x745: Stack[-2] = Stack[-4]
0x746: Pop(2)
0x747: Return(); Pop(0)

0x748: PushEmpty()
0x749: PushEmpty(object, bool)
0x74a: Stack[-3] = Stack[-2]
0x74b: Stack[-1] = (bool) 1
0x74c: Push(-2, 6); TaskCall(3)
0x74d: Call 0x21b

0x74e: Pop(-2, 6); TaskReturn
0x74f: Pop(2)
0x750: @ ResetAAS()
0x751: Pop(0)
0x752: Return(); Pop(0)

0x753: PushEmpty(bool, bool)
0x754: Pop(0); PushNull((bool) Stack[-3] == 0)
0x755: IF (Stack[-1] == 0) GOTO 0x757; Pop(1)

0x756: Return(); Pop(2)

0x757: Push(GlobalVars[0])
0x758: @@ in(Stack[-2], Stack[-4]); Obj=1 // @poff=1078
0x759: Pop(1)
0x75a: Pop(0); Push((bool) Stack[-1] == 0)
0x75b: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x75c: Push(GlobalVars[0])
0x75d: @@ add(Stack[-4]); Obj=1 // @poff=1081
0x75e: Pop(1)
0x75f: Return(); Pop(2)

0x760: PushEmpty()
0x761: PushEmpty(object)
0x762: Stack[-2] = Stack[-1]
0x763: Call 0x753

0x764: Pop(1)
0x765: PushEmpty(object, bool)
0x766: Stack[-3] = Stack[-2]
0x767: Stack[-1] = (bool) 1
0x768: Push(-2, 6); TaskCall(3)
0x769: Call 0x21b

0x76a: Pop(-2, 6); TaskReturn
0x76b: Pop(2)
0x76c: @ ResetAAS()
0x76d: Pop(0)
0x76e: Return(); Pop(0)

0x76f: PushEmpty()
0x770: PushEmpty(object)
0x771: Stack[-2] = Stack[-1]
0x772: Push(-1, 0); TaskCall(4)
0x773: Call 0x44f

0x774: Pop(-1, 0); TaskReturn
0x775: Pop(1)
0x776: Return(); Pop(0)

0x777: PushEmpty()
0x778: PushEmpty(object, int, float)
0x779: Stack[-7] = Stack[-3]
0x77a: Stack[-6] = Stack[-2]
0x77b: Stack[-5] = Stack[-1]
0x77c: Call 0x5a8

0x77d: Pop(3)
0x77e: Return(); Pop(0)

0x77f: PushEmpty(float, float)
0x780: Push("health") // @poff=608
0x781: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x782: IF (Stack[-1] == 0) GOTO 0x78b; Pop(1)

0x783: Push("health") // @poff=608
0x784: @ GetProperty(Stack[-1], Stack[-2])
0x785: Pop(1)
0x786: Push((int) 0)
0x787: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x788: IF (Stack[-1] == 0) GOTO 0x78b; Pop(1)

0x789: @ SignalDeath(Stack[-4])
0x78a: Pop(0)
0x78b: Return(); Pop(2)

0x78c: PushEmpty()
0x78d: PushEmpty(object)
0x78e: Stack[-2] = Stack[-1]
0x78f: Call 0x76f

0x790: Pop(1)
0x791: Return(); Pop(0)

0x792: PushEmpty(float, bool, float, bool)
0x793: PushEmpty(bool, object, string)
0x794: Stack[-8] = Stack[-2]
0x795: Stack[-1] = "reputation" // @poff=348
0x796: Call 0x505

0x797: Pop(2)
0x798: Pop(1); Push((bool) Stack[-1] == 0)
0x799: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x79a: Stack[-7] = (bool) 0
0x79b: Return(); Pop(4)

0x79c: Push("reputation") // @poff=348
0x79d: @@ GetProperty(Stack[-1], Stack[-3]); Obj=6 // @poff=584
0x79e: Pop(1)
0x79f: Push((float)0.5)
0x7a0: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x7a1: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x7a2: Stack[-7] = (bool) 0
0x7a3: Return(); Pop(4)

0x7a4: @ CanSee(Stack[-1], Stack[-6])
0x7a5: Pop(0)
0x7a6: PushEmpty(bool)
0x7a7: Stack[-1] = (bool) 1
0x7a8: Push(Stack[-2])
0x7a9: IF (Stack[-1] == 1) GOTO 0x7b2; Pop(1)

0x7aa: PushEmpty(float, object)
0x7ab: Stack[-9] = Stack[-1]
0x7ac: Call 0x4fd

0x7ad: Pop(1)
0x7ae: Push((float)160000.0)
0x7af: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x7b0: IF (Stack[-1] == 1) GOTO 0x7b2; Pop(1)

0x7b1: Stack[-1] = (bool) 0
0x7b2: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x7b3: Push((float)-0.20000000298023224)
0x7b4: @ ReportReputationChange(Stack[-7], Stack[-6], Stack[-1])
0x7b5: Pop(1)
0x7b6: Stack[-7] = (bool) 1
0x7b7: Return(); Pop(4)

0x7b8: Stack[-7] = (bool) 0
0x7b9: Return(); Pop(4)

