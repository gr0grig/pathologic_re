GlobalVarCount = 0

Strings:
	W:trigger
	W:growl
	W:cleanup
	W:player
	W:head
	W:all
	W:@GetAttackDistance
	A:GetAttackDistance
	W:attack
	A:GetPFPosition
	W:attack_on
	W:attack_stay
	W:fjump
	W:attack_off
	W:attack_begin
	W:bjump
	W:attack_middle
	W:_
	W:attack_end
	W:IsAttacking
	A:IsAttacking
	A:GetPosition
	W:walk
	W:run
	W:fdie
	W:bdie
	W:GetScriptProperty
	W:Owner
	A:HasScriptProperty
	A:GetScriptProperty
	W:@GetEyesHeight
	A:GetEyesHeight
	W:fire
	W:bullet
	W:phys
	W:HasProperty
	A:HasProperty
	W:health
	W:armor
	A:GetProperty
	W:armor_
	A:SetProperty
	A:IsDead
	W:IsDead
	A:GetScene
	W:noaccess
	W:fhit
	W:bhit
	W:hit_react
	W:1
	W:2
	A:add
	A:size
	A:get
	W:scripted
	W:blood_dir.xml
	W:battle
	W:idle
	W:quest_d1_03
	W:butcher_death
// @pool_raw:74007200690067006700650072000000670072006f0077006c00000063006c00650061006e0075007000000070006c00610079006500720000006800650061006400000061006c006c0000004000470065007400410074007400610063006b00440069007300740061006e0063006500000047657441747461636b44697374616e636500610074007400610063006b0000004765745046506f736974696f6e00610074007400610063006b005f006f006e000000610074007400610063006b005f007300740061007900000066006a0075006d0070000000610074007400610063006b005f006f00660066000000610074007400610063006b005f0062006500670069006e00000062006a0075006d0070000000610074007400610063006b005f006d006900640064006c00650000005f000000610074007400610063006b005f0065006e006400000049007300410074007400610063006b0069006e0067000000497341747461636b696e6700476574506f736974696f6e00770061006c006b000000720075006e0000006600640069006500000062006400690065000000470065007400530063007200690070007400500072006f007000650072007400790000004f0077006e0065007200000048617353637269707450726f70657274790047657453637269707450726f706572747900400047006500740045007900650073004800650069006700680074000000476574457965734865696768740066006900720065000000620075006c006c0065007400000070006800790073000000480061007300500072006f0070006500720074007900000048617350726f7065727479006800650061006c00740068000000610072006d006f007200000047657450726f706572747900610072006d006f0072005f00000053657450726f7065727479004973446561640049007300440065006100640000004765745363656e65006e006f00610063006300650073007300000066006800690074000000620068006900740000006800690074005f0072006500610063007400000031000000320000006164640073697a65006765740073006300720069007000740065006400000062006c006f006f0064005f006400690072002e0078006d006c00000062006100740074006c0065000000690064006c0065000000710075006500730074005f00640031005f0030003300000062007500740063006800650072005f00640065006100740068000000

Import:
	SensePlayerOnly (1 args)
	IsPlayerActor (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	Hold (0 args)
	rand (2 args)
	Sleep (1 args)
	sync (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopAnimation (0 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	StopAsync (0 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	Stop (0 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetAnimationOffset (3 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	GetScene (1 args)
	FindDirLength (3 args)
	Speak (1 args)
	CanSee (2 args)
	GetPosition (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	RequestClearPath (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	RotateAsync (2 args)
	Is3DSoundLoaded (2 args)
	self (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	BroadcastMessage (3 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_17 Op = 0x9 Vars = (object)
		EVENT_26 Op = 0x14 Vars = (string)
		EVENT_5 Op = 0x60 Vars = ()
		EVENT_6 Op = 0x65 Vars = ()
		EVENT_7 Op = 0xa4 Vars = (int)
	GTASK_1 Vars = (object, int, int, bool, float, int) Params = 0
		EVENT_6 Op = 0x131 Vars = ()
	GTASK_2 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0x3cf Vars = ()
		EVENT_7 Op = 0x408 Vars = (int)
		EVENT_1 Op = 0x423 Vars = (object)
		EVENT_2 Op = 0x432 Vars = (object)
		EVENT_10 Op = 0x4b8 Vars = (object)
		EVENT_41 Op = 0x4c3 Vars = (object)
	GTASK_3  Params = 1
		EVENT_22 Op = 0x555 Vars = (object, int, float, float)
		EVENT_16 Op = 0x557 Vars = (object, string)
		EVENT_41 Op = 0x559 Vars = (object)

Events:
EVENT_22 Op = 0x746 Vars = (object, int, float, float)
EVENT_43 Op = 0x74e Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x758 Vars = (object, string)
EVENT_41 Op = 0x765 Vars = (object)

0x0: Push((bool) 1)
0x1: @ SensePlayerOnly(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty(float, float)
0x4: Stack[-2] = (int) 300
0x5: Stack[-1] = (int) 100
0x6: Call2 0x2b

0x7: Pop(2)
0x8: Return(); Pop(0)

0x9: PushEmpty(bool, bool)
0xa: @ IsPlayerActor(Stack[-3], Stack[-1])
0xb: Pop(0)
0xc: Push(Stack[-1])
0xd: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xe: PushEmpty()
0xf: Push(-0, 6); TaskCall(1)
0x10: Call2 0x11f

0x11: Pop(-0, 6); TaskReturn
0x12: Pop(0)
0x13: Return(); Pop(2)

0x14: PushEmpty(float, cvector, float, cvector)
0x15: Push("trigger") // @poff=0
0x16: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x18: @ GetEyesHeight(Stack[-2])
0x19: Pop(0)
0x1a: Push(CvectorIndex(Stack[-1], 1))
0x1b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1c: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x1d: Push("growl") // @poff=16
0x1e: @ PlayGlobalSound(Stack[-1], Stack[-2])
0x1f: Pop(1)
0x20: PushEmpty()
0x21: Push(-0, 6); TaskCall(1)
0x22: Call2 0x11f

0x23: Pop(-0, 6); TaskReturn
0x24: Pop(0)
0x25: GOTO 0x2a

0x26: PushEmpty(string)
0x27: Stack[-6] = Stack[-1]
0x28: Call2 0x58

0x29: Pop(1)
0x2a: Return(); Pop(4)

0x2b: PushEmpty(float, float)
0x2c: PushEmpty(bool)
0x2d: Call2 0x69c

0x2e: Pop(0)
0x2f: Pop(1); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x31: @ Hold()
0x32: Pop(0)
0x33: GOTO 0x2c

0x34: Push((int) 3)
0x35: @ rand(Stack[-2], Stack[-1])
0x36: Pop(1)
0x37: Push((int) 3)
0x38: Pop(1); Push(Stack[-2] + Stack[-1]);
0x39: @ Sleep(Stack[-1])
0x3a: Pop(1)
0x3b: PushEmpty(float, float)
0x3c: Stack[-6] = Stack[-2]
0x3d: Stack[-5] = Stack[-1]
0x3e: Call2 0x7a

0x3f: Pop(2)
0x40: @ sync()
0x41: Pop(0)
0x42: GOTO 0x2c

0x43: Return(); Pop(2)

0x44: PushEmpty(bool, bool)
0x45: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x46: @ IsLoaded(Stack[-1])
0x47: Pop(0)
0x48: PushEmpty(bool)
0x49: Stack[-1] = (bool) 0
0x4a: Pop(0); Push((bool) Stack[-2] == 0)
0x4b: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x4c: PushEmpty(bool)
0x4d: Call2 0x78

0x4e: Pop(0)
0x4f: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x50: Stack[-1] = (bool) 1
0x51: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x52: PushEmpty(object)
0x53: Call2 0x6d5

0x54: Pop(0)
0x55: @ RemoveActor(Stack[-1])
0x56: Pop(1)
0x57: Return(); Pop(2)

0x58: PushEmpty()
0x59: Push("cleanup") // @poff=28
0x5a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5c: PushEmpty()
0x5d: Call2 0x44

0x5e: Pop(0)
0x5f: Return(); Pop(0)

0x60: @ StopGroup0()
0x61: Pop(0)
0x62: @ sync()
0x63: Pop(0)
0x64: Return(); Pop(0)

0x65: PushEmpty()
0x66: Call2 0xbb

0x67: Pop(0)
0x68: PushEmpty(bool)
0x69: Stack[-1] = (bool) 0
0x6a: Push( Stack[5 + Tasks[-1].StackPointer] )
0x6b: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6c: PushEmpty(bool)
0x6d: Call2 0x78

0x6e: Pop(0)
0x6f: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x70: Stack[-1] = (bool) 1
0x71: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x72: PushEmpty(object)
0x73: Call2 0x6d5

0x74: Pop(0)
0x75: @ RemoveActor(Stack[-1])
0x76: Pop(1)
0x77: Return(); Pop(0)

0x78: Stack[-1] = (bool) 1
0x79: Return(); Pop(0)

0x7a: PushEmpty()
0x7b: PushEmpty(bool)
0x7c: Call2 0x69c

0x7d: Pop(0)
0x7e: Pop(1); Push((bool) Stack[-1] == 0)
0x7f: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x80: Return(); Pop(0)

0x81: Push("player") // @poff=44
0x82: @ FindActor(Stack[-4]T, Stack[-1])
0x83: Pop(1)
0x84: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x85: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x86: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x87: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x88: Push((int) 10)
0x89: Push((float)1.0)
0x8a: @ SetTimer(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: PushEmpty()
0x8d: Call2 0xc9

0x8e: Pop(0)
0x8f: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x91: Push((int) 10)
0x92: @ KillTimer(Stack[-1])
0x93: Pop(1)
0x94: Return(); Pop(0)

0x95: PushEmpty(float, float)
0x96: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x97: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x98: Stack[-3] = (bool) 0
0x99: Return(); Pop(2)

0x9a: PushEmpty(float, object)
0x9b: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x9c: Call2 0x570

0x9d: Pop(1)
0x9e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x9f: Push( Stack[2 + Tasks[-1].StackPointer] )
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0xa2: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0xa3: Return(); Pop(2)

0xa4: PushEmpty()
0xa5: Push((int) 10)
0xa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xa8: PushEmpty(bool)
0xa9: Call2 0x95

0xaa: Pop(0)
0xab: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xac: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xad: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xae: PushEmpty(object)
0xaf: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0xb0: Call2 0x6a1

0xb1: Pop(1)
0xb2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xb3: GOTO 0xba

0xb4: Push( Stack[2 + Tasks[-1].StackPointer] )
0xb5: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb6: Push("head") // @poff=58
0xb7: @ UnlookAsync(Stack[-1])
0xb8: Pop(1)
0xb9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xba: Return(); Pop(0)

0xbb: PushEmpty()
0xbc: Call2 0x11a

0xbd: Pop(0)
0xbe: Push((int) 10)
0xbf: @ KillTimer(Stack[-1])
0xc0: Pop(1)
0xc1: Push( Stack[2 + Tasks[-1].StackPointer] )
0xc2: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc3: Push("head") // @poff=58
0xc4: @ UnlookAsync(Stack[-1])
0xc5: Pop(1)
0xc6: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xc7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc8: Return(); Pop(0)

0xc9: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0xca: @ WaitForAnimEnd()
0xcb: Pop(0)
0xcc: PushEmpty(bool)
0xcd: Call2 0x69c

0xce: Pop(0)
0xcf: Pop(1); Push((bool) Stack[-1] == 0)
0xd0: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd1: Return(); Pop(14)

0xd2: PushEmpty(int)
0xd3: Call2 0x728

0xd4: Stack[-1] = Stack[-8]
0xd5: Pop(1)
0xd6: Stack[-6] = (int) 0
0xd7: PushEmpty(bool)
0xd8: Stack[-1] = (bool) 0
0xd9: Push((int) 5)
0xda: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdc: PushEmpty(bool)
0xdd: Call2 0x69c

0xde: Pop(0)
0xdf: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xe0: Stack[-1] = (bool) 1
0xe1: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0xe2: Push((int) 3)
0xe3: @ irand(Stack[-6], Stack[-1])
0xe4: Pop(1)
0xe5: Push((int) 0)
0xe6: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xe8: Push(Stack[-7])
0xe9: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xea: @ irand(Stack[-4], Stack[-7])
0xeb: Pop(0)
0xec: Push("all") // @poff=68
0xed: PushEmpty(string, int)
0xee: Stack[-7] = Stack[-1]
0xef: Call2 0x721

0xf0: Pop(1)
0xf1: @ PlayAnimation(Stack[-2], Stack[-1])
0xf2: Pop(2)
0xf3: @ WaitForAnimEnd(Stack[-3])
0xf4: Pop(0)
0xf5: Pop(0); Push((bool) Stack[-3] == 0)
0xf6: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf7: GOTO 0x115

0xf8: GOTO 0x10a

0xf9: Push((int) 1)
0xfa: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0xfc: Push((int) 4)
0xfd: @ rand(Stack[-3], Stack[-1])
0xfe: Pop(1)
0xff: Push((int) 1)
0x100: Pop(1); Push(Stack[-3] + Stack[-1]);
0x101: @ Sleep(Stack[-1], Stack[-2])
0x102: Pop(1)
0x103: Pop(0); Push((bool) Stack[-1] == 0)
0x104: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x105: GOTO 0x115

0x106: GOTO 0x10a

0x107: Push(Stack[-6])
0x108: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x109: GOTO 0x115

0x10a: PushEmpty(bool)
0x10b: Call2 0x118

0x10c: Pop(0)
0x10d: Pop(1); Push((bool) Stack[-1] == 0)
0x10e: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10f: GOTO 0x115

0x110: @ ResetAAS()
0x111: Pop(0)
0x112: Push((int) 1)
0x113: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x114: GOTO 0xd7

0x115: @ ResetAAS()
0x116: Pop(0)
0x117: Return(); Pop(14)

0x118: Stack[-1] = (bool) 1
0x119: Return(); Pop(0)

0x11a: @ StopAnimation()
0x11b: Pop(0)
0x11c: @ StopGroup0()
0x11d: Pop(0)
0x11e: Return(); Pop(0)

0x11f: PushEmpty(object, object)
0x120: Push("player") // @poff=44
0x121: @ FindActor(Stack[-2], Stack[-1])
0x122: Pop(1)
0x123: PushEmpty(object, bool, float)
0x124: Stack[-4] = Stack[-3]
0x125: Stack[-2] = (bool) 1
0x126: Stack[-1] = (float) 180.0
0x127: Call2 0x139

0x128: Pop(3)
0x129: Return(); Pop(2)

0x12a: Stack[-1] = 0
0x12b: PushEmpty()
0x12c: Stack[-3] = (float) 0.10000000149011612
0x12d: Return(); Pop(0)

0x12e: PushEmpty()
0x12f: Stack[-3] = (int) 0
0x130: Return(); Pop(0)

0x131: PushEmpty(object)
0x132: Call2 0x6d5

0x133: Pop(0)
0x134: @ RemoveActor(Stack[-1])
0x135: Pop(1)
0x136: @ Hold()
0x137: Pop(0)
0x138: Return(); Pop(0)

0x139: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x13a: PushEmpty()
0x13b: Call2 0x21e

0x13c: Pop(0)
0x13d: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x13e: Push("@GetAttackDistance") // @poff=76
0x13f: Push((int) 1)
0x140: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x141: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x142: @@ GetAttackDistance(Stack[-11]); Obj=25 // @poff=114
0x143: Pop(0)
0x144: Push((int) 50)
0x145: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x146: GOTO 0x148

0x147: Stack[-23] = Stack[-11]
0x148: Push((int) 150)
0x149: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x14b: Stack[-11] = (int) 150
0x14c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x14d: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x14e: @ IsPlayerActor(Stack[-0]T, Stack[-8])
0x14f: Pop(0)
0x150: Push(Stack[-8])
0x151: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x152: Push("attack") // @poff=132
0x153: @ PlayGlobalMusic(Stack[-1])
0x154: Pop(1)
0x155: PushEmpty(object)
0x156: Call2 0x6d5

0x157: Pop(0)
0x158: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x159: Pop(1)
0x15a: Push(Stack[-24])
0x15b: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x15c: Stack[-7] = (bool) 0
0x15d: GOTO 0x15f

0x15e: Stack[-7] = (bool) 1
0x15f: Push((float)400.0)
0x160: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x161: PushEmpty(bool)
0x162: Stack[-1] = (bool) 0
0x163: PushEmpty(bool, object)
0x164: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x165: Call2 0x5fb

0x166: Pop(1)
0x167: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x168: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x169: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x16a: Stack[-1] = (bool) 1
0x16b: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x16c: PushEmpty()
0x16d: Call2 0x3bb

0x16e: Pop(0)
0x16f: @@@ GetPFPosition(Stack[-10]); Obj=0 // @poff=146
0x170: Pop(0)
0x171: @ GetPFPosition(Stack[-9])
0x172: Pop(0)
0x173: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x174: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x175: Pop(0); Push(Stack[-6] * Stack[-6]);
0x176: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x177: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x178: PushEmpty(bool, object, float, float, bool, bool)
0x179: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x17a: Stack[-17] = Stack[-4]
0x17b: Stack[-3] = (float) 3000.0
0x17c: Stack[-2] = (bool) 1
0x17d: Stack[-1] = (bool) 0
0x17e: Push(-6, 3); TaskCall(2)
0x17f: Call2 0x3d7

0x180: Pop(-6, 3); TaskReturn
0x181: Pop(5)
0x182: Pop(1); Push((bool) Stack[-1] == 0)
0x183: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x184: GOTO 0x20d

0x185: Stack[-7] = (bool) 0
0x186: GOTO 0x20c

0x187: Pop(0); Push(Stack[-23] * Stack[-23]);
0x188: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x18a: @@@ GetPFPosition(Stack[-3]); Obj=0 // @poff=146
0x18b: Pop(0)
0x18c: @ CanReachByPF(Stack[-2], Stack[-3])
0x18d: Pop(0)
0x18e: Pop(0); Push((bool) Stack[-2] == 0)
0x18f: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x190: PushEmpty(bool, object, float, float, bool, bool)
0x191: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x192: Stack[-17] = Stack[-4]
0x193: Stack[-3] = (float) 3000.0
0x194: Stack[-2] = (bool) 1
0x195: Stack[-1] = (bool) 0
0x196: Push(-6, 3); TaskCall(2)
0x197: Call2 0x3d7

0x198: Pop(-6, 3); TaskReturn
0x199: Pop(5)
0x19a: Pop(1); Push((bool) Stack[-1] == 0)
0x19b: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x19c: GOTO 0x20d

0x19d: Stack[-7] = (bool) 0
0x19e: GOTO 0x161

0x19f: Pop(0); Push((bool) Stack[-7] == 0)
0x1a0: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1a1: PushEmpty(object)
0x1a2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a3: Call2 0x691

0x1a4: Pop(1)
0x1a5: Push("all") // @poff=68
0x1a6: Push("attack_on") // @poff=160
0x1a7: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a8: Pop(2)
0x1a9: @ WaitForAnimEnd()
0x1aa: Pop(0)
0x1ab: PushEmpty()
0x1ac: Call2 0x3bb

0x1ad: Pop(0)
0x1ae: @ StopAsync()
0x1af: Pop(0)
0x1b0: Stack[-7] = (bool) 1
0x1b1: PushEmpty(bool, object)
0x1b2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b3: Call2 0x5fb

0x1b4: Pop(1)
0x1b5: Pop(1); Push((bool) Stack[-1] == 0)
0x1b6: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b7: GOTO 0x20d

0x1b8: @ rand(Stack[-1])
0x1b9: Pop(0)
0x1ba: PushEmpty(bool)
0x1bb: Stack[-1] = (bool) 1
0x1bc: Push((float)0.25)
0x1bd: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x1be: IF (Stack[-1] == 1) GOTO 0x1c4; Pop(1)

0x1bf: PushEmpty(bool)
0x1c0: Call2 0x390

0x1c1: Pop(0)
0x1c2: IF (Stack[-1] == 1) GOTO 0x1c4; Pop(1)

0x1c3: Stack[-1] = (bool) 0
0x1c4: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1c5: @ Face(Stack[-0]T)
0x1c6: Pop(0)
0x1c7: PushEmpty()
0x1c8: Call2 0x3c2

0x1c9: Pop(0)
0x1ca: Push("all") // @poff=68
0x1cb: Push("attack_stay") // @poff=180
0x1cc: @ PlayAnimation(Stack[-2], Stack[-1])
0x1cd: Pop(2)
0x1ce: PushEmpty(bool, float)
0x1cf: Stack[-25] = Stack[-1]
0x1d0: Call2 0x30c

0x1d1: Pop(2)
0x1d2: @ StopAsync()
0x1d3: Pop(0)
0x1d4: GOTO 0x203

0x1d5: @ Face(Stack[-0]T)
0x1d6: Pop(0)
0x1d7: Push("all") // @poff=68
0x1d8: Push("fjump") // @poff=204
0x1d9: @ PlayAnimation(Stack[-2], Stack[-1])
0x1da: Pop(2)
0x1db: @ WaitForAnimEnd()
0x1dc: Pop(0)
0x1dd: PushEmpty()
0x1de: Call2 0x3bb

0x1df: Pop(0)
0x1e0: Push([0.0, 0.0, 0.0])
0x1e1: @ SetSpeed(Stack[-1])
0x1e2: Pop(1)
0x1e3: @ Stop()
0x1e4: Pop(0)
0x1e5: @ StopAsync()
0x1e6: Pop(0)
0x1e7: PushEmpty(bool)
0x1e8: Call2 0x390

0x1e9: Pop(0)
0x1ea: Pop(1); Push((bool) Stack[-1] == 0)
0x1eb: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1ec: PushEmpty(bool, object)
0x1ed: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ee: Call2 0x5fb

0x1ef: Pop(1)
0x1f0: Pop(1); Push((bool) Stack[-1] == 0)
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1f2: GOTO 0x20d

0x1f3: @@@ GetPFPosition(Stack[-10]); Obj=0 // @poff=146
0x1f4: Pop(0)
0x1f5: @ GetPFPosition(Stack[-9])
0x1f6: Pop(0)
0x1f7: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x1f8: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1f9: Pop(0); Push(Stack[-23] * Stack[-23]);
0x1fa: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x1fb: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1fc: PushEmpty(bool, float)
0x1fd: Stack[-25] = Stack[-1]
0x1fe: Call2 0x268

0x1ff: Pop(1)
0x200: Pop(1); Push((bool) Stack[-1] == 0)
0x201: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x202: GOTO 0x20d

0x203: GOTO 0x20c

0x204: PushEmpty(bool, float)
0x205: Stack[-25] = Stack[-1]
0x206: Call2 0x268

0x207: Pop(1)
0x208: Pop(1); Push((bool) Stack[-1] == 0)
0x209: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x20a: GOTO 0x20d

0x20b: Stack[-7] = (bool) 1
0x20c: GOTO 0x161

0x20d: @ WaitForAnimEnd()
0x20e: Pop(0)
0x20f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x210: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x211: Return(); Pop(22)

0x212: Push("all") // @poff=68
0x213: Push("attack_off") // @poff=216
0x214: @ PlayAnimation(Stack[-2], Stack[-1])
0x215: Pop(2)
0x216: @ WaitForAnimEnd()
0x217: Pop(0)
0x218: Push(Stack[-8])
0x219: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x21a: Push((float)2.0)
0x21b: @ Sleep(Stack[-1])
0x21c: Pop(1)
0x21d: Return(); Pop(22)

0x21e: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x21f: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x220: Push("all") // @poff=68
0x221: Push("attack_begin") // @poff=238
0x222: Push((int) 1)
0x223: Pop(1); Push(Stack[1 + Tasks[-1].StackPointer] + Stack[-1]);
0x224: Pop(2); Push(Stack[-2] + Stack[-1]);
0x225: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x226: Pop(2)
0x227: Pop(0); Push((bool) Stack[-3] == 0)
0x228: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x229: GOTO 0x22d

0x22a: Push((int) 1)
0x22b: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x22c: GOTO 0x220

0x22d: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x22e: Push("attack") // @poff=132
0x22f: Push((int) 1)
0x230: Pop(1); Push(Stack[2 + Tasks[-1].StackPointer] + Stack[-1]);
0x231: Pop(2); Push(Stack[-2] + Stack[-1]);
0x232: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x233: Pop(1)
0x234: Pop(0); Push((bool) Stack[-2] == 0)
0x235: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x236: GOTO 0x23a

0x237: Push((int) 1)
0x238: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x239: GOTO 0x22e

0x23a: Push("all") // @poff=68
0x23b: Push("bjump") // @poff=264
0x23c: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x23d: Pop(2)
0x23e: Push(CvectorIndex(Stack[-1], 2))
0x23f: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x240: Return(); Pop(6)

0x241: PushEmpty(object, float, float, object, float, float)
0x242: Push((float)0.8999999761581421)
0x243: Pop(1); Push(Stack[-9] * Stack[-1]);
0x244: @ GetVictim(Stack[-1], Stack[-4])
0x245: Pop(1)
0x246: @ ReportAttack(Stack[-0]T)
0x247: Pop(0)
0x248: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x249: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x24a: PushEmpty(float, object, int)
0x24b: Stack[-6] = Stack[-2]
0x24c: Stack[-10] = Stack[-1]
0x24d: Call2 0x12b

0x24e: Stack[-3] = Stack[-5]
0x24f: Pop(3)
0x250: PushEmpty(float, object, float, int)
0x251: Stack[-7] = Stack[-3]
0x252: Stack[-6] = Stack[-2]
0x253: PushEmpty(int, object, int)
0x254: Stack[-10] = Stack[-2]
0x255: Stack[-14] = Stack[-1]
0x256: Call2 0x12e

0x257: Stack[-3] = Stack[-4]
0x258: Pop(3)
0x259: Call2 0x589

0x25a: Stack[-4] = Stack[-5]
0x25b: Pop(4)
0x25c: PushEmpty(int)
0x25d: Call2 0x3c0

0x25e: Pop(0)
0x25f: @ ReportHit(Stack[-0]T, Stack[-1], Stack[-2], Stack[-3])
0x260: Pop(1)
0x261: PushEmpty(object, float)
0x262: Stack[-5] = Stack[-2]
0x263: Stack[-3] = Stack[-1]
0x264: Call2 0x3c7

0x265: Pop(2)
0x266: Return(); Pop(6)

0x267: Stack[-3] = 0
0x268: PushEmpty(int, bool, int, string, int, bool, int, string)
0x269: PushEmpty()
0x26a: Call2 0x3bb

0x26b: Pop(0)
0x26c: @ irand(Stack[-4], Stack[-1]T)
0x26d: Pop(0)
0x26e: Push((int) 1)
0x26f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x270: @ Face(Stack[-0]T)
0x271: Pop(0)
0x272: Push((bool) 1)
0x273: @ SetAttackState(Stack[-1])
0x274: Pop(1)
0x275: PushEmpty()
0x276: Call2 0x716

0x277: Pop(0)
0x278: Push("all") // @poff=68
0x279: Push("attack_begin") // @poff=238
0x27a: Pop(1); Push(Stack[-1] + Stack[-6]);
0x27b: @ PlayAnimation(Stack[-2], Stack[-1])
0x27c: Pop(2)
0x27d: @ WaitForAnimEnd()
0x27e: Pop(0)
0x27f: PushEmpty()
0x280: Call2 0x39b

0x281: Pop(0)
0x282: PushEmpty(bool, object)
0x283: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x284: Call2 0x5fb

0x285: Pop(1)
0x286: Pop(1); Push((bool) Stack[-1] == 0)
0x287: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x288: @ StopAsync()
0x289: Pop(0)
0x28a: Stack[-10] = (bool) 0
0x28b: Return(); Pop(8)

0x28c: PushEmpty(float, int)
0x28d: Stack[-11] = Stack[-2]
0x28e: Stack[-6] = Stack[-1]
0x28f: Call2 0x241

0x290: Pop(2)
0x291: Push("all") // @poff=68
0x292: Push("attack_middle") // @poff=276
0x293: Pop(1); Push(Stack[-1] + Stack[-6]);
0x294: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x295: Pop(2)
0x296: Push(Stack[-3])
0x297: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x298: PushEmpty()
0x299: Call2 0x716

0x29a: Pop(0)
0x29b: Push("all") // @poff=68
0x29c: Push("attack_middle") // @poff=276
0x29d: Pop(1); Push(Stack[-1] + Stack[-6]);
0x29e: @ PlayAnimation(Stack[-2], Stack[-1])
0x29f: Pop(2)
0x2a0: @ WaitForAnimEnd()
0x2a1: Pop(0)
0x2a2: PushEmpty()
0x2a3: Call2 0x3bb

0x2a4: Pop(0)
0x2a5: PushEmpty(bool, object)
0x2a6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a7: Call2 0x5fb

0x2a8: Pop(1)
0x2a9: Pop(1); Push((bool) Stack[-1] == 0)
0x2aa: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ab: @ StopAsync()
0x2ac: Pop(0)
0x2ad: Stack[-10] = (bool) 0
0x2ae: Return(); Pop(8)

0x2af: PushEmpty(float, int)
0x2b0: Stack[-11] = Stack[-2]
0x2b1: Stack[-6] = Stack[-1]
0x2b2: Call2 0x241

0x2b3: Pop(2)
0x2b4: Stack[-2] = (int) 1
0x2b5: Push("attack_middle") // @poff=276
0x2b6: Pop(1); Push(Stack[-1] + Stack[-5]);
0x2b7: Push("_") // @poff=304
0x2b8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2b9: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x2ba: Push("all") // @poff=68
0x2bb: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x2bc: Pop(1)
0x2bd: Pop(0); Push((bool) Stack[-3] == 0)
0x2be: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2bf: GOTO 0x2dd

0x2c0: PushEmpty()
0x2c1: Call2 0x716

0x2c2: Pop(0)
0x2c3: Push("all") // @poff=68
0x2c4: @ PlayAnimation(Stack[-1], Stack[-2])
0x2c5: Pop(1)
0x2c6: @ WaitForAnimEnd()
0x2c7: Pop(0)
0x2c8: PushEmpty()
0x2c9: Call2 0x3bb

0x2ca: Pop(0)
0x2cb: PushEmpty(bool, object)
0x2cc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2cd: Call2 0x5fb

0x2ce: Pop(1)
0x2cf: Pop(1); Push((bool) Stack[-1] == 0)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d1: @ StopAsync()
0x2d2: Pop(0)
0x2d3: Stack[-10] = (bool) 0
0x2d4: Return(); Pop(8)

0x2d5: PushEmpty(float, int)
0x2d6: Stack[-11] = Stack[-2]
0x2d7: Stack[-6] = Stack[-1]
0x2d8: Call2 0x241

0x2d9: Pop(2)
0x2da: Push((int) 1)
0x2db: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2dc: GOTO 0x2b5

0x2dd: Push((bool) 0)
0x2de: @ SetAttackState(Stack[-1])
0x2df: Pop(1)
0x2e0: Push("all") // @poff=68
0x2e1: Push("attack_end") // @poff=308
0x2e2: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2e3: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e4: Pop(2)
0x2e5: PushEmpty(bool)
0x2e6: Call2 0x3c9

0x2e7: Pop(0)
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2e9: PushEmpty(bool, float)
0x2ea: Stack[-1] = (float) 0.75
0x2eb: Call2 0x2f1

0x2ec: Pop(2)
0x2ed: @ StopAsync()
0x2ee: Pop(0)
0x2ef: Stack[-10] = (bool) 1
0x2f0: Return(); Pop(8)

0x2f1: PushEmpty(float, bool, float, bool)
0x2f2: @ rand(Stack[-2])
0x2f3: Pop(0)
0x2f4: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x2f5: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x2f6: @ IsAnimationPlaying(Stack[-1])
0x2f7: Pop(0)
0x2f8: Pop(0); Push((bool) Stack[-1] == 0)
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2fa: GOTO 0x304

0x2fb: PushEmpty(bool)
0x2fc: Call2 0x353

0x2fd: Pop(0)
0x2fe: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2ff: Stack[-6] = (bool) 1
0x300: Return(); Pop(4)

0x301: @ sync()
0x302: Pop(0)
0x303: GOTO 0x2f6

0x304: GOTO 0x30a

0x305: @ WaitForAnimEnd()
0x306: Pop(0)
0x307: PushEmpty()
0x308: Call2 0x3bb

0x309: Pop(0)
0x30a: Stack[-6] = (bool) 0
0x30b: Return(); Pop(4)

0x30c: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x30d: @ IsAnimationPlaying(Stack[-5])
0x30e: Pop(0)
0x30f: Pop(0); Push((bool) Stack[-5] == 0)
0x310: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x311: GOTO 0x332

0x312: PushEmpty(bool)
0x313: Call2 0x353

0x314: Pop(0)
0x315: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x316: Stack[-12] = (bool) 1
0x317: Return(); Pop(10)

0x318: PushEmpty(bool, object)
0x319: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31a: Call2 0x5fb

0x31b: Pop(1)
0x31c: Pop(1); Push((bool) Stack[-1] == 0)
0x31d: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31e: Stack[-12] = (bool) 0
0x31f: Return(); Pop(10)

0x320: @@@ GetPFPosition(Stack[-4]); Obj=0 // @poff=146
0x321: Pop(0)
0x322: @ GetPFPosition(Stack[-3])
0x323: Pop(0)
0x324: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x325: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x326: Pop(0); Push(Stack[-11] * Stack[-11]);
0x327: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x328: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x329: PushEmpty(bool, float)
0x32a: Stack[-13] = Stack[-1]
0x32b: Call2 0x268

0x32c: Pop(2)
0x32d: Stack[-12] = (bool) 1
0x32e: Return(); Pop(10)

0x32f: @ sync()
0x330: Pop(0)
0x331: GOTO 0x30d

0x332: PushEmpty()
0x333: Call2 0x3bb

0x334: Pop(0)
0x335: Stack[-12] = (bool) 0
0x336: Return(); Pop(10)

0x337: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x338: PushEmpty(bool, object)
0x339: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33a: Call2 0x5fb

0x33b: Pop(1)
0x33c: Pop(1); Push((bool) Stack[-1] == 0)
0x33d: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33e: Stack[-11] = (bool) 0
0x33f: Return(); Pop(10)

0x340: PushEmpty(bool)
0x341: Call2 0x390

0x342: Pop(0)
0x343: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x344: @@@ GetPFPosition(Stack[-5]); Obj=0 // @poff=146
0x345: Pop(0)
0x346: @ GetPFPosition(Stack[-4])
0x347: Pop(0)
0x348: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x349: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x34a: @@@ GetAttackDistance(Stack[-1]); Obj=0 // @poff=114
0x34b: Pop(0)
0x34c: Push((int) 50)
0x34d: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x34e: Pop(0); Push(Stack[-1] * Stack[-1]);
0x34f: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x350: Return(); Pop(10)

0x351: Stack[-11] = (bool) 0
0x352: Return(); Pop(10)

0x353: PushEmpty(bool)
0x354: Stack[-1] = (bool) 0
0x355: PushEmpty(bool)
0x356: Call2 0x337

0x357: Pop(0)
0x358: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x359: PushEmpty(bool)
0x35a: Call2 0x363

0x35b: Pop(0)
0x35c: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x35d: Stack[-1] = (bool) 1
0x35e: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x35f: Stack[-1] = (bool) 1
0x360: Return(); Pop(0)

0x361: Stack[-1] = (bool) 0
0x362: Return(); Pop(0)

0x363: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x364: @ GetScene(Stack[-5])
0x365: Pop(0)
0x366: Stack[-4] = (bool) 0
0x367: PushEmpty(cvector, object)
0x368: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x369: Call2 0x569

0x36a: Pop(1)
0x36b: Pop(1); Push(( -Stack[-1])
0x36c: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4]T)
0x36d: Pop(1)
0x36e: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x36f: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x370: GOTO 0x38d

0x371: @ Face(Stack[-0]T)
0x372: Pop(0)
0x373: Push("all") // @poff=68
0x374: Push("bjump") // @poff=264
0x375: @ PlayAnimation(Stack[-2], Stack[-1])
0x376: Pop(2)
0x377: @@@ GetPFPosition(Stack[-2]); Obj=0 // @poff=146
0x378: Pop(0)
0x379: @ GetPFPosition(Stack[-1])
0x37a: Pop(0)
0x37b: @ WaitForAnimEnd()
0x37c: Pop(0)
0x37d: PushEmpty()
0x37e: Call2 0x3bb

0x37f: Pop(0)
0x380: @ StopAsync()
0x381: Pop(0)
0x382: Push([0.0, 0.0, 0.0])
0x383: @ SetSpeed(Stack[-1])
0x384: Pop(1)
0x385: Stack[-4] = (bool) 1
0x386: PushEmpty(bool)
0x387: Call2 0x337

0x388: Pop(0)
0x389: Pop(1); Push((bool) Stack[-1] == 0)
0x38a: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38b: GOTO 0x38d

0x38c: GOTO 0x367

0x38d: Stack[-4] = Stack[-11]
0x38e: Return(); Pop(10)

0x38f: Stack[-5] = 0
0x390: PushEmpty(bool, bool)
0x391: Push("IsAttacking") // @poff=330
0x392: Push((int) 1)
0x393: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x394: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x395: @@@ IsAttacking(Stack[-1]); Obj=0 // @poff=354
0x396: Pop(0)
0x397: Stack[-1] = Stack[-3]
0x398: Return(); Pop(2)

0x399: Stack[-3] = (bool) 0
0x39a: Return(); Pop(2)

0x39b: PushEmpty(float, int, float, int)
0x39c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x39d: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39e: Return(); Pop(4)

0x39f: Push( Stack[5 + Tasks[-1].StackPointer] )
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a1: Push((int) -1)
0x3a2: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x3a3: Push((int) 0)
0x3a4: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a6: Return(); Pop(4)

0x3a7: @ rand(Stack[-2])
0x3a8: Pop(0)
0x3a9: PushEmpty(float)
0x3aa: Call2 0x3cd

0x3ab: Pop(0)
0x3ac: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x3ad: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3ae: @ irand(Stack[-1], Stack[-2]T)
0x3af: Pop(0)
0x3b0: Push((int) 1)
0x3b1: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3b2: Push("attack") // @poff=132
0x3b3: Pop(1); Push(Stack[-1] + Stack[-2]);
0x3b4: @ Speak(Stack[-1])
0x3b5: Pop(1)
0x3b6: PushEmpty(int)
0x3b7: Call2 0x3cb

0x3b8: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x3b9: Pop(1)
0x3ba: Return(); Pop(4)

0x3bb: PushEmpty(object)
0x3bc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3bd: Call2 0x70d

0x3be: Pop(1)
0x3bf: Return(); Pop(0)

0x3c0: Stack[-1] = (int) 0
0x3c1: Return(); Pop(0)

0x3c2: PushEmpty(string)
0x3c3: Stack[-1] = "attack_stay" // @poff=180
0x3c4: Call2 0x6ac

0x3c5: Pop(1)
0x3c6: Return(); Pop(0)

0x3c7: PushEmpty()
0x3c8: Return(); Pop(0)

0x3c9: Stack[-1] = (bool) 1
0x3ca: Return(); Pop(0)

0x3cb: Stack[-1] = (int) 1
0x3cc: Return(); Pop(0)

0x3cd: Stack[-1] = (float) 0.5
0x3ce: Return(); Pop(0)

0x3cf: PushEmpty(object)
0x3d0: Call2 0x6d5

0x3d1: Pop(0)
0x3d2: @ RemoveActor(Stack[-1])
0x3d3: Pop(1)
0x3d4: @ Hold()
0x3d5: Pop(0)
0x3d6: Return(); Pop(0)

0x3d7: PushEmpty(bool, bool, bool, bool)
0x3d8: PushEmpty(object)
0x3d9: Stack[-10] = Stack[-1]
0x3da: Call2 0x70d

0x3db: Pop(1)
0x3dc: Push((int) 1)
0x3dd: Push((int) 5)
0x3de: @ SetTimer(Stack[-2], Stack[-1])
0x3df: Pop(2)
0x3e0: @ CanSee(Stack[-2], Stack[-9])
0x3e1: Pop(0)
0x3e2: Push(Stack[-2])
0x3e3: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3e5: PushEmpty(object)
0x3e6: Stack[-10] = Stack[-1]
0x3e7: Call2 0x6a1

0x3e8: Pop(1)
0x3e9: GOTO 0x3eb

0x3ea: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3eb: PushEmpty(bool, object)
0x3ec: Stack[-11] = Stack[-1]
0x3ed: Call2 0x578

0x3ee: Pop(1)
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f0: PushEmpty(object)
0x3f1: Call2 0x6d5

0x3f2: Pop(0)
0x3f3: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x3f4: Pop(1)
0x3f5: PushEmpty(bool, object, float, float, bool, bool)
0x3f6: Stack[-15] = Stack[-5]
0x3f7: Stack[-14] = Stack[-4]
0x3f8: Stack[-13] = Stack[-3]
0x3f9: Stack[-12] = Stack[-2]
0x3fa: Stack[-11] = Stack[-1]
0x3fb: Call2 0x440

0x3fc: Stack[-6] = Stack[-7]
0x3fd: Pop(6)
0x3fe: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3ff: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x400: Push("head") // @poff=58
0x401: @ UnlookAsync(Stack[-1])
0x402: Pop(1)
0x403: Push((int) 1)
0x404: @ KillTimer(Stack[-1])
0x405: Pop(1)
0x406: Stack[-1] = Stack[-10]
0x407: Return(); Pop(4)

0x408: PushEmpty()
0x409: Push((int) 1)
0x40a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x40b: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x40c: PushEmpty(object)
0x40d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x40e: Call2 0x70d

0x40f: Pop(1)
0x410: GOTO 0x415

0x411: PushEmpty(int)
0x412: Stack[-2] = Stack[-1]
0x413: Call2 0x4a6

0x414: Pop(1)
0x415: Return(); Pop(0)

0x416: Push((int) 1)
0x417: @ KillTimer(Stack[-1])
0x418: Pop(1)
0x419: Push( Stack[2 + Tasks[-1].StackPointer] )
0x41a: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x41b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x41c: Push("head") // @poff=58
0x41d: @ UnlookAsync(Stack[-1])
0x41e: Pop(1)
0x41f: PushEmpty()
0x420: Call2 0x4bc

0x421: Pop(0)
0x422: Return(); Pop(0)

0x423: PushEmpty()
0x424: PushEmpty(bool)
0x425: Stack[-1] = (bool) 0
0x426: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x427: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x428: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x429: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x42a: Stack[-1] = (bool) 1
0x42b: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x42d: PushEmpty(object)
0x42e: Stack[-2] = Stack[-1]
0x42f: Call2 0x6a1

0x430: Pop(1)
0x431: Return(); Pop(0)

0x432: PushEmpty()
0x433: PushEmpty(bool)
0x434: Stack[-1] = (bool) 0
0x435: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x436: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x437: Push( Stack[2 + Tasks[-1].StackPointer] )
0x438: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x439: Stack[-1] = (bool) 1
0x43a: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x43b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x43c: Push("head") // @poff=58
0x43d: @ UnlookAsync(Stack[-1])
0x43e: Pop(1)
0x43f: Return(); Pop(0)

0x440: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x441: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x442: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x443: Stack[-17] = Stack[-7]
0x444: PushEmpty(bool, object)
0x445: Stack[-23] = Stack[-1]
0x446: Call2 0x4cc

0x447: Pop(1)
0x448: Pop(1); Push((bool) Stack[-1] == 0)
0x449: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x44a: Stack[-22] = (bool) 0
0x44b: Return(); Pop(16)

0x44c: @@ GetPosition(Stack[-5]); Obj=21 // @poff=366
0x44d: Pop(0)
0x44e: @ GetPosition(Stack[-4])
0x44f: Pop(0)
0x450: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x451: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x452: PushEmpty(bool)
0x453: Stack[-1] = (bool) 0
0x454: Push((int) 0)
0x455: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x456: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x457: Pop(0); Push(Stack[-20] * Stack[-20]);
0x458: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x459: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x45a: Stack[-1] = (bool) 1
0x45b: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x45c: @ Stop()
0x45d: Pop(0)
0x45e: Stack[-22] = (bool) 0
0x45f: Return(); Pop(16)

0x460: Pop(0); Push(Stack[-20] * Stack[-20]);
0x461: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x462: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x463: @@ GetPFPosition(Stack[-5]); Obj=21 // @poff=146
0x464: Pop(0)
0x465: @ FindPathTo(Stack[-1], Stack[-5])
0x466: Pop(0)
0x467: Pop(0); Push(( Stack[-1] != 0 )
0x468: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x469: Stack[-1] = Stack[-6]
0x46a: Stack[-1] = 0
0x46b: Pop(0); Push(( Stack[-6] != 0 )
0x46c: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x46d: Push(Stack[-7])
0x46e: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x46f: Stack[-7] = (bool) 0
0x470: @ RotatePath(Stack[-6], Stack[-8])
0x471: Pop(0)
0x472: Pop(0); Push((bool) Stack[-8] == 0)
0x473: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x474: GOTO 0x4a4

0x475: Push((int) 0)
0x476: Push((float)0.30000001192092896)
0x477: @ SetTimer(Stack[-2], Stack[-1])
0x478: Pop(2)
0x479: PushEmpty(string)
0x47a: Call2 0x4d3

0x47b: Pop(0)
0x47c: PushEmpty(string)
0x47d: Call2 0x4d5

0x47e: Pop(0)
0x47f: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x480: Pop(2)
0x481: Pop(0); Push((bool) Stack[-8] == 0)
0x482: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x483: Push( Stack[0 + Tasks[-1].StackPointer] )
0x484: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x485: Stack[-6] = 0
0x486: GOTO 0x4a4

0x487: GOTO 0x489

0x488: GOTO 0x4a3

0x489: GOTO 0x48b

0x48a: Stack[-6] = 0
0x48b: GOTO 0x49c

0x48c: Push((int) 0)
0x48d: @ KillTimer(Stack[-1])
0x48e: Pop(1)
0x48f: Push((float)0.5)
0x490: @ Sleep(Stack[-1], Stack[-9])
0x491: Pop(1)
0x492: Pop(0); Push((bool) Stack[-8] == 0)
0x493: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x494: Push( Stack[0 + Tasks[-1].StackPointer] )
0x495: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x496: Stack[-6] = 0
0x497: GOTO 0x4a4

0x498: Push((int) 0)
0x499: Push((float)0.30000001192092896)
0x49a: @ SetTimer(Stack[-2], Stack[-1])
0x49b: Pop(2)
0x49c: Stack[-1] = 0
0x49d: GOTO 0x4a2

0x49e: Push((int) 0)
0x49f: @ KillTimer(Stack[-1])
0x4a0: Pop(1)
0x4a1: GOTO 0x4a4

0x4a2: Stack[-6] = 0
0x4a3: GOTO 0x444

0x4a4: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x4a5: Return(); Pop(16)

0x4a6: PushEmpty()
0x4a7: Push((int) 0)
0x4a8: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x4a9: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4aa: Return(); Pop(0)

0x4ab: PushEmpty(bool, object)
0x4ac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ad: Call2 0x4cc

0x4ae: Pop(1)
0x4af: Pop(1); Push((bool) Stack[-1] == 0)
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4b1: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x4b2: Push((int) 0)
0x4b3: @ KillTimer(Stack[-1])
0x4b4: Pop(1)
0x4b5: @ Stop()
0x4b6: Pop(0)
0x4b7: Return(); Pop(0)

0x4b8: PushEmpty()
0x4b9: @ RequestClearPath(Stack[-1])
0x4ba: Pop(0)
0x4bb: Return(); Pop(0)

0x4bc: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x4bd: Push((int) 0)
0x4be: @ KillTimer(Stack[-1])
0x4bf: Pop(1)
0x4c0: @ Stop()
0x4c1: Pop(0)
0x4c2: Return(); Pop(0)

0x4c3: PushEmpty()
0x4c4: PushEmpty()
0x4c5: Call2 0x416

0x4c6: Pop(0)
0x4c7: PushEmpty(object)
0x4c8: Stack[-2] = Stack[-1]
0x4c9: Call2 0x765

0x4ca: Pop(1)
0x4cb: Return(); Pop(0)

0x4cc: PushEmpty()
0x4cd: PushEmpty(bool, object)
0x4ce: Stack[-3] = Stack[-1]
0x4cf: Call2 0x5fb

0x4d0: Stack[-2] = Stack[-4]
0x4d1: Pop(2)
0x4d2: Return(); Pop(0)

0x4d3: Stack[-1] = "walk" // @poff=378
0x4d4: Return(); Pop(0)

0x4d5: Stack[-1] = "run" // @poff=388
0x4d6: Return(); Pop(0)

0x4d7: PushEmpty()
0x4d8: PushEmpty(object)
0x4d9: Stack[-2] = Stack[-1]
0x4da: Call2 0x4e0

0x4db: Pop(1)
0x4dc: @ Hold()
0x4dd: Pop(0)
0x4de: GOTO 0x4dc

0x4df: Return(); Pop(0)

0x4e0: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x4e1: Pop(0); PushNull((bool) Stack[-21] == 0)
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e3: PushEmpty(string)
0x4e4: Stack[-1] = "fdie" // @poff=396
0x4e5: Call2 0x53b

0x4e6: Pop(1)
0x4e7: GOTO 0x53a

0x4e8: @@ GetPosition(Stack[-10]); Obj=21 // @poff=366
0x4e9: Pop(0)
0x4ea: @ GetPosition(Stack[-9])
0x4eb: Pop(0)
0x4ec: @ GetDirection(Stack[-8])
0x4ed: Pop(0)
0x4ee: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x4ef: Push(CvectorIndex(Stack[-7], 0))
0x4f0: Push(CvectorIndex(Stack[-9], 0))
0x4f1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4f2: Push(CvectorIndex(Stack[-8], 2))
0x4f3: Push(CvectorIndex(Stack[-10], 2))
0x4f4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4f5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4f6: Push((int) 0)
0x4f7: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4f8: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4f9: Stack[-6] = "fdie" // @poff=396
0x4fa: GOTO 0x4fc

0x4fb: Stack[-6] = "bdie" // @poff=406
0x4fc: @ RemoveRTEnvelope()
0x4fd: Pop(0)
0x4fe: @ SetDeathState()
0x4ff: Pop(0)
0x500: @ Stop()
0x501: Pop(0)
0x502: @ StopAsync()
0x503: Pop(0)
0x504: Stack[-21] = Stack[-5]
0x505: Push("GetScriptProperty") // @poff=416
0x506: Push((int) 2)
0x507: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x508: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x509: Push("Owner") // @poff=452
0x50a: @@ HasScriptProperty(Stack[-5], Stack[-1]); Obj=22 // @poff=464
0x50b: Pop(1)
0x50c: Push(Stack[-4])
0x50d: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x50e: Push("Owner") // @poff=452
0x50f: @@ GetScriptProperty(Stack[-6], Stack[-1]); Obj=22 // @poff=482
0x510: Pop(1)
0x511: Pop(0); PushNull((bool) Stack[-5] == 0)
0x512: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x513: Stack[-21] = Stack[-5]
0x514: Push("@GetEyesHeight") // @poff=500
0x515: Push((int) 1)
0x516: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x517: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x518: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=530
0x519: Pop(0)
0x51a: Stack[-1] = [0.0, 0.0, 0.0]
0x51b: Push(CvectorIndex(Stack[-1], 1))
0x51c: Stack[-3] = Stack[-1]
0x51d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x51e: Push("head") // @poff=58
0x51f: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x520: Pop(1)
0x521: Stack[-3] = (bool) 1
0x522: GOTO 0x524

0x523: Stack[-3] = (bool) 0
0x524: PushEmpty(string)
0x525: Stack[-7] = Stack[-1]
0x526: Call2 0x6ac

0x527: Pop(1)
0x528: Push("all") // @poff=68
0x529: @ PlayAnimation(Stack[-1], Stack[-7])
0x52a: Pop(1)
0x52b: @ WaitForAnimEnd()
0x52c: Pop(0)
0x52d: Push(Stack[-3])
0x52e: IF (Stack[-1] == 0) GOTO 0x534; Pop(1)

0x52f: @ StopAsync()
0x530: Pop(0)
0x531: Push("head") // @poff=58
0x532: @ UnlookAsync(Stack[-1])
0x533: Pop(1)
0x534: Push("all") // @poff=68
0x535: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x536: Pop(1)
0x537: @ RemoveEnvelope()
0x538: Pop(0)
0x539: Stack[-5] = 0
0x53a: Return(); Pop(20)

0x53b: PushEmpty()
0x53c: @ RemoveRTEnvelope()
0x53d: Pop(0)
0x53e: @ SetDeathState()
0x53f: Pop(0)
0x540: @ Stop()
0x541: Pop(0)
0x542: @ StopAsync()
0x543: Pop(0)
0x544: @ StopSecondaryAnimation()
0x545: Pop(0)
0x546: PushEmpty(string)
0x547: Stack[-2] = Stack[-1]
0x548: Call2 0x6ac

0x549: Pop(1)
0x54a: Push("all") // @poff=68
0x54b: @ PlayAnimation(Stack[-1], Stack[-2])
0x54c: Pop(1)
0x54d: @ WaitForAnimEnd()
0x54e: Pop(0)
0x54f: Push("all") // @poff=68
0x550: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x551: Pop(1)
0x552: @ RemoveEnvelope()
0x553: Pop(0)
0x554: Return(); Pop(0)

0x555: PushEmpty()
0x556: Return(); Pop(0)

0x557: PushEmpty()
0x558: Return(); Pop(0)

0x559: PushEmpty()
0x55a: Return(); Pop(0)

0x55b: PushEmpty()
0x55c: Push((int) 2)
0x55d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x55e: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x55f: Stack[-2] = "fire" // @poff=544
0x560: Return(); Pop(0)

0x561: GOTO 0x567

0x562: Push((int) 1)
0x563: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x564: IF (Stack[-1] == 0) GOTO 0x567; Pop(1)

0x565: Stack[-2] = "bullet" // @poff=554
0x566: Return(); Pop(0)

0x567: Stack[-2] = "phys" // @poff=568
0x568: Return(); Pop(0)

0x569: PushEmpty(cvector, cvector, cvector, cvector)
0x56a: @ GetPosition(Stack[-2])
0x56b: Pop(0)
0x56c: @@ GetPosition(Stack[-1]); Obj=5 // @poff=366
0x56d: Pop(0)
0x56e: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x56f: Return(); Pop(4)

0x570: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x571: @ GetPosition(Stack[-3])
0x572: Pop(0)
0x573: @@ GetPosition(Stack[-2]); Obj=7 // @poff=366
0x574: Pop(0)
0x575: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x576: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x577: Return(); Pop(6)

0x578: PushEmpty(bool, bool)
0x579: @ IsPlayerActor(Stack[-3], Stack[-1])
0x57a: Pop(0)
0x57b: Stack[-1] = Stack[-4]
0x57c: Return(); Pop(2)

0x57d: PushEmpty(bool, bool)
0x57e: Push("HasProperty") // @poff=578
0x57f: Push((int) 2)
0x580: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x581: Pop(1); Push((bool) Stack[-1] == 0)
0x582: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x583: Stack[-5] = (bool) 0
0x584: Return(); Pop(2)

0x585: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=602
0x586: Pop(0)
0x587: Stack[-1] = Stack[-5]
0x588: Return(); Pop(2)

0x589: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x58a: PushEmpty(bool, object, string)
0x58b: Stack[-18] = Stack[-2]
0x58c: Stack[-1] = "health" // @poff=614
0x58d: Call2 0x57d

0x58e: Pop(2)
0x58f: Pop(1); Push((bool) Stack[-1] == 0)
0x590: IF (Stack[-1] == 0) GOTO 0x593; Pop(1)

0x591: Stack[-16] = (float) 0.0
0x592: Return(); Pop(12)

0x593: PushEmpty(bool, object, string)
0x594: Stack[-18] = Stack[-2]
0x595: Stack[-1] = "armor" // @poff=628
0x596: Call2 0x57d

0x597: Pop(2)
0x598: Pop(1); Push((bool) Stack[-1] == 0)
0x599: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x59a: Stack[-6] = (int) 0
0x59b: GOTO 0x59f

0x59c: Push("armor") // @poff=628
0x59d: @@ GetProperty(Stack[-1], Stack[-7]); Obj=16 // @poff=640
0x59e: Pop(1)
0x59f: Push("armor_") // @poff=652
0x5a0: PushEmpty(string, int)
0x5a1: Stack[-16] = Stack[-1]
0x5a2: Call2 0x55b

0x5a3: Pop(1)
0x5a4: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5a5: PushEmpty(bool, object, string)
0x5a6: Stack[-18] = Stack[-2]
0x5a7: Stack[-8] = Stack[-1]
0x5a8: Call2 0x57d

0x5a9: Pop(2)
0x5aa: Pop(1); Push((bool) Stack[-1] == 0)
0x5ab: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5ac: Stack[-4] = (int) 0
0x5ad: GOTO 0x5b0

0x5ae: @@ GetProperty(Stack[-5], Stack[-4]); Obj=15 // @poff=640
0x5af: Pop(0)
0x5b0: PushEmpty(float, float, float)
0x5b1: Pop(0); Push(Stack[-9] + Stack[-7]);
0x5b2: Push((float)100.0)
0x5b3: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x5b4: Stack[-1] = (int) 1
0x5b5: Call2 0x6e5

0x5b6: Stack[-3] = Stack[-6]
0x5b7: Pop(3)
0x5b8: Push("health") // @poff=614
0x5b9: @@ GetProperty(Stack[-1], Stack[-3]); Obj=16 // @poff=640
0x5ba: Pop(1)
0x5bb: Push((int) 1)
0x5bc: Pop(1); Push(Stack[-1] - Stack[-4]);
0x5bd: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x5be: Push("health") // @poff=614
0x5bf: PushEmpty(float, float, float, float)
0x5c0: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x5c1: Stack[-2] = (int) 0
0x5c2: Stack[-1] = (int) 1
0x5c3: Call2 0x6ec

0x5c4: Pop(3)
0x5c5: @@ SetProperty(Stack[-2], Stack[-1]); Obj=17 // @poff=666
0x5c6: Pop(2)
0x5c7: PushEmpty(bool, object)
0x5c8: Stack[-17] = Stack[-1]
0x5c9: Call2 0x578

0x5ca: Pop(1)
0x5cb: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5cc: PushEmpty(float)
0x5cd: Stack[-1] = -Stack[-2]; Pop(0);
0x5ce: Call2 0x6f7

0x5cf: Pop(1)
0x5d0: Stack[-1] = Stack[-16]
0x5d1: Return(); Pop(12)

0x5d2: PushEmpty(bool, bool)
0x5d3: @@ IsDead(Stack[-1]); Obj=3 // @poff=678
0x5d4: Pop(0)
0x5d5: Stack[-1] = Stack[-4]
0x5d6: Return(); Pop(2)

0x5d7: PushEmpty(object, object, object, object)
0x5d8: Pop(0); PushNull((bool) Stack[-5] == 0)
0x5d9: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5da: Stack[-6] = (bool) 0
0x5db: Return(); Pop(4)

0x5dc: PushEmpty(bool)
0x5dd: Stack[-1] = (bool) 0
0x5de: Push("IsDead") // @poff=685
0x5df: Push((int) 1)
0x5e0: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x5e1: IF (Stack[-1] == 0) GOTO 0x5e8; Pop(1)

0x5e2: PushEmpty(bool, object)
0x5e3: Stack[-8] = Stack[-1]
0x5e4: Call2 0x5d2

0x5e5: Pop(1)
0x5e6: IF (Stack[-1] == 0) GOTO 0x5e8; Pop(1)

0x5e7: Stack[-1] = (bool) 1
0x5e8: IF (Stack[-1] == 0) GOTO 0x5eb; Pop(1)

0x5e9: Stack[-6] = (bool) 0
0x5ea: Return(); Pop(4)

0x5eb: @ GetScene(Stack[-2])
0x5ec: Pop(0)
0x5ed: Pop(0); PushNull((bool) Stack[-2] == 0)
0x5ee: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5ef: Stack[-6] = (bool) 0
0x5f0: Return(); Pop(4)

0x5f1: @@ GetScene(Stack[-1]); Obj=5 // @poff=699
0x5f2: Pop(0)
0x5f3: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x5f4: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5f5: Stack[-6] = (bool) 0
0x5f6: Return(); Pop(4)

0x5f7: Stack[-6] = (bool) 1
0x5f8: Return(); Pop(4)

0x5f9: Stack[-1] = 0
0x5fa: Stack[-2] = 0
0x5fb: PushEmpty(int, int)
0x5fc: PushEmpty(bool, object)
0x5fd: Stack[-5] = Stack[-1]
0x5fe: Call2 0x5d7

0x5ff: Pop(1)
0x600: Pop(1); Push((bool) Stack[-1] == 0)
0x601: IF (Stack[-1] == 0) GOTO 0x604; Pop(1)

0x602: Stack[-4] = (bool) 0
0x603: Return(); Pop(2)

0x604: PushEmpty(bool, object, string)
0x605: Stack[-6] = Stack[-2]
0x606: Stack[-1] = "noaccess" // @poff=708
0x607: Call2 0x57d

0x608: Pop(2)
0x609: Pop(1); Push((bool) Stack[-1] == 0)
0x60a: IF (Stack[-1] == 0) GOTO 0x60d; Pop(1)

0x60b: Stack[-4] = (bool) 1
0x60c: Return(); Pop(2)

0x60d: Push("noaccess") // @poff=708
0x60e: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=640
0x60f: Pop(1)
0x610: Push((int) 0)
0x611: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x612: Return(); Pop(2)

0x613: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x614: Pop(0); PushNull((bool) Stack[-15] == 0)
0x615: IF (Stack[-1] == 0) GOTO 0x617; Pop(1)

0x616: Return(); Pop(14)

0x617: @ IsDead(Stack[-7])
0x618: Pop(0)
0x619: Push(Stack[-7])
0x61a: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x61b: Return(); Pop(14)

0x61c: @ GetSecondaryAnimationType(Stack[-6])
0x61d: Pop(0)
0x61e: Push((int) 0)
0x61f: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x620: IF (Stack[-1] == 0) GOTO 0x622; Pop(1)

0x621: Return(); Pop(14)

0x622: @@ GetPosition(Stack[-5]); Obj=15 // @poff=366
0x623: Pop(0)
0x624: @ GetPosition(Stack[-4])
0x625: Pop(0)
0x626: @ GetDirection(Stack[-3])
0x627: Pop(0)
0x628: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x629: Push(CvectorIndex(Stack[-2], 0))
0x62a: Push(CvectorIndex(Stack[-4], 0))
0x62b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x62c: Push(CvectorIndex(Stack[-3], 2))
0x62d: Push(CvectorIndex(Stack[-5], 2))
0x62e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x62f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x630: Push((int) 0)
0x631: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x632: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x633: Stack[-1] = "fhit" // @poff=726
0x634: GOTO 0x636

0x635: Stack[-1] = "bhit" // @poff=736
0x636: Push("hit_react") // @poff=746
0x637: Push("1") // @poff=766
0x638: Pop(1); Push(Stack[-3] + Stack[-1]);
0x639: Push("2") // @poff=770
0x63a: Pop(1); Push(Stack[-4] + Stack[-1]);
0x63b: Push((int) -10)
0x63c: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x63d: Pop(4)
0x63e: Return(); Pop(14)

0x63f: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x640: PushEmpty(bool)
0x641: Stack[-1] = (bool) 0
0x642: PushEmpty(bool)
0x643: Stack[-1] = (bool) 0
0x644: Push(Stack[-23])
0x645: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x646: Push((int) 4)
0x647: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x648: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x649: Stack[-1] = (bool) 1
0x64a: IF (Stack[-1] == 0) GOTO 0x64f; Pop(1)

0x64b: Push((int) 5)
0x64c: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x64d: IF (Stack[-1] == 0) GOTO 0x64f; Pop(1)

0x64e: Stack[-1] = (bool) 1
0x64f: IF (Stack[-1] == 0) GOTO 0x67e; Pop(1)

0x650: PushEmpty(cvector, cvector)
0x651: PushEmpty(cvector, object)
0x652: Stack[-25] = Stack[-1]
0x653: Call2 0x569

0x654: Stack[-2] = Stack[-3]
0x655: Pop(2)
0x656: Call2 0x6db

0x657: Stack[-2] = Stack[-11]
0x658: Pop(2)
0x659: @ CreateVectorVector(Stack[-8])
0x65a: Pop(0)
0x65b: Stack[-7] = (int) 1
0x65c: Push("hit") // @poff=728
0x65d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x65e: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x65f: Pop(1)
0x660: Pop(0); Push((bool) Stack[-6] == 0)
0x661: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x662: GOTO 0x66c

0x663: Pop(0); Push(Stack[-4] | Stack[-9]);
0x664: Push((float)0.7071067690849304)
0x665: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x666: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x667: @@ add(Stack[-5]); Obj=8 // @poff=774
0x668: Pop(0)
0x669: Push((int) 1)
0x66a: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x66b: GOTO 0x65c

0x66c: @@ size(Stack[-3]); Obj=8 // @poff=778
0x66d: Pop(0)
0x66e: Push(Stack[-3])
0x66f: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x670: @ irand(Stack[-2], Stack[-3])
0x671: Pop(0)
0x672: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=783
0x673: Pop(0)
0x674: PushEmpty(object, int, float, cvector, cvector)
0x675: Stack[-26] = Stack[-5]
0x676: Stack[-25] = Stack[-4]
0x677: Stack[-24] = Stack[-3]
0x678: Stack[-6] = Stack[-2]
0x679: Stack[-1] = -Stack[-14]; Pop(0);
0x67a: Call2 0x683

0x67b: Pop(5)
0x67c: Return(); Pop(18)

0x67d: Stack[-8] = 0
0x67e: PushEmpty(object)
0x67f: Stack[-22] = Stack[-1]
0x680: Call2 0x613

0x681: Pop(1)
0x682: Return(); Pop(18)

0x683: PushEmpty(object, object, object, object)
0x684: @ GetScene(Stack[-2])
0x685: Pop(0)
0x686: Push("scripted") // @poff=787
0x687: Push("blood_dir.xml") // @poff=805
0x688: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x689: Pop(2)
0x68a: PushEmpty(object)
0x68b: Stack[-10] = Stack[-1]
0x68c: Call2 0x613

0x68d: Pop(1)
0x68e: Return(); Pop(4)

0x68f: Stack[-1] = 0
0x690: Stack[-2] = 0
0x691: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x692: @@ GetPosition(Stack[-3]); Obj=7 // @poff=366
0x693: Pop(0)
0x694: @ GetPosition(Stack[-2])
0x695: Pop(0)
0x696: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x697: Push(CvectorIndex(Stack[-1], 0))
0x698: Push(CvectorIndex(Stack[-2], 2))
0x699: @ RotateAsync(Stack[-2], Stack[-1])
0x69a: Pop(2)
0x69b: Return(); Pop(6)

0x69c: PushEmpty(bool, bool)
0x69d: @ IsLoaded(Stack[-1])
0x69e: Pop(0)
0x69f: Stack[-1] = Stack[-3]
0x6a0: Return(); Pop(2)

0x6a1: PushEmpty(float, cvector, float, cvector)
0x6a2: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=530
0x6a3: Pop(0)
0x6a4: Stack[-1] = [0.0, 0.0, 0.0]
0x6a5: Push(CvectorIndex(Stack[-1], 1))
0x6a6: Stack[-3] = Stack[-1]
0x6a7: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6a8: Push("head") // @poff=58
0x6a9: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x6aa: Pop(1)
0x6ab: Return(); Pop(4)

0x6ac: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x6ad: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x6ae: Pop(0)
0x6af: Pop(0); Push((bool) Stack[-8] == 0)
0x6b0: IF (Stack[-1] == 0) GOTO 0x6c5; Pop(1)

0x6b1: Stack[-7] = (int) 0
0x6b2: Push((int) 1)
0x6b3: Pop(1); Push(Stack[-8] + Stack[-1]);
0x6b4: Pop(1); Push(Stack[-18] + Stack[-1]);
0x6b5: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x6b6: Pop(1)
0x6b7: Pop(0); Push((bool) Stack[-6] == 0)
0x6b8: IF (Stack[-1] == 0) GOTO 0x6ba; Pop(1)

0x6b9: GOTO 0x6bd

0x6ba: Push((int) 1)
0x6bb: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x6bc: GOTO 0x6b2

0x6bd: Pop(0); Push((bool) Stack[-7] == 0)
0x6be: IF (Stack[-1] == 0) GOTO 0x6c0; Pop(1)

0x6bf: Return(); Pop(16)

0x6c0: @ irand(Stack[-5], Stack[-7])
0x6c1: Pop(0)
0x6c2: Push((int) 1)
0x6c3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6c4: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x6c5: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x6c6: Pop(0)
0x6c7: Push(Stack[-4])
0x6c8: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6c9: @ GetEyesHeight(Stack[-3])
0x6ca: Pop(0)
0x6cb: @ GetDirection(Stack[-2])
0x6cc: Pop(0)
0x6cd: Push((int) 50)
0x6ce: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x6cf: Push(CvectorIndex(Stack[-1], 1))
0x6d0: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x6d1: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6d2: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x6d3: Pop(0)
0x6d4: Return(); Pop(16)

0x6d5: PushEmpty(object, object)
0x6d6: @ self(Stack[-1])
0x6d7: Pop(0)
0x6d8: Stack[-1] = Stack[-3]
0x6d9: Return(); Pop(2)

0x6da: Stack[-1] = 0
0x6db: PushEmpty(float, float)
0x6dc: Pop(0); Push(Stack[-3] | Stack[-3]);
0x6dd: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x6de: Push((float)9.999999974752427e-07)
0x6df: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x6e0: IF (Stack[-1] == 0) GOTO 0x6e3; Pop(1)

0x6e1: Stack[-4] = [0.0, 0.0, 0.0]
0x6e2: Return(); Pop(2)

0x6e3: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x6e4: Return(); Pop(2)

0x6e5: PushEmpty()
0x6e6: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x6e7: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6e8: Stack[-2] = Stack[-3]
0x6e9: GOTO 0x6eb

0x6ea: Stack[-1] = Stack[-3]
0x6eb: Return(); Pop(0)

0x6ec: PushEmpty()
0x6ed: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x6ee: IF (Stack[-1] == 0) GOTO 0x6f1; Pop(1)

0x6ef: Stack[-2] = Stack[-4]
0x6f0: Return(); Pop(0)

0x6f1: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x6f2: IF (Stack[-1] == 0) GOTO 0x6f5; Pop(1)

0x6f3: Stack[-1] = Stack[-4]
0x6f4: Return(); Pop(0)

0x6f5: Stack[-3] = Stack[-4]
0x6f6: Return(); Pop(0)

0x6f7: PushEmpty(object, object)
0x6f8: @ CreateFloatVector(Stack[-1])
0x6f9: Pop(0)
0x6fa: @@ add(Stack[-3]); Obj=1 // @poff=774
0x6fb: Pop(0)
0x6fc: Push((int) 15)
0x6fd: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x6fe: Pop(1)
0x6ff: Return(); Pop(2)

0x700: Stack[-1] = 0
0x701: PushEmpty(object, object)
0x702: @ FindActor(Stack[-1], Stack[-4])
0x703: Pop(0)
0x704: Pop(0); PushNull((bool) Stack[-1] == 0)
0x705: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x706: Stack[-5] = (bool) 0
0x707: Return(); Pop(2)

0x708: @ Trigger(Stack[-1], Stack[-3])
0x709: Pop(0)
0x70a: Stack[-5] = (bool) 1
0x70b: Return(); Pop(2)

0x70c: Stack[-1] = 0
0x70d: PushEmpty(bool, bool)
0x70e: @ IsPlayerActor(Stack[-3], Stack[-1])
0x70f: Pop(0)
0x710: Push(Stack[-1])
0x711: IF (Stack[-1] == 0) GOTO 0x715; Pop(1)

0x712: Push("attack") // @poff=132
0x713: @ PlayGlobalMusic(Stack[-1])
0x714: Pop(1)
0x715: Return(); Pop(2)

0x716: PushEmpty(object, object)
0x717: @ GetScene(Stack[-1])
0x718: Pop(0)
0x719: Push("battle") // @poff=833
0x71a: PushEmpty(object)
0x71b: Call2 0x6d5

0x71c: Pop(0)
0x71d: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x71e: Pop(2)
0x71f: Return(); Pop(2)

0x720: Stack[-1] = 0
0x721: PushEmpty(string, string)
0x722: Stack[-1] = "idle" // @poff=847
0x723: Push(Stack[-3])
0x724: IF (Stack[-1] == 0) GOTO 0x726; Pop(1)

0x725: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x726: Stack[-1] = Stack[-4]
0x727: Return(); Pop(2)

0x728: PushEmpty(int, bool, int, bool)
0x729: Stack[-2] = (int) 0
0x72a: Push("all") // @poff=68
0x72b: PushEmpty(string, int)
0x72c: Stack[-5] = Stack[-1]
0x72d: Call2 0x721

0x72e: Pop(1)
0x72f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x730: Pop(2)
0x731: Pop(0); Push((bool) Stack[-1] == 0)
0x732: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x733: GOTO 0x737

0x734: Push((int) 1)
0x735: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x736: GOTO 0x72a

0x737: Stack[-2] = Stack[-5]
0x738: Return(); Pop(4)

0x739: PushEmpty()
0x73a: PushEmpty(bool, string, string)
0x73b: Stack[-2] = "quest_d1_03" // @poff=857
0x73c: Stack[-1] = "butcher_death" // @poff=881
0x73d: Call2 0x701

0x73e: Pop(3)
0x73f: PushEmpty(object)
0x740: Stack[-2] = Stack[-1]
0x741: Push(-1, 0); TaskCall(3)
0x742: Call2 0x4d7

0x743: Pop(-1, 0); TaskReturn
0x744: Pop(1)
0x745: Return(); Pop(0)

0x746: PushEmpty()
0x747: PushEmpty(object, int, float)
0x748: Stack[-7] = Stack[-3]
0x749: Stack[-6] = Stack[-2]
0x74a: Stack[-5] = Stack[-1]
0x74b: Call2 0x63f

0x74c: Pop(3)
0x74d: Return(); Pop(0)

0x74e: PushEmpty()
0x74f: PushEmpty(object, int, float, cvector, cvector)
0x750: Stack[-11] = Stack[-5]
0x751: Stack[-10] = Stack[-4]
0x752: Stack[-9] = Stack[-3]
0x753: Stack[-7] = Stack[-2]
0x754: Stack[-6] = Stack[-1]
0x755: Call2 0x683

0x756: Pop(5)
0x757: Return(); Pop(0)

0x758: PushEmpty(float, float)
0x759: Push("health") // @poff=614
0x75a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x75b: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x75c: Push("health") // @poff=614
0x75d: @ GetProperty(Stack[-1], Stack[-2])
0x75e: Pop(1)
0x75f: Push((int) 0)
0x760: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x761: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x762: @ SignalDeath(Stack[-4])
0x763: Pop(0)
0x764: Return(); Pop(2)

0x765: PushEmpty()
0x766: PushEmpty(object)
0x767: Stack[-2] = Stack[-1]
0x768: Call2 0x739

0x769: Pop(1)
0x76a: Return(); Pop(0)

