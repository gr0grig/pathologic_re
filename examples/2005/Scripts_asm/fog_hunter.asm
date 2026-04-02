GlobalVarCount = 1
	G_VAR_0 int Region

Strings:
	W:TFogAttack
	A:GetPFPosition
	W:Watching
	W:Leaving
	W:Attacking
	W:breath
	W:attack
	W:fog hunter inited
	W:fog hunter following
	A:GetPosition
	W:walk
	W:run
	W:fog hunter idling
	W:player
	W:HasProperty
	A:HasProperty
	A:GetProperty
	A:SetProperty
	W:disease
	W:armor_disease
	W:immunity
	A:IsDead
	W:IsDead
	A:GetScene
	W:noaccess
	A:add
	W:GetCurrentRegion
	A:GetCurrentRegion
// @pool_raw:540046006f006700410074007400610063006b0000004765745046506f736974696f6e005700610074006300680069006e00670000004c0065006100760069006e0067000000410074007400610063006b0069006e00670000006200720065006100740068000000610074007400610063006b00000066006f0067002000680075006e00740065007200200069006e006900740065006400000066006f0067002000680075006e00740065007200200066006f006c006c006f00770069006e0067000000476574506f736974696f6e00770061006c006b000000720075006e00000066006f0067002000680075006e007400650072002000690064006c0069006e006700000070006c0061007900650072000000480061007300500072006f0070006500720074007900000048617350726f70657274790047657450726f70657274790053657450726f70657274790064006900730065006100730065000000610072006d006f0072005f006400690073006500610073006500000069006d006d0075006e0069007400790000004973446561640049007300440065006100640000004765745363656e65006e006f00610063006300650073007300000061646400470065007400430075007200720065006e00740052006500670069006f006e00000047657443757272656e74526567696f6e00

Import:
	Trace (1 args)
	FogLinear (2 args)
	GetPosition (1 args)
	MovePoint (2 args)
	Sleep (1 args)
	KillTimer (1 args)
	SetTimer (2 args)
	GetHeight (1 args)
	PlayGlobalSound (2 args)
	PlaySound (1 args)
	ReportHit (4 args)
	SetVisirVisibility (1 args)
	RemoveActor (1 args)
	PutOnGrid (0 args)
	rand (2 args)
	GetRandomPFPointInCircle (4 args)
	RotatePath (2 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	RequestClearPath (1 args)
	Stop (0 args)
	StopGroup0 (0 args)
	FindShiftedPathTo (2 args)
	FindPathTo (2 args)
	FollowPath (5 args)
	Sleep (2 args)
	FindActor (2 args)
	IsPlayerActor (2 args)
	GetScene (1 args)
	self (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	ResetAAS (0 args)
	GetActiveScene (1 args)

RunOp = 0xd3
RunTask = 1

GlobalTasks: 
	GTASK_0 Vars = (object, bool, cvector, cvector) Params = 1
		EVENT_7 Op = 0xbc Vars = (int)
	GTASK_1  Params = 0
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_7 Op = 0xe8 Vars = (int)
		EVENT_1 Op = 0xfc Vars = (object)
		EVENT_3 Op = 0x10a Vars = (object)
		EVENT_10 Op = 0x158 Vars = (object)
		EVENT_28 Op = 0x15c Vars = ()
		EVENT_41 Op = 0x166 Vars = (object)
	GTASK_3 Vars = (bool, object) Params = 0
		EVENT_7 Op = 0x190 Vars = (int)
		EVENT_1 Op = 0x1a9 Vars = (object)
		EVENT_3 Op = 0x1b7 Vars = (object)
		EVENT_10 Op = 0x244 Vars = (object)
		EVENT_41 Op = 0x24f Vars = (object)
	GTASK_4  Params = 0
		EVENT_7 Op = 0x27e Vars = (int)

Events:
EVENT_41 Op = 0x3d0 Vars = (object)

0x0: PushEmpty(cvector, cvector, float, float, bool, cvector, float, cvector, cvector, float, float, cvector, cvector, float, cvector, cvector, float, float, bool, cvector, float, cvector, cvector, float, float, cvector, cvector, float)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-29]
0x2: Push("TFogAttack") // @poff=0
0x3: @ Trace(Stack[-1])
0x4: Pop(1)
0x5: Push((float)0.800000011920929)
0x6: Push((float)2.0)
0x7: @ FogLinear(Stack[-2], Stack[-1])
0x8: Pop(2)
0x9: Stack[-12] = (int) 0
0xa: @ GetPosition(Stack[-14])
0xb: Pop(0)
0xc: @@ GetPFPosition(Stack[-13]); Obj=29 // @poff=22
0xd: Pop(0)
0xe: Stack[-10] = (bool) 1
0xf: Push((bool) 1)
0x10: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x11: Push("Watching") // @poff=36
0x12: @ Trace(Stack[-1])
0x13: Pop(1)
0x14: @@ GetPFPosition(Stack[-13]); Obj=29 // @poff=22
0x15: Pop(0)
0x16: @ GetPosition(Stack[-9])
0x17: Pop(0)
0x18: PushEmpty(float, cvector, cvector)
0x19: Stack[-12] = Stack[-2]
0x1a: Stack[-16] = Stack[-1]
0x1b: Call2 0x35f

0x1c: Stack[-3] = Stack[-11]
0x1d: Pop(3)
0x1e: Push((float)160000.0)
0x1f: Pop(1); Push((bool) Stack[-9] > Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x21: PushEmpty(cvector, cvector)
0x22: Stack[-1] = Stack[-15] - Stack[-11]; Pop(0);
0x23: Call2 0x350

0x24: Stack[-2] = Stack[-8]
0x25: Pop(2)
0x26: Pop(0); Push(Sqrt(Stack[-8]))
0x27: Push((float)360.0)
0x28: Stack[-7] = Stack[-2] - Stack[-1]; Pop(2);
0x29: Pop(0); Push(Stack[-6] * Stack[-5]);
0x2a: Stack[-8] = Stack[-10] + Stack[-1]; Pop(1);
0x2b: Push(Stack[-10])
0x2c: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x2d: Push((int) 700)
0x2e: @ MovePoint(Stack[-8], Stack[-1])
0x2f: Pop(1)
0x30: Push((float)700.0)
0x31: Stack[-12] = Stack[-6] / Stack[-1]; Pop(1);
0x32: GOTO 0x38

0x33: Push((int) 220)
0x34: @ MovePoint(Stack[-8], Stack[-1])
0x35: Pop(1)
0x36: Push((float)100.0)
0x37: Stack[-12] = Stack[-6] / Stack[-1]; Pop(1);
0x38: GOTO 0x3d

0x39: Push((float)1.0)
0x3a: @ Sleep(Stack[-1])
0x3b: Pop(1)
0x3c: Stack[-11] = (float) 1.0
0x3d: PushEmpty(bool, object)
0x3e: Stack[-31] = Stack[-1]
0x3f: Call2 0x332

0x40: Pop(1)
0x41: Pop(1); Push((bool) Stack[-1] == 0)
0x42: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x43: Pop(0); Push((bool) Stack[-10] == 0)
0x44: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x45: Push((int) 21)
0x46: @ KillTimer(Stack[-1])
0x47: Pop(1)
0x48: Push((int) 0)
0x49: Push((float)0.5)
0x4a: @ FogLinear(Stack[-2], Stack[-1])
0x4b: Pop(2)
0x4c: Push((float)0.5)
0x4d: @ Sleep(Stack[-1])
0x4e: Pop(1)
0x4f: Return(); Pop(28)

0x50: Push(Stack[-10])
0x51: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x52: Stack[-10] = (bool) 0
0x53: @@ GetPFPosition(Stack[-2]T); Obj=29 // @poff=22
0x54: Pop(0)
0x55: Push((int) 21)
0x56: Push((int) 1)
0x57: @ SetTimer(Stack[-2], Stack[-1])
0x58: Pop(2)
0x59: GOTO 0x5d

0x5a: Push( Stack[1 + Tasks[-1].StackPointer] )
0x5b: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5c: GOTO 0x73

0x5d: Stack[-12] = Stack[-12] + Stack[-11]; Pop(0);
0x5e: Push((float)20.0)
0x5f: Pop(1); Push((bool) Stack[-13] >= Stack[-1])
0x60: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x61: Push("Leaving") // @poff=54
0x62: @ Trace(Stack[-1])
0x63: Pop(1)
0x64: Push((int) 21)
0x65: @ KillTimer(Stack[-1])
0x66: Pop(1)
0x67: Push((int) 0)
0x68: Push((float)1.0)
0x69: @ FogLinear(Stack[-2], Stack[-1])
0x6a: Pop(2)
0x6b: Push((int) 900)
0x6c: @ MovePoint(Stack[-15], Stack[-1])
0x6d: Pop(1)
0x6e: Push((int) 5)
0x6f: @ Sleep(Stack[-1])
0x70: Pop(1)
0x71: Return(); Pop(28)

0x72: GOTO 0xf

0x73: Push((int) 21)
0x74: @ KillTimer(Stack[-1])
0x75: Pop(1)
0x76: Push("Attacking") // @poff=70
0x77: @ Trace(Stack[-1])
0x78: Pop(1)
0x79: Push((int) 1)
0x7a: Push((float)0.5)
0x7b: @ FogLinear(Stack[-2], Stack[-1])
0x7c: Pop(2)
0x7d: @ GetHeight(Stack[-4])
0x7e: Pop(0)
0x7f: Stack[-3] = [0.0, 0.0, 0.0]
0x80: Push(CvectorIndex(Stack[-3], 1))
0x81: Stack[-5] = Stack[-1]
0x82: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x83: Push("breath") // @poff=90
0x84: @ PlayGlobalSound(Stack[-1], Stack[-4])
0x85: Pop(1)
0x86: @@ GetPFPosition(Stack[-2]); Obj=29 // @poff=22
0x87: Pop(0)
0x88: Push((int) 500)
0x89: @ MovePoint(Stack[-3], Stack[-1])
0x8a: Pop(1)
0x8b: PushEmpty(bool, object)
0x8c: Stack[-31] = Stack[-1]
0x8d: Call2 0x332

0x8e: Pop(1)
0x8f: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0x90: PushEmpty(float, cvector, cvector)
0x91: PushEmpty(cvector)
0x92: Call2 0x284

0x93: Stack[-1] = Stack[-3]
0x94: Pop(1)
0x95: PushEmpty(cvector, object)
0x96: Stack[-34] = Stack[-1]
0x97: Call2 0x289

0x98: Stack[-2] = Stack[-3]
0x99: Pop(2)
0x9a: Call2 0x35f

0x9b: Pop(2)
0x9c: Push((float)90000.0)
0x9d: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0x9f: Push("attack") // @poff=104
0xa0: @ PlaySound(Stack[-1])
0xa1: Pop(1)
0xa2: PushEmpty(float, object, float)
0xa3: Stack[-32] = Stack[-2]
0xa4: Stack[-1] = (float) 0.20000000298023224
0xa5: Call2 0x2c4

0xa6: Stack[-3] = Stack[-4]
0xa7: Pop(3)
0xa8: Push((int) 5)
0xa9: Push((float)0.20000000298023224)
0xaa: @ ReportHit(Stack[-31], Stack[-2], Stack[-3], Stack[-1])
0xab: Pop(2)
0xac: Push((bool) 0)
0xad: @ SetVisirVisibility(Stack[-1])
0xae: Pop(1)
0xaf: Push((int) 0)
0xb0: Push((int) 1)
0xb1: @ FogLinear(Stack[-2], Stack[-1])
0xb2: Pop(2)
0xb3: Push((int) 5)
0xb4: @ Sleep(Stack[-1])
0xb5: Pop(1)
0xb6: PushEmpty(object)
0xb7: Call2 0x34a

0xb8: Pop(0)
0xb9: @ RemoveActor(Stack[-1])
0xba: Pop(1)
0xbb: Return(); Pop(28)

0xbc: PushEmpty()
0xbd: Push((int) 21)
0xbe: Pop(1); Push((bool) Stack[-1] == Stack[-2])
0xbf: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xc0: Stack[3 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer]
0xc1: Push(CvectorIndex(Stack[3 + Tasks[-1].StackPointer], 1))
0xc2: Stack[-1] = (int) 0
0xc3: CvectorIndex(Stack[3 + Tasks[-1].StackPointer], 1) = Stack[-1];
0xc4: @@@ GetPFPosition(Stack[-2]T); Obj=0 // @poff=22
0xc5: Pop(0)
0xc6: Push(CvectorIndex(Stack[2 + Tasks[-1].StackPointer], 1))
0xc7: Stack[-1] = (int) 0
0xc8: CvectorIndex(Stack[2 + Tasks[-1].StackPointer], 1) = Stack[-1];
0xc9: PushEmpty(float, cvector, cvector)
0xca: Stack[-2] = Stack[2 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0xcc: Call2 0x35a

0xcd: Pop(2)
0xce: Push((float)220.0)
0xcf: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd1: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xd2: Return(); Pop(0)

0xd3: Push("fog hunter inited") // @poff=118
0xd4: @ Trace(Stack[-1])
0xd5: Pop(1)
0xd6: @ PutOnGrid()
0xd7: Pop(0)
0xd8: Push((int) 20)
0xd9: Push((int) 1)
0xda: @ SetTimer(Stack[-2], Stack[-1])
0xdb: Pop(2)
0xdc: PushEmpty()
0xdd: Push(-0, 2); TaskCall(2)
0xde: Call2 0x118

0xdf: Pop(-0, 2); TaskReturn
0xe0: Pop(0)
0xe1: PushEmpty()
0xe2: Push(-0, 2); TaskCall(3)
0xe3: Call2 0x177

0xe4: Pop(-0, 2); TaskReturn
0xe5: Pop(0)
0xe6: GOTO 0xdc

0xe7: Return(); Pop(0)

0xe8: PushEmpty()
0xe9: PushEmpty(int)
0xea: Stack[-2] = Stack[-1]
0xeb: Call2 0x3a2

0xec: Pop(1)
0xed: Push((int) 20)
0xee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf0: PushEmpty(bool, object)
0xf1: PushEmpty(object)
0xf2: Call2 0x296

0xf3: Stack[-1] = Stack[-2]
0xf4: Pop(1)
0xf5: Call2 0x3a9

0xf6: Pop(1)
0xf7: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf8: PushEmpty()
0xf9: Call2 0x15f

0xfa: Pop(0)
0xfb: Return(); Pop(0)

0xfc: PushEmpty()
0xfd: PushEmpty(bool, object)
0xfe: Stack[-3] = Stack[-1]
0xff: Call2 0x378

0x100: Pop(1)
0x101: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x102: PushEmpty()
0x103: Call2 0x15f

0x104: Pop(0)
0x105: PushEmpty(object)
0x106: Stack[-2] = Stack[-1]
0x107: Call2 0x392

0x108: Pop(1)
0x109: Return(); Pop(0)

0x10a: PushEmpty()
0x10b: PushEmpty(bool, object)
0x10c: Stack[-3] = Stack[-1]
0x10d: Call2 0x385

0x10e: Pop(1)
0x10f: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x110: PushEmpty()
0x111: Call2 0x15f

0x112: Pop(0)
0x113: PushEmpty(object)
0x114: Stack[-2] = Stack[-1]
0x115: Call2 0x39a

0x116: Pop(1)
0x117: Return(); Pop(0)

0x118: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x119: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x11a: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x11b: Push((float)0.5)
0x11c: @ rand(Stack[-7], Stack[-1])
0x11d: Pop(1)
0x11e: @ Sleep(Stack[-6])
0x11f: Pop(0)
0x120: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x121: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x122: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x123: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x124: @ GetPosition(Stack[-4])
0x125: Pop(0)
0x126: PushEmpty(float)
0x127: Call2 0x153

0x128: Pop(0)
0x129: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x12a: Pop(1)
0x12b: Push(Stack[-3])
0x12c: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12d: GOTO 0x132

0x12e: Push((int) 1)
0x12f: @ Sleep(Stack[-1])
0x130: Pop(1)
0x131: GOTO 0x124

0x132: GOTO 0x134

0x133: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x134: PushEmpty(object, cvector)
0x135: Stack[-7] = Stack[-1]
0x136: Call2 0x171

0x137: Stack[-2] = Stack[-4]
0x138: Pop(2)
0x139: Pop(0); Push(( Stack[-2] != 0 )
0x13a: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x13b: @ RotatePath(Stack[-2], Stack[-1])
0x13c: Pop(0)
0x13d: Push(Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x13f: PushEmpty(bool)
0x140: Call2 0x16f

0x141: Pop(0)
0x142: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x143: Pop(1)
0x144: Stack[-2] = 0
0x145: Push(Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x147: PushEmpty()
0x148: Push(-0, 0); TaskCall(4)
0x149: Call2 0x25c

0x14a: Pop(-0, 0); TaskReturn
0x14b: Pop(0)
0x14c: GOTO 0x150

0x14d: Push((int) 1)
0x14e: @ Sleep(Stack[-1])
0x14f: Pop(1)
0x150: Stack[-2] = 0
0x151: GOTO 0x120

0x152: Return(); Pop(12)

0x153: PushEmpty(float, float)
0x154: @ GetCameraFarDistance(Stack[-1])
0x155: Pop(0)
0x156: Stack[-1] = Stack[-3]
0x157: Return(); Pop(2)

0x158: PushEmpty()
0x159: @ RequestClearPath(Stack[-1])
0x15a: Pop(0)
0x15b: Return(); Pop(0)

0x15c: @ Stop()
0x15d: Pop(0)
0x15e: Return(); Pop(0)

0x15f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x160: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x161: @ Stop()
0x162: Pop(0)
0x163: @ StopGroup0()
0x164: Pop(0)
0x165: Return(); Pop(0)

0x166: PushEmpty()
0x167: PushEmpty()
0x168: Call2 0x15f

0x169: Pop(0)
0x16a: PushEmpty(object)
0x16b: Stack[-2] = Stack[-1]
0x16c: Call2 0x3d0

0x16d: Pop(1)
0x16e: Return(); Pop(0)

0x16f: Stack[-1] = (bool) 0
0x170: Return(); Pop(0)

0x171: PushEmpty(object, object)
0x172: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x173: Pop(0)
0x174: Stack[-1] = Stack[-4]
0x175: Return(); Pop(2)

0x176: Stack[-1] = 0
0x177: PushEmpty(object, object)
0x178: Push("fog hunter following") // @poff=154
0x179: @ Trace(Stack[-1])
0x17a: Pop(1)
0x17b: PushEmpty(object)
0x17c: Call2 0x296

0x17d: Stack[-1] = Stack[-2]
0x17e: Pop(1)
0x17f: PushEmpty(bool, object)
0x180: Stack[-3] = Stack[-1]
0x181: Call2 0x3a9

0x182: Pop(1)
0x183: Pop(1); Push((bool) Stack[-1] == 0)
0x184: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x185: Return(); Pop(2)

0x186: PushEmpty(bool, object, float, float, bool, bool)
0x187: Stack[-7] = Stack[-5]
0x188: Stack[-4] = (int) 100
0x189: Stack[-3] = (int) 0
0x18a: Stack[-2] = (bool) 0
0x18b: Stack[-1] = (bool) 0
0x18c: Call2 0x1cc

0x18d: Pop(6)
0x18e: Return(); Pop(2)

0x18f: Stack[-1] = 0
0x190: PushEmpty()
0x191: PushEmpty(int)
0x192: Stack[-2] = Stack[-1]
0x193: Call2 0x3a2

0x194: Pop(1)
0x195: PushEmpty(int)
0x196: Stack[-2] = Stack[-1]
0x197: Call2 0x232

0x198: Pop(1)
0x199: Push((int) 20)
0x19a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x19c: PushEmpty(bool, object)
0x19d: PushEmpty(object)
0x19e: Call2 0x296

0x19f: Stack[-1] = Stack[-2]
0x1a0: Pop(1)
0x1a1: Call2 0x3a9

0x1a2: Pop(1)
0x1a3: Pop(1); Push((bool) Stack[-1] == 0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a5: PushEmpty()
0x1a6: Call2 0x248

0x1a7: Pop(0)
0x1a8: Return(); Pop(0)

0x1a9: PushEmpty()
0x1aa: PushEmpty(bool, object)
0x1ab: Stack[-3] = Stack[-1]
0x1ac: Call2 0x378

0x1ad: Pop(1)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1af: PushEmpty()
0x1b0: Call2 0x248

0x1b1: Pop(0)
0x1b2: PushEmpty(object)
0x1b3: Stack[-2] = Stack[-1]
0x1b4: Call2 0x392

0x1b5: Pop(1)
0x1b6: Return(); Pop(0)

0x1b7: PushEmpty()
0x1b8: PushEmpty(bool, object)
0x1b9: Stack[-3] = Stack[-1]
0x1ba: Call2 0x385

0x1bb: Pop(1)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1bd: PushEmpty()
0x1be: Call2 0x248

0x1bf: Pop(0)
0x1c0: PushEmpty(object)
0x1c1: Stack[-2] = Stack[-1]
0x1c2: Call2 0x39a

0x1c3: Pop(1)
0x1c4: Return(); Pop(0)

0x1c5: PushEmpty()
0x1c6: PushEmpty(bool, object)
0x1c7: Stack[-3] = Stack[-1]
0x1c8: Call2 0x3a9

0x1c9: Stack[-2] = Stack[-4]
0x1ca: Pop(2)
0x1cb: Return(); Pop(0)

0x1cc: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x1cd: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1ce: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x1cf: Stack[-17] = Stack[-7]
0x1d0: PushEmpty(bool, object)
0x1d1: Stack[-23] = Stack[-1]
0x1d2: Call2 0x1c5

0x1d3: Pop(1)
0x1d4: Pop(1); Push((bool) Stack[-1] == 0)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d6: Stack[-22] = (bool) 0
0x1d7: Return(); Pop(16)

0x1d8: @@ GetPosition(Stack[-5]); Obj=21 // @poff=196
0x1d9: Pop(0)
0x1da: @ GetPosition(Stack[-4])
0x1db: Pop(0)
0x1dc: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x1dd: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x1de: PushEmpty(bool)
0x1df: Stack[-1] = (bool) 0
0x1e0: Push((int) 0)
0x1e1: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e3: Pop(0); Push(Stack[-20] * Stack[-20]);
0x1e4: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e6: Stack[-1] = (bool) 1
0x1e7: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1e8: @ Stop()
0x1e9: Pop(0)
0x1ea: Stack[-22] = (bool) 0
0x1eb: Return(); Pop(16)

0x1ec: Pop(0); Push(Stack[-20] * Stack[-20]);
0x1ed: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x1ef: @@ GetPFPosition(Stack[-5]); Obj=21 // @poff=22
0x1f0: Pop(0)
0x1f1: @ FindPathTo(Stack[-1], Stack[-5])
0x1f2: Pop(0)
0x1f3: Pop(0); Push(( Stack[-1] != 0 )
0x1f4: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f5: Stack[-1] = Stack[-6]
0x1f6: Stack[-1] = 0
0x1f7: Pop(0); Push(( Stack[-6] != 0 )
0x1f8: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x1f9: Push(Stack[-7])
0x1fa: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fb: Stack[-7] = (bool) 0
0x1fc: @ RotatePath(Stack[-6], Stack[-8])
0x1fd: Pop(0)
0x1fe: Pop(0); Push((bool) Stack[-8] == 0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x200: GOTO 0x230

0x201: Push((int) 0)
0x202: Push((float)0.30000001192092896)
0x203: @ SetTimer(Stack[-2], Stack[-1])
0x204: Pop(2)
0x205: PushEmpty(string)
0x206: Call2 0x258

0x207: Pop(0)
0x208: PushEmpty(string)
0x209: Call2 0x25a

0x20a: Pop(0)
0x20b: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x20c: Pop(2)
0x20d: Pop(0); Push((bool) Stack[-8] == 0)
0x20e: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x20f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x210: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x211: Stack[-6] = 0
0x212: GOTO 0x230

0x213: GOTO 0x215

0x214: GOTO 0x22f

0x215: GOTO 0x217

0x216: Stack[-6] = 0
0x217: GOTO 0x228

0x218: Push((int) 0)
0x219: @ KillTimer(Stack[-1])
0x21a: Pop(1)
0x21b: Push((float)0.5)
0x21c: @ Sleep(Stack[-1], Stack[-9])
0x21d: Pop(1)
0x21e: Pop(0); Push((bool) Stack[-8] == 0)
0x21f: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x220: Push( Stack[0 + Tasks[-1].StackPointer] )
0x221: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x222: Stack[-6] = 0
0x223: GOTO 0x230

0x224: Push((int) 0)
0x225: Push((float)0.30000001192092896)
0x226: @ SetTimer(Stack[-2], Stack[-1])
0x227: Pop(2)
0x228: Stack[-1] = 0
0x229: GOTO 0x22e

0x22a: Push((int) 0)
0x22b: @ KillTimer(Stack[-1])
0x22c: Pop(1)
0x22d: GOTO 0x230

0x22e: Stack[-6] = 0
0x22f: GOTO 0x1d0

0x230: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x231: Return(); Pop(16)

0x232: PushEmpty()
0x233: Push((int) 0)
0x234: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x235: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x236: Return(); Pop(0)

0x237: PushEmpty(bool, object)
0x238: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x239: Call2 0x1c5

0x23a: Pop(1)
0x23b: Pop(1); Push((bool) Stack[-1] == 0)
0x23c: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x23d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x23e: Push((int) 0)
0x23f: @ KillTimer(Stack[-1])
0x240: Pop(1)
0x241: @ Stop()
0x242: Pop(0)
0x243: Return(); Pop(0)

0x244: PushEmpty()
0x245: @ RequestClearPath(Stack[-1])
0x246: Pop(0)
0x247: Return(); Pop(0)

0x248: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x249: Push((int) 0)
0x24a: @ KillTimer(Stack[-1])
0x24b: Pop(1)
0x24c: @ Stop()
0x24d: Pop(0)
0x24e: Return(); Pop(0)

0x24f: PushEmpty()
0x250: PushEmpty()
0x251: Call2 0x248

0x252: Pop(0)
0x253: PushEmpty(object)
0x254: Stack[-2] = Stack[-1]
0x255: Call2 0x3d0

0x256: Pop(1)
0x257: Return(); Pop(0)

0x258: Stack[-1] = "walk" // @poff=208
0x259: Return(); Pop(0)

0x25a: Stack[-1] = "run" // @poff=218
0x25b: Return(); Pop(0)

0x25c: PushEmpty(float, cvector, cvector, bool, float, cvector, cvector, bool)
0x25d: Push("fog hunter idling") // @poff=226
0x25e: @ Trace(Stack[-1])
0x25f: Pop(1)
0x260: Push((int) 2)
0x261: @ rand(Stack[-5], Stack[-1])
0x262: Pop(1)
0x263: Push((int) 1)
0x264: Push((int) 1)
0x265: @ FogLinear(Stack[-2], Stack[-1])
0x266: Pop(2)
0x267: Push((int) 1)
0x268: @ Sleep(Stack[-1])
0x269: Pop(1)
0x26a: @ Sleep(Stack[-4])
0x26b: Pop(0)
0x26c: @ GetPosition(Stack[-3])
0x26d: Pop(0)
0x26e: Push((int) 1000)
0x26f: @ GetRandomPFPointInCircle(Stack[-3], Stack[-4], Stack[-1], Stack[-2])
0x270: Pop(1)
0x271: Push((int) 0)
0x272: Push((float)0.5)
0x273: @ FogLinear(Stack[-2], Stack[-1])
0x274: Pop(2)
0x275: Push(Stack[-1])
0x276: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x277: Push((int) 500)
0x278: @ MovePoint(Stack[-3], Stack[-1])
0x279: Pop(1)
0x27a: Push((int) 1)
0x27b: @ Sleep(Stack[-1])
0x27c: Pop(1)
0x27d: Return(); Pop(8)

0x27e: PushEmpty()
0x27f: PushEmpty(int)
0x280: Stack[-2] = Stack[-1]
0x281: Call2 0x3a2

0x282: Pop(1)
0x283: Return(); Pop(0)

0x284: PushEmpty(cvector, cvector)
0x285: @ GetPosition(Stack[-1])
0x286: Pop(0)
0x287: Stack[-1] = Stack[-3]
0x288: Return(); Pop(2)

0x289: PushEmpty(cvector, cvector)
0x28a: @@ GetPosition(Stack[-1]); Obj=3 // @poff=196
0x28b: Pop(0)
0x28c: Stack[-1] = Stack[-4]
0x28d: Return(); Pop(2)

0x28e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x28f: @ GetPosition(Stack[-3])
0x290: Pop(0)
0x291: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x292: Pop(0)
0x293: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x294: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x295: Return(); Pop(6)

0x296: PushEmpty(object, object)
0x297: Push("player") // @poff=262
0x298: @ FindActor(Stack[-2], Stack[-1])
0x299: Pop(1)
0x29a: Stack[-1] = Stack[-3]
0x29b: Return(); Pop(2)

0x29c: Stack[-1] = 0
0x29d: PushEmpty(bool, bool)
0x29e: @ IsPlayerActor(Stack[-3], Stack[-1])
0x29f: Pop(0)
0x2a0: Stack[-1] = Stack[-4]
0x2a1: Return(); Pop(2)

0x2a2: PushEmpty(bool, bool)
0x2a3: Push("HasProperty") // @poff=276
0x2a4: Push((int) 2)
0x2a5: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x2a6: Pop(1); Push((bool) Stack[-1] == 0)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a8: Stack[-5] = (bool) 0
0x2a9: Return(); Pop(2)

0x2aa: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=300
0x2ab: Pop(0)
0x2ac: Stack[-1] = Stack[-5]
0x2ad: Return(); Pop(2)

0x2ae: PushEmpty(float, float)
0x2af: PushEmpty(bool, object, string)
0x2b0: Stack[-10] = Stack[-2]
0x2b1: Stack[-9] = Stack[-1]
0x2b2: Call2 0x2a2

0x2b3: Pop(2)
0x2b4: Pop(1); Push((bool) Stack[-1] == 0)
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b6: Stack[-8] = (bool) 0
0x2b7: Return(); Pop(2)

0x2b8: @@ GetProperty(Stack[-6], Stack[-1]); Obj=7 // @poff=312
0x2b9: Pop(0)
0x2ba: PushEmpty(float, float, float, float)
0x2bb: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x2bc: Stack[-8] = Stack[-2]
0x2bd: Stack[-7] = Stack[-1]
0x2be: Call2 0x363

0x2bf: Pop(3)
0x2c0: @@ SetProperty(Stack[-7], Stack[-1]); Obj=8 // @poff=324
0x2c1: Pop(1)
0x2c2: Stack[-8] = (bool) 1
0x2c3: Return(); Pop(2)

0x2c4: PushEmpty(float, float, float, float)
0x2c5: PushEmpty(bool, object, string)
0x2c6: Stack[-9] = Stack[-2]
0x2c7: Stack[-1] = "disease" // @poff=336
0x2c8: Call2 0x2a2

0x2c9: Pop(2)
0x2ca: Pop(1); Push((bool) Stack[-1] == 0)
0x2cb: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cc: Stack[-7] = (int) 0
0x2cd: Return(); Pop(4)

0x2ce: Stack[-2] = (int) 0
0x2cf: PushEmpty(bool, object, string)
0x2d0: Stack[-9] = Stack[-2]
0x2d1: Stack[-1] = "armor_disease" // @poff=352
0x2d2: Call2 0x2a2

0x2d3: Pop(2)
0x2d4: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d5: Push("armor_disease") // @poff=352
0x2d6: @@ GetProperty(Stack[-1], Stack[-3]); Obj=7 // @poff=312
0x2d7: Pop(1)
0x2d8: Push((int) 100)
0x2d9: Stack[-3] = Stack[-3] / Stack[-1]; Pop(1);
0x2da: PushEmpty(bool, object, string)
0x2db: Stack[-9] = Stack[-2]
0x2dc: Stack[-1] = "immunity" // @poff=380
0x2dd: Call2 0x2a2

0x2de: Pop(2)
0x2df: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e0: Push("immunity") // @poff=380
0x2e1: @@ GetProperty(Stack[-1], Stack[-2]); Obj=7 // @poff=312
0x2e2: Pop(1)
0x2e3: Stack[-2] = Stack[-2] + Stack[-1]; Pop(0);
0x2e4: PushEmpty(bool, object, string, float, float, float)
0x2e5: Stack[-12] = Stack[-5]
0x2e6: Stack[-4] = "immunity" // @poff=380
0x2e7: Stack[-3] = -Stack[-11]; Pop(0);
0x2e8: Stack[-2] = (int) 0
0x2e9: Stack[-1] = (int) 1
0x2ea: Call2 0x2ae

0x2eb: Pop(6)
0x2ec: Push((int) 1)
0x2ed: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ef: Stack[-7] = (float) 0.0
0x2f0: Return(); Pop(4)

0x2f1: Push((int) 1)
0x2f2: Pop(1); Push(Stack[-1] - Stack[-3]);
0x2f3: Push((int) 2)
0x2f4: Pop(2); Push(Stack[-2] / Stack[-1]);
0x2f5: Stack[-6] = Stack[-6] * Stack[-1]; Pop(1);
0x2f6: PushEmpty(bool, object, string, float, float, float)
0x2f7: Stack[-12] = Stack[-5]
0x2f8: Stack[-4] = "disease" // @poff=336
0x2f9: Stack[-11] = Stack[-3]
0x2fa: Stack[-2] = (int) 0
0x2fb: Stack[-1] = (int) 1
0x2fc: Call2 0x2ae

0x2fd: Pop(6)
0x2fe: PushEmpty(bool, object)
0x2ff: Stack[-8] = Stack[-1]
0x300: Call2 0x29d

0x301: Pop(1)
0x302: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x303: PushEmpty(float)
0x304: Stack[-6] = Stack[-1]
0x305: Call2 0x36e

0x306: Pop(1)
0x307: Stack[-5] = Stack[-7]
0x308: Return(); Pop(4)

0x309: PushEmpty(bool, bool)
0x30a: @@ IsDead(Stack[-1]); Obj=3 // @poff=398
0x30b: Pop(0)
0x30c: Stack[-1] = Stack[-4]
0x30d: Return(); Pop(2)

0x30e: PushEmpty(object, object, object, object)
0x30f: Pop(0); PushNull((bool) Stack[-5] == 0)
0x310: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x311: Stack[-6] = (bool) 0
0x312: Return(); Pop(4)

0x313: PushEmpty(bool)
0x314: Stack[-1] = (bool) 0
0x315: Push("IsDead") // @poff=405
0x316: Push((int) 1)
0x317: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x318: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x319: PushEmpty(bool, object)
0x31a: Stack[-8] = Stack[-1]
0x31b: Call2 0x309

0x31c: Pop(1)
0x31d: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31e: Stack[-1] = (bool) 1
0x31f: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x320: Stack[-6] = (bool) 0
0x321: Return(); Pop(4)

0x322: @ GetScene(Stack[-2])
0x323: Pop(0)
0x324: Pop(0); PushNull((bool) Stack[-2] == 0)
0x325: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x326: Stack[-6] = (bool) 0
0x327: Return(); Pop(4)

0x328: @@ GetScene(Stack[-1]); Obj=5 // @poff=419
0x329: Pop(0)
0x32a: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x32b: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32c: Stack[-6] = (bool) 0
0x32d: Return(); Pop(4)

0x32e: Stack[-6] = (bool) 1
0x32f: Return(); Pop(4)

0x330: Stack[-1] = 0
0x331: Stack[-2] = 0
0x332: PushEmpty(int, int)
0x333: PushEmpty(bool, object)
0x334: Stack[-5] = Stack[-1]
0x335: Call2 0x30e

0x336: Pop(1)
0x337: Pop(1); Push((bool) Stack[-1] == 0)
0x338: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x339: Stack[-4] = (bool) 0
0x33a: Return(); Pop(2)

0x33b: PushEmpty(bool, object, string)
0x33c: Stack[-6] = Stack[-2]
0x33d: Stack[-1] = "noaccess" // @poff=428
0x33e: Call2 0x2a2

0x33f: Pop(2)
0x340: Pop(1); Push((bool) Stack[-1] == 0)
0x341: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x342: Stack[-4] = (bool) 1
0x343: Return(); Pop(2)

0x344: Push("noaccess") // @poff=428
0x345: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=312
0x346: Pop(1)
0x347: Push((int) 0)
0x348: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x349: Return(); Pop(2)

0x34a: PushEmpty(object, object)
0x34b: @ self(Stack[-1])
0x34c: Pop(0)
0x34d: Stack[-1] = Stack[-3]
0x34e: Return(); Pop(2)

0x34f: Stack[-1] = 0
0x350: PushEmpty(float, float)
0x351: Pop(0); Push(Stack[-3] | Stack[-3]);
0x352: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x353: Push((float)9.999999974752427e-07)
0x354: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x355: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x356: Stack[-4] = [0.0, 0.0, 0.0]
0x357: Return(); Pop(2)

0x358: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x359: Return(); Pop(2)

0x35a: PushEmpty(cvector, cvector)
0x35b: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x35c: Pop(0); Push(Stack[-1] | Stack[-1]);
0x35d: Stack[-6] = Sqrt(Stack[-1]); Pop(1);
0x35e: Return(); Pop(2)

0x35f: PushEmpty(cvector, cvector)
0x360: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x361: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x362: Return(); Pop(2)

0x363: PushEmpty()
0x364: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x365: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x366: Stack[-2] = Stack[-4]
0x367: Return(); Pop(0)

0x368: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x369: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x36a: Stack[-1] = Stack[-4]
0x36b: Return(); Pop(0)

0x36c: Stack[-3] = Stack[-4]
0x36d: Return(); Pop(0)

0x36e: PushEmpty(object, object)
0x36f: @ CreateFloatVector(Stack[-1])
0x370: Pop(0)
0x371: @@ add(Stack[-3]); Obj=1 // @poff=446
0x372: Pop(0)
0x373: Push((int) 14)
0x374: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x375: Pop(1)
0x376: Return(); Pop(2)

0x377: Stack[-1] = 0
0x378: PushEmpty(bool, bool)
0x379: @ IsPlayerActor(Stack[-3], Stack[-1])
0x37a: Pop(0)
0x37b: Stack[-4] = (bool) 0
0x37c: Push(Stack[-1])
0x37d: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x37e: PushEmpty(bool, object)
0x37f: Stack[-5] = Stack[-1]
0x380: Call2 0x332

0x381: Pop(1)
0x382: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x383: Stack[-4] = (bool) 1
0x384: Return(); Pop(2)

0x385: PushEmpty(bool, bool)
0x386: @ IsPlayerActor(Stack[-3], Stack[-1])
0x387: Pop(0)
0x388: Stack[-4] = (bool) 0
0x389: Push(Stack[-1])
0x38a: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38b: PushEmpty(bool, object)
0x38c: Stack[-5] = Stack[-1]
0x38d: Call2 0x332

0x38e: Pop(1)
0x38f: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x390: Stack[-4] = (bool) 1
0x391: Return(); Pop(2)

0x392: PushEmpty()
0x393: PushEmpty(object)
0x394: Stack[-2] = Stack[-1]
0x395: Push(-1, 4); TaskCall(0)
0x396: Call2 0x0

0x397: Pop(-1, 4); TaskReturn
0x398: Pop(1)
0x399: Return(); Pop(0)

0x39a: PushEmpty()
0x39b: PushEmpty(object)
0x39c: Stack[-2] = Stack[-1]
0x39d: Push(-1, 4); TaskCall(0)
0x39e: Call2 0x0

0x39f: Pop(-1, 4); TaskReturn
0x3a0: Pop(1)
0x3a1: Return(); Pop(0)

0x3a2: PushEmpty()
0x3a3: Push((int) 20)
0x3a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a6: @ ResetAAS()
0x3a7: Pop(0)
0x3a8: Return(); Pop(0)

0x3a9: PushEmpty(object, int, object, int)
0x3aa: PushEmpty(bool, object)
0x3ab: Stack[-7] = Stack[-1]
0x3ac: Call2 0x332

0x3ad: Pop(1)
0x3ae: Pop(1); Push((bool) Stack[-1] == 0)
0x3af: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3b0: Stack[-6] = (bool) 0
0x3b1: Return(); Pop(4)

0x3b2: @ GetActiveScene(Stack[-2])
0x3b3: Pop(0)
0x3b4: PushEmpty(bool)
0x3b5: Stack[-1] = (bool) 0
0x3b6: Pop(0); Push(( Stack[-3] != 0 )
0x3b7: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3b8: Push("GetCurrentRegion") // @poff=450
0x3b9: Push((int) 1)
0x3ba: Pop(2); Push(IsFuncExist(Stack[-5], Stack[-2], Stack[-1]))
0x3bb: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3bc: Stack[-1] = (bool) 1
0x3bd: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3be: @@ GetCurrentRegion(Stack[-1]); Obj=2 // @poff=484
0x3bf: Pop(0)
0x3c0: Stack[-6] = (bool) 0
0x3c1: Push(GlobalVars[0])
0x3c2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c3: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3c4: PushEmpty(float, object)
0x3c5: Stack[-7] = Stack[-1]
0x3c6: Call2 0x28e

0x3c7: Pop(1)
0x3c8: Push((int) 4000000)
0x3c9: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x3ca: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3cb: Stack[-6] = (bool) 1
0x3cc: Return(); Pop(4)

0x3cd: Stack[-6] = (bool) 0
0x3ce: Return(); Pop(4)

0x3cf: Stack[-2] = 0
0x3d0: PushEmpty()
0x3d1: Return(); Pop(0)

