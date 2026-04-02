GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	W:heal
	W:quest_k11_01
	W:cure_officer
	W:agony
	W:all
	W:sleep
	W:agony_sleep
	W:agony.xml
	W:death
	W:agony_die
	W:HasProperty
	A:HasProperty
	A:GetProperty
	A:SetProperty
	A:GetPosition
	W:fhit
	W:bhit
	W:hit_react
	W:2
	W:scripted
	W:blood_dir.xml
	W:reputation
	A:add
	W:health
	W:cleanup
// @pool_raw:6800650061006c000000710075006500730074005f006b00310031005f0030003100000063007500720065005f006f006600660069006300650072000000610067006f006e007900000061006c006c00000073006c006500650070000000610067006f006e0079005f0073006c006500650070000000610067006f006e0079002e0078006d006c000000640065006100740068000000610067006f006e0079005f006400690065000000480061007300500072006f0070006500720074007900000048617350726f70657274790047657450726f70657274790053657450726f706572747900476574506f736974696f6e0066006800690074000000620068006900740000006800690074005f007200650061006300740000003200000073006300720069007000740065006400000062006c006f006f0064005f006400690072002e0078006d006c000000720065007000750074006100740069006f006e000000616464006800650061006c0074006800000063006c00650061006e00750070000000

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	RemoveEnvelope (0 args)
	SetRTEnvelope (2 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	WaitForAnimEnd (0 args)
	LockAnimationEnd (2 args)
	SetDeathState (0 args)
	IsDead (1 args)
	IsOverrideActive (1 args)
	Barter (1 args)
	GetProperty (2 args)
	ShowWindow (4 args)
	IsPlayerActor (2 args)
	RemoveActor (1 args)
	StopAnimation (0 args)
	GetSecondaryAnimationType (1 args)
	GetPosition (1 args)
	GetDirection (1 args)
	FadeSecondaryAnimation (4 args)
	GetScene (1 args)
	AddActorByType (6 args)
	IsLoaded (1 args)
	self (1 args)
	rand (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	FindActor (2 args)
	Trigger (2 args)
	SignalDeath (1 args)

RunOp = 0x18
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (int) Params = 0
		EVENT_26 Op = 0xd Vars = (string)
		EVENT_0 Op = 0x65 Vars = (object)
		EVENT_41 Op = 0x90 Vars = (object)
		EVENT_6 Op = 0xb3 Vars = ()
		EVENT_16 Op = 0xc6 Vars = (object, string)

Events:
EVENT_16 Op = 0x18a Vars = (object, string)
EVENT_43 Op = 0x197 Vars = (object, int, float, float, cvector, cvector)
EVENT_26 Op = 0x1a1 Vars = (string)
EVENT_6 Op = 0x1b2 Vars = ()

0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x136

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 1) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty()
0xe: Push("heal") // @poff=0
0xf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x11: PushEmpty(bool, string, string)
0x12: Stack[-2] = "quest_k11_01" // @poff=10
0x13: Stack[-1] = "cure_officer" // @poff=36
0x14: Call2 0x17e

0x15: Pop(3)
0x16: Return(); Pop(0)

0x17: Return(); Pop(0)

0x18: PushEmpty(bool, bool)
0x19: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x1a: @ RemoveEnvelope()
0x1b: Pop(0)
0x1c: Push((int) 50)
0x1d: Push((int) 40)
0x1e: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x1f: Pop(2)
0x20: PushEmpty(bool)
0x21: Call2 0x136

0x22: Pop(0)
0x23: Pop(1); Push((bool) Stack[-1] == 0)
0x24: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x25: PushEmpty()
0x26: Push(-0, 0); TaskCall(0)
0x27: Call2 0x0

0x28: Pop(-0, 0); TaskReturn
0x29: Pop(0)
0x2a: Push("agony") // @poff=62
0x2b: @ Is3DSoundLoaded(Stack[-2], Stack[-1])
0x2c: Pop(1)
0x2d: PushEmpty(bool)
0x2e: Stack[-1] = (bool) 0
0x2f: Push(Stack[-2])
0x30: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x31: PushEmpty(bool, float)
0x32: Stack[-1] = (float) 0.3333333432674408
0x33: Call2 0x14c

0x34: Pop(1)
0x35: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x36: Stack[-1] = (bool) 1
0x37: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x38: Push("agony") // @poff=62
0x39: Push([0.0, 40.0, 0.0])
0x3a: @ PlayGlobalSound(Stack[-2], Stack[-1])
0x3b: Pop(2)
0x3c: Push("all") // @poff=74
0x3d: Push("agony") // @poff=62
0x3e: @ PlayAnimation(Stack[-2], Stack[-1])
0x3f: Pop(2)
0x40: @ WaitForAnimEnd(Stack[-1])
0x41: Pop(0)
0x42: Push((int) 0)
0x43: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x44: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x45: Push(Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x47: Push("sleep") // @poff=82
0x48: Push([0.0, 40.0, 0.0])
0x49: @ PlayGlobalSound(Stack[-2], Stack[-1])
0x4a: Pop(2)
0x4b: Push("all") // @poff=74
0x4c: Push("agony_sleep") // @poff=94
0x4d: @ PlayAnimation(Stack[-2], Stack[-1])
0x4e: Pop(2)
0x4f: @ WaitForAnimEnd()
0x50: Pop(0)
0x51: Push("all") // @poff=74
0x52: Push("agony_sleep") // @poff=94
0x53: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x54: Pop(2)
0x55: @ SetDeathState()
0x56: Pop(0)
0x57: PushEmpty()
0x58: Call2 0x17

0x59: Pop(0)
0x5a: GOTO 0x61

0x5b: GOTO 0x60

0x5c: Push((int) 0)
0x5d: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] < Stack[-1])
0x5e: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5f: GOTO 0x61

0x60: GOTO 0x2a

0x61: @ Hold()
0x62: Pop(0)
0x63: GOTO 0x61

0x64: Return(); Pop(2)

0x65: PushEmpty(bool, bool, float, bool, float, bool, bool, float, bool, float)
0x66: @ IsDead(Stack[-5])
0x67: Pop(0)
0x68: Push(Stack[-5])
0x69: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6a: @ IsOverrideActive(Stack[-4])
0x6b: Pop(0)
0x6c: Pop(0); Push((bool) Stack[-4] == 0)
0x6d: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6e: @ Barter(Stack[-11])
0x6f: Pop(0)
0x70: GOTO 0x8f

0x71: Push("agony") // @poff=62
0x72: @ GetProperty(Stack[-1], Stack[-4])
0x73: Pop(1)
0x74: Push((int) 0)
0x75: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x76: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x77: Return(); Pop(10)

0x78: @ IsOverrideActive(Stack[-2])
0x79: Pop(0)
0x7a: Pop(0); Push((bool) Stack[-2] == 0)
0x7b: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x7c: Push("agony.xml") // @poff=118
0x7d: Push((bool) 1)
0x7e: Push((bool) 0)
0x7f: PushEmpty(object)
0x80: Call2 0x13b

0x81: Pop(0)
0x82: @ ShowWindow(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x83: Pop(4)
0x84: Push("agony") // @poff=62
0x85: @ GetProperty(Stack[-1], Stack[-2])
0x86: Pop(1)
0x87: Push((float)0.0010000000474974513)
0x88: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x89: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8a: PushEmpty(bool, object, float)
0x8b: Stack[-14] = Stack[-2]
0x8c: Stack[-1] = (float) 0.20000000298023224
0x8d: Call2 0x151

0x8e: Pop(3)
0x8f: Return(); Pop(10)

0x90: PushEmpty(bool, bool, bool, bool)
0x91: Push( Stack[0 + Tasks[-1].StackPointer] )
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: Return(); Pop(4)

0x94: @ IsPlayerActor(Stack[-5], Stack[-2])
0x95: Pop(0)
0x96: Push(Stack[-2])
0x97: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0x98: @ IsDead(Stack[-1])
0x99: Pop(0)
0x9a: Pop(0); Push((bool) Stack[-1] == 0)
0x9b: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0x9c: @ SetDeathState()
0x9d: Pop(0)
0x9e: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x9f: PushEmpty(bool, object, float)
0xa0: Stack[-8] = Stack[-2]
0xa1: Stack[-1] = (float) -0.30000001192092896
0xa2: Call2 0x151

0xa3: Pop(3)
0xa4: Push("death") // @poff=138
0xa5: Push([0.0, 40.0, 0.0])
0xa6: @ PlayGlobalSound(Stack[-2], Stack[-1])
0xa7: Pop(2)
0xa8: Push("all") // @poff=74
0xa9: Push("agony_die") // @poff=150
0xaa: @ PlayAnimation(Stack[-2], Stack[-1])
0xab: Pop(2)
0xac: @ WaitForAnimEnd()
0xad: Pop(0)
0xae: Push("all") // @poff=74
0xaf: Push("agony_die") // @poff=150
0xb0: @ LockAnimationEnd(Stack[-2], Stack[-1])
0xb1: Pop(2)
0xb2: Return(); Pop(4)

0xb3: PushEmpty()
0xb4: Call2 0x1b2

0xb5: Pop(0)
0xb6: PushEmpty()
0xb7: Call2 0xd7

0xb8: Pop(0)
0xb9: Push( Stack[0 + Tasks[-1].StackPointer] )
0xba: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbb: PushEmpty(object)
0xbc: Call2 0x13b

0xbd: Pop(0)
0xbe: @ RemoveActor(Stack[-1])
0xbf: Pop(1)
0xc0: PushEmpty()
0xc1: Push(-0, 0); TaskCall(0)
0xc2: Call2 0x0

0xc3: Pop(-0, 0); TaskReturn
0xc4: Pop(0)
0xc5: Return(); Pop(0)

0xc6: PushEmpty(float, float)
0xc7: Push("agony") // @poff=62
0xc8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xca: Push("agony") // @poff=62
0xcb: @ GetProperty(Stack[-1], Stack[-2])
0xcc: Pop(1)
0xcd: Push((float)0.0010000000474974513)
0xce: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xd0: Stack[0 + Tasks[-1].StackPointer] = (int)1
0xd1: PushEmpty(object, string)
0xd2: Stack[-6] = Stack[-2]
0xd3: Stack[-5] = Stack[-1]
0xd4: Call2 0x18a

0xd5: Pop(2)
0xd6: Return(); Pop(2)

0xd7: @ StopAnimation()
0xd8: Pop(0)
0xd9: Return(); Pop(0)

0xda: PushEmpty(bool, bool)
0xdb: Push("HasProperty") // @poff=170
0xdc: Push((int) 2)
0xdd: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xde: Pop(1); Push((bool) Stack[-1] == 0)
0xdf: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xe0: Stack[-5] = (bool) 0
0xe1: Return(); Pop(2)

0xe2: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=194
0xe3: Pop(0)
0xe4: Stack[-1] = Stack[-5]
0xe5: Return(); Pop(2)

0xe6: PushEmpty(float, float)
0xe7: PushEmpty(bool, object, string)
0xe8: Stack[-10] = Stack[-2]
0xe9: Stack[-9] = Stack[-1]
0xea: Call2 0xda

0xeb: Pop(2)
0xec: Pop(1); Push((bool) Stack[-1] == 0)
0xed: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xee: Stack[-8] = (bool) 0
0xef: Return(); Pop(2)

0xf0: @@ GetProperty(Stack[-6], Stack[-1]); Obj=7 // @poff=206
0xf1: Pop(0)
0xf2: PushEmpty(float, float, float, float)
0xf3: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0xf4: Stack[-8] = Stack[-2]
0xf5: Stack[-7] = Stack[-1]
0xf6: Call2 0x141

0xf7: Pop(3)
0xf8: @@ SetProperty(Stack[-7], Stack[-1]); Obj=8 // @poff=218
0xf9: Pop(1)
0xfa: Stack[-8] = (bool) 1
0xfb: Return(); Pop(2)

0xfc: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xfd: Pop(0); PushNull((bool) Stack[-15] == 0)
0xfe: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xff: Return(); Pop(14)

0x100: @ IsDead(Stack[-7])
0x101: Pop(0)
0x102: Push(Stack[-7])
0x103: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x104: Return(); Pop(14)

0x105: @ GetSecondaryAnimationType(Stack[-6])
0x106: Pop(0)
0x107: Push((int) 0)
0x108: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x10a: Return(); Pop(14)

0x10b: @@ GetPosition(Stack[-5]); Obj=15 // @poff=230
0x10c: Pop(0)
0x10d: @ GetPosition(Stack[-4])
0x10e: Pop(0)
0x10f: @ GetDirection(Stack[-3])
0x110: Pop(0)
0x111: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x112: Push(CvectorIndex(Stack[-2], 0))
0x113: Push(CvectorIndex(Stack[-4], 0))
0x114: Pop(2); Push(Stack[-2] * Stack[-1]);
0x115: Push(CvectorIndex(Stack[-3], 2))
0x116: Push(CvectorIndex(Stack[-5], 2))
0x117: Pop(2); Push(Stack[-2] * Stack[-1]);
0x118: Pop(2); Push(Stack[-2] + Stack[-1]);
0x119: Push((int) 0)
0x11a: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x11c: Stack[-1] = "fhit" // @poff=242
0x11d: GOTO 0x11f

0x11e: Stack[-1] = "bhit" // @poff=252
0x11f: Push("hit_react") // @poff=262
0x120: Push("1") // @poff=32
0x121: Pop(1); Push(Stack[-3] + Stack[-1]);
0x122: Push("2") // @poff=282
0x123: Pop(1); Push(Stack[-4] + Stack[-1]);
0x124: Push((int) -10)
0x125: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x126: Pop(4)
0x127: Return(); Pop(14)

0x128: PushEmpty(object, object, object, object)
0x129: @ GetScene(Stack[-2])
0x12a: Pop(0)
0x12b: Push("scripted") // @poff=286
0x12c: Push("blood_dir.xml") // @poff=304
0x12d: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x12e: Pop(2)
0x12f: PushEmpty(object)
0x130: Stack[-10] = Stack[-1]
0x131: Call2 0xfc

0x132: Pop(1)
0x133: Return(); Pop(4)

0x134: Stack[-1] = 0
0x135: Stack[-2] = 0
0x136: PushEmpty(bool, bool)
0x137: @ IsLoaded(Stack[-1])
0x138: Pop(0)
0x139: Stack[-1] = Stack[-3]
0x13a: Return(); Pop(2)

0x13b: PushEmpty(object, object)
0x13c: @ self(Stack[-1])
0x13d: Pop(0)
0x13e: Stack[-1] = Stack[-3]
0x13f: Return(); Pop(2)

0x140: Stack[-1] = 0
0x141: PushEmpty()
0x142: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x143: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x144: Stack[-2] = Stack[-4]
0x145: Return(); Pop(0)

0x146: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x148: Stack[-1] = Stack[-4]
0x149: Return(); Pop(0)

0x14a: Stack[-3] = Stack[-4]
0x14b: Return(); Pop(0)

0x14c: PushEmpty(float, float)
0x14d: @ rand(Stack[-1])
0x14e: Pop(0)
0x14f: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0x150: Return(); Pop(2)

0x151: PushEmpty()
0x152: Pop(0); Push((bool) Stack[-2] == 0)
0x153: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x154: Stack[-3] = (bool) 0
0x155: Return(); Pop(0)

0x156: Push((int) 0)
0x157: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x158: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x159: Push((int) 8)
0x15a: @ SendWorldWndMessage(Stack[-1])
0x15b: Pop(1)
0x15c: GOTO 0x166

0x15d: Push((int) 0)
0x15e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x160: Push((int) 9)
0x161: @ SendWorldWndMessage(Stack[-1])
0x162: Pop(1)
0x163: GOTO 0x166

0x164: Stack[-3] = (bool) 0
0x165: Return(); Pop(0)

0x166: PushEmpty(float)
0x167: Stack[-2] = Stack[-1]
0x168: Call2 0x174

0x169: Pop(1)
0x16a: PushEmpty(bool, object, string, float, float, float)
0x16b: Stack[-8] = Stack[-5]
0x16c: Stack[-4] = "reputation" // @poff=332
0x16d: Stack[-7] = Stack[-3]
0x16e: Stack[-2] = (int) 0
0x16f: Stack[-1] = (int) 1
0x170: Call2 0xe6

0x171: Pop(6)
0x172: Stack[-3] = (bool) 1
0x173: Return(); Pop(0)

0x174: PushEmpty(object, object)
0x175: @ CreateFloatVector(Stack[-1])
0x176: Pop(0)
0x177: @@ add(Stack[-3]); Obj=1 // @poff=354
0x178: Pop(0)
0x179: Push((int) 16)
0x17a: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x17b: Pop(1)
0x17c: Return(); Pop(2)

0x17d: Stack[-1] = 0
0x17e: PushEmpty(object, object)
0x17f: @ FindActor(Stack[-1], Stack[-4])
0x180: Pop(0)
0x181: Pop(0); PushNull((bool) Stack[-1] == 0)
0x182: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x183: Stack[-5] = (bool) 0
0x184: Return(); Pop(2)

0x185: @ Trigger(Stack[-1], Stack[-3])
0x186: Pop(0)
0x187: Stack[-5] = (bool) 1
0x188: Return(); Pop(2)

0x189: Stack[-1] = 0
0x18a: PushEmpty(float, float)
0x18b: Push("health") // @poff=358
0x18c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x18e: Push("health") // @poff=358
0x18f: @ GetProperty(Stack[-1], Stack[-2])
0x190: Pop(1)
0x191: Push((int) 0)
0x192: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x194: @ SignalDeath(Stack[-4])
0x195: Pop(0)
0x196: Return(); Pop(2)

0x197: PushEmpty()
0x198: PushEmpty(object, int, float, cvector, cvector)
0x199: Stack[-11] = Stack[-5]
0x19a: Stack[-10] = Stack[-4]
0x19b: Stack[-9] = Stack[-3]
0x19c: Stack[-7] = Stack[-2]
0x19d: Stack[-6] = Stack[-1]
0x19e: Call2 0x128

0x19f: Pop(5)
0x1a0: Return(); Pop(0)

0x1a1: PushEmpty(bool, bool)
0x1a2: Push("cleanup") // @poff=372
0x1a3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1a5: Push(GlobalVars[0])
0x1a6: Stack[-1] = (bool) 1
0x1a7: GlobalVars[0] = Stack[-1]; Pop(1)
0x1a8: @ IsLoaded(Stack[-1])
0x1a9: Pop(0)
0x1aa: Pop(0); Push((bool) Stack[-1] == 0)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1ac: PushEmpty(object)
0x1ad: Call2 0x13b

0x1ae: Pop(0)
0x1af: @ RemoveActor(Stack[-1])
0x1b0: Pop(1)
0x1b1: Return(); Pop(2)

0x1b2: Push(GlobalVars[0])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b4: PushEmpty(object)
0x1b5: Call2 0x13b

0x1b6: Pop(0)
0x1b7: @ RemoveActor(Stack[-1])
0x1b8: Pop(1)
0x1b9: Return(); Pop(0)

