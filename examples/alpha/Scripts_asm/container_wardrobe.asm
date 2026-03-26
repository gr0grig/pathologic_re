GlobalVarCount = 0

Strings:
	W:nailed
	A:GetProperty
	W:Rifle
	W:Revolver
	W:rifle_ammo
	W:revolver_ammo
	W:halfboot_repel
	W:drapery
	W:cloak_repel
	W:raincoat_repel
	W:glove_disp
	W:glove
	W:boot_army
	W:glove_army
	W:balahon
	A:IsOnGround
	W:nouse_container
// @pool_raw:6e00610069006c0065006400000047657450726f7065727479005200690066006c00650000005200650076006f006c0076006500720000007200690066006c0065005f0061006d006d006f0000007200650076006f006c007600650072005f0061006d006d006f000000680061006c00660062006f006f0074005f0072006500700065006c0000006400720061007000650072007900000063006c006f0061006b005f0072006500700065006c0000007200610069006e0063006f00610074005f0072006500700065006c00000067006c006f00760065005f006400690073007000000067006c006f0076006500000062006f006f0074005f00610072006d007900000067006c006f00760065005f00610072006d0079000000620061006c00610068006f006e00000049734f6e47726f756e64006e006f007500730065005f0063006f006e007400610069006e00650072000000

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
		EVENT_0 Op = 0xc7 Vars = (object)


0x0: PushEmpty(object, bool, int, int, object, bool, int, int)
0x1: Push((bool) 1)
0x2: @ SetVisibility(Stack[-1])
0x3: Pop(1)
0x4: @ GetScene(Stack[-4])
0x5: Pop(0)
0x6: Push("nailed") // @poff=0
0x7: @@ GetProperty(Stack[-1], Stack[-4]); Obj=5 // @poff=14
0x8: Pop(1)
0x9: Push(Stack[-3])
0xa: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0xb: PushEmpty(string, int, int)
0xc: Stack[-3] = "Rifle" // @poff=26
0xd: Stack[-2] = (int) 1
0xe: Stack[-1] = (int) 150
0xf: Call 0xdb

0x10: Pop(3)
0x11: PushEmpty(string, int, int)
0x12: Stack[-3] = "Revolver" // @poff=38
0x13: Stack[-2] = (int) 1
0x14: Stack[-1] = (int) 100
0x15: Call 0xdb

0x16: Pop(3)
0x17: PushEmpty(string, int, int, int)
0x18: Stack[-4] = "rifle_ammo" // @poff=56
0x19: Stack[-3] = (int) 1
0x1a: Stack[-2] = (int) 15
0x1b: Stack[-1] = (int) 3
0x1c: Call 0xe6

0x1d: Pop(4)
0x1e: PushEmpty(string, int, int, int)
0x1f: Stack[-4] = "revolver_ammo" // @poff=78
0x20: Stack[-3] = (int) 1
0x21: Stack[-2] = (int) 15
0x22: Stack[-1] = (int) 6
0x23: Call 0xe6

0x24: Pop(4)
0x25: PushEmpty(int)
0x26: Call 0x100

0x27: Stack[-1] = Stack[-3]
0x28: Pop(1)
0x29: Push((int) 3)
0x2a: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x2b: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x2c: PushEmpty(string, int, int)
0x2d: Stack[-3] = "halfboot_repel" // @poff=106
0x2e: Stack[-2] = (int) 1
0x2f: Stack[-1] = (int) 15
0x30: Call 0xdb

0x31: Pop(3)
0x32: PushEmpty(string, int, int)
0x33: Stack[-3] = "boot_repel" // @poff=114
0x34: Stack[-2] = (int) 1
0x35: Stack[-1] = (int) 20
0x36: Call 0xdb

0x37: Pop(3)
0x38: PushEmpty(string, int, int)
0x39: Stack[-3] = "drapery" // @poff=136
0x3a: Stack[-2] = (int) 1
0x3b: Stack[-1] = (int) 5
0x3c: Call 0xdb

0x3d: Pop(3)
0x3e: PushEmpty(string, int, int)
0x3f: Stack[-3] = "cloak_repel" // @poff=152
0x40: Stack[-2] = (int) 1
0x41: Stack[-1] = (int) 15
0x42: Call 0xdb

0x43: Pop(3)
0x44: PushEmpty(string, int, int)
0x45: Stack[-3] = "raincoat_repel" // @poff=176
0x46: Stack[-2] = (int) 1
0x47: Stack[-1] = (int) 35
0x48: Call 0xdb

0x49: Pop(3)
0x4a: PushEmpty(string, int, int)
0x4b: Stack[-3] = "glove_disp" // @poff=206
0x4c: Stack[-2] = (int) 1
0x4d: Stack[-1] = (int) 20
0x4e: Call 0xdb

0x4f: Pop(3)
0x50: PushEmpty(string, int, int)
0x51: Stack[-3] = "glove" // @poff=228
0x52: Stack[-2] = (int) 1
0x53: Stack[-1] = (int) 20
0x54: Call 0xdb

0x55: Pop(3)
0x56: Push((int) 9)
0x57: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x58: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x59: PushEmpty(string, int, int)
0x5a: Stack[-3] = "boot_army" // @poff=240
0x5b: Stack[-2] = (int) 1
0x5c: Stack[-1] = (int) 40
0x5d: Call 0xdb

0x5e: Pop(3)
0x5f: PushEmpty(string, int, int)
0x60: Stack[-3] = "glove_army" // @poff=260
0x61: Stack[-2] = (int) 1
0x62: Stack[-1] = (int) 50
0x63: Call 0xdb

0x64: Pop(3)
0x65: PushEmpty(string, int, int)
0x66: Stack[-3] = "balahon" // @poff=282
0x67: Stack[-2] = (int) 1
0x68: Stack[-1] = (int) 70
0x69: Call 0xdb

0x6a: Pop(3)
0x6b: GOTO 0xbe

0x6c: PushEmpty(string, int, int)
0x6d: Stack[-3] = "Rifle" // @poff=26
0x6e: Stack[-2] = (int) 1
0x6f: Stack[-1] = (int) 300
0x70: Call 0xdb

0x71: Pop(3)
0x72: PushEmpty(string, int, int)
0x73: Stack[-3] = "Revolver" // @poff=38
0x74: Stack[-2] = (int) 1
0x75: Stack[-1] = (int) 200
0x76: Call 0xdb

0x77: Pop(3)
0x78: PushEmpty(int)
0x79: Call 0x100

0x7a: Stack[-1] = Stack[-2]
0x7b: Pop(1)
0x7c: Push((int) 3)
0x7d: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x7e: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0x7f: PushEmpty(string, int, int)
0x80: Stack[-3] = "halfboot_repel" // @poff=106
0x81: Stack[-2] = (int) 1
0x82: Stack[-1] = (int) 30
0x83: Call 0xdb

0x84: Pop(3)
0x85: PushEmpty(string, int, int)
0x86: Stack[-3] = "boot_repel" // @poff=114
0x87: Stack[-2] = (int) 1
0x88: Stack[-1] = (int) 50
0x89: Call 0xdb

0x8a: Pop(3)
0x8b: PushEmpty(string, int, int)
0x8c: Stack[-3] = "drapery" // @poff=136
0x8d: Stack[-2] = (int) 1
0x8e: Stack[-1] = (int) 10
0x8f: Call 0xdb

0x90: Pop(3)
0x91: PushEmpty(string, int, int)
0x92: Stack[-3] = "cloak_repel" // @poff=152
0x93: Stack[-2] = (int) 1
0x94: Stack[-1] = (int) 20
0x95: Call 0xdb

0x96: Pop(3)
0x97: PushEmpty(string, int, int)
0x98: Stack[-3] = "raincoat_repel" // @poff=176
0x99: Stack[-2] = (int) 1
0x9a: Stack[-1] = (int) 40
0x9b: Call 0xdb

0x9c: Pop(3)
0x9d: PushEmpty(string, int, int)
0x9e: Stack[-3] = "glove_disp" // @poff=206
0x9f: Stack[-2] = (int) 1
0xa0: Stack[-1] = (int) 30
0xa1: Call 0xdb

0xa2: Pop(3)
0xa3: PushEmpty(string, int, int)
0xa4: Stack[-3] = "glove" // @poff=228
0xa5: Stack[-2] = (int) 1
0xa6: Stack[-1] = (int) 30
0xa7: Call 0xdb

0xa8: Pop(3)
0xa9: Push((int) 9)
0xaa: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xac: PushEmpty(string, int, int)
0xad: Stack[-3] = "boot_army" // @poff=240
0xae: Stack[-2] = (int) 1
0xaf: Stack[-1] = (int) 50
0xb0: Call 0xdb

0xb1: Pop(3)
0xb2: PushEmpty(string, int, int)
0xb3: Stack[-3] = "glove_army" // @poff=260
0xb4: Stack[-2] = (int) 1
0xb5: Stack[-1] = (int) 50
0xb6: Call 0xdb

0xb7: Pop(3)
0xb8: PushEmpty(string, int, int)
0xb9: Stack[-3] = "balahon" // @poff=282
0xba: Stack[-2] = (int) 1
0xbb: Stack[-1] = (int) 100
0xbc: Call 0xdb

0xbd: Pop(3)
0xbe: PushEmpty()
0xbf: Call 0xc3

0xc0: Pop(0)
0xc1: Return(); Pop(8)

0xc2: Stack[-4] = 0
0xc3: @ Hold()
0xc4: Pop(0)
0xc5: GOTO 0xc3

0xc6: Return(); Pop(0)

0xc7: PushEmpty(bool, bool, bool, bool)
0xc8: PushEmpty(bool)
0xc9: Call 0xfa

0xca: Pop(0)
0xcb: Pop(1); Push((bool) Stack[-1] == 0)
0xcc: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcd: Return(); Pop(4)

0xce: @@ IsOnGround(Stack[-2]); Obj=5 // @poff=298
0xcf: Pop(0)
0xd0: Push(Stack[-2])
0xd1: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd2: EventDisable(0)
0xd3: @ IsOverrideActive(Stack[-1])
0xd4: Pop(0)
0xd5: Pop(0); Push((bool) Stack[-1] == 0)
0xd6: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd7: @ Barter(Stack[-5])
0xd8: Pop(0)
0xd9: EventEnable(0)
0xda: Return(); Pop(4)

0xdb: PushEmpty(bool, bool)
0xdc: PushEmpty(bool, int, int)
0xdd: Stack[-7] = Stack[-2]
0xde: Stack[-6] = Stack[-1]
0xdf: Call 0xf5

0xe0: Pop(2)
0xe1: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe2: Push((int) 0)
0xe3: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0xe4: Pop(1)
0xe5: Return(); Pop(2)

0xe6: PushEmpty(int, bool, int, bool)
0xe7: PushEmpty(bool, int, int)
0xe8: Stack[-10] = Stack[-2]
0xe9: Stack[-9] = Stack[-1]
0xea: Call 0xf5

0xeb: Pop(2)
0xec: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xed: @ irand(Stack[-2], Stack[-5])
0xee: Pop(0)
0xef: Push((int) 0)
0xf0: Push((int) 1)
0xf1: Pop(1); Push(Stack[-7] + Stack[-1]);
0xf2: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0xf3: Pop(2)
0xf4: Return(); Pop(4)

0xf5: PushEmpty(int, int)
0xf6: @ irand(Stack[-1], Stack[-3])
0xf7: Pop(0)
0xf8: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0xf9: Return(); Pop(2)

0xfa: PushEmpty(int, int)
0xfb: Push("nouse_container") // @poff=309
0xfc: @ GetVariable(Stack[-1], Stack[-2])
0xfd: Pop(1)
0xfe: Stack[-3] = !Stack[-1]; Pop(0);
0xff: Return(); Pop(2)

0x100: PushEmpty(float, float)
0x101: @ GetGameTime(Stack[-1])
0x102: Pop(0)
0x103: Push((int) 1)
0x104: PushEmpty(int)
0x105: Push((int) 24)
0x106: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x107: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x108: Return(); Pop(2)

