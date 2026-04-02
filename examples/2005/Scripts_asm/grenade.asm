GlobalVarCount = 6
	G_VAR_0 object Owner
	G_VAR_1 cvector StartVelocity
	G_VAR_2 float DamageAmount
	G_VAR_3 int DamageType
	G_VAR_4 object 
	G_VAR_5 object 

Strings:
	W:on collision
	A:Enable
	W:bottle
	W:fire_loop
	A:FadeIn
	A:Next
	W:Hit: 
	W:grenade
	W:grenadefire
	W:Can't find fire particle system
	A:AddSource
	A:Fade
	A:FadeOut
	W:smoke
	W:bullet
	W:phys
	A:GetPosition
	W:HasProperty
	A:HasProperty
	W:health
	W:armor
	A:GetProperty
	W:armor_
	A:SetProperty
	A:add
// @pool_raw:6f006e00200063006f006c006c006900730069006f006e000000456e61626c650062006f00740074006c006500000066006900720065005f006c006f006f007000000046616465496e004e657874004800690074003a00200000006700720065006e0061006400650000006700720065006e0061006400650066006900720065000000430061006e00270074002000660069006e0064002000660069007200650020007000610072007400690063006c0065002000730079007300740065006d000000416464536f75726365004661646500466164654f75740073006d006f006b0065000000620075006c006c0065007400000070006800790073000000476574506f736974696f6e00480061007300500072006f0070006500720074007900000048617350726f7065727479006800650061006c00740068000000610072006d006f007200000047657450726f706572747900610072006d006f0072005f00000053657450726f70657274790061646400

Import:
	Trace (1 args)
	PlayGlobalSound (4 args)
	PlayLoopedGlobalSound (4 args)
	Intersect (4 args)
	ReportHit (5 args)
	SetPosition (1 args)
	FindGeometry (2 args)
	FindParticleSystem (2 args)
	Sleep (1 args)
	RemoveActor (1 args)
	CreateRigidBody (6 args)
	Attach (1 args)
	Hold (0 args)
	GetPosition (1 args)
	IsPlayerActor (2 args)
	self (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)

RunOp = 0xad
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_10 Op = 0x0 Vars = (object, object, cvector, cvector)
		EVENT_6 Op = 0xdb Vars = ()


0x0: PushEmpty(object, object, bool, object, cvector, cvector, float, float, object, object, object, object, bool, object, cvector, cvector, float, float, object, object)
0x1: EventDisable(10)
0x2: Push("on collision") // @poff=0
0x3: @ Trace(Stack[-1])
0x4: Pop(1)
0x5: Push(GlobalVars[5])
0x6: Push((bool) 0)
0x7: @@ Enable(Stack[-1]); Obj=2 // @poff=26
0x8: Pop(2)
0x9: Push("bottle") // @poff=33
0xa: Push([0.0, 0.0, 0.0])
0xb: Push((int) 1)
0xc: Push((int) 300)
0xd: @ PlayGlobalSound(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe: Pop(4)
0xf: Push("fire_loop") // @poff=47
0x10: Push([0.0, 10.0, 0.0])
0x11: Push((int) 200)
0x12: @ PlayLoopedGlobalSound(Stack[-13], Stack[-3], Stack[-2], Stack[-1])
0x13: Pop(3)
0x14: Pop(0); Push(( Stack[-10] != 0 )
0x15: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x16: Push((float)1.0)
0x17: @@ FadeIn(Stack[-1]); Obj=11 // @poff=67
0x18: Pop(1)
0x19: Push((float)300.0)
0x1a: @ Intersect(Stack[-23], Stack[-1], Stack[-9], Stack[-10])
0x1b: Pop(1)
0x1c: PushEmpty(cvector)
0x1d: Call2 0xf1

0x1e: Stack[-1] = Stack[-7]
0x1f: Pop(1)
0x20: @@ Next(Stack[-8], Stack[-7]); Obj=9 // @poff=74
0x21: Pop(0)
0x22: Push(Stack[-8])
0x23: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x24: PushEmpty(cvector, object)
0x25: Stack[-9] = Stack[-1]
0x26: Call2 0xf6

0x27: Stack[-2] = Stack[-7]
0x28: Pop(2)
0x29: Push((float)1.0)
0x2a: PushEmpty(float, cvector, cvector)
0x2b: Stack[-9] = Stack[-2]
0x2c: Stack[-10] = Stack[-1]
0x2d: Call2 0x15b

0x2e: Pop(2)
0x2f: Push((float)300.0)
0x30: Pop(2); Push(Stack[-2] / Stack[-1]);
0x31: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x32: Push((float)0.4000000059604645)
0x33: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x34: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x35: Stack[-4] = (float) 0.4000000059604645
0x36: Push((float)0.800000011920929)
0x37: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x39: Stack[-4] = (int) 1
0x3a: Push(GlobalVars[2])
0x3b: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x3c: PushEmpty(float, object, float, int)
0x3d: Stack[-11] = Stack[-3]
0x3e: Stack[-8] = Stack[-2]
0x3f: Push(GlobalVars[3])
0x40: Stack[-1] = Stack[-2]
0x41: Pop(1)
0x42: Call2 0x10c

0x43: Stack[-4] = Stack[-7]
0x44: Pop(4)
0x45: Push(GlobalVars[0])
0x46: Push((int) 3)
0x47: @ ReportHit(Stack[-9], Stack[-2], Stack[-1], Stack[-5], Stack[-6])
0x48: Pop(2)
0x49: Push("Hit: ") // @poff=79
0x4a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4b: @ Trace(Stack[-1])
0x4c: Pop(1)
0x4d: GOTO 0x20

0x4e: Stack[-9] = 0
0x4f: @ SetPosition(Stack[-22])
0x50: Pop(0)
0x51: Push("grenade") // @poff=91
0x52: @ FindGeometry(Stack[-1], Stack[-3])
0x53: Pop(1)
0x54: Push((bool) 0)
0x55: @@ Enable(Stack[-1]); Obj=3 // @poff=26
0x56: Pop(1)
0x57: Push("grenadefire") // @poff=107
0x58: @ FindParticleSystem(Stack[-1], Stack[-2])
0x59: Pop(1)
0x5a: Pop(0); PushNull((bool) Stack[-1] == 0)
0x5b: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5c: Push("Can't find fire particle system") // @poff=131
0x5d: @ Trace(Stack[-1])
0x5e: Pop(1)
0x5f: Return(); Pop(20)

0x60: Push([0.0, 0.0, 0.0])
0x61: Push([0.0, 1.0, 0.0])
0x62: Push((int) 0)
0x63: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=195
0x64: Pop(3)
0x65: Push([50.0, 0.0, 50.0])
0x66: Push([0.0, 1.0, 0.0])
0x67: Push((int) 0)
0x68: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=195
0x69: Pop(3)
0x6a: Push([-50.0, 0.0, 50.0])
0x6b: Push([0.0, 1.0, 0.0])
0x6c: Push((int) 0)
0x6d: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=195
0x6e: Pop(3)
0x6f: Push([-50.0, 0.0, -50.0])
0x70: Push([0.0, 1.0, 0.0])
0x71: Push((int) 0)
0x72: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=195
0x73: Pop(3)
0x74: Push([50.0, 0.0, -50.0])
0x75: Push([0.0, 1.0, 0.0])
0x76: Push((int) 0)
0x77: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=195
0x78: Pop(3)
0x79: Push([25.0, 0.0, 25.0])
0x7a: Push([0.0, 1.0, 0.0])
0x7b: Push((int) 0)
0x7c: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=195
0x7d: Pop(3)
0x7e: Push([-25.0, 0.0, 25.0])
0x7f: Push([0.0, 1.0, 0.0])
0x80: Push((int) 0)
0x81: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=195
0x82: Pop(3)
0x83: Push([-25.0, 0.0, -25.0])
0x84: Push([0.0, 1.0, 0.0])
0x85: Push((int) 0)
0x86: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=195
0x87: Pop(3)
0x88: Push([25.0, 0.0, -25.0])
0x89: Push([0.0, 1.0, 0.0])
0x8a: Push((int) 0)
0x8b: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=195
0x8c: Pop(3)
0x8d: @@ Enable(); Obj=1 // @poff=26
0x8e: Pop(0)
0x8f: Push((bool) 0)
0x90: @@ Fade(Stack[-1]); Obj=2 // @poff=205
0x91: Pop(1)
0x92: Push(GlobalVars[4])
0x93: @@ Fade(); Obj=1 // @poff=205
0x94: Pop(1)
0x95: Push((float)10.0)
0x96: @ Sleep(Stack[-1])
0x97: Pop(1)
0x98: @@ Fade(); Obj=1 // @poff=205
0x99: Pop(0)
0x9a: Pop(0); Push(( Stack[-10] != 0 )
0x9b: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9c: Push((float)1.0)
0x9d: @@ FadeOut(Stack[-1]); Obj=11 // @poff=210
0x9e: Pop(1)
0x9f: Push((float)2.0)
0xa0: @ Sleep(Stack[-1])
0xa1: Pop(1)
0xa2: PushEmpty(object)
0xa3: Call2 0x155

0xa4: Pop(0)
0xa5: @ RemoveActor(Stack[-1])
0xa6: Pop(1)
0xa7: Return(); Pop(20)

0xa8: Stack[-1] = 0
0xa9: Stack[-2] = 0
0xaa: Stack[-7] = 0
0xab: Stack[-9] = 0
0xac: Stack[-10] = 0
0xad: PushEmpty(object, object, object, object, object, object)
0xae: Push([0.0, 0.0, 0.0])
0xaf: Push((int) 10)
0xb0: Push(GlobalVars[1])
0xb1: Push([2.0, 2.0, 2.0])
0xb2: Push(GlobalVars[0])
0xb3: @ CreateRigidBody(Stack[-8], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb4: Pop(5)
0xb5: Push((bool) 1)
0xb6: @@ Enable(Stack[-1]); Obj=4 // @poff=26
0xb7: Pop(1)
0xb8: Push(GlobalVars[5])
0xb9: Stack[-4] = Stack[-1]
0xba: GlobalVars[5] = Stack[-1]; Pop(1)
0xbb: Push("smoke") // @poff=218
0xbc: @ FindParticleSystem(Stack[-1], Stack[-3])
0xbd: Pop(1)
0xbe: Push([0.0, 0.0, 0.0])
0xbf: Push([0.0, 1.0, 0.0])
0xc0: Push((int) 0)
0xc1: @@ AddSource(Stack[-3], Stack[-2], Stack[-1]); Obj=5 // @poff=195
0xc2: Pop(3)
0xc3: Push((bool) 1)
0xc4: @@ Enable(Stack[-1]); Obj=3 // @poff=26
0xc5: Pop(1)
0xc6: Push((bool) 0)
0xc7: @@ Fade(Stack[-1]); Obj=3 // @poff=205
0xc8: Pop(1)
0xc9: Push(GlobalVars[4])
0xca: Stack[-3] = Stack[-1]
0xcb: GlobalVars[4] = Stack[-1]; Pop(1)
0xcc: Push("grenade") // @poff=91
0xcd: @ FindGeometry(Stack[-1], Stack[-2])
0xce: Pop(1)
0xcf: Push((bool) 1)
0xd0: @@ Enable(Stack[-1]); Obj=2 // @poff=26
0xd1: Pop(1)
0xd2: @ Attach(Stack[-3])
0xd3: Pop(0)
0xd4: @ Hold()
0xd5: Pop(0)
0xd6: GOTO 0xd4

0xd7: Return(); Pop(6)

0xd8: Stack[-1] = 0
0xd9: Stack[-2] = 0
0xda: Stack[-3] = 0
0xdb: PushEmpty(object)
0xdc: Call2 0x155

0xdd: Pop(0)
0xde: @ RemoveActor(Stack[-1])
0xdf: Pop(1)
0xe0: @ Hold()
0xe1: Pop(0)
0xe2: Return(); Pop(0)

0xe3: PushEmpty()
0xe4: Push((int) 2)
0xe5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe6: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe7: Stack[-2] = "fire" // @poff=121
0xe8: Return(); Pop(0)

0xe9: GOTO 0xef

0xea: Push((int) 1)
0xeb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xed: Stack[-2] = "bullet" // @poff=230
0xee: Return(); Pop(0)

0xef: Stack[-2] = "phys" // @poff=244
0xf0: Return(); Pop(0)

0xf1: PushEmpty(cvector, cvector)
0xf2: @ GetPosition(Stack[-1])
0xf3: Pop(0)
0xf4: Stack[-1] = Stack[-3]
0xf5: Return(); Pop(2)

0xf6: PushEmpty(cvector, cvector)
0xf7: @@ GetPosition(Stack[-1]); Obj=3 // @poff=254
0xf8: Pop(0)
0xf9: Stack[-1] = Stack[-4]
0xfa: Return(); Pop(2)

0xfb: PushEmpty(bool, bool)
0xfc: @ IsPlayerActor(Stack[-3], Stack[-1])
0xfd: Pop(0)
0xfe: Stack[-1] = Stack[-4]
0xff: Return(); Pop(2)

0x100: PushEmpty(bool, bool)
0x101: Push("HasProperty") // @poff=266
0x102: Push((int) 2)
0x103: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x104: Pop(1); Push((bool) Stack[-1] == 0)
0x105: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x106: Stack[-5] = (bool) 0
0x107: Return(); Pop(2)

0x108: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=290
0x109: Pop(0)
0x10a: Stack[-1] = Stack[-5]
0x10b: Return(); Pop(2)

0x10c: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x10d: PushEmpty(bool, object, string)
0x10e: Stack[-18] = Stack[-2]
0x10f: Stack[-1] = "health" // @poff=302
0x110: Call2 0x100

0x111: Pop(2)
0x112: Pop(1); Push((bool) Stack[-1] == 0)
0x113: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x114: Stack[-16] = (float) 0.0
0x115: Return(); Pop(12)

0x116: PushEmpty(bool, object, string)
0x117: Stack[-18] = Stack[-2]
0x118: Stack[-1] = "armor" // @poff=316
0x119: Call2 0x100

0x11a: Pop(2)
0x11b: Pop(1); Push((bool) Stack[-1] == 0)
0x11c: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11d: Stack[-6] = (int) 0
0x11e: GOTO 0x122

0x11f: Push("armor") // @poff=316
0x120: @@ GetProperty(Stack[-1], Stack[-7]); Obj=16 // @poff=328
0x121: Pop(1)
0x122: Push("armor_") // @poff=340
0x123: PushEmpty(string, int)
0x124: Stack[-16] = Stack[-1]
0x125: Call2 0xe3

0x126: Pop(1)
0x127: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x128: PushEmpty(bool, object, string)
0x129: Stack[-18] = Stack[-2]
0x12a: Stack[-8] = Stack[-1]
0x12b: Call2 0x100

0x12c: Pop(2)
0x12d: Pop(1); Push((bool) Stack[-1] == 0)
0x12e: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12f: Stack[-4] = (int) 0
0x130: GOTO 0x133

0x131: @@ GetProperty(Stack[-5], Stack[-4]); Obj=15 // @poff=328
0x132: Pop(0)
0x133: PushEmpty(float, float, float)
0x134: Pop(0); Push(Stack[-9] + Stack[-7]);
0x135: Push((float)100.0)
0x136: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x137: Stack[-1] = (int) 1
0x138: Call2 0x160

0x139: Stack[-3] = Stack[-6]
0x13a: Pop(3)
0x13b: Push("health") // @poff=302
0x13c: @@ GetProperty(Stack[-1], Stack[-3]); Obj=16 // @poff=328
0x13d: Pop(1)
0x13e: Push((int) 1)
0x13f: Pop(1); Push(Stack[-1] - Stack[-4]);
0x140: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x141: Push("health") // @poff=302
0x142: PushEmpty(float, float, float, float)
0x143: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x144: Stack[-2] = (int) 0
0x145: Stack[-1] = (int) 1
0x146: Call2 0x167

0x147: Pop(3)
0x148: @@ SetProperty(Stack[-2], Stack[-1]); Obj=17 // @poff=354
0x149: Pop(2)
0x14a: PushEmpty(bool, object)
0x14b: Stack[-17] = Stack[-1]
0x14c: Call2 0xfb

0x14d: Pop(1)
0x14e: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14f: PushEmpty(float)
0x150: Stack[-1] = -Stack[-2]; Pop(0);
0x151: Call2 0x172

0x152: Pop(1)
0x153: Stack[-1] = Stack[-16]
0x154: Return(); Pop(12)

0x155: PushEmpty(object, object)
0x156: @ self(Stack[-1])
0x157: Pop(0)
0x158: Stack[-1] = Stack[-3]
0x159: Return(); Pop(2)

0x15a: Stack[-1] = 0
0x15b: PushEmpty(cvector, cvector)
0x15c: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x15d: Pop(0); Push(Stack[-1] | Stack[-1]);
0x15e: Stack[-6] = Sqrt(Stack[-1]); Pop(1);
0x15f: Return(); Pop(2)

0x160: PushEmpty()
0x161: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x163: Stack[-2] = Stack[-3]
0x164: GOTO 0x166

0x165: Stack[-1] = Stack[-3]
0x166: Return(); Pop(0)

0x167: PushEmpty()
0x168: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x169: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x16a: Stack[-2] = Stack[-4]
0x16b: Return(); Pop(0)

0x16c: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x16d: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16e: Stack[-1] = Stack[-4]
0x16f: Return(); Pop(0)

0x170: Stack[-3] = Stack[-4]
0x171: Return(); Pop(0)

0x172: PushEmpty(object, object)
0x173: @ CreateFloatVector(Stack[-1])
0x174: Pop(0)
0x175: @@ add(Stack[-3]); Obj=1 // @poff=366
0x176: Pop(0)
0x177: Push((int) 15)
0x178: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x179: Pop(1)
0x17a: Return(); Pop(2)

0x17b: Stack[-1] = 0
