GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	W:all
	W:fdie
	A:GetPosition
	W:bdie
	W:GetScriptProperty
	W:Owner
	A:HasScriptProperty
	A:GetScriptProperty
	W:@GetEyesHeight
	A:GetEyesHeight
	W:head
	W:aattack_begin1
	W:aattack_end1
	W:knife
	W:scripted
	W:grabitel_knife.xml
	A:SetScriptProperty
	W:Target
	W:StartDirection
	W:kill
	W:attack_off
	W:@GetAttackDistance
	A:GetAttackDistance
	W:attack
	A:GetPFPosition
	W:attack_on
	W:attack_stay
	W:fjump
	W:attack_begin
	W:bjump
	W:attack_middle
	W:_
	W:attack_end
	W:IsAttacking
	A:IsAttacking
	W:walk
	W:run
	W:fire
	W:bullet
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
	W:fhit
	W:bhit
	W:hit_react
	W:2
	A:add
	A:size
	A:get
	W:blood_dir.xml
	W:reputation
	W:battle
	W:god_mode
	W:idle
	W:branch
	A:RemoveStationaryActor
// @pool_raw:61006c006c00000066006400690065000000476574506f736974696f6e0062006400690065000000470065007400530063007200690070007400500072006f007000650072007400790000004f0077006e0065007200000048617353637269707450726f70657274790047657453637269707450726f7065727479004000470065007400450079006500730048006500690067006800740000004765744579657348656967687400680065006100640000006100610074007400610063006b005f0062006500670069006e00310000006100610074007400610063006b005f0065006e006400310000006b006e00690066006500000073006300720069007000740065006400000067007200610062006900740065006c005f006b006e006900660065002e0078006d006c00000053657453637269707450726f70657274790054006100720067006500740000005300740061007200740044006900720065006300740069006f006e0000006b0069006c006c000000610074007400610063006b005f006f006600660000004000470065007400410074007400610063006b00440069007300740061006e0063006500000047657441747461636b44697374616e636500610074007400610063006b0000004765745046506f736974696f6e00610074007400610063006b005f006f006e000000610074007400610063006b005f007300740061007900000066006a0075006d0070000000610074007400610063006b005f0062006500670069006e00000062006a0075006d0070000000610074007400610063006b005f006d006900640064006c00650000005f000000610074007400610063006b005f0065006e006400000049007300410074007400610063006b0069006e0067000000497341747461636b696e6700770061006c006b000000720075006e00000066006900720065000000620075006c006c0065007400000070006800790073000000480061007300500072006f0070006500720074007900000048617350726f70657274790047657450726f70657274790053657450726f7065727479006800650061006c00740068000000610072006d006f0072000000610072006d006f0072005f0000004973446561640049007300440065006100640000004765745363656e65006e006f00610063006300650073007300000066006800690074000000620068006900740000006800690074005f00720065006100630074000000320000006164640073697a65006765740062006c006f006f0064005f006400690072002e0078006d006c000000720065007000750074006100740069006f006e00000062006100740074006c006500000067006f0064005f006d006f00640065000000690064006c00650000006200720061006e0063006800000052656d6f766553746174696f6e6172794163746f7200

Import:
	Sleep (1 args)
	IsPlayerActor (2 args)
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopAnimation (0 args)
	StopGroup0 (0 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	IsOverrideActive (1 args)
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
	Face (1 args)
	GetScene (1 args)
	GetGeometryLocator (3 args)
	AddActorByType (6 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
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
	FindDirLength (3 args)
	Speak (1 args)
	SetTimer (2 args)
	CanSee (2 args)
	KillTimer (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	RequestClearPath (1 args)
	Rotate (3 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	RotateAsync (2 args)
	IsLoaded (1 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	WorkWithCorpse (1 args)
	Barter (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_17 Op = 0x8 Vars = (object)
		EVENT_1 Op = 0x16 Vars = (object)
		EVENT_3 Op = 0x20 Vars = (object)
	GTASK_1  Params = 1
		EVENT_0 Op = 0x9f Vars = (object)
		EVENT_22 Op = 0x11e Vars = (object, int, float, float)
		EVENT_16 Op = 0x120 Vars = (object, string)
		EVENT_41 Op = 0x122 Vars = (object)
	GTASK_2  Params = 2
	GTASK_3 Vars = (bool) Params = 2
		EVENT_17 Op = 0x1b4 Vars = (object)
		EVENT_30 Op = 0x1ba Vars = (object, object, bool)
		EVENT_26 Op = 0x1c1 Vars = (string)
	GTASK_4 Vars = (object, int, int, bool, float, int) Params = 2
		EVENT_17 Op = 0x1ff Vars = (object)
		EVENT_30 Op = 0x205 Vars = (object, object, bool)
		EVENT_26 Op = 0x20c Vars = (string)
	GTASK_5 Vars = (bool, object, bool) Params = 6
		EVENT_17 Op = 0x4a8 Vars = (object)
		EVENT_30 Op = 0x4ae Vars = (object, object, bool)
		EVENT_26 Op = 0x4b5 Vars = (string)
		EVENT_7 Op = 0x4f1 Vars = (int)
		EVENT_1 Op = 0x50c Vars = (object)
		EVENT_2 Op = 0x51b Vars = (object)
		EVENT_10 Op = 0x5a1 Vars = (object)
		EVENT_41 Op = 0x5ac Vars = (object)
	GTASK_6  Params = 1

Events:
EVENT_22 Op = 0x841 Vars = (object, int, float, float)
EVENT_43 Op = 0x849 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x853 Vars = (object, string)
EVENT_41 Op = 0x860 Vars = (object)

0x0: Push((int) 3)
0x1: @ Sleep(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty()
0x4: Call2 0x2a

0x5: Pop(0)
0x6: GOTO 0x0

0x7: Return(); Pop(0)

0x8: PushEmpty()
0x9: PushEmpty(bool, object)
0xa: Stack[-3] = Stack[-1]
0xb: Call2 0x866

0xc: Pop(1)
0xd: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0xe: PushEmpty()
0xf: Call2 0x7b

0x10: Pop(0)
0x11: PushEmpty(object)
0x12: Stack[-2] = Stack[-1]
0x13: Call2 0x86d

0x14: Pop(1)
0x15: Return(); Pop(0)

0x16: PushEmpty(bool, bool)
0x17: @ IsPlayerActor(Stack[-3], Stack[-1])
0x18: Pop(0)
0x19: Push(Stack[-1])
0x1a: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1b: PushEmpty(object)
0x1c: Stack[-4] = Stack[-1]
0x1d: Call2 0x8

0x1e: Pop(1)
0x1f: Return(); Pop(2)

0x20: PushEmpty(bool, bool)
0x21: @ IsPlayerActor(Stack[-3], Stack[-1])
0x22: Pop(0)
0x23: Push(Stack[-1])
0x24: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x25: PushEmpty(object)
0x26: Stack[-4] = Stack[-1]
0x27: Call2 0x8

0x28: Pop(1)
0x29: Return(); Pop(2)

0x2a: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2b: @ WaitForAnimEnd()
0x2c: Pop(0)
0x2d: PushEmpty(bool)
0x2e: Call2 0x755

0x2f: Pop(0)
0x30: Pop(1); Push((bool) Stack[-1] == 0)
0x31: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x32: Return(); Pop(14)

0x33: PushEmpty(int)
0x34: Call2 0x828

0x35: Stack[-1] = Stack[-8]
0x36: Pop(1)
0x37: Stack[-6] = (int) 0
0x38: PushEmpty(bool)
0x39: Stack[-1] = (bool) 0
0x3a: Push((int) 5)
0x3b: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3d: PushEmpty(bool)
0x3e: Call2 0x755

0x3f: Pop(0)
0x40: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x41: Stack[-1] = (bool) 1
0x42: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x43: Push((int) 3)
0x44: @ irand(Stack[-6], Stack[-1])
0x45: Pop(1)
0x46: Push((int) 0)
0x47: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x48: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x49: Push(Stack[-7])
0x4a: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x4b: @ irand(Stack[-4], Stack[-7])
0x4c: Pop(0)
0x4d: Push("all") // @poff=0
0x4e: PushEmpty(string, int)
0x4f: Stack[-7] = Stack[-1]
0x50: Call2 0x821

0x51: Pop(1)
0x52: @ PlayAnimation(Stack[-2], Stack[-1])
0x53: Pop(2)
0x54: @ WaitForAnimEnd(Stack[-3])
0x55: Pop(0)
0x56: Pop(0); Push((bool) Stack[-3] == 0)
0x57: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x58: GOTO 0x76

0x59: GOTO 0x6b

0x5a: Push((int) 1)
0x5b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x5c: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x5d: Push((int) 4)
0x5e: @ rand(Stack[-3], Stack[-1])
0x5f: Pop(1)
0x60: Push((int) 1)
0x61: Pop(1); Push(Stack[-3] + Stack[-1]);
0x62: @ Sleep(Stack[-1], Stack[-2])
0x63: Pop(1)
0x64: Pop(0); Push((bool) Stack[-1] == 0)
0x65: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x66: GOTO 0x76

0x67: GOTO 0x6b

0x68: Push(Stack[-6])
0x69: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x6a: GOTO 0x76

0x6b: PushEmpty(bool)
0x6c: Call2 0x79

0x6d: Pop(0)
0x6e: Pop(1); Push((bool) Stack[-1] == 0)
0x6f: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x70: GOTO 0x76

0x71: @ ResetAAS()
0x72: Pop(0)
0x73: Push((int) 1)
0x74: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x75: GOTO 0x38

0x76: @ ResetAAS()
0x77: Pop(0)
0x78: Return(); Pop(14)

0x79: Stack[-1] = (bool) 1
0x7a: Return(); Pop(0)

0x7b: @ StopAnimation()
0x7c: Pop(0)
0x7d: @ StopGroup0()
0x7e: Pop(0)
0x7f: Return(); Pop(0)

0x80: PushEmpty()
0x81: PushEmpty(bool, object)
0x82: Stack[-3] = Stack[-1]
0x83: Call2 0x5e9

0x84: Pop(1)
0x85: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x86: PushEmpty(bool, object, float)
0x87: Stack[-4] = Stack[-2]
0x88: Stack[-1] = (float) 0.029999999329447746
0x89: Call2 0x7d0

0x8a: Pop(3)
0x8b: PushEmpty(object)
0x8c: Stack[-2] = Stack[-1]
0x8d: Call2 0x90

0x8e: Pop(1)
0x8f: Return(); Pop(0)

0x90: PushEmpty()
0x91: EventDisable(0)
0x92: PushEmpty(object)
0x93: Stack[-2] = Stack[-1]
0x94: Call2 0xa9

0x95: Pop(1)
0x96: Push((int) 50)
0x97: Push((int) 40)
0x98: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x99: Pop(2)
0x9a: EventEnable(0)
0x9b: @ Hold()
0x9c: Pop(0)
0x9d: GOTO 0x9b

0x9e: Return(); Pop(0)

0x9f: PushEmpty(bool, bool)
0xa0: @ IsOverrideActive(Stack[-1])
0xa1: Pop(0)
0xa2: Pop(0); Push((bool) Stack[-1] == 0)
0xa3: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa4: PushEmpty(object)
0xa5: Stack[-4] = Stack[-1]
0xa6: Call2 0x879

0xa7: Pop(1)
0xa8: Return(); Pop(2)

0xa9: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0xaa: Pop(0); PushNull((bool) Stack[-21] == 0)
0xab: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xac: PushEmpty(string)
0xad: Stack[-1] = "fdie" // @poff=8
0xae: Call2 0x104

0xaf: Pop(1)
0xb0: GOTO 0x103

0xb1: @@ GetPosition(Stack[-10]); Obj=21 // @poff=18
0xb2: Pop(0)
0xb3: @ GetPosition(Stack[-9])
0xb4: Pop(0)
0xb5: @ GetDirection(Stack[-8])
0xb6: Pop(0)
0xb7: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0xb8: Push(CvectorIndex(Stack[-7], 0))
0xb9: Push(CvectorIndex(Stack[-9], 0))
0xba: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbb: Push(CvectorIndex(Stack[-8], 2))
0xbc: Push(CvectorIndex(Stack[-10], 2))
0xbd: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbe: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbf: Push((int) 0)
0xc0: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc2: Stack[-6] = "fdie" // @poff=8
0xc3: GOTO 0xc5

0xc4: Stack[-6] = "bdie" // @poff=30
0xc5: @ RemoveRTEnvelope()
0xc6: Pop(0)
0xc7: @ SetDeathState()
0xc8: Pop(0)
0xc9: @ Stop()
0xca: Pop(0)
0xcb: @ StopAsync()
0xcc: Pop(0)
0xcd: Stack[-21] = Stack[-5]
0xce: Push("GetScriptProperty") // @poff=40
0xcf: Push((int) 2)
0xd0: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0xd1: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd2: Push("Owner") // @poff=76
0xd3: @@ HasScriptProperty(Stack[-5], Stack[-1]); Obj=22 // @poff=88
0xd4: Pop(1)
0xd5: Push(Stack[-4])
0xd6: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd7: Push("Owner") // @poff=76
0xd8: @@ GetScriptProperty(Stack[-6], Stack[-1]); Obj=22 // @poff=106
0xd9: Pop(1)
0xda: Pop(0); PushNull((bool) Stack[-5] == 0)
0xdb: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xdc: Stack[-21] = Stack[-5]
0xdd: Push("@GetEyesHeight") // @poff=124
0xde: Push((int) 1)
0xdf: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0xe0: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe1: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=154
0xe2: Pop(0)
0xe3: Stack[-1] = [0.0, 0.0, 0.0]
0xe4: Push(CvectorIndex(Stack[-1], 1))
0xe5: Stack[-3] = Stack[-1]
0xe6: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xe7: Push("head") // @poff=168
0xe8: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0xe9: Pop(1)
0xea: Stack[-3] = (bool) 1
0xeb: GOTO 0xed

0xec: Stack[-3] = (bool) 0
0xed: PushEmpty(string)
0xee: Stack[-7] = Stack[-1]
0xef: Call2 0x765

0xf0: Pop(1)
0xf1: Push("all") // @poff=0
0xf2: @ PlayAnimation(Stack[-1], Stack[-7])
0xf3: Pop(1)
0xf4: @ WaitForAnimEnd()
0xf5: Pop(0)
0xf6: Push(Stack[-3])
0xf7: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf8: @ StopAsync()
0xf9: Pop(0)
0xfa: Push("head") // @poff=168
0xfb: @ UnlookAsync(Stack[-1])
0xfc: Pop(1)
0xfd: Push("all") // @poff=0
0xfe: @ LockAnimationEnd(Stack[-1], Stack[-7])
0xff: Pop(1)
0x100: @ RemoveEnvelope()
0x101: Pop(0)
0x102: Stack[-5] = 0
0x103: Return(); Pop(20)

0x104: PushEmpty()
0x105: @ RemoveRTEnvelope()
0x106: Pop(0)
0x107: @ SetDeathState()
0x108: Pop(0)
0x109: @ Stop()
0x10a: Pop(0)
0x10b: @ StopAsync()
0x10c: Pop(0)
0x10d: @ StopSecondaryAnimation()
0x10e: Pop(0)
0x10f: PushEmpty(string)
0x110: Stack[-2] = Stack[-1]
0x111: Call2 0x765

0x112: Pop(1)
0x113: Push("all") // @poff=0
0x114: @ PlayAnimation(Stack[-1], Stack[-2])
0x115: Pop(1)
0x116: @ WaitForAnimEnd()
0x117: Pop(0)
0x118: Push("all") // @poff=0
0x119: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x11a: Pop(1)
0x11b: @ RemoveEnvelope()
0x11c: Pop(0)
0x11d: Return(); Pop(0)

0x11e: PushEmpty()
0x11f: Return(); Pop(0)

0x120: PushEmpty()
0x121: Return(); Pop(0)

0x122: PushEmpty()
0x123: Return(); Pop(0)

0x124: PushEmpty(float, float)
0x125: PushEmpty(bool, object)
0x126: Stack[-5] = Stack[-1]
0x127: Call2 0x6a1

0x128: Pop(1)
0x129: Pop(1); Push((bool) Stack[-1] == 0)
0x12a: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12b: Stack[-4] = (bool) 0
0x12c: Return(); Pop(2)

0x12d: PushEmpty(float, object)
0x12e: Stack[-5] = Stack[-1]
0x12f: Call2 0x5e1

0x130: Stack[-2] = Stack[-3]
0x131: Pop(2)
0x132: PushEmpty(bool, float, float, float)
0x133: Stack[-5] = Stack[-3]
0x134: Stack[-2] = (float) 250000.0
0x135: Stack[-1] = (float) 3240000.0
0x136: Call2 0x7c8

0x137: Pop(3)
0x138: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x139: PushEmpty(bool, object)
0x13a: Stack[-5] = Stack[-1]
0x13b: Push(-2, 1); TaskCall(3)
0x13c: Call2 0x149

0x13d: Pop(-2, 1); TaskReturn
0x13e: Stack[-2] = Stack[-6]
0x13f: Pop(2)
0x140: Return(); Pop(2)

0x141: PushEmpty(bool, object)
0x142: Stack[-5] = Stack[-1]
0x143: Push(-2, 6); TaskCall(4)
0x144: Call2 0x1c7

0x145: Pop(-2, 6); TaskReturn
0x146: Stack[-2] = Stack[-6]
0x147: Pop(2)
0x148: Return(); Pop(2)

0x149: PushEmpty(object, cvector, bool, object, cvector, float, cvector, object, cvector, bool, object, cvector, float, cvector)
0x14a: PushEmpty(object)
0x14b: Stack[-16] = Stack[-1]
0x14c: Call2 0x807

0x14d: Pop(1)
0x14e: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x14f: PushEmpty(bool, object)
0x150: Stack[-17] = Stack[-1]
0x151: Call2 0x6c3

0x152: Pop(2)
0x153: PushEmpty(bool, object)
0x154: Stack[-17] = Stack[-1]
0x155: Call2 0x6a1

0x156: Pop(1)
0x157: Pop(1); Push((bool) Stack[-1] == 0)
0x158: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x159: Stack[-16] = (bool) 0
0x15a: Return(); Pop(14)

0x15b: PushEmpty()
0x15c: Call2 0x810

0x15d: Pop(0)
0x15e: @ Face(Stack[-15])
0x15f: Pop(0)
0x160: Push("all") // @poff=0
0x161: Push("aattack_begin1") // @poff=178
0x162: @ PlayAnimation(Stack[-2], Stack[-1])
0x163: Pop(2)
0x164: @ WaitForAnimEnd()
0x165: Pop(0)
0x166: PushEmpty(bool, object)
0x167: Stack[-17] = Stack[-1]
0x168: Call2 0x6a1

0x169: Pop(1)
0x16a: Pop(1); Push((bool) Stack[-1] == 0)
0x16b: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16c: @ StopAsync()
0x16d: Pop(0)
0x16e: Stack[-16] = (bool) 0
0x16f: Return(); Pop(14)

0x170: Push("all") // @poff=0
0x171: Push("aattack_end1") // @poff=208
0x172: @ PlayAnimation(Stack[-2], Stack[-1])
0x173: Pop(2)
0x174: @ GetScene(Stack[-7])
0x175: Pop(0)
0x176: Push("knife") // @poff=234
0x177: @ GetGeometryLocator(Stack[-1], Stack[-6], Stack[-7])
0x178: Pop(1)
0x179: Push("scripted") // @poff=246
0x17a: Push([0.0, 0.0, 1.0])
0x17b: Push("grabitel_knife.xml") // @poff=264
0x17c: @ AddActorByType(Stack[-7], Stack[-3], Stack[-10], Stack[-9], Stack[-2], Stack[-1])
0x17d: Pop(3)
0x17e: Push("Owner") // @poff=76
0x17f: PushEmpty(object)
0x180: Call2 0x78e

0x181: Pop(0)
0x182: @@ SetScriptProperty(Stack[-2], Stack[-1]); Obj=6 // @poff=302
0x183: Pop(2)
0x184: Push("Target") // @poff=320
0x185: @@ SetScriptProperty(Stack[-1], Stack[-16]); Obj=5 // @poff=302
0x186: Pop(1)
0x187: @@ GetPosition(Stack[-3]); Obj=15 // @poff=18
0x188: Pop(0)
0x189: @@ GetEyesHeight(Stack[-2]); Obj=15 // @poff=154
0x18a: Pop(0)
0x18b: Push(CvectorIndex(Stack[-3], 1))
0x18c: Push((int) 10)
0x18d: Pop(1); Push(Stack[-4] - Stack[-1]);
0x18e: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x18f: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x190: PushEmpty(cvector, cvector, cvector, float)
0x191: Stack[-10] = Stack[-3]
0x192: Stack[-7] = Stack[-2]
0x193: Stack[-1] = (float) 2000.0
0x194: Call2 0x896

0x195: Stack[-4] = Stack[-5]
0x196: Pop(4)
0x197: Push("StartDirection") // @poff=334
0x198: @@ SetScriptProperty(Stack[-1], Stack[-2]); Obj=5 // @poff=302
0x199: Pop(1)
0x19a: @ WaitForAnimEnd()
0x19b: Pop(0)
0x19c: @ StopAsync()
0x19d: Pop(0)
0x19e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x19f: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a0: Stack[-16] = (bool) 1
0x1a1: Return(); Pop(14)

0x1a2: PushEmpty(bool, object)
0x1a3: Stack[-17] = Stack[-1]
0x1a4: Call2 0x6a1

0x1a5: Pop(1)
0x1a6: Pop(1); Push((bool) Stack[-1] == 0)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a8: Stack[-16] = (bool) 0
0x1a9: Return(); Pop(14)

0x1aa: PushEmpty(bool, object)
0x1ab: Stack[-17] = Stack[-1]
0x1ac: Push(-2, 6); TaskCall(4)
0x1ad: Call2 0x1c7

0x1ae: Pop(-2, 6); TaskReturn
0x1af: Stack[-2] = Stack[-18]
0x1b0: Pop(2)
0x1b1: Return(); Pop(14)

0x1b2: Stack[-4] = 0
0x1b3: Stack[-7] = 0
0x1b4: PushEmpty()
0x1b5: PushEmpty(object)
0x1b6: Stack[-2] = Stack[-1]
0x1b7: Call2 0x8b9

0x1b8: Pop(1)
0x1b9: Return(); Pop(0)

0x1ba: PushEmpty()
0x1bb: PushEmpty(bool, object, object)
0x1bc: Stack[-6] = Stack[-2]
0x1bd: Stack[-5] = Stack[-1]
0x1be: Call2 0x8bb

0x1bf: Pop(3)
0x1c0: Return(); Pop(0)

0x1c1: PushEmpty()
0x1c2: Push("kill") // @poff=364
0x1c3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1c6: Return(); Pop(0)

0x1c7: PushEmpty()
0x1c8: Push(GlobalVars[0])
0x1c9: Stack[-1] = (bool) 0
0x1ca: GlobalVars[0] = Stack[-1]; Pop(1)
0x1cb: PushEmpty(object, bool, float)
0x1cc: Stack[-4] = Stack[-3]
0x1cd: Stack[-2] = (bool) 1
0x1ce: Stack[-1] = (float) 200.0
0x1cf: Call2 0x214

0x1d0: Pop(3)
0x1d1: PushEmpty(bool)
0x1d2: Stack[-1] = (bool) 0
0x1d3: Push(GlobalVars[0])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d5: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d7: Stack[-1] = (bool) 1
0x1d8: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1d9: Push("all") // @poff=0
0x1da: Push("attack_off") // @poff=374
0x1db: @ PlayAnimation(Stack[-2], Stack[-1])
0x1dc: Pop(2)
0x1dd: @ WaitForAnimEnd()
0x1de: Pop(0)
0x1df: Push(GlobalVars[0])
0x1e0: Stack[-1] = Stack[-3]
0x1e1: Pop(1)
0x1e2: Return(); Pop(0)

0x1e3: PushEmpty()
0x1e4: Stack[-3] = (float) 0.15000000596046448
0x1e5: Return(); Pop(0)

0x1e6: PushEmpty()
0x1e7: Stack[-3] = (int) 0
0x1e8: Return(); Pop(0)

0x1e9: Stack[-1] = (int) 1
0x1ea: Return(); Pop(0)

0x1eb: PushEmpty()
0x1ec: PushEmpty(bool)
0x1ed: Stack[-1] = (bool) 0
0x1ee: Push((int) 0)
0x1ef: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f1: PushEmpty(bool, object)
0x1f2: Stack[-5] = Stack[-1]
0x1f3: Call2 0x659

0x1f4: Pop(1)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f6: Stack[-1] = (bool) 1
0x1f7: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1f8: Push(GlobalVars[0])
0x1f9: Stack[-1] = (bool) 1
0x1fa: GlobalVars[0] = Stack[-1]; Pop(1)
0x1fb: PushEmpty()
0x1fc: Call2 0x3cc

0x1fd: Pop(0)
0x1fe: Return(); Pop(0)

0x1ff: PushEmpty()
0x200: PushEmpty(object)
0x201: Stack[-2] = Stack[-1]
0x202: Call2 0x8b9

0x203: Pop(1)
0x204: Return(); Pop(0)

0x205: PushEmpty()
0x206: PushEmpty(bool, object, object)
0x207: Stack[-6] = Stack[-2]
0x208: Stack[-5] = Stack[-1]
0x209: Call2 0x8bb

0x20a: Pop(3)
0x20b: Return(); Pop(0)

0x20c: PushEmpty()
0x20d: Push("kill") // @poff=364
0x20e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x20f: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x210: Push(GlobalVars[0])
0x211: Stack[-1] = (bool) 1
0x212: GlobalVars[0] = Stack[-1]; Pop(1)
0x213: Return(); Pop(0)

0x214: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x215: PushEmpty()
0x216: Call2 0x2f9

0x217: Pop(0)
0x218: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x219: Push("@GetAttackDistance") // @poff=396
0x21a: Push((int) 1)
0x21b: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x21c: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x21d: @@ GetAttackDistance(Stack[-11]); Obj=25 // @poff=434
0x21e: Pop(0)
0x21f: Push((int) 50)
0x220: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x221: GOTO 0x223

0x222: Stack[-23] = Stack[-11]
0x223: Push((int) 150)
0x224: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x225: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x226: Stack[-11] = (int) 150
0x227: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x228: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x229: @ IsPlayerActor(Stack[-0]T, Stack[-8])
0x22a: Pop(0)
0x22b: Push(Stack[-8])
0x22c: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x22d: Push("attack") // @poff=452
0x22e: @ PlayGlobalMusic(Stack[-1])
0x22f: Pop(1)
0x230: PushEmpty(object)
0x231: Call2 0x78e

0x232: Pop(0)
0x233: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x234: Pop(1)
0x235: Push(Stack[-24])
0x236: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x237: Stack[-7] = (bool) 0
0x238: GOTO 0x23a

0x239: Stack[-7] = (bool) 1
0x23a: Push((float)300.0)
0x23b: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x23c: PushEmpty(bool)
0x23d: Stack[-1] = (bool) 0
0x23e: PushEmpty(bool, object)
0x23f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x240: Call2 0x6a1

0x241: Pop(1)
0x242: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x243: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: Stack[-1] = (bool) 1
0x246: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x247: PushEmpty()
0x248: Call2 0x498

0x249: Pop(0)
0x24a: @@@ GetPFPosition(Stack[-10]); Obj=0 // @poff=466
0x24b: Pop(0)
0x24c: @ GetPFPosition(Stack[-9])
0x24d: Pop(0)
0x24e: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x24f: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x250: Pop(0); Push(Stack[-6] * Stack[-6]);
0x251: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x253: PushEmpty(bool, object, float, float, bool, bool)
0x254: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x255: Stack[-17] = Stack[-4]
0x256: Stack[-3] = (float) 3000.0
0x257: Stack[-2] = (bool) 1
0x258: Stack[-1] = (bool) 0
0x259: Push(-6, 3); TaskCall(5)
0x25a: Call2 0x4c0

0x25b: Pop(-6, 3); TaskReturn
0x25c: Pop(5)
0x25d: Pop(1); Push((bool) Stack[-1] == 0)
0x25e: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25f: GOTO 0x2e8

0x260: Stack[-7] = (bool) 0
0x261: GOTO 0x2e7

0x262: Pop(0); Push(Stack[-23] * Stack[-23]);
0x263: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x264: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x265: @@@ GetPFPosition(Stack[-3]); Obj=0 // @poff=466
0x266: Pop(0)
0x267: @ CanReachByPF(Stack[-2], Stack[-3])
0x268: Pop(0)
0x269: Pop(0); Push((bool) Stack[-2] == 0)
0x26a: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x26b: PushEmpty(bool, object, float, float, bool, bool)
0x26c: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x26d: Stack[-17] = Stack[-4]
0x26e: Stack[-3] = (float) 3000.0
0x26f: Stack[-2] = (bool) 1
0x270: Stack[-1] = (bool) 0
0x271: Push(-6, 3); TaskCall(5)
0x272: Call2 0x4c0

0x273: Pop(-6, 3); TaskReturn
0x274: Pop(5)
0x275: Pop(1); Push((bool) Stack[-1] == 0)
0x276: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x277: GOTO 0x2e8

0x278: Stack[-7] = (bool) 0
0x279: GOTO 0x23c

0x27a: Pop(0); Push((bool) Stack[-7] == 0)
0x27b: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x27c: PushEmpty(object)
0x27d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27e: Call2 0x74a

0x27f: Pop(1)
0x280: Push("all") // @poff=0
0x281: Push("attack_on") // @poff=480
0x282: @ PlayAnimation(Stack[-2], Stack[-1])
0x283: Pop(2)
0x284: @ WaitForAnimEnd()
0x285: Pop(0)
0x286: PushEmpty()
0x287: Call2 0x498

0x288: Pop(0)
0x289: @ StopAsync()
0x28a: Pop(0)
0x28b: Stack[-7] = (bool) 1
0x28c: PushEmpty(bool, object)
0x28d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28e: Call2 0x6a1

0x28f: Pop(1)
0x290: Pop(1); Push((bool) Stack[-1] == 0)
0x291: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x292: GOTO 0x2e8

0x293: @ rand(Stack[-1])
0x294: Pop(0)
0x295: PushEmpty(bool)
0x296: Stack[-1] = (bool) 1
0x297: Push((float)0.19999998807907104)
0x298: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x299: IF (Stack[-1] == 1) GOTO 0x29f; Pop(1)

0x29a: PushEmpty(bool)
0x29b: Call2 0x46d

0x29c: Pop(0)
0x29d: IF (Stack[-1] == 1) GOTO 0x29f; Pop(1)

0x29e: Stack[-1] = (bool) 0
0x29f: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2a0: @ Face(Stack[-0]T)
0x2a1: Pop(0)
0x2a2: PushEmpty()
0x2a3: Call2 0x49d

0x2a4: Pop(0)
0x2a5: Push("all") // @poff=0
0x2a6: Push("attack_stay") // @poff=500
0x2a7: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a8: Pop(2)
0x2a9: PushEmpty(bool, float)
0x2aa: Stack[-25] = Stack[-1]
0x2ab: Call2 0x3e9

0x2ac: Pop(2)
0x2ad: @ StopAsync()
0x2ae: Pop(0)
0x2af: GOTO 0x2de

0x2b0: @ Face(Stack[-0]T)
0x2b1: Pop(0)
0x2b2: Push("all") // @poff=0
0x2b3: Push("fjump") // @poff=524
0x2b4: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b5: Pop(2)
0x2b6: @ WaitForAnimEnd()
0x2b7: Pop(0)
0x2b8: PushEmpty()
0x2b9: Call2 0x498

0x2ba: Pop(0)
0x2bb: Push([0.0, 0.0, 0.0])
0x2bc: @ SetSpeed(Stack[-1])
0x2bd: Pop(1)
0x2be: @ Stop()
0x2bf: Pop(0)
0x2c0: @ StopAsync()
0x2c1: Pop(0)
0x2c2: PushEmpty(bool)
0x2c3: Call2 0x46d

0x2c4: Pop(0)
0x2c5: Pop(1); Push((bool) Stack[-1] == 0)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2c7: PushEmpty(bool, object)
0x2c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c9: Call2 0x6a1

0x2ca: Pop(1)
0x2cb: Pop(1); Push((bool) Stack[-1] == 0)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: GOTO 0x2e8

0x2ce: @@@ GetPFPosition(Stack[-10]); Obj=0 // @poff=466
0x2cf: Pop(0)
0x2d0: @ GetPFPosition(Stack[-9])
0x2d1: Pop(0)
0x2d2: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x2d3: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2d4: Pop(0); Push(Stack[-23] * Stack[-23]);
0x2d5: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2d7: PushEmpty(bool, float)
0x2d8: Stack[-25] = Stack[-1]
0x2d9: Call2 0x343

0x2da: Pop(1)
0x2db: Pop(1); Push((bool) Stack[-1] == 0)
0x2dc: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dd: GOTO 0x2e8

0x2de: GOTO 0x2e7

0x2df: PushEmpty(bool, float)
0x2e0: Stack[-25] = Stack[-1]
0x2e1: Call2 0x343

0x2e2: Pop(1)
0x2e3: Pop(1); Push((bool) Stack[-1] == 0)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e5: GOTO 0x2e8

0x2e6: Stack[-7] = (bool) 1
0x2e7: GOTO 0x23c

0x2e8: @ WaitForAnimEnd()
0x2e9: Pop(0)
0x2ea: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2ec: Return(); Pop(22)

0x2ed: Push("all") // @poff=0
0x2ee: Push("attack_off") // @poff=374
0x2ef: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f0: Pop(2)
0x2f1: @ WaitForAnimEnd()
0x2f2: Pop(0)
0x2f3: Push(Stack[-8])
0x2f4: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f5: Push((float)2.0)
0x2f6: @ Sleep(Stack[-1])
0x2f7: Pop(1)
0x2f8: Return(); Pop(22)

0x2f9: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x2fa: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x2fb: Push("all") // @poff=0
0x2fc: Push("attack_begin") // @poff=536
0x2fd: Push((int) 1)
0x2fe: Pop(1); Push(Stack[1 + Tasks[-1].StackPointer] + Stack[-1]);
0x2ff: Pop(2); Push(Stack[-2] + Stack[-1]);
0x300: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x301: Pop(2)
0x302: Pop(0); Push((bool) Stack[-3] == 0)
0x303: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x304: GOTO 0x308

0x305: Push((int) 1)
0x306: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x307: GOTO 0x2fb

0x308: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x309: Push("attack") // @poff=452
0x30a: Push((int) 1)
0x30b: Pop(1); Push(Stack[2 + Tasks[-1].StackPointer] + Stack[-1]);
0x30c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x30d: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x30e: Pop(1)
0x30f: Pop(0); Push((bool) Stack[-2] == 0)
0x310: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x311: GOTO 0x315

0x312: Push((int) 1)
0x313: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x314: GOTO 0x309

0x315: Push("all") // @poff=0
0x316: Push("bjump") // @poff=562
0x317: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x318: Pop(2)
0x319: Push(CvectorIndex(Stack[-1], 2))
0x31a: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x31b: Return(); Pop(6)

0x31c: PushEmpty(object, float, float, object, float, float)
0x31d: Push((float)0.8999999761581421)
0x31e: Pop(1); Push(Stack[-9] * Stack[-1]);
0x31f: @ GetVictim(Stack[-1], Stack[-4])
0x320: Pop(1)
0x321: @ ReportAttack(Stack[-0]T)
0x322: Pop(0)
0x323: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x324: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x325: PushEmpty(float, object, int)
0x326: Stack[-6] = Stack[-2]
0x327: Stack[-10] = Stack[-1]
0x328: Call2 0x1e3

0x329: Stack[-3] = Stack[-5]
0x32a: Pop(3)
0x32b: PushEmpty(float, object, float, int)
0x32c: Stack[-7] = Stack[-3]
0x32d: Stack[-6] = Stack[-2]
0x32e: PushEmpty(int, object, int)
0x32f: Stack[-10] = Stack[-2]
0x330: Stack[-14] = Stack[-1]
0x331: Call2 0x1e6

0x332: Stack[-3] = Stack[-4]
0x333: Pop(3)
0x334: Call2 0x610

0x335: Stack[-4] = Stack[-5]
0x336: Pop(4)
0x337: PushEmpty(int)
0x338: Call2 0x1e9

0x339: Pop(0)
0x33a: @ ReportHit(Stack[-0]T, Stack[-1], Stack[-2], Stack[-3])
0x33b: Pop(1)
0x33c: PushEmpty(object, float)
0x33d: Stack[-5] = Stack[-2]
0x33e: Stack[-3] = Stack[-1]
0x33f: Call2 0x1eb

0x340: Pop(2)
0x341: Return(); Pop(6)

0x342: Stack[-3] = 0
0x343: PushEmpty(int, bool, int, string, int, bool, int, string)
0x344: PushEmpty()
0x345: Call2 0x498

0x346: Pop(0)
0x347: @ irand(Stack[-4], Stack[-1]T)
0x348: Pop(0)
0x349: Push((int) 1)
0x34a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x34b: @ Face(Stack[-0]T)
0x34c: Pop(0)
0x34d: Push((bool) 1)
0x34e: @ SetAttackState(Stack[-1])
0x34f: Pop(1)
0x350: PushEmpty()
0x351: Call2 0x810

0x352: Pop(0)
0x353: Push("all") // @poff=0
0x354: Push("attack_begin") // @poff=536
0x355: Pop(1); Push(Stack[-1] + Stack[-6]);
0x356: @ PlayAnimation(Stack[-2], Stack[-1])
0x357: Pop(2)
0x358: @ WaitForAnimEnd()
0x359: Pop(0)
0x35a: PushEmpty()
0x35b: Call2 0x478

0x35c: Pop(0)
0x35d: PushEmpty(bool, object)
0x35e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x35f: Call2 0x6a1

0x360: Pop(1)
0x361: Pop(1); Push((bool) Stack[-1] == 0)
0x362: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x363: @ StopAsync()
0x364: Pop(0)
0x365: Stack[-10] = (bool) 0
0x366: Return(); Pop(8)

0x367: PushEmpty(float, int)
0x368: Stack[-11] = Stack[-2]
0x369: Stack[-6] = Stack[-1]
0x36a: Call2 0x31c

0x36b: Pop(2)
0x36c: Push("all") // @poff=0
0x36d: Push("attack_middle") // @poff=574
0x36e: Pop(1); Push(Stack[-1] + Stack[-6]);
0x36f: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x370: Pop(2)
0x371: Push(Stack[-3])
0x372: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x373: PushEmpty()
0x374: Call2 0x810

0x375: Pop(0)
0x376: Push("all") // @poff=0
0x377: Push("attack_middle") // @poff=574
0x378: Pop(1); Push(Stack[-1] + Stack[-6]);
0x379: @ PlayAnimation(Stack[-2], Stack[-1])
0x37a: Pop(2)
0x37b: @ WaitForAnimEnd()
0x37c: Pop(0)
0x37d: PushEmpty()
0x37e: Call2 0x498

0x37f: Pop(0)
0x380: PushEmpty(bool, object)
0x381: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x382: Call2 0x6a1

0x383: Pop(1)
0x384: Pop(1); Push((bool) Stack[-1] == 0)
0x385: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x386: @ StopAsync()
0x387: Pop(0)
0x388: Stack[-10] = (bool) 0
0x389: Return(); Pop(8)

0x38a: PushEmpty(float, int)
0x38b: Stack[-11] = Stack[-2]
0x38c: Stack[-6] = Stack[-1]
0x38d: Call2 0x31c

0x38e: Pop(2)
0x38f: Stack[-2] = (int) 1
0x390: Push("attack_middle") // @poff=574
0x391: Pop(1); Push(Stack[-1] + Stack[-5]);
0x392: Push("_") // @poff=602
0x393: Pop(2); Push(Stack[-2] + Stack[-1]);
0x394: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x395: Push("all") // @poff=0
0x396: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x397: Pop(1)
0x398: Pop(0); Push((bool) Stack[-3] == 0)
0x399: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x39a: GOTO 0x3b8

0x39b: PushEmpty()
0x39c: Call2 0x810

0x39d: Pop(0)
0x39e: Push("all") // @poff=0
0x39f: @ PlayAnimation(Stack[-1], Stack[-2])
0x3a0: Pop(1)
0x3a1: @ WaitForAnimEnd()
0x3a2: Pop(0)
0x3a3: PushEmpty()
0x3a4: Call2 0x498

0x3a5: Pop(0)
0x3a6: PushEmpty(bool, object)
0x3a7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3a8: Call2 0x6a1

0x3a9: Pop(1)
0x3aa: Pop(1); Push((bool) Stack[-1] == 0)
0x3ab: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3ac: @ StopAsync()
0x3ad: Pop(0)
0x3ae: Stack[-10] = (bool) 0
0x3af: Return(); Pop(8)

0x3b0: PushEmpty(float, int)
0x3b1: Stack[-11] = Stack[-2]
0x3b2: Stack[-6] = Stack[-1]
0x3b3: Call2 0x31c

0x3b4: Pop(2)
0x3b5: Push((int) 1)
0x3b6: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3b7: GOTO 0x390

0x3b8: Push((bool) 0)
0x3b9: @ SetAttackState(Stack[-1])
0x3ba: Pop(1)
0x3bb: Push("all") // @poff=0
0x3bc: Push("attack_end") // @poff=606
0x3bd: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3be: @ PlayAnimation(Stack[-2], Stack[-1])
0x3bf: Pop(2)
0x3c0: PushEmpty(bool)
0x3c1: Call2 0x4a2

0x3c2: Pop(0)
0x3c3: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c4: PushEmpty(bool, float)
0x3c5: Stack[-1] = (float) 0.44999998807907104
0x3c6: Call2 0x3ce

0x3c7: Pop(2)
0x3c8: @ StopAsync()
0x3c9: Pop(0)
0x3ca: Stack[-10] = (bool) 1
0x3cb: Return(); Pop(8)

0x3cc: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3cd: Return(); Pop(0)

0x3ce: PushEmpty(float, bool, float, bool)
0x3cf: @ rand(Stack[-2])
0x3d0: Pop(0)
0x3d1: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x3d2: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3d3: @ IsAnimationPlaying(Stack[-1])
0x3d4: Pop(0)
0x3d5: Pop(0); Push((bool) Stack[-1] == 0)
0x3d6: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d7: GOTO 0x3e1

0x3d8: PushEmpty(bool)
0x3d9: Call2 0x430

0x3da: Pop(0)
0x3db: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3dc: Stack[-6] = (bool) 1
0x3dd: Return(); Pop(4)

0x3de: @ sync()
0x3df: Pop(0)
0x3e0: GOTO 0x3d3

0x3e1: GOTO 0x3e7

0x3e2: @ WaitForAnimEnd()
0x3e3: Pop(0)
0x3e4: PushEmpty()
0x3e5: Call2 0x498

0x3e6: Pop(0)
0x3e7: Stack[-6] = (bool) 0
0x3e8: Return(); Pop(4)

0x3e9: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x3ea: @ IsAnimationPlaying(Stack[-5])
0x3eb: Pop(0)
0x3ec: Pop(0); Push((bool) Stack[-5] == 0)
0x3ed: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3ee: GOTO 0x40f

0x3ef: PushEmpty(bool)
0x3f0: Call2 0x430

0x3f1: Pop(0)
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f3: Stack[-12] = (bool) 1
0x3f4: Return(); Pop(10)

0x3f5: PushEmpty(bool, object)
0x3f6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3f7: Call2 0x6a1

0x3f8: Pop(1)
0x3f9: Pop(1); Push((bool) Stack[-1] == 0)
0x3fa: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3fb: Stack[-12] = (bool) 0
0x3fc: Return(); Pop(10)

0x3fd: @@@ GetPFPosition(Stack[-4]); Obj=0 // @poff=466
0x3fe: Pop(0)
0x3ff: @ GetPFPosition(Stack[-3])
0x400: Pop(0)
0x401: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x402: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x403: Pop(0); Push(Stack[-11] * Stack[-11]);
0x404: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x405: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x406: PushEmpty(bool, float)
0x407: Stack[-13] = Stack[-1]
0x408: Call2 0x343

0x409: Pop(2)
0x40a: Stack[-12] = (bool) 1
0x40b: Return(); Pop(10)

0x40c: @ sync()
0x40d: Pop(0)
0x40e: GOTO 0x3ea

0x40f: PushEmpty()
0x410: Call2 0x498

0x411: Pop(0)
0x412: Stack[-12] = (bool) 0
0x413: Return(); Pop(10)

0x414: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x415: PushEmpty(bool, object)
0x416: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x417: Call2 0x6a1

0x418: Pop(1)
0x419: Pop(1); Push((bool) Stack[-1] == 0)
0x41a: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41b: Stack[-11] = (bool) 0
0x41c: Return(); Pop(10)

0x41d: PushEmpty(bool)
0x41e: Call2 0x46d

0x41f: Pop(0)
0x420: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x421: @@@ GetPFPosition(Stack[-5]); Obj=0 // @poff=466
0x422: Pop(0)
0x423: @ GetPFPosition(Stack[-4])
0x424: Pop(0)
0x425: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x426: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x427: @@@ GetAttackDistance(Stack[-1]); Obj=0 // @poff=434
0x428: Pop(0)
0x429: Push((int) 50)
0x42a: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x42b: Pop(0); Push(Stack[-1] * Stack[-1]);
0x42c: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x42d: Return(); Pop(10)

0x42e: Stack[-11] = (bool) 0
0x42f: Return(); Pop(10)

0x430: PushEmpty(bool)
0x431: Stack[-1] = (bool) 0
0x432: PushEmpty(bool)
0x433: Call2 0x414

0x434: Pop(0)
0x435: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x436: PushEmpty(bool)
0x437: Call2 0x440

0x438: Pop(0)
0x439: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x43a: Stack[-1] = (bool) 1
0x43b: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43c: Stack[-1] = (bool) 1
0x43d: Return(); Pop(0)

0x43e: Stack[-1] = (bool) 0
0x43f: Return(); Pop(0)

0x440: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x441: @ GetScene(Stack[-5])
0x442: Pop(0)
0x443: Stack[-4] = (bool) 0
0x444: PushEmpty(cvector, object)
0x445: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x446: Call2 0x5da

0x447: Pop(1)
0x448: Pop(1); Push(( -Stack[-1])
0x449: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4]T)
0x44a: Pop(1)
0x44b: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x44c: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44d: GOTO 0x46a

0x44e: @ Face(Stack[-0]T)
0x44f: Pop(0)
0x450: Push("all") // @poff=0
0x451: Push("bjump") // @poff=562
0x452: @ PlayAnimation(Stack[-2], Stack[-1])
0x453: Pop(2)
0x454: @@@ GetPFPosition(Stack[-2]); Obj=0 // @poff=466
0x455: Pop(0)
0x456: @ GetPFPosition(Stack[-1])
0x457: Pop(0)
0x458: @ WaitForAnimEnd()
0x459: Pop(0)
0x45a: PushEmpty()
0x45b: Call2 0x498

0x45c: Pop(0)
0x45d: @ StopAsync()
0x45e: Pop(0)
0x45f: Push([0.0, 0.0, 0.0])
0x460: @ SetSpeed(Stack[-1])
0x461: Pop(1)
0x462: Stack[-4] = (bool) 1
0x463: PushEmpty(bool)
0x464: Call2 0x414

0x465: Pop(0)
0x466: Pop(1); Push((bool) Stack[-1] == 0)
0x467: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x468: GOTO 0x46a

0x469: GOTO 0x444

0x46a: Stack[-4] = Stack[-11]
0x46b: Return(); Pop(10)

0x46c: Stack[-5] = 0
0x46d: PushEmpty(bool, bool)
0x46e: Push("IsAttacking") // @poff=628
0x46f: Push((int) 1)
0x470: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x471: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x472: @@@ IsAttacking(Stack[-1]); Obj=0 // @poff=652
0x473: Pop(0)
0x474: Stack[-1] = Stack[-3]
0x475: Return(); Pop(2)

0x476: Stack[-3] = (bool) 0
0x477: Return(); Pop(2)

0x478: PushEmpty(float, int, float, int)
0x479: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x47a: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47b: Return(); Pop(4)

0x47c: Push( Stack[5 + Tasks[-1].StackPointer] )
0x47d: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x47e: Push((int) -1)
0x47f: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x480: Push((int) 0)
0x481: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x482: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x483: Return(); Pop(4)

0x484: @ rand(Stack[-2])
0x485: Pop(0)
0x486: PushEmpty(float)
0x487: Call2 0x4a6

0x488: Pop(0)
0x489: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x48a: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x48b: @ irand(Stack[-1], Stack[-2]T)
0x48c: Pop(0)
0x48d: Push((int) 1)
0x48e: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x48f: Push("attack") // @poff=452
0x490: Pop(1); Push(Stack[-1] + Stack[-2]);
0x491: @ Speak(Stack[-1])
0x492: Pop(1)
0x493: PushEmpty(int)
0x494: Call2 0x4a4

0x495: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x496: Pop(1)
0x497: Return(); Pop(4)

0x498: PushEmpty(object)
0x499: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x49a: Call2 0x807

0x49b: Pop(1)
0x49c: Return(); Pop(0)

0x49d: PushEmpty(string)
0x49e: Stack[-1] = "attack_stay" // @poff=500
0x49f: Call2 0x765

0x4a0: Pop(1)
0x4a1: Return(); Pop(0)

0x4a2: Stack[-1] = (bool) 1
0x4a3: Return(); Pop(0)

0x4a4: Stack[-1] = (int) 1
0x4a5: Return(); Pop(0)

0x4a6: Stack[-1] = (float) 0.5
0x4a7: Return(); Pop(0)

0x4a8: PushEmpty()
0x4a9: PushEmpty(object)
0x4aa: Stack[-2] = Stack[-1]
0x4ab: Call2 0x8b9

0x4ac: Pop(1)
0x4ad: Return(); Pop(0)

0x4ae: PushEmpty()
0x4af: PushEmpty(bool, object, object)
0x4b0: Stack[-6] = Stack[-2]
0x4b1: Stack[-5] = Stack[-1]
0x4b2: Call2 0x8bb

0x4b3: Pop(3)
0x4b4: Return(); Pop(0)

0x4b5: PushEmpty()
0x4b6: Push("kill") // @poff=364
0x4b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b8: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4b9: Push(GlobalVars[0])
0x4ba: Stack[-1] = (bool) 1
0x4bb: GlobalVars[0] = Stack[-1]; Pop(1)
0x4bc: PushEmpty()
0x4bd: Call2 0x4ff

0x4be: Pop(0)
0x4bf: Return(); Pop(0)

0x4c0: PushEmpty(bool, bool, bool, bool)
0x4c1: PushEmpty(object)
0x4c2: Stack[-10] = Stack[-1]
0x4c3: Call2 0x807

0x4c4: Pop(1)
0x4c5: Push((int) 1)
0x4c6: Push((int) 5)
0x4c7: @ SetTimer(Stack[-2], Stack[-1])
0x4c8: Pop(2)
0x4c9: @ CanSee(Stack[-2], Stack[-9])
0x4ca: Pop(0)
0x4cb: Push(Stack[-2])
0x4cc: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4cd: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4ce: PushEmpty(object)
0x4cf: Stack[-10] = Stack[-1]
0x4d0: Call2 0x75a

0x4d1: Pop(1)
0x4d2: GOTO 0x4d4

0x4d3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4d4: PushEmpty(bool, object)
0x4d5: Stack[-11] = Stack[-1]
0x4d6: Call2 0x5e9

0x4d7: Pop(1)
0x4d8: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4d9: PushEmpty(object)
0x4da: Call2 0x78e

0x4db: Pop(0)
0x4dc: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x4dd: Pop(1)
0x4de: PushEmpty(bool, object, float, float, bool, bool)
0x4df: Stack[-15] = Stack[-5]
0x4e0: Stack[-14] = Stack[-4]
0x4e1: Stack[-13] = Stack[-3]
0x4e2: Stack[-12] = Stack[-2]
0x4e3: Stack[-11] = Stack[-1]
0x4e4: Call2 0x529

0x4e5: Stack[-6] = Stack[-7]
0x4e6: Pop(6)
0x4e7: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4e8: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4e9: Push("head") // @poff=168
0x4ea: @ UnlookAsync(Stack[-1])
0x4eb: Pop(1)
0x4ec: Push((int) 1)
0x4ed: @ KillTimer(Stack[-1])
0x4ee: Pop(1)
0x4ef: Stack[-1] = Stack[-10]
0x4f0: Return(); Pop(4)

0x4f1: PushEmpty()
0x4f2: Push((int) 1)
0x4f3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f4: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4f5: PushEmpty(object)
0x4f6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f7: Call2 0x807

0x4f8: Pop(1)
0x4f9: GOTO 0x4fe

0x4fa: PushEmpty(int)
0x4fb: Stack[-2] = Stack[-1]
0x4fc: Call2 0x58f

0x4fd: Pop(1)
0x4fe: Return(); Pop(0)

0x4ff: Push((int) 1)
0x500: @ KillTimer(Stack[-1])
0x501: Pop(1)
0x502: Push( Stack[2 + Tasks[-1].StackPointer] )
0x503: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x504: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x505: Push("head") // @poff=168
0x506: @ UnlookAsync(Stack[-1])
0x507: Pop(1)
0x508: PushEmpty()
0x509: Call2 0x5a5

0x50a: Pop(0)
0x50b: Return(); Pop(0)

0x50c: PushEmpty()
0x50d: PushEmpty(bool)
0x50e: Stack[-1] = (bool) 0
0x50f: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x510: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x511: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x512: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x513: Stack[-1] = (bool) 1
0x514: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x515: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x516: PushEmpty(object)
0x517: Stack[-2] = Stack[-1]
0x518: Call2 0x75a

0x519: Pop(1)
0x51a: Return(); Pop(0)

0x51b: PushEmpty()
0x51c: PushEmpty(bool)
0x51d: Stack[-1] = (bool) 0
0x51e: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x51f: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x520: Push( Stack[2 + Tasks[-1].StackPointer] )
0x521: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x522: Stack[-1] = (bool) 1
0x523: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x524: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x525: Push("head") // @poff=168
0x526: @ UnlookAsync(Stack[-1])
0x527: Pop(1)
0x528: Return(); Pop(0)

0x529: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x52a: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x52b: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x52c: Stack[-17] = Stack[-7]
0x52d: PushEmpty(bool, object)
0x52e: Stack[-23] = Stack[-1]
0x52f: Call2 0x5b5

0x530: Pop(1)
0x531: Pop(1); Push((bool) Stack[-1] == 0)
0x532: IF (Stack[-1] == 0) GOTO 0x535; Pop(1)

0x533: Stack[-22] = (bool) 0
0x534: Return(); Pop(16)

0x535: @@ GetPosition(Stack[-5]); Obj=21 // @poff=18
0x536: Pop(0)
0x537: @ GetPosition(Stack[-4])
0x538: Pop(0)
0x539: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x53a: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x53b: PushEmpty(bool)
0x53c: Stack[-1] = (bool) 0
0x53d: Push((int) 0)
0x53e: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x53f: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x540: Pop(0); Push(Stack[-20] * Stack[-20]);
0x541: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x542: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x543: Stack[-1] = (bool) 1
0x544: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x545: @ Stop()
0x546: Pop(0)
0x547: Stack[-22] = (bool) 0
0x548: Return(); Pop(16)

0x549: Pop(0); Push(Stack[-20] * Stack[-20]);
0x54a: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x54b: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x54c: @@ GetPFPosition(Stack[-5]); Obj=21 // @poff=466
0x54d: Pop(0)
0x54e: @ FindPathTo(Stack[-1], Stack[-5])
0x54f: Pop(0)
0x550: Pop(0); Push(( Stack[-1] != 0 )
0x551: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x552: Stack[-1] = Stack[-6]
0x553: Stack[-1] = 0
0x554: Pop(0); Push(( Stack[-6] != 0 )
0x555: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x556: Push(Stack[-7])
0x557: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x558: Stack[-7] = (bool) 0
0x559: @ RotatePath(Stack[-6], Stack[-8])
0x55a: Pop(0)
0x55b: Pop(0); Push((bool) Stack[-8] == 0)
0x55c: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x55d: GOTO 0x58d

0x55e: Push((int) 0)
0x55f: Push((float)0.30000001192092896)
0x560: @ SetTimer(Stack[-2], Stack[-1])
0x561: Pop(2)
0x562: PushEmpty(string)
0x563: Call2 0x5bc

0x564: Pop(0)
0x565: PushEmpty(string)
0x566: Call2 0x5be

0x567: Pop(0)
0x568: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x569: Pop(2)
0x56a: Pop(0); Push((bool) Stack[-8] == 0)
0x56b: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x56c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x56d: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56e: Stack[-6] = 0
0x56f: GOTO 0x58d

0x570: GOTO 0x572

0x571: GOTO 0x58c

0x572: GOTO 0x574

0x573: Stack[-6] = 0
0x574: GOTO 0x585

0x575: Push((int) 0)
0x576: @ KillTimer(Stack[-1])
0x577: Pop(1)
0x578: Push((float)0.5)
0x579: @ Sleep(Stack[-1], Stack[-9])
0x57a: Pop(1)
0x57b: Pop(0); Push((bool) Stack[-8] == 0)
0x57c: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x57d: Push( Stack[0 + Tasks[-1].StackPointer] )
0x57e: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x57f: Stack[-6] = 0
0x580: GOTO 0x58d

0x581: Push((int) 0)
0x582: Push((float)0.30000001192092896)
0x583: @ SetTimer(Stack[-2], Stack[-1])
0x584: Pop(2)
0x585: Stack[-1] = 0
0x586: GOTO 0x58b

0x587: Push((int) 0)
0x588: @ KillTimer(Stack[-1])
0x589: Pop(1)
0x58a: GOTO 0x58d

0x58b: Stack[-6] = 0
0x58c: GOTO 0x52d

0x58d: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x58e: Return(); Pop(16)

0x58f: PushEmpty()
0x590: Push((int) 0)
0x591: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x592: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x593: Return(); Pop(0)

0x594: PushEmpty(bool, object)
0x595: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x596: Call2 0x5b5

0x597: Pop(1)
0x598: Pop(1); Push((bool) Stack[-1] == 0)
0x599: IF (Stack[-1] == 0) GOTO 0x59b; Pop(1)

0x59a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x59b: Push((int) 0)
0x59c: @ KillTimer(Stack[-1])
0x59d: Pop(1)
0x59e: @ Stop()
0x59f: Pop(0)
0x5a0: Return(); Pop(0)

0x5a1: PushEmpty()
0x5a2: @ RequestClearPath(Stack[-1])
0x5a3: Pop(0)
0x5a4: Return(); Pop(0)

0x5a5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5a6: Push((int) 0)
0x5a7: @ KillTimer(Stack[-1])
0x5a8: Pop(1)
0x5a9: @ Stop()
0x5aa: Pop(0)
0x5ab: Return(); Pop(0)

0x5ac: PushEmpty()
0x5ad: PushEmpty()
0x5ae: Call2 0x4ff

0x5af: Pop(0)
0x5b0: PushEmpty(object)
0x5b1: Stack[-2] = Stack[-1]
0x5b2: Call2 0x860

0x5b3: Pop(1)
0x5b4: Return(); Pop(0)

0x5b5: PushEmpty()
0x5b6: PushEmpty(bool, object)
0x5b7: Stack[-3] = Stack[-1]
0x5b8: Call2 0x6a1

0x5b9: Stack[-2] = Stack[-4]
0x5ba: Pop(2)
0x5bb: Return(); Pop(0)

0x5bc: Stack[-1] = "walk" // @poff=664
0x5bd: Return(); Pop(0)

0x5be: Stack[-1] = "run" // @poff=674
0x5bf: Return(); Pop(0)

0x5c0: PushEmpty()
0x5c1: PushEmpty(bool, object)
0x5c2: Stack[-3] = Stack[-1]
0x5c3: Push(-2, 0); TaskCall(2)
0x5c4: Call2 0x124

0x5c5: Pop(-2, 0); TaskReturn
0x5c6: Pop(2)
0x5c7: Push((int) 1)
0x5c8: @ Sleep(Stack[-1])
0x5c9: Pop(1)
0x5ca: GOTO 0x5c1

0x5cb: Return(); Pop(0)

0x5cc: PushEmpty()
0x5cd: Push((int) 2)
0x5ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5cf: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5d0: Stack[-2] = "fire" // @poff=682
0x5d1: Return(); Pop(0)

0x5d2: GOTO 0x5d8

0x5d3: Push((int) 1)
0x5d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d5: IF (Stack[-1] == 0) GOTO 0x5d8; Pop(1)

0x5d6: Stack[-2] = "bullet" // @poff=692
0x5d7: Return(); Pop(0)

0x5d8: Stack[-2] = "phys" // @poff=706
0x5d9: Return(); Pop(0)

0x5da: PushEmpty(cvector, cvector, cvector, cvector)
0x5db: @ GetPosition(Stack[-2])
0x5dc: Pop(0)
0x5dd: @@ GetPosition(Stack[-1]); Obj=5 // @poff=18
0x5de: Pop(0)
0x5df: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x5e0: Return(); Pop(4)

0x5e1: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5e2: @ GetPosition(Stack[-3])
0x5e3: Pop(0)
0x5e4: @@ GetPosition(Stack[-2]); Obj=7 // @poff=18
0x5e5: Pop(0)
0x5e6: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x5e7: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x5e8: Return(); Pop(6)

0x5e9: PushEmpty(bool, bool)
0x5ea: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5eb: Pop(0)
0x5ec: Stack[-1] = Stack[-4]
0x5ed: Return(); Pop(2)

0x5ee: PushEmpty(bool, bool)
0x5ef: Push("HasProperty") // @poff=716
0x5f0: Push((int) 2)
0x5f1: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x5f2: Pop(1); Push((bool) Stack[-1] == 0)
0x5f3: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5f4: Stack[-5] = (bool) 0
0x5f5: Return(); Pop(2)

0x5f6: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=740
0x5f7: Pop(0)
0x5f8: Stack[-1] = Stack[-5]
0x5f9: Return(); Pop(2)

0x5fa: PushEmpty(float, float)
0x5fb: PushEmpty(bool, object, string)
0x5fc: Stack[-10] = Stack[-2]
0x5fd: Stack[-9] = Stack[-1]
0x5fe: Call2 0x5ee

0x5ff: Pop(2)
0x600: Pop(1); Push((bool) Stack[-1] == 0)
0x601: IF (Stack[-1] == 0) GOTO 0x604; Pop(1)

0x602: Stack[-8] = (bool) 0
0x603: Return(); Pop(2)

0x604: @@ GetProperty(Stack[-6], Stack[-1]); Obj=7 // @poff=752
0x605: Pop(0)
0x606: PushEmpty(float, float, float, float)
0x607: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x608: Stack[-8] = Stack[-2]
0x609: Stack[-7] = Stack[-1]
0x60a: Call2 0x7bd

0x60b: Pop(3)
0x60c: @@ SetProperty(Stack[-7], Stack[-1]); Obj=8 // @poff=764
0x60d: Pop(1)
0x60e: Stack[-8] = (bool) 1
0x60f: Return(); Pop(2)

0x610: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x611: PushEmpty(bool, object, string)
0x612: Stack[-18] = Stack[-2]
0x613: Stack[-1] = "health" // @poff=776
0x614: Call2 0x5ee

0x615: Pop(2)
0x616: Pop(1); Push((bool) Stack[-1] == 0)
0x617: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x618: Stack[-16] = (float) 0.0
0x619: Return(); Pop(12)

0x61a: PushEmpty(bool, object, string)
0x61b: Stack[-18] = Stack[-2]
0x61c: Stack[-1] = "armor" // @poff=790
0x61d: Call2 0x5ee

0x61e: Pop(2)
0x61f: Pop(1); Push((bool) Stack[-1] == 0)
0x620: IF (Stack[-1] == 0) GOTO 0x623; Pop(1)

0x621: Stack[-6] = (int) 0
0x622: GOTO 0x626

0x623: Push("armor") // @poff=790
0x624: @@ GetProperty(Stack[-1], Stack[-7]); Obj=16 // @poff=752
0x625: Pop(1)
0x626: Push("armor_") // @poff=802
0x627: PushEmpty(string, int)
0x628: Stack[-16] = Stack[-1]
0x629: Call2 0x5cc

0x62a: Pop(1)
0x62b: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x62c: PushEmpty(bool, object, string)
0x62d: Stack[-18] = Stack[-2]
0x62e: Stack[-8] = Stack[-1]
0x62f: Call2 0x5ee

0x630: Pop(2)
0x631: Pop(1); Push((bool) Stack[-1] == 0)
0x632: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x633: Stack[-4] = (int) 0
0x634: GOTO 0x637

0x635: @@ GetProperty(Stack[-5], Stack[-4]); Obj=15 // @poff=752
0x636: Pop(0)
0x637: PushEmpty(float, float, float)
0x638: Pop(0); Push(Stack[-9] + Stack[-7]);
0x639: Push((float)100.0)
0x63a: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x63b: Stack[-1] = (int) 1
0x63c: Call2 0x79e

0x63d: Stack[-3] = Stack[-6]
0x63e: Pop(3)
0x63f: Push("health") // @poff=776
0x640: @@ GetProperty(Stack[-1], Stack[-3]); Obj=16 // @poff=752
0x641: Pop(1)
0x642: Push((int) 1)
0x643: Pop(1); Push(Stack[-1] - Stack[-4]);
0x644: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x645: Push("health") // @poff=776
0x646: PushEmpty(float, float, float, float)
0x647: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x648: Stack[-2] = (int) 0
0x649: Stack[-1] = (int) 1
0x64a: Call2 0x7bd

0x64b: Pop(3)
0x64c: @@ SetProperty(Stack[-2], Stack[-1]); Obj=17 // @poff=764
0x64d: Pop(2)
0x64e: PushEmpty(bool, object)
0x64f: Stack[-17] = Stack[-1]
0x650: Call2 0x5e9

0x651: Pop(1)
0x652: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x653: PushEmpty(float)
0x654: Stack[-1] = -Stack[-2]; Pop(0);
0x655: Call2 0x7f3

0x656: Pop(1)
0x657: Stack[-1] = Stack[-16]
0x658: Return(); Pop(12)

0x659: PushEmpty(float, float)
0x65a: PushEmpty(bool, object, string)
0x65b: Stack[-6] = Stack[-2]
0x65c: Stack[-1] = "health" // @poff=776
0x65d: Call2 0x5ee

0x65e: Pop(2)
0x65f: Pop(1); Push((bool) Stack[-1] == 0)
0x660: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x661: Stack[-4] = (bool) 0
0x662: Return(); Pop(2)

0x663: PushEmpty(bool)
0x664: Stack[-1] = (bool) 0
0x665: PushEmpty(bool, object)
0x666: Stack[-6] = Stack[-1]
0x667: Call2 0x5e9

0x668: Pop(1)
0x669: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x66a: PushEmpty(bool)
0x66b: Call2 0x81b

0x66c: Pop(0)
0x66d: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x66e: Stack[-1] = (bool) 1
0x66f: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x670: Stack[-4] = (bool) 0
0x671: Return(); Pop(2)

0x672: Push("health") // @poff=776
0x673: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=752
0x674: Pop(1)
0x675: Push((float)0.0)
0x676: Stack[-5] = Stack[-2] <= Stack[-1]; Pop(1);
0x677: Return(); Pop(2)

0x678: PushEmpty(bool, bool)
0x679: @@ IsDead(Stack[-1]); Obj=3 // @poff=816
0x67a: Pop(0)
0x67b: Stack[-1] = Stack[-4]
0x67c: Return(); Pop(2)

0x67d: PushEmpty(object, object, object, object)
0x67e: Pop(0); PushNull((bool) Stack[-5] == 0)
0x67f: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x680: Stack[-6] = (bool) 0
0x681: Return(); Pop(4)

0x682: PushEmpty(bool)
0x683: Stack[-1] = (bool) 0
0x684: Push("IsDead") // @poff=823
0x685: Push((int) 1)
0x686: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x687: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x688: PushEmpty(bool, object)
0x689: Stack[-8] = Stack[-1]
0x68a: Call2 0x678

0x68b: Pop(1)
0x68c: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x68d: Stack[-1] = (bool) 1
0x68e: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x68f: Stack[-6] = (bool) 0
0x690: Return(); Pop(4)

0x691: @ GetScene(Stack[-2])
0x692: Pop(0)
0x693: Pop(0); PushNull((bool) Stack[-2] == 0)
0x694: IF (Stack[-1] == 0) GOTO 0x697; Pop(1)

0x695: Stack[-6] = (bool) 0
0x696: Return(); Pop(4)

0x697: @@ GetScene(Stack[-1]); Obj=5 // @poff=837
0x698: Pop(0)
0x699: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x69a: IF (Stack[-1] == 0) GOTO 0x69d; Pop(1)

0x69b: Stack[-6] = (bool) 0
0x69c: Return(); Pop(4)

0x69d: Stack[-6] = (bool) 1
0x69e: Return(); Pop(4)

0x69f: Stack[-1] = 0
0x6a0: Stack[-2] = 0
0x6a1: PushEmpty(int, int)
0x6a2: PushEmpty(bool, object)
0x6a3: Stack[-5] = Stack[-1]
0x6a4: Call2 0x67d

0x6a5: Pop(1)
0x6a6: Pop(1); Push((bool) Stack[-1] == 0)
0x6a7: IF (Stack[-1] == 0) GOTO 0x6aa; Pop(1)

0x6a8: Stack[-4] = (bool) 0
0x6a9: Return(); Pop(2)

0x6aa: PushEmpty(bool, object, string)
0x6ab: Stack[-6] = Stack[-2]
0x6ac: Stack[-1] = "noaccess" // @poff=846
0x6ad: Call2 0x5ee

0x6ae: Pop(2)
0x6af: Pop(1); Push((bool) Stack[-1] == 0)
0x6b0: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6b1: Stack[-4] = (bool) 1
0x6b2: Return(); Pop(2)

0x6b3: Push("noaccess") // @poff=846
0x6b4: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=752
0x6b5: Pop(1)
0x6b6: Push((int) 0)
0x6b7: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x6b8: Return(); Pop(2)

0x6b9: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x6ba: @ GetPosition(Stack[-3])
0x6bb: Pop(0)
0x6bc: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x6bd: Push(CvectorIndex(Stack[-2], 0))
0x6be: Push(CvectorIndex(Stack[-3], 2))
0x6bf: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x6c0: Pop(2)
0x6c1: Stack[-1] = Stack[-8]
0x6c2: Return(); Pop(6)

0x6c3: PushEmpty(cvector, cvector)
0x6c4: @@ GetPosition(Stack[-1]); Obj=3 // @poff=18
0x6c5: Pop(0)
0x6c6: PushEmpty(bool, cvector)
0x6c7: Stack[-3] = Stack[-1]
0x6c8: Call2 0x6b9

0x6c9: Stack[-2] = Stack[-6]
0x6ca: Pop(2)
0x6cb: Return(); Pop(2)

0x6cc: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x6cd: Pop(0); PushNull((bool) Stack[-15] == 0)
0x6ce: IF (Stack[-1] == 0) GOTO 0x6d0; Pop(1)

0x6cf: Return(); Pop(14)

0x6d0: @ IsDead(Stack[-7])
0x6d1: Pop(0)
0x6d2: Push(Stack[-7])
0x6d3: IF (Stack[-1] == 0) GOTO 0x6d5; Pop(1)

0x6d4: Return(); Pop(14)

0x6d5: @ GetSecondaryAnimationType(Stack[-6])
0x6d6: Pop(0)
0x6d7: Push((int) 0)
0x6d8: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x6d9: IF (Stack[-1] == 0) GOTO 0x6db; Pop(1)

0x6da: Return(); Pop(14)

0x6db: @@ GetPosition(Stack[-5]); Obj=15 // @poff=18
0x6dc: Pop(0)
0x6dd: @ GetPosition(Stack[-4])
0x6de: Pop(0)
0x6df: @ GetDirection(Stack[-3])
0x6e0: Pop(0)
0x6e1: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x6e2: Push(CvectorIndex(Stack[-2], 0))
0x6e3: Push(CvectorIndex(Stack[-4], 0))
0x6e4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6e5: Push(CvectorIndex(Stack[-3], 2))
0x6e6: Push(CvectorIndex(Stack[-5], 2))
0x6e7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6e8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6e9: Push((int) 0)
0x6ea: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6eb: IF (Stack[-1] == 0) GOTO 0x6ee; Pop(1)

0x6ec: Stack[-1] = "fhit" // @poff=864
0x6ed: GOTO 0x6ef

0x6ee: Stack[-1] = "bhit" // @poff=874
0x6ef: Push("hit_react") // @poff=884
0x6f0: Push("1") // @poff=204
0x6f1: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6f2: Push("2") // @poff=904
0x6f3: Pop(1); Push(Stack[-4] + Stack[-1]);
0x6f4: Push((int) -10)
0x6f5: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6f6: Pop(4)
0x6f7: Return(); Pop(14)

0x6f8: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x6f9: PushEmpty(bool)
0x6fa: Stack[-1] = (bool) 0
0x6fb: PushEmpty(bool)
0x6fc: Stack[-1] = (bool) 0
0x6fd: Push(Stack[-23])
0x6fe: IF (Stack[-1] == 0) GOTO 0x703; Pop(1)

0x6ff: Push((int) 4)
0x700: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x701: IF (Stack[-1] == 0) GOTO 0x703; Pop(1)

0x702: Stack[-1] = (bool) 1
0x703: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x704: Push((int) 5)
0x705: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x706: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x707: Stack[-1] = (bool) 1
0x708: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x709: PushEmpty(cvector, cvector)
0x70a: PushEmpty(cvector, object)
0x70b: Stack[-25] = Stack[-1]
0x70c: Call2 0x5da

0x70d: Stack[-2] = Stack[-3]
0x70e: Pop(2)
0x70f: Call2 0x794

0x710: Stack[-2] = Stack[-11]
0x711: Pop(2)
0x712: @ CreateVectorVector(Stack[-8])
0x713: Pop(0)
0x714: Stack[-7] = (int) 1
0x715: Push("hit") // @poff=866
0x716: Pop(1); Push(Stack[-1] + Stack[-8]);
0x717: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x718: Pop(1)
0x719: Pop(0); Push((bool) Stack[-6] == 0)
0x71a: IF (Stack[-1] == 0) GOTO 0x71c; Pop(1)

0x71b: GOTO 0x725

0x71c: Pop(0); Push(Stack[-4] | Stack[-9]);
0x71d: Push((float)0.7071067690849304)
0x71e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x71f: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x720: @@ add(Stack[-5]); Obj=8 // @poff=908
0x721: Pop(0)
0x722: Push((int) 1)
0x723: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x724: GOTO 0x715

0x725: @@ size(Stack[-3]); Obj=8 // @poff=912
0x726: Pop(0)
0x727: Push(Stack[-3])
0x728: IF (Stack[-1] == 0) GOTO 0x736; Pop(1)

0x729: @ irand(Stack[-2], Stack[-3])
0x72a: Pop(0)
0x72b: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=917
0x72c: Pop(0)
0x72d: PushEmpty(object, int, float, cvector, cvector)
0x72e: Stack[-26] = Stack[-5]
0x72f: Stack[-25] = Stack[-4]
0x730: Stack[-24] = Stack[-3]
0x731: Stack[-6] = Stack[-2]
0x732: Stack[-1] = -Stack[-14]; Pop(0);
0x733: Call2 0x73c

0x734: Pop(5)
0x735: Return(); Pop(18)

0x736: Stack[-8] = 0
0x737: PushEmpty(object)
0x738: Stack[-22] = Stack[-1]
0x739: Call2 0x6cc

0x73a: Pop(1)
0x73b: Return(); Pop(18)

0x73c: PushEmpty(object, object, object, object)
0x73d: @ GetScene(Stack[-2])
0x73e: Pop(0)
0x73f: Push("scripted") // @poff=246
0x740: Push("blood_dir.xml") // @poff=921
0x741: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x742: Pop(2)
0x743: PushEmpty(object)
0x744: Stack[-10] = Stack[-1]
0x745: Call2 0x6cc

0x746: Pop(1)
0x747: Return(); Pop(4)

0x748: Stack[-1] = 0
0x749: Stack[-2] = 0
0x74a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x74b: @@ GetPosition(Stack[-3]); Obj=7 // @poff=18
0x74c: Pop(0)
0x74d: @ GetPosition(Stack[-2])
0x74e: Pop(0)
0x74f: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x750: Push(CvectorIndex(Stack[-1], 0))
0x751: Push(CvectorIndex(Stack[-2], 2))
0x752: @ RotateAsync(Stack[-2], Stack[-1])
0x753: Pop(2)
0x754: Return(); Pop(6)

0x755: PushEmpty(bool, bool)
0x756: @ IsLoaded(Stack[-1])
0x757: Pop(0)
0x758: Stack[-1] = Stack[-3]
0x759: Return(); Pop(2)

0x75a: PushEmpty(float, cvector, float, cvector)
0x75b: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=154
0x75c: Pop(0)
0x75d: Stack[-1] = [0.0, 0.0, 0.0]
0x75e: Push(CvectorIndex(Stack[-1], 1))
0x75f: Stack[-3] = Stack[-1]
0x760: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x761: Push("head") // @poff=168
0x762: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x763: Pop(1)
0x764: Return(); Pop(4)

0x765: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x766: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x767: Pop(0)
0x768: Pop(0); Push((bool) Stack[-8] == 0)
0x769: IF (Stack[-1] == 0) GOTO 0x77e; Pop(1)

0x76a: Stack[-7] = (int) 0
0x76b: Push((int) 1)
0x76c: Pop(1); Push(Stack[-8] + Stack[-1]);
0x76d: Pop(1); Push(Stack[-18] + Stack[-1]);
0x76e: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x76f: Pop(1)
0x770: Pop(0); Push((bool) Stack[-6] == 0)
0x771: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x772: GOTO 0x776

0x773: Push((int) 1)
0x774: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x775: GOTO 0x76b

0x776: Pop(0); Push((bool) Stack[-7] == 0)
0x777: IF (Stack[-1] == 0) GOTO 0x779; Pop(1)

0x778: Return(); Pop(16)

0x779: @ irand(Stack[-5], Stack[-7])
0x77a: Pop(0)
0x77b: Push((int) 1)
0x77c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x77d: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x77e: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x77f: Pop(0)
0x780: Push(Stack[-4])
0x781: IF (Stack[-1] == 0) GOTO 0x78d; Pop(1)

0x782: @ GetEyesHeight(Stack[-3])
0x783: Pop(0)
0x784: @ GetDirection(Stack[-2])
0x785: Pop(0)
0x786: Push((int) 50)
0x787: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x788: Push(CvectorIndex(Stack[-1], 1))
0x789: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x78a: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x78b: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x78c: Pop(0)
0x78d: Return(); Pop(16)

0x78e: PushEmpty(object, object)
0x78f: @ self(Stack[-1])
0x790: Pop(0)
0x791: Stack[-1] = Stack[-3]
0x792: Return(); Pop(2)

0x793: Stack[-1] = 0
0x794: PushEmpty(float, float)
0x795: Pop(0); Push(Stack[-3] | Stack[-3]);
0x796: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x797: Push((float)9.999999974752427e-07)
0x798: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x799: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x79a: Stack[-4] = [0.0, 0.0, 0.0]
0x79b: Return(); Pop(2)

0x79c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x79d: Return(); Pop(2)

0x79e: PushEmpty()
0x79f: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x7a0: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x7a1: Stack[-2] = Stack[-3]
0x7a2: GOTO 0x7a4

0x7a3: Stack[-1] = Stack[-3]
0x7a4: Return(); Pop(0)

0x7a5: PushEmpty()
0x7a6: Pop(0); Push(Stack[-2] * Stack[-2]);
0x7a7: Push((int) 4)
0x7a8: Pop(1); Push(Stack[-1] * Stack[-5]);
0x7a9: Pop(1); Push(Stack[-1] * Stack[-3]);
0x7aa: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x7ab: Return(); Pop(0)

0x7ac: PushEmpty(float, float)
0x7ad: Pop(0); Push(( -Stack[-5])
0x7ae: Pop(1); Push(Stack[-1] - Stack[-4]);
0x7af: Push((int) 2)
0x7b0: Pop(1); Push(Stack[-1] * Stack[-8]);
0x7b1: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x7b2: Push((int) 0)
0x7b3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7b4: IF (Stack[-1] == 0) GOTO 0x7b7; Pop(1)

0x7b5: Stack[-1] = Stack[-7]
0x7b6: Return(); Pop(2)

0x7b7: Pop(0); Push(( -Stack[-5])
0x7b8: Pop(1); Push(Stack[-1] + Stack[-4]);
0x7b9: Push((int) 2)
0x7ba: Pop(1); Push(Stack[-1] * Stack[-8]);
0x7bb: Stack[-9] = Stack[-2] / Stack[-1]; Pop(2);
0x7bc: Return(); Pop(2)

0x7bd: PushEmpty()
0x7be: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x7bf: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7c0: Stack[-2] = Stack[-4]
0x7c1: Return(); Pop(0)

0x7c2: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x7c3: IF (Stack[-1] == 0) GOTO 0x7c6; Pop(1)

0x7c4: Stack[-1] = Stack[-4]
0x7c5: Return(); Pop(0)

0x7c6: Stack[-3] = Stack[-4]
0x7c7: Return(); Pop(0)

0x7c8: PushEmpty()
0x7c9: Stack[-4] = (bool) 0
0x7ca: Pop(0); Push((bool) Stack[-3] >= Stack[-2])
0x7cb: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7cc: Pop(0); Push((bool) Stack[-3] <= Stack[-1])
0x7cd: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7ce: Stack[-4] = (bool) 1
0x7cf: Return(); Pop(0)

0x7d0: PushEmpty()
0x7d1: Pop(0); Push((bool) Stack[-2] == 0)
0x7d2: IF (Stack[-1] == 0) GOTO 0x7d5; Pop(1)

0x7d3: Stack[-3] = (bool) 0
0x7d4: Return(); Pop(0)

0x7d5: Push((int) 0)
0x7d6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7d7: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7d8: Push((int) 8)
0x7d9: @ SendWorldWndMessage(Stack[-1])
0x7da: Pop(1)
0x7db: GOTO 0x7e5

0x7dc: Push((int) 0)
0x7dd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7de: IF (Stack[-1] == 0) GOTO 0x7e3; Pop(1)

0x7df: Push((int) 9)
0x7e0: @ SendWorldWndMessage(Stack[-1])
0x7e1: Pop(1)
0x7e2: GOTO 0x7e5

0x7e3: Stack[-3] = (bool) 0
0x7e4: Return(); Pop(0)

0x7e5: PushEmpty(float)
0x7e6: Stack[-2] = Stack[-1]
0x7e7: Call2 0x7fd

0x7e8: Pop(1)
0x7e9: PushEmpty(bool, object, string, float, float, float)
0x7ea: Stack[-8] = Stack[-5]
0x7eb: Stack[-4] = "reputation" // @poff=949
0x7ec: Stack[-7] = Stack[-3]
0x7ed: Stack[-2] = (int) 0
0x7ee: Stack[-1] = (int) 1
0x7ef: Call2 0x5fa

0x7f0: Pop(6)
0x7f1: Stack[-3] = (bool) 1
0x7f2: Return(); Pop(0)

0x7f3: PushEmpty(object, object)
0x7f4: @ CreateFloatVector(Stack[-1])
0x7f5: Pop(0)
0x7f6: @@ add(Stack[-3]); Obj=1 // @poff=908
0x7f7: Pop(0)
0x7f8: Push((int) 15)
0x7f9: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x7fa: Pop(1)
0x7fb: Return(); Pop(2)

0x7fc: Stack[-1] = 0
0x7fd: PushEmpty(object, object)
0x7fe: @ CreateFloatVector(Stack[-1])
0x7ff: Pop(0)
0x800: @@ add(Stack[-3]); Obj=1 // @poff=908
0x801: Pop(0)
0x802: Push((int) 16)
0x803: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x804: Pop(1)
0x805: Return(); Pop(2)

0x806: Stack[-1] = 0
0x807: PushEmpty(bool, bool)
0x808: @ IsPlayerActor(Stack[-3], Stack[-1])
0x809: Pop(0)
0x80a: Push(Stack[-1])
0x80b: IF (Stack[-1] == 0) GOTO 0x80f; Pop(1)

0x80c: Push("attack") // @poff=452
0x80d: @ PlayGlobalMusic(Stack[-1])
0x80e: Pop(1)
0x80f: Return(); Pop(2)

0x810: PushEmpty(object, object)
0x811: @ GetScene(Stack[-1])
0x812: Pop(0)
0x813: Push("battle") // @poff=971
0x814: PushEmpty(object)
0x815: Call2 0x78e

0x816: Pop(0)
0x817: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x818: Pop(2)
0x819: Return(); Pop(2)

0x81a: Stack[-1] = 0
0x81b: PushEmpty(bool, bool)
0x81c: Push("god_mode") // @poff=985
0x81d: @ GetVariable(Stack[-1], Stack[-2])
0x81e: Pop(1)
0x81f: Stack[-1] = Stack[-3]
0x820: Return(); Pop(2)

0x821: PushEmpty(string, string)
0x822: Stack[-1] = "idle" // @poff=1003
0x823: Push(Stack[-3])
0x824: IF (Stack[-1] == 0) GOTO 0x826; Pop(1)

0x825: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x826: Stack[-1] = Stack[-4]
0x827: Return(); Pop(2)

0x828: PushEmpty(int, bool, int, bool)
0x829: Stack[-2] = (int) 0
0x82a: Push("all") // @poff=0
0x82b: PushEmpty(string, int)
0x82c: Stack[-5] = Stack[-1]
0x82d: Call2 0x821

0x82e: Pop(1)
0x82f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x830: Pop(2)
0x831: Pop(0); Push((bool) Stack[-1] == 0)
0x832: IF (Stack[-1] == 0) GOTO 0x834; Pop(1)

0x833: GOTO 0x837

0x834: Push((int) 1)
0x835: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x836: GOTO 0x82a

0x837: Stack[-2] = Stack[-5]
0x838: Return(); Pop(4)

0x839: PushEmpty()
0x83a: PushEmpty(object)
0x83b: Stack[-2] = Stack[-1]
0x83c: Push(-1, 0); TaskCall(1)
0x83d: Call2 0x80

0x83e: Pop(-1, 0); TaskReturn
0x83f: Pop(1)
0x840: Return(); Pop(0)

0x841: PushEmpty()
0x842: PushEmpty(object, int, float)
0x843: Stack[-7] = Stack[-3]
0x844: Stack[-6] = Stack[-2]
0x845: Stack[-5] = Stack[-1]
0x846: Call2 0x6f8

0x847: Pop(3)
0x848: Return(); Pop(0)

0x849: PushEmpty()
0x84a: PushEmpty(object, int, float, cvector, cvector)
0x84b: Stack[-11] = Stack[-5]
0x84c: Stack[-10] = Stack[-4]
0x84d: Stack[-9] = Stack[-3]
0x84e: Stack[-7] = Stack[-2]
0x84f: Stack[-6] = Stack[-1]
0x850: Call2 0x73c

0x851: Pop(5)
0x852: Return(); Pop(0)

0x853: PushEmpty(float, float)
0x854: Push("health") // @poff=776
0x855: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x856: IF (Stack[-1] == 0) GOTO 0x85f; Pop(1)

0x857: Push("health") // @poff=776
0x858: @ GetProperty(Stack[-1], Stack[-2])
0x859: Pop(1)
0x85a: Push((int) 0)
0x85b: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x85c: IF (Stack[-1] == 0) GOTO 0x85f; Pop(1)

0x85d: @ SignalDeath(Stack[-4])
0x85e: Pop(0)
0x85f: Return(); Pop(2)

0x860: PushEmpty()
0x861: PushEmpty(object)
0x862: Stack[-2] = Stack[-1]
0x863: Call2 0x839

0x864: Pop(1)
0x865: Return(); Pop(0)

0x866: PushEmpty()
0x867: PushEmpty(bool, object)
0x868: Stack[-3] = Stack[-1]
0x869: Call2 0x6a1

0x86a: Stack[-2] = Stack[-4]
0x86b: Pop(2)
0x86c: Return(); Pop(0)

0x86d: PushEmpty()
0x86e: PushEmpty(object)
0x86f: Stack[-2] = Stack[-1]
0x870: Call2 0x886

0x871: Pop(1)
0x872: Return(); Pop(0)

0x873: PushEmpty(int, int)
0x874: Push("branch") // @poff=1013
0x875: @ GetVariable(Stack[-1], Stack[-2])
0x876: Pop(1)
0x877: Stack[-1] = Stack[-3]
0x878: Return(); Pop(2)

0x879: PushEmpty()
0x87a: PushEmpty(int)
0x87b: Call2 0x873

0x87c: Pop(0)
0x87d: Push((int) 1)
0x87e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x87f: IF (Stack[-1] == 0) GOTO 0x883; Pop(1)

0x880: @ WorkWithCorpse(Stack[-1])
0x881: Pop(0)
0x882: GOTO 0x885

0x883: @ Barter(Stack[-1])
0x884: Pop(0)
0x885: Return(); Pop(0)

0x886: PushEmpty(object, object)
0x887: @ GetScene(Stack[-1])
0x888: Pop(0)
0x889: PushEmpty(object)
0x88a: Call2 0x78e

0x88b: Pop(0)
0x88c: @@ RemoveStationaryActor(Stack[-1]); Obj=2 // @poff=1027
0x88d: Pop(1)
0x88e: PushEmpty(object)
0x88f: Stack[-4] = Stack[-1]
0x890: Push(-1, 0); TaskCall(6)
0x891: Call2 0x5c0

0x892: Pop(-1, 0); TaskReturn
0x893: Pop(1)
0x894: Return(); Pop(2)

0x895: Stack[-1] = 0
0x896: PushEmpty(cvector, float, float, float, float, float, cvector, float, float, float, float, float)
0x897: Stack[-6] = Stack[-14] - Stack[-15]; Pop(0);
0x898: Stack[-5] = (int) 250000
0x899: Push(CvectorIndex(Stack[-6], 1))
0x89a: Push((int) 1000)
0x89b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x89c: Pop(0); Push(Stack[-14] * Stack[-14]);
0x89d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x89e: Stack[-3] = Stack[-6] | Stack[-6]; Pop(0);
0x89f: PushEmpty(float, float, float, float)
0x8a0: Stack[-9] = Stack[-3]
0x8a1: Stack[-8] = Stack[-2]
0x8a2: Stack[-7] = Stack[-1]
0x8a3: Call2 0x7a5

0x8a4: Stack[-4] = Stack[-6]
0x8a5: Pop(4)
0x8a6: Push((int) 0)
0x8a7: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x8a8: IF (Stack[-1] == 0) GOTO 0x8ab; Pop(1)

0x8a9: Stack[-1] = (int) 1
0x8aa: GOTO 0x8b3

0x8ab: PushEmpty(float, float, float, float, float)
0x8ac: Stack[-10] = Stack[-4]
0x8ad: Stack[-9] = Stack[-3]
0x8ae: Stack[-8] = Stack[-2]
0x8af: Stack[-1] = Sqrt(Stack[-7]); Pop(0);
0x8b0: Call2 0x7ac

0x8b1: Pop(4)
0x8b2: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x8b3: Push([0.0, 500.0, 0.0])
0x8b4: Pop(1); Push(Stack[-1] * Stack[-2]);
0x8b5: Pop(1); Push(Stack[-1] * Stack[-2]);
0x8b6: Pop(1); Push(Stack[-7] + Stack[-1]);
0x8b7: Stack[-17] = Stack[-1] / Stack[-2]; Pop(1);
0x8b8: Return(); Pop(12)

0x8b9: PushEmpty()
0x8ba: Return(); Pop(0)

0x8bb: PushEmpty()
0x8bc: Stack[-3] = (bool) 0
0x8bd: Return(); Pop(0)

