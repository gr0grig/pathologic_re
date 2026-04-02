GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	W:quest_b1_02
	W:agony_dead
	W:agony
	W:all
	W:sleep
	W:agony_sleep
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
	W:1
	W:scripted
	W:blood_dir.xml
	W:reputation
	A:add
	W:health
	W:cleanup
// @pool_raw:710075006500730074005f00620031005f00300032000000610067006f006e0079005f0064006500610064000000610067006f006e007900000061006c006c00000073006c006500650070000000610067006f006e0079005f0073006c006500650070000000640065006100740068000000610067006f006e0079005f006400690065000000480061007300500072006f0070006500720074007900000048617350726f70657274790047657450726f70657274790053657450726f706572747900476574506f736974696f6e0066006800690074000000620068006900740000006800690074005f007200650061006300740000003100000073006300720069007000740065006400000062006c006f006f0064005f006400690072002e0078006d006c000000720065007000750074006100740069006f006e000000616464006800650061006c0074006800000063006c00650061006e00750070000000

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
	IsPlayerActor (2 args)
	IsDead (1 args)
	RemoveActor (1 args)
	GetProperty (2 args)
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

RunOp = 0x15
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (int) Params = 0
		EVENT_0 Op = 0xd Vars = (object)
		EVENT_41 Op = 0x62 Vars = (object)
		EVENT_6 Op = 0x85 Vars = ()
		EVENT_16 Op = 0x98 Vars = (object, string)

Events:
EVENT_16 Op = 0x15c Vars = (object, string)
EVENT_43 Op = 0x169 Vars = (object, int, float, float, cvector, cvector)
EVENT_26 Op = 0x173 Vars = (string)
EVENT_6 Op = 0x184 Vars = ()

0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x108

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
0xe: Return(); Pop(0)

0xf: PushEmpty(bool, string, string)
0x10: Stack[-2] = "quest_b1_02" // @poff=0
0x11: Stack[-1] = "agony_dead" // @poff=24
0x12: Call2 0x150

0x13: Pop(3)
0x14: Return(); Pop(0)

0x15: PushEmpty(bool, bool)
0x16: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x17: @ RemoveEnvelope()
0x18: Pop(0)
0x19: Push((int) 50)
0x1a: Push((int) 40)
0x1b: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x1c: Pop(2)
0x1d: PushEmpty(bool)
0x1e: Call2 0x108

0x1f: Pop(0)
0x20: Pop(1); Push((bool) Stack[-1] == 0)
0x21: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x22: PushEmpty()
0x23: Push(-0, 0); TaskCall(0)
0x24: Call2 0x0

0x25: Pop(-0, 0); TaskReturn
0x26: Pop(0)
0x27: Push("agony") // @poff=46
0x28: @ Is3DSoundLoaded(Stack[-2], Stack[-1])
0x29: Pop(1)
0x2a: PushEmpty(bool)
0x2b: Stack[-1] = (bool) 0
0x2c: Push(Stack[-2])
0x2d: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2e: PushEmpty(bool, float)
0x2f: Stack[-1] = (float) 0.3333333432674408
0x30: Call2 0x11e

0x31: Pop(1)
0x32: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x33: Stack[-1] = (bool) 1
0x34: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x35: Push("agony") // @poff=46
0x36: Push([0.0, 40.0, 0.0])
0x37: @ PlayGlobalSound(Stack[-2], Stack[-1])
0x38: Pop(2)
0x39: Push("all") // @poff=58
0x3a: Push("agony") // @poff=46
0x3b: @ PlayAnimation(Stack[-2], Stack[-1])
0x3c: Pop(2)
0x3d: @ WaitForAnimEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Push((int) 0)
0x40: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x41: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x42: Push(Stack[-1])
0x43: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x44: Push("sleep") // @poff=66
0x45: Push([0.0, 40.0, 0.0])
0x46: @ PlayGlobalSound(Stack[-2], Stack[-1])
0x47: Pop(2)
0x48: Push("all") // @poff=58
0x49: Push("agony_sleep") // @poff=78
0x4a: @ PlayAnimation(Stack[-2], Stack[-1])
0x4b: Pop(2)
0x4c: @ WaitForAnimEnd()
0x4d: Pop(0)
0x4e: Push("all") // @poff=58
0x4f: Push("agony_sleep") // @poff=78
0x50: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x51: Pop(2)
0x52: @ SetDeathState()
0x53: Pop(0)
0x54: PushEmpty()
0x55: Call2 0xf

0x56: Pop(0)
0x57: GOTO 0x5e

0x58: GOTO 0x5d

0x59: Push((int) 0)
0x5a: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] < Stack[-1])
0x5b: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5c: GOTO 0x5e

0x5d: GOTO 0x27

0x5e: @ Hold()
0x5f: Pop(0)
0x60: GOTO 0x5e

0x61: Return(); Pop(2)

0x62: PushEmpty(bool, bool, bool, bool)
0x63: Push( Stack[0 + Tasks[-1].StackPointer] )
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: Return(); Pop(4)

0x66: @ IsPlayerActor(Stack[-5], Stack[-2])
0x67: Pop(0)
0x68: Push(Stack[-2])
0x69: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x6a: @ IsDead(Stack[-1])
0x6b: Pop(0)
0x6c: Pop(0); Push((bool) Stack[-1] == 0)
0x6d: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x6e: @ SetDeathState()
0x6f: Pop(0)
0x70: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x71: PushEmpty(bool, object, float)
0x72: Stack[-8] = Stack[-2]
0x73: Stack[-1] = (float) -0.30000001192092896
0x74: Call2 0x123

0x75: Pop(3)
0x76: Push("death") // @poff=102
0x77: Push([0.0, 40.0, 0.0])
0x78: @ PlayGlobalSound(Stack[-2], Stack[-1])
0x79: Pop(2)
0x7a: Push("all") // @poff=58
0x7b: Push("agony_die") // @poff=114
0x7c: @ PlayAnimation(Stack[-2], Stack[-1])
0x7d: Pop(2)
0x7e: @ WaitForAnimEnd()
0x7f: Pop(0)
0x80: Push("all") // @poff=58
0x81: Push("agony_die") // @poff=114
0x82: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x83: Pop(2)
0x84: Return(); Pop(4)

0x85: PushEmpty()
0x86: Call2 0x184

0x87: Pop(0)
0x88: PushEmpty()
0x89: Call2 0xa9

0x8a: Pop(0)
0x8b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x8c: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8d: PushEmpty(object)
0x8e: Call2 0x10d

0x8f: Pop(0)
0x90: @ RemoveActor(Stack[-1])
0x91: Pop(1)
0x92: PushEmpty()
0x93: Push(-0, 0); TaskCall(0)
0x94: Call2 0x0

0x95: Pop(-0, 0); TaskReturn
0x96: Pop(0)
0x97: Return(); Pop(0)

0x98: PushEmpty(float, float)
0x99: Push("agony") // @poff=46
0x9a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9b: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x9c: Push("agony") // @poff=46
0x9d: @ GetProperty(Stack[-1], Stack[-2])
0x9e: Pop(1)
0x9f: Push((float)0.0010000000474974513)
0xa0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xa1: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa2: Stack[0 + Tasks[-1].StackPointer] = (int)1
0xa3: PushEmpty(object, string)
0xa4: Stack[-6] = Stack[-2]
0xa5: Stack[-5] = Stack[-1]
0xa6: Call2 0x15c

0xa7: Pop(2)
0xa8: Return(); Pop(2)

0xa9: @ StopAnimation()
0xaa: Pop(0)
0xab: Return(); Pop(0)

0xac: PushEmpty(bool, bool)
0xad: Push("HasProperty") // @poff=134
0xae: Push((int) 2)
0xaf: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xb0: Pop(1); Push((bool) Stack[-1] == 0)
0xb1: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb2: Stack[-5] = (bool) 0
0xb3: Return(); Pop(2)

0xb4: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=158
0xb5: Pop(0)
0xb6: Stack[-1] = Stack[-5]
0xb7: Return(); Pop(2)

0xb8: PushEmpty(float, float)
0xb9: PushEmpty(bool, object, string)
0xba: Stack[-10] = Stack[-2]
0xbb: Stack[-9] = Stack[-1]
0xbc: Call2 0xac

0xbd: Pop(2)
0xbe: Pop(1); Push((bool) Stack[-1] == 0)
0xbf: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc0: Stack[-8] = (bool) 0
0xc1: Return(); Pop(2)

0xc2: @@ GetProperty(Stack[-6], Stack[-1]); Obj=7 // @poff=170
0xc3: Pop(0)
0xc4: PushEmpty(float, float, float, float)
0xc5: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0xc6: Stack[-8] = Stack[-2]
0xc7: Stack[-7] = Stack[-1]
0xc8: Call2 0x113

0xc9: Pop(3)
0xca: @@ SetProperty(Stack[-7], Stack[-1]); Obj=8 // @poff=182
0xcb: Pop(1)
0xcc: Stack[-8] = (bool) 1
0xcd: Return(); Pop(2)

0xce: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xcf: Pop(0); PushNull((bool) Stack[-15] == 0)
0xd0: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd1: Return(); Pop(14)

0xd2: @ IsDead(Stack[-7])
0xd3: Pop(0)
0xd4: Push(Stack[-7])
0xd5: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd6: Return(); Pop(14)

0xd7: @ GetSecondaryAnimationType(Stack[-6])
0xd8: Pop(0)
0xd9: Push((int) 0)
0xda: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xdc: Return(); Pop(14)

0xdd: @@ GetPosition(Stack[-5]); Obj=15 // @poff=194
0xde: Pop(0)
0xdf: @ GetPosition(Stack[-4])
0xe0: Pop(0)
0xe1: @ GetDirection(Stack[-3])
0xe2: Pop(0)
0xe3: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xe4: Push(CvectorIndex(Stack[-2], 0))
0xe5: Push(CvectorIndex(Stack[-4], 0))
0xe6: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe7: Push(CvectorIndex(Stack[-3], 2))
0xe8: Push(CvectorIndex(Stack[-5], 2))
0xe9: Pop(2); Push(Stack[-2] * Stack[-1]);
0xea: Pop(2); Push(Stack[-2] + Stack[-1]);
0xeb: Push((int) 0)
0xec: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xee: Stack[-1] = "fhit" // @poff=206
0xef: GOTO 0xf1

0xf0: Stack[-1] = "bhit" // @poff=216
0xf1: Push("hit_react") // @poff=226
0xf2: Push("1") // @poff=246
0xf3: Pop(1); Push(Stack[-3] + Stack[-1]);
0xf4: Push("2") // @poff=20
0xf5: Pop(1); Push(Stack[-4] + Stack[-1]);
0xf6: Push((int) -10)
0xf7: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf8: Pop(4)
0xf9: Return(); Pop(14)

0xfa: PushEmpty(object, object, object, object)
0xfb: @ GetScene(Stack[-2])
0xfc: Pop(0)
0xfd: Push("scripted") // @poff=250
0xfe: Push("blood_dir.xml") // @poff=268
0xff: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x100: Pop(2)
0x101: PushEmpty(object)
0x102: Stack[-10] = Stack[-1]
0x103: Call2 0xce

0x104: Pop(1)
0x105: Return(); Pop(4)

0x106: Stack[-1] = 0
0x107: Stack[-2] = 0
0x108: PushEmpty(bool, bool)
0x109: @ IsLoaded(Stack[-1])
0x10a: Pop(0)
0x10b: Stack[-1] = Stack[-3]
0x10c: Return(); Pop(2)

0x10d: PushEmpty(object, object)
0x10e: @ self(Stack[-1])
0x10f: Pop(0)
0x110: Stack[-1] = Stack[-3]
0x111: Return(); Pop(2)

0x112: Stack[-1] = 0
0x113: PushEmpty()
0x114: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x115: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x116: Stack[-2] = Stack[-4]
0x117: Return(); Pop(0)

0x118: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x11a: Stack[-1] = Stack[-4]
0x11b: Return(); Pop(0)

0x11c: Stack[-3] = Stack[-4]
0x11d: Return(); Pop(0)

0x11e: PushEmpty(float, float)
0x11f: @ rand(Stack[-1])
0x120: Pop(0)
0x121: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0x122: Return(); Pop(2)

0x123: PushEmpty()
0x124: Pop(0); Push((bool) Stack[-2] == 0)
0x125: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x126: Stack[-3] = (bool) 0
0x127: Return(); Pop(0)

0x128: Push((int) 0)
0x129: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12b: Push((int) 8)
0x12c: @ SendWorldWndMessage(Stack[-1])
0x12d: Pop(1)
0x12e: GOTO 0x138

0x12f: Push((int) 0)
0x130: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x132: Push((int) 9)
0x133: @ SendWorldWndMessage(Stack[-1])
0x134: Pop(1)
0x135: GOTO 0x138

0x136: Stack[-3] = (bool) 0
0x137: Return(); Pop(0)

0x138: PushEmpty(float)
0x139: Stack[-2] = Stack[-1]
0x13a: Call2 0x146

0x13b: Pop(1)
0x13c: PushEmpty(bool, object, string, float, float, float)
0x13d: Stack[-8] = Stack[-5]
0x13e: Stack[-4] = "reputation" // @poff=296
0x13f: Stack[-7] = Stack[-3]
0x140: Stack[-2] = (int) 0
0x141: Stack[-1] = (int) 1
0x142: Call2 0xb8

0x143: Pop(6)
0x144: Stack[-3] = (bool) 1
0x145: Return(); Pop(0)

0x146: PushEmpty(object, object)
0x147: @ CreateFloatVector(Stack[-1])
0x148: Pop(0)
0x149: @@ add(Stack[-3]); Obj=1 // @poff=318
0x14a: Pop(0)
0x14b: Push((int) 16)
0x14c: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x14d: Pop(1)
0x14e: Return(); Pop(2)

0x14f: Stack[-1] = 0
0x150: PushEmpty(object, object)
0x151: @ FindActor(Stack[-1], Stack[-4])
0x152: Pop(0)
0x153: Pop(0); PushNull((bool) Stack[-1] == 0)
0x154: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x155: Stack[-5] = (bool) 0
0x156: Return(); Pop(2)

0x157: @ Trigger(Stack[-1], Stack[-3])
0x158: Pop(0)
0x159: Stack[-5] = (bool) 1
0x15a: Return(); Pop(2)

0x15b: Stack[-1] = 0
0x15c: PushEmpty(float, float)
0x15d: Push("health") // @poff=322
0x15e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x160: Push("health") // @poff=322
0x161: @ GetProperty(Stack[-1], Stack[-2])
0x162: Pop(1)
0x163: Push((int) 0)
0x164: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x166: @ SignalDeath(Stack[-4])
0x167: Pop(0)
0x168: Return(); Pop(2)

0x169: PushEmpty()
0x16a: PushEmpty(object, int, float, cvector, cvector)
0x16b: Stack[-11] = Stack[-5]
0x16c: Stack[-10] = Stack[-4]
0x16d: Stack[-9] = Stack[-3]
0x16e: Stack[-7] = Stack[-2]
0x16f: Stack[-6] = Stack[-1]
0x170: Call2 0xfa

0x171: Pop(5)
0x172: Return(); Pop(0)

0x173: PushEmpty(bool, bool)
0x174: Push("cleanup") // @poff=336
0x175: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x177: Push(GlobalVars[0])
0x178: Stack[-1] = (bool) 1
0x179: GlobalVars[0] = Stack[-1]; Pop(1)
0x17a: @ IsLoaded(Stack[-1])
0x17b: Pop(0)
0x17c: Pop(0); Push((bool) Stack[-1] == 0)
0x17d: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x17e: PushEmpty(object)
0x17f: Call2 0x10d

0x180: Pop(0)
0x181: @ RemoveActor(Stack[-1])
0x182: Pop(1)
0x183: Return(); Pop(2)

0x184: Push(GlobalVars[0])
0x185: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x186: PushEmpty(object)
0x187: Call2 0x10d

0x188: Pop(0)
0x189: @ RemoveActor(Stack[-1])
0x18a: Pop(1)
0x18b: Return(); Pop(0)

