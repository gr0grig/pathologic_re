GlobalVarCount = 0

Strings:
	W:nailed
	A:GetProperty
	W:revolver_ammo
	W:rifle_ammo
	W:alpha_pills
	W:beta_pills
	W:gamma_pills
	W:delta_pills
	W:tvirin
	W:lemon
	W:neomicin
	W:monomicin
	W:feromicin
	W:meradorm
	W:novocaine
	W:morfin
	W:etorfin
	W:syringe
	W:kerosene
	W:lockpick
	W:Scalpel
	W:glove_disp
	W:glove
	W:mask
	W:bandage
	W:tourniquet
	W:packet
	W:needle
	W:hook
	W:flower
	W:watch
	W:razor
	W:beads
	W:bracelet
	W:ear_ring
	W:gold_ring
	W:silver_ring
	A:IsOnGround
	W:nouse_container
// @pool_raw:6e00610069006c0065006400000047657450726f7065727479007200650076006f006c007600650072005f0061006d006d006f0000007200690066006c0065005f0061006d006d006f00000061006c007000680061005f00700069006c006c007300000062006500740061005f00700069006c006c0073000000670061006d006d0061005f00700069006c006c0073000000640065006c00740061005f00700069006c006c0073000000740076006900720069006e0000006c0065006d006f006e0000006e0065006f006d006900630069006e0000006d006f006e006f006d006900630069006e0000006600650072006f006d006900630069006e0000006d0065007200610064006f0072006d0000006e006f0076006f006300610069006e00650000006d006f007200660069006e000000650074006f007200660069006e00000073007900720069006e006700650000006b00650072006f00730065006e00650000006c006f0063006b007000690063006b0000005300630061006c00700065006c00000067006c006f00760065005f006400690073007000000067006c006f007600650000006d00610073006b000000620061006e006400610067006500000074006f00750072006e006900710075006500740000007000610063006b006500740000006e006500650064006c006500000068006f006f006b00000066006c006f007700650072000000770061007400630068000000720061007a006f0072000000620065006100640073000000620072006100630065006c006500740000006500610072005f00720069006e006700000067006f006c0064005f00720069006e0067000000730069006c007600650072005f00720069006e006700000049734f6e47726f756e64006e006f007500730065005f0063006f006e007400610069006e00650072000000

Import:
	SetVisibility (1 args)
	GetScene (1 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	Barter (1 args)
	AddItem (3 args)
	irand (2 args)
	AddItem (4 args)
	GetVariable (2 args)
	GetGameTime (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x101 Vars = (object)


0x0: PushEmpty(object, bool, int, object, bool, int)
0x1: Push((bool) 1)
0x2: @ SetVisibility(Stack[-1])
0x3: Pop(1)
0x4: @ GetScene(Stack[-3])
0x5: Pop(0)
0x6: Push("nailed") // @poff=0
0x7: @@ GetProperty(Stack[-1], Stack[-3]); Obj=4 // @poff=14
0x8: Pop(1)
0x9: Push(Stack[-2])
0xa: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0xb: PushEmpty(string, int, int)
0xc: Stack[-3] = "revolver_ammo" // @poff=26
0xd: Stack[-2] = (int) 1
0xe: Stack[-1] = (int) 10
0xf: Call 0x115

0x10: Pop(3)
0x11: PushEmpty(string, int, int)
0x12: Stack[-3] = "rifle_ammo" // @poff=54
0x13: Stack[-2] = (int) 1
0x14: Stack[-1] = (int) 15
0x15: Call 0x115

0x16: Pop(3)
0x17: PushEmpty(string, int, int, int)
0x18: Stack[-4] = "alpha_pills" // @poff=76
0x19: Stack[-3] = (int) 1
0x1a: Stack[-2] = (int) 4
0x1b: Stack[-1] = (int) 4
0x1c: Call 0x120

0x1d: Pop(4)
0x1e: PushEmpty(string, int, int, int)
0x1f: Stack[-4] = "beta_pills" // @poff=100
0x20: Stack[-3] = (int) 1
0x21: Stack[-2] = (int) 8
0x22: Stack[-1] = (int) 3
0x23: Call 0x120

0x24: Pop(4)
0x25: PushEmpty(string, int, int, int)
0x26: Stack[-4] = "gamma_pills" // @poff=122
0x27: Stack[-3] = (int) 1
0x28: Stack[-2] = (int) 12
0x29: Stack[-1] = (int) 2
0x2a: Call 0x120

0x2b: Pop(4)
0x2c: PushEmpty(string, int, int)
0x2d: Stack[-3] = "delta_pills" // @poff=146
0x2e: Stack[-2] = (int) 1
0x2f: Stack[-1] = (int) 15
0x30: Call 0x115

0x31: Pop(3)
0x32: PushEmpty(string, int, int)
0x33: Stack[-3] = "tvirin" // @poff=170
0x34: Stack[-2] = (int) 1
0x35: Stack[-1] = (int) 20
0x36: Call 0x115

0x37: Pop(3)
0x38: PushEmpty(string, int, int)
0x39: Stack[-3] = "lemon" // @poff=184
0x3a: Stack[-2] = (int) 1
0x3b: Stack[-1] = (int) 10
0x3c: Call 0x115

0x3d: Pop(3)
0x3e: PushEmpty(string, int, int)
0x3f: Stack[-3] = "neomicin" // @poff=196
0x40: Stack[-2] = (int) 1
0x41: Stack[-1] = (int) 15
0x42: Call 0x115

0x43: Pop(3)
0x44: PushEmpty(string, int, int)
0x45: Stack[-3] = "monomicin" // @poff=214
0x46: Stack[-2] = (int) 1
0x47: Stack[-1] = (int) 25
0x48: Call 0x115

0x49: Pop(3)
0x4a: PushEmpty(string, int, int)
0x4b: Stack[-3] = "feromicin" // @poff=234
0x4c: Stack[-2] = (int) 1
0x4d: Stack[-1] = (int) 35
0x4e: Call 0x115

0x4f: Pop(3)
0x50: PushEmpty(string, int, int)
0x51: Stack[-3] = "meradorm" // @poff=254
0x52: Stack[-2] = (int) 1
0x53: Stack[-1] = (int) 25
0x54: Call 0x115

0x55: Pop(3)
0x56: PushEmpty(string, int, int)
0x57: Stack[-3] = "novocaine" // @poff=272
0x58: Stack[-2] = (int) 1
0x59: Stack[-1] = (int) 35
0x5a: Call 0x115

0x5b: Pop(3)
0x5c: PushEmpty(string, int, int)
0x5d: Stack[-3] = "morfin" // @poff=292
0x5e: Stack[-2] = (int) 1
0x5f: Stack[-1] = (int) 40
0x60: Call 0x115

0x61: Pop(3)
0x62: PushEmpty(string, int, int)
0x63: Stack[-3] = "etorfin" // @poff=306
0x64: Stack[-2] = (int) 1
0x65: Stack[-1] = (int) 40
0x66: Call 0x115

0x67: Pop(3)
0x68: PushEmpty(string, int, int)
0x69: Stack[-3] = "syringe" // @poff=322
0x6a: Stack[-2] = (int) 1
0x6b: Stack[-1] = (int) 20
0x6c: Call 0x115

0x6d: Pop(3)
0x6e: PushEmpty(string, int, int, int)
0x6f: Stack[-4] = "kerosene" // @poff=338
0x70: Stack[-3] = (int) 1
0x71: Stack[-2] = (int) 2
0x72: Stack[-1] = (int) 10
0x73: Call 0x120

0x74: Pop(4)
0x75: PushEmpty(string, int, int)
0x76: Stack[-3] = "lockpick" // @poff=356
0x77: Stack[-2] = (int) 1
0x78: Stack[-1] = (int) 15
0x79: Call 0x115

0x7a: Pop(3)
0x7b: PushEmpty(string, int, int)
0x7c: Stack[-3] = "Scalpel" // @poff=374
0x7d: Stack[-2] = (int) 1
0x7e: Stack[-1] = (int) 25
0x7f: Call 0x115

0x80: Pop(3)
0x81: PushEmpty(int)
0x82: Call 0x13a

0x83: Stack[-1] = Stack[-2]
0x84: Pop(1)
0x85: Push((int) 3)
0x86: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x87: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x88: PushEmpty(string, int, int)
0x89: Stack[-3] = "glove_disp" // @poff=390
0x8a: Stack[-2] = (int) 1
0x8b: Stack[-1] = (int) 30
0x8c: Call 0x115

0x8d: Pop(3)
0x8e: PushEmpty(string, int, int)
0x8f: Stack[-3] = "glove" // @poff=412
0x90: Stack[-2] = (int) 1
0x91: Stack[-1] = (int) 30
0x92: Call 0x115

0x93: Pop(3)
0x94: PushEmpty(string, int, int)
0x95: Stack[-3] = "mask" // @poff=424
0x96: Stack[-2] = (int) 1
0x97: Stack[-1] = (int) 50
0x98: Call 0x115

0x99: Pop(3)
0x9a: GOTO 0xf8

0x9b: PushEmpty(string, int, int)
0x9c: Stack[-3] = "bandage" // @poff=434
0x9d: Stack[-2] = (int) 1
0x9e: Stack[-1] = (int) 50
0x9f: Call 0x115

0xa0: Pop(3)
0xa1: PushEmpty(string, int, int)
0xa2: Stack[-3] = "tourniquet" // @poff=450
0xa3: Stack[-2] = (int) 1
0xa4: Stack[-1] = (int) 50
0xa5: Call 0x115

0xa6: Pop(3)
0xa7: PushEmpty(string, int, int)
0xa8: Stack[-3] = "packet" // @poff=472
0xa9: Stack[-2] = (int) 1
0xaa: Stack[-1] = (int) 50
0xab: Call 0x115

0xac: Pop(3)
0xad: PushEmpty(string, int, int, int)
0xae: Stack[-4] = "needle" // @poff=486
0xaf: Stack[-3] = (int) 1
0xb0: Stack[-2] = (int) 15
0xb1: Stack[-1] = (int) 2
0xb2: Call 0x120

0xb3: Pop(4)
0xb4: PushEmpty(string, int, int, int)
0xb5: Stack[-4] = "hook" // @poff=500
0xb6: Stack[-3] = (int) 1
0xb7: Stack[-2] = (int) 15
0xb8: Stack[-1] = (int) 3
0xb9: Call 0x120

0xba: Pop(4)
0xbb: PushEmpty(string, int, int, int)
0xbc: Stack[-4] = "flower" // @poff=510
0xbd: Stack[-3] = (int) 1
0xbe: Stack[-2] = (int) 10
0xbf: Stack[-1] = (int) 2
0xc0: Call 0x120

0xc1: Pop(4)
0xc2: PushEmpty(string, int, int)
0xc3: Stack[-3] = "syringe" // @poff=322
0xc4: Stack[-2] = (int) 1
0xc5: Stack[-1] = (int) 30
0xc6: Call 0x115

0xc7: Pop(3)
0xc8: PushEmpty(string, int, int)
0xc9: Stack[-3] = "watch" // @poff=524
0xca: Stack[-2] = (int) 1
0xcb: Stack[-1] = (int) 30
0xcc: Call 0x115

0xcd: Pop(3)
0xce: PushEmpty(string, int, int)
0xcf: Stack[-3] = "razor" // @poff=536
0xd0: Stack[-2] = (int) 1
0xd1: Stack[-1] = (int) 30
0xd2: Call 0x115

0xd3: Pop(3)
0xd4: PushEmpty(string, int, int)
0xd5: Stack[-3] = "beads" // @poff=548
0xd6: Stack[-2] = (int) 1
0xd7: Stack[-1] = (int) 20
0xd8: Call 0x115

0xd9: Pop(3)
0xda: PushEmpty(string, int, int)
0xdb: Stack[-3] = "bracelet" // @poff=560
0xdc: Stack[-2] = (int) 1
0xdd: Stack[-1] = (int) 20
0xde: Call 0x115

0xdf: Pop(3)
0xe0: PushEmpty(string, int, int)
0xe1: Stack[-3] = "ear_ring" // @poff=578
0xe2: Stack[-2] = (int) 1
0xe3: Stack[-1] = (int) 20
0xe4: Call 0x115

0xe5: Pop(3)
0xe6: PushEmpty(string, int, int)
0xe7: Stack[-3] = "gold_ring" // @poff=596
0xe8: Stack[-2] = (int) 1
0xe9: Stack[-1] = (int) 50
0xea: Call 0x115

0xeb: Pop(3)
0xec: PushEmpty(string, int, int)
0xed: Stack[-3] = "silver_ring" // @poff=616
0xee: Stack[-2] = (int) 1
0xef: Stack[-1] = (int) 30
0xf0: Call 0x115

0xf1: Pop(3)
0xf2: PushEmpty(string, int, int)
0xf3: Stack[-3] = "glove" // @poff=412
0xf4: Stack[-2] = (int) 1
0xf5: Stack[-1] = (int) 40
0xf6: Call 0x115

0xf7: Pop(3)
0xf8: PushEmpty()
0xf9: Call 0xfd

0xfa: Pop(0)
0xfb: Return(); Pop(6)

0xfc: Stack[-3] = 0
0xfd: @ Hold()
0xfe: Pop(0)
0xff: GOTO 0xfd

0x100: Return(); Pop(0)

0x101: PushEmpty(bool, bool, bool, bool)
0x102: PushEmpty(bool)
0x103: Call 0x134

0x104: Pop(0)
0x105: Pop(1); Push((bool) Stack[-1] == 0)
0x106: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x107: Return(); Pop(4)

0x108: @@ IsOnGround(Stack[-2]); Obj=5 // @poff=640
0x109: Pop(0)
0x10a: Push(Stack[-2])
0x10b: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x10c: EventDisable(0)
0x10d: @ IsOverrideActive(Stack[-1])
0x10e: Pop(0)
0x10f: Pop(0); Push((bool) Stack[-1] == 0)
0x110: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x111: @ Barter(Stack[-5])
0x112: Pop(0)
0x113: EventEnable(0)
0x114: Return(); Pop(4)

0x115: PushEmpty(bool, bool)
0x116: PushEmpty(bool, int, int)
0x117: Stack[-7] = Stack[-2]
0x118: Stack[-6] = Stack[-1]
0x119: Call 0x12f

0x11a: Pop(2)
0x11b: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11c: Push((int) 0)
0x11d: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x11e: Pop(1)
0x11f: Return(); Pop(2)

0x120: PushEmpty(int, bool, int, bool)
0x121: PushEmpty(bool, int, int)
0x122: Stack[-10] = Stack[-2]
0x123: Stack[-9] = Stack[-1]
0x124: Call 0x12f

0x125: Pop(2)
0x126: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x127: @ irand(Stack[-2], Stack[-5])
0x128: Pop(0)
0x129: Push((int) 0)
0x12a: Push((int) 1)
0x12b: Pop(1); Push(Stack[-7] + Stack[-1]);
0x12c: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x12d: Pop(2)
0x12e: Return(); Pop(4)

0x12f: PushEmpty(int, int)
0x130: @ irand(Stack[-1], Stack[-3])
0x131: Pop(0)
0x132: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x133: Return(); Pop(2)

0x134: PushEmpty(int, int)
0x135: Push("nouse_container") // @poff=651
0x136: @ GetVariable(Stack[-1], Stack[-2])
0x137: Pop(1)
0x138: Stack[-3] = !Stack[-1]; Pop(0);
0x139: Return(); Pop(2)

0x13a: PushEmpty(float, float)
0x13b: @ GetGameTime(Stack[-1])
0x13c: Pop(0)
0x13d: Push((int) 1)
0x13e: PushEmpty(int)
0x13f: Push((int) 24)
0x140: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x141: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x142: Return(); Pop(2)

