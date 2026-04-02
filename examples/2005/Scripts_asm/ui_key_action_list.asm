GlobalVarCount = 0

Strings:
	A:size
	W:GetKeyboardState fail
	A:GetKeyState
	A:get
	W:wrong key code
	W:scrollbar
	W:whitepixel
	W:default
	W: , 
	A:add
	A:Next
	W:qsave
	W:qload
	A:clear
	W:AddKeyToAction fail
// @pool_raw:73697a65004700650074004b006500790062006f006100720064005300740061007400650020006600610069006c0000004765744b657953746174650067657400770072006f006e00670020006b0065007900200063006f006400650000007300630072006f006c006c0062006100720000007700680069007400650070006900780065006c000000640065006600610075006c007400000020002c0020000000616464004e6578740071007300610076006500000071006c006f00610064000000636c656172004100640064004b006500790054006f0041006300740069006f006e0020006600610069006c000000
// @pool_encoding:utf8

Import:
	SetNeedUpdate (1 args)
	CaptureKeyboard (0 args)
	CaptureMouse (0 args)
	GetKeyboardState (1 args)
	Trace (1 args)
	IsValidVirtualKey (2 args)
	Unbind (1 args)
	Bind (2 args)
	ReleaseKeyboard (0 args)
	ReleaseMouse (0 args)
	SendMessageToParent (1 args)
	StretchBlit (5 args)
	GetTextWidth (3 args)
	Print (7 args)
	CreateIntVector (1 args)
	CreateStringVector (1 args)
	CreateKeyEnumerator (1 args)
	GetKeyName (2 args)
	CreateObjectVector (1 args)
	GetBindType (2 args)
	GetBindAction (2 args)
	GetBindCommand (2 args)
	GetWindowSize (2 args)
	ClientToScreen (2 args)
	EnableClipping (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	SendMessage (2 args)
	GetStringByID (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, int, int, int, object, object, object, object, object, int, bool, bool) Params = 0
		EVENT_1 Op = 0x1f Vars = (float)
		EVENT_2 Op = 0x8a Vars = (int, int)
		EVENT_6 Op = 0x96 Vars = (int, int)
		EVENT_3 Op = 0xa2 Vars = (int, int)
		EVENT_7 Op = 0xae Vars = (int, int)
		EVENT_15 Op = 0xba Vars = (int, int, float)
		EVENT_0 Op = 0x21e Vars = ()
		EVENT_200 Op = 0x236 Vars = (int, string, object)


0x0: Push((bool) 1)
0x1: @ SetNeedUpdate(Stack[-1])
0x2: Pop(1)
0x3: Stack[11 + Tasks[-1].StackPointer] = (bool)0
0x4: Stack[12 + Tasks[-1].StackPointer] = (bool)0
0x5: Stack[10 + Tasks[-1].StackPointer] = (int)-1
0x6: PushEmpty()
0x7: Call2 0x125

0x8: Pop(0)
0x9: PushEmpty()
0xa: Call2 0x20b

0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty(int, int)
0xe: @@@ size(Stack[-1]); Obj=5 // @poff=0
0xf: Pop(0)
0x10: Stack[-1] = Stack[-3]
0x11: Return(); Pop(2)

0x12: Stack[-1] = (int) 17
0x13: Return(); Pop(0)

0x14: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x15: Return(); Pop(0)

0x16: PushEmpty()
0x17: Stack[10 + Tasks[-1].StackPointer] = Stack[-1]
0x18: Stack[11 + Tasks[-1].StackPointer] = (bool)1
0x19: Stack[12 + Tasks[-1].StackPointer] = (bool)0
0x1a: @ CaptureKeyboard()
0x1b: Pop(0)
0x1c: @ CaptureMouse()
0x1d: Pop(0)
0x1e: Return(); Pop(0)

0x1f: PushEmpty(object, int, bool, int, object, int, bool, int)
0x20: PushEmpty(bool)
0x21: Call2 0x14

0x22: Pop(0)
0x23: Pop(1); Push((bool) Stack[-1] == 0)
0x24: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x25: Return(); Pop(8)

0x26: @ GetKeyboardState(Stack[-4])
0x27: Pop(0)
0x28: Pop(0); Push((bool) Stack[-4] == 0)
0x29: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2a: Push("GetKeyboardState fail") // @poff=5
0x2b: @ Trace(Stack[-1])
0x2c: Pop(1)
0x2d: Return(); Pop(8)

0x2e: Stack[-3] = (int) 0
0x2f: Push((int) 256)
0x30: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x31: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x32: @ IsValidVirtualKey(Stack[-2], Stack[-3])
0x33: Pop(0)
0x34: Push(Stack[-2])
0x35: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x36: @@ GetKeyState(Stack[-1], Stack[-3]); Obj=4 // @poff=49
0x37: Pop(0)
0x38: Push((int) 128)
0x39: Pop(1); Push(Stack[-2] & Stack[-1]);
0x3a: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3b: Push( Stack[12 + Tasks[-1].StackPointer] )
0x3c: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3d: PushEmpty(int)
0x3e: Stack[-4] = Stack[-1]
0x3f: Call2 0x48

0x40: Pop(1)
0x41: Return(); Pop(8)

0x42: Push((int) 1)
0x43: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x44: GOTO 0x2f

0x45: Stack[12 + Tasks[-1].StackPointer] = (bool)1
0x46: Return(); Pop(8)

0x47: Stack[-4] = 0
0x48: PushEmpty(bool, int, object, int, int, int, int, bool, int, object, int, int, int, int)
0x49: PushEmpty(bool)
0x4a: Stack[-1] = (bool) 0
0x4b: Push((int) -1)
0x4c: Pop(1); Push((bool) Stack[-17] != Stack[-1])
0x4d: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x4e: Push((int) 27)
0x4f: Pop(1); Push((bool) Stack[-17] != Stack[-1])
0x50: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x51: Stack[-1] = (bool) 1
0x52: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x53: @ IsValidVirtualKey(Stack[-7], Stack[-15])
0x54: Pop(0)
0x55: Push(Stack[-7])
0x56: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x57: @@@ get(Stack[-6], Stack[-10]T); Obj=5 // @poff=61
0x58: Pop(0)
0x59: @ Unbind(Stack[-15])
0x5a: Pop(0)
0x5b: @@@ get(Stack[-5], Stack[-10]T); Obj=7 // @poff=61
0x5c: Pop(0)
0x5d: @@ size(Stack[-4]); Obj=5 // @poff=0
0x5e: Pop(0)
0x5f: Stack[-3] = (int) 0
0x60: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x61: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x62: @@ get(Stack[-2], Stack[-3]); Obj=5 // @poff=61
0x63: Pop(0)
0x64: @@@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=61
0x65: Pop(0)
0x66: @ Unbind(Stack[-1])
0x67: Pop(0)
0x68: Push((int) 1)
0x69: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x6a: GOTO 0x60

0x6b: @ Bind(Stack[-15], Stack[-6])
0x6c: Pop(0)
0x6d: PushEmpty()
0x6e: Call2 0x125

0x6f: Pop(0)
0x70: Stack[-5] = 0
0x71: GOTO 0x75

0x72: Push("wrong key code") // @poff=65
0x73: @ Trace(Stack[-1])
0x74: Pop(1)
0x75: Stack[10 + Tasks[-1].StackPointer] = (int)-1
0x76: Stack[11 + Tasks[-1].StackPointer] = (bool)0
0x77: Stack[12 + Tasks[-1].StackPointer] = (bool)0
0x78: @ ReleaseKeyboard()
0x79: Pop(0)
0x7a: @ ReleaseMouse()
0x7b: Pop(0)
0x7c: Push((int) 1)
0x7d: @ SendMessageToParent(Stack[-1])
0x7e: Pop(1)
0x7f: Return(); Pop(14)

0x80: PushEmpty()
0x81: Push((int) -1)
0x82: Pop(1); Push((bool) Stack[10 + Tasks[-1].StackPointer] == Stack[-1])
0x83: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x84: PushEmpty(int)
0x85: Stack[-4] = Stack[-1]
0x86: Call2 0x16

0x87: Pop(1)
0x88: GOTO 0x89

0x89: Return(); Pop(0)

0x8a: PushEmpty()
0x8b: PushEmpty(bool)
0x8c: Call2 0x14

0x8d: Pop(0)
0x8e: Pop(1); Push((bool) Stack[-1] == 0)
0x8f: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x90: PushEmpty(int, int)
0x91: Stack[-4] = Stack[-2]
0x92: Stack[-3] = Stack[-1]
0x93: Call2 0x251

0x94: Pop(2)
0x95: Return(); Pop(0)

0x96: PushEmpty()
0x97: PushEmpty(bool)
0x98: Call2 0x14

0x99: Pop(0)
0x9a: Pop(1); Push((bool) Stack[-1] == 0)
0x9b: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9c: PushEmpty(int, int)
0x9d: Stack[-4] = Stack[-2]
0x9e: Stack[-3] = Stack[-1]
0x9f: Call2 0x273

0xa0: Pop(2)
0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: PushEmpty(bool)
0xa4: Call2 0x14

0xa5: Pop(0)
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: PushEmpty(int, int)
0xa9: Stack[-4] = Stack[-2]
0xaa: Stack[-3] = Stack[-1]
0xab: Call2 0x262

0xac: Pop(2)
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: PushEmpty(bool)
0xb0: Call2 0x14

0xb1: Pop(0)
0xb2: Pop(1); Push((bool) Stack[-1] == 0)
0xb3: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb4: PushEmpty(int, int)
0xb5: Stack[-4] = Stack[-2]
0xb6: Stack[-3] = Stack[-1]
0xb7: Call2 0x284

0xb8: Pop(2)
0xb9: Return(); Pop(0)

0xba: PushEmpty()
0xbb: PushEmpty(bool)
0xbc: Call2 0x14

0xbd: Pop(0)
0xbe: Pop(1); Push((bool) Stack[-1] == 0)
0xbf: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc0: PushEmpty(int, int, float)
0xc1: Stack[-6] = Stack[-3]
0xc2: Stack[-5] = Stack[-2]
0xc3: Stack[-4] = Stack[-1]
0xc4: Call2 0x245

0xc5: Pop(3)
0xc6: Return(); Pop(0)

0xc7: PushEmpty()
0xc8: Return(); Pop(0)

0xc9: PushEmpty()
0xca: Return(); Pop(0)

0xcb: PushEmpty()
0xcc: Return(); Pop(0)

0xcd: Stack[-1] = "scrollbar" // @poff=95
0xce: Return(); Pop(0)

0xcf: PushEmpty(string, int, int, string, string, object, int, int, int, string, int, string, int, int, string, string, object, int, int, int, string, int)
0xd0: Pop(0); Push((bool) Stack[-25] == Stack[10 + Tasks[-1].StackPointer])
0xd1: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xd2: Push("whitepixel") // @poff=115
0xd3: PushEmpty(int)
0xd4: Call2 0x12

0xd5: Pop(0)
0xd6: @ StretchBlit(Stack[-2], Stack[-26], Stack[-25], Stack[-1]T, Stack[-1])
0xd7: Pop(2)
0xd8: PushEmpty(string, int)
0xd9: Stack[-1] = (int) 108
0xda: Call2 0x2d3

0xdb: Stack[-2] = Stack[-13]
0xdc: Pop(2)
0xdd: Push("default") // @poff=137
0xde: @ GetTextWidth(Stack[-11], Stack[-1], Stack[-12])
0xdf: Pop(1)
0xe0: Push("default") // @poff=137
0xe1: Pop(0); Push(Stack[1 + Tasks[-1].StackPointer] - Stack[-11]);
0xe2: Push((int) 2)
0xe3: Pop(2); Push(Stack[-2] / Stack[-1]);
0xe4: Pop(1); Push(Stack[-26] + Stack[-1]);
0xe5: Push((float)0.250980406999588)
0xe6: Push((float)0.250980406999588)
0xe7: Push((float)0.250980406999588)
0xe8: @ Print(Stack[-5], Stack[-4], Stack[-28], Stack[-16], Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(5)
0xea: Return(); Pop(22)

0xeb: @@@ get(Stack[-9], Stack[-25]); Obj=6 // @poff=61
0xec: Pop(0)
0xed: PushEmpty(string, int)
0xee: Stack[-11] = Stack[-1]
0xef: Call2 0x2d3

0xf0: Stack[-2] = Stack[-10]
0xf1: Pop(2)
0xf2: @@@ get(Stack[-6], Stack[-25]); Obj=7 // @poff=61
0xf3: Pop(0)
0xf4: @@ size(Stack[-5]); Obj=6 // @poff=0
0xf5: Pop(0)
0xf6: Stack[-4] = (int) 0
0xf7: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0xf8: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xf9: Push(Stack[-4])
0xfa: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xfb: Push(" , ") // @poff=153
0xfc: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xfd: @@ get(Stack[-3], Stack[-4]); Obj=6 // @poff=61
0xfe: Pop(0)
0xff: @@@ get(Stack[-2], Stack[-3]); Obj=9 // @poff=61
0x100: Pop(0)
0x101: Stack[-7] = Stack[-7] + Stack[-2]; Pop(0);
0x102: Push((int) 1)
0x103: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x104: GOTO 0xf7

0x105: Push("default") // @poff=137
0x106: Push((float)0.5568627715110779)
0x107: Push((float)0.5568627715110779)
0x108: Push((float)0.5568627715110779)
0x109: @ Print(Stack[-4], Stack[-28], Stack[-27], Stack[-12], Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(4)
0x10b: Push(Stack[-5])
0x10c: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x10d: Push("default") // @poff=137
0x10e: @ GetTextWidth(Stack[-2], Stack[-1], Stack[-8])
0x10f: Pop(1)
0x110: Push("default") // @poff=137
0x111: Pop(0); Push(Stack[-25] + Stack[1 + Tasks[-1].StackPointer]);
0x112: Pop(1); Push(Stack[-1] - Stack[-3]);
0x113: Push((float)0.5568627715110779)
0x114: Push((float)0.5568627715110779)
0x115: Push((float)0.5568627715110779)
0x116: @ Print(Stack[-5], Stack[-4], Stack[-28], Stack[-12], Stack[-3], Stack[-2], Stack[-1])
0x117: Pop(5)
0x118: Return(); Pop(22)

0x119: Stack[-6] = 0
0x11a: PushEmpty(object, object)
0x11b: @@@ add(Stack[-4]); Obj=5 // @poff=161
0x11c: Pop(0)
0x11d: @@@ add(Stack[-3]); Obj=6 // @poff=161
0x11e: Pop(0)
0x11f: @ CreateIntVector(Stack[-1])
0x120: Pop(0)
0x121: @@@ add(Stack[-1]); Obj=7 // @poff=161
0x122: Pop(0)
0x123: Return(); Pop(2)

0x124: Stack[-1] = 0
0x125: PushEmpty(object, bool, int, string, object, bool, int, string)
0x126: @ CreateIntVector(Stack[-8]T)
0x127: Pop(0)
0x128: @ CreateStringVector(Stack[-9]T)
0x129: Pop(0)
0x12a: @ CreateKeyEnumerator(Stack[-4])
0x12b: Pop(0)
0x12c: Push((bool) 1)
0x12d: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x12e: @@ Next(Stack[-3], Stack[-2]); Obj=4 // @poff=165
0x12f: Pop(0)
0x130: Pop(0); Push((bool) Stack[-3] == 0)
0x131: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x132: GOTO 0x13a

0x133: @@@ add(Stack[-2]); Obj=8 // @poff=161
0x134: Pop(0)
0x135: @ GetKeyName(Stack[-1], Stack[-2])
0x136: Pop(0)
0x137: @@@ add(Stack[-1]); Obj=9 // @poff=161
0x138: Pop(0)
0x139: GOTO 0x12c

0x13a: @ CreateIntVector(Stack[-5]T)
0x13b: Pop(0)
0x13c: @ CreateIntVector(Stack[-6]T)
0x13d: Pop(0)
0x13e: @ CreateObjectVector(Stack[-7]T)
0x13f: Pop(0)
0x140: PushEmpty(int, int)
0x141: Stack[-2] = (int) 0
0x142: Stack[-1] = (int) 33
0x143: Call2 0x11a

0x144: Pop(2)
0x145: PushEmpty(int, int)
0x146: Stack[-2] = (int) 1
0x147: Stack[-1] = (int) 34
0x148: Call2 0x11a

0x149: Pop(2)
0x14a: PushEmpty(int, int)
0x14b: Stack[-2] = (int) 2
0x14c: Stack[-1] = (int) 35
0x14d: Call2 0x11a

0x14e: Pop(2)
0x14f: PushEmpty(int, int)
0x150: Stack[-2] = (int) 3
0x151: Stack[-1] = (int) 36
0x152: Call2 0x11a

0x153: Pop(2)
0x154: PushEmpty(int, int)
0x155: Stack[-2] = (int) 4
0x156: Stack[-1] = (int) 37
0x157: Call2 0x11a

0x158: Pop(2)
0x159: PushEmpty(int, int)
0x15a: Stack[-2] = (int) 5
0x15b: Stack[-1] = (int) 38
0x15c: Call2 0x11a

0x15d: Pop(2)
0x15e: PushEmpty(int, int)
0x15f: Stack[-2] = (int) 7
0x160: Stack[-1] = (int) 40
0x161: Call2 0x11a

0x162: Pop(2)
0x163: PushEmpty(int, int)
0x164: Stack[-2] = (int) 8
0x165: Stack[-1] = (int) 41
0x166: Call2 0x11a

0x167: Pop(2)
0x168: PushEmpty(int, int)
0x169: Stack[-2] = (int) 9
0x16a: Stack[-1] = (int) 42
0x16b: Call2 0x11a

0x16c: Pop(2)
0x16d: PushEmpty(int, int)
0x16e: Stack[-2] = (int) 10
0x16f: Stack[-1] = (int) 43
0x170: Call2 0x11a

0x171: Pop(2)
0x172: PushEmpty(int, int)
0x173: Stack[-2] = (int) 11
0x174: Stack[-1] = (int) 44
0x175: Call2 0x11a

0x176: Pop(2)
0x177: PushEmpty(int, int)
0x178: Stack[-2] = (int) 20
0x179: Stack[-1] = (int) 54
0x17a: Call2 0x11a

0x17b: Pop(2)
0x17c: PushEmpty(int, int)
0x17d: Stack[-2] = (int) 18
0x17e: Stack[-1] = (int) 55
0x17f: Call2 0x11a

0x180: Pop(2)
0x181: PushEmpty(int, int)
0x182: Stack[-2] = (int) 12
0x183: Stack[-1] = (int) 45
0x184: Call2 0x11a

0x185: Pop(2)
0x186: PushEmpty(int, int)
0x187: Stack[-2] = (int) 13
0x188: Stack[-1] = (int) 46
0x189: Call2 0x11a

0x18a: Pop(2)
0x18b: PushEmpty(int, int)
0x18c: Stack[-2] = (int) 14
0x18d: Stack[-1] = (int) 47
0x18e: Call2 0x11a

0x18f: Pop(2)
0x190: PushEmpty(int, int)
0x191: Stack[-2] = (int) 15
0x192: Stack[-1] = (int) 48
0x193: Call2 0x11a

0x194: Pop(2)
0x195: PushEmpty(int, int)
0x196: Stack[-2] = (int) 16
0x197: Stack[-1] = (int) 49
0x198: Call2 0x11a

0x199: Pop(2)
0x19a: PushEmpty(int, int)
0x19b: Stack[-2] = (int) 17
0x19c: Stack[-1] = (int) 50
0x19d: Call2 0x11a

0x19e: Pop(2)
0x19f: PushEmpty(int, int)
0x1a0: Stack[-2] = (int) 100
0x1a1: Stack[-1] = (int) 52
0x1a2: Call2 0x11a

0x1a3: Pop(2)
0x1a4: PushEmpty(int, int)
0x1a5: Stack[-2] = (int) 101
0x1a6: Stack[-1] = (int) 53
0x1a7: Call2 0x11a

0x1a8: Pop(2)
0x1a9: PushEmpty()
0x1aa: Call2 0x1ae

0x1ab: Pop(0)
0x1ac: Return(); Pop(8)

0x1ad: Stack[-4] = 0
0x1ae: PushEmpty(int, int, int, int, int, string, int, int, int, int, int, string)
0x1af: PushEmpty()
0x1b0: Call2 0x1e5

0x1b1: Pop(0)
0x1b2: @@@ size(Stack[-6]); Obj=8 // @poff=0
0x1b3: Pop(0)
0x1b4: Stack[-5] = (int) 0
0x1b5: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1b7: @@@ get(Stack[-4], Stack[-5]); Obj=8 // @poff=61
0x1b8: Pop(0)
0x1b9: @ GetBindType(Stack[-3], Stack[-4])
0x1ba: Pop(0)
0x1bb: Push((int) 0)
0x1bc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1be: GOTO 0x1e1

0x1bf: GOTO 0x1e1

0x1c0: Push((int) 1)
0x1c1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c3: @ GetBindAction(Stack[-2], Stack[-4])
0x1c4: Pop(0)
0x1c5: PushEmpty(int, int)
0x1c6: Stack[-4] = Stack[-2]
0x1c7: Stack[-7] = Stack[-1]
0x1c8: Call2 0x1f4

0x1c9: Pop(2)
0x1ca: GOTO 0x1e1

0x1cb: Push((int) 2)
0x1cc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1ce: @ GetBindCommand(Stack[-1], Stack[-4])
0x1cf: Pop(0)
0x1d0: Push("qsave") // @poff=170
0x1d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d3: PushEmpty(int, int)
0x1d4: Stack[-2] = (int) 100
0x1d5: Stack[-7] = Stack[-1]
0x1d6: Call2 0x1f4

0x1d7: Pop(2)
0x1d8: GOTO 0x1e1

0x1d9: Push("qload") // @poff=182
0x1da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1dc: PushEmpty(int, int)
0x1dd: Stack[-2] = (int) 101
0x1de: Stack[-7] = Stack[-1]
0x1df: Call2 0x1f4

0x1e0: Pop(2)
0x1e1: Push((int) 1)
0x1e2: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x1e3: GOTO 0x1b5

0x1e4: Return(); Pop(12)

0x1e5: PushEmpty(int, int, object, int, int, object)
0x1e6: @@@ size(Stack[-3]); Obj=5 // @poff=0
0x1e7: Pop(0)
0x1e8: Stack[-2] = (int) 0
0x1e9: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1eb: @@@ get(Stack[-1], Stack[-2]); Obj=7 // @poff=61
0x1ec: Pop(0)
0x1ed: @@ clear(); Obj=1 // @poff=194
0x1ee: Pop(0)
0x1ef: Stack[-1] = 0
0x1f0: Push((int) 1)
0x1f1: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1f2: GOTO 0x1e9

0x1f3: Return(); Pop(6)

0x1f4: PushEmpty(int, int, int, object, int, int, int, object)
0x1f5: @@@ size(Stack[-4]); Obj=5 // @poff=0
0x1f6: Pop(0)
0x1f7: Stack[-3] = (int) 0
0x1f8: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x1f9: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1fa: @@@ get(Stack[-2], Stack[-3]); Obj=5 // @poff=61
0x1fb: Pop(0)
0x1fc: Pop(0); Push((bool) Stack[-10] == Stack[-2])
0x1fd: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1fe: @@@ get(Stack[-1], Stack[-3]); Obj=7 // @poff=61
0x1ff: Pop(0)
0x200: @@ add(Stack[-9]); Obj=1 // @poff=161
0x201: Pop(0)
0x202: Return(); Pop(8)

0x203: Stack[-1] = 0
0x204: Push((int) 1)
0x205: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x206: GOTO 0x1f8

0x207: Push("AddKeyToAction fail") // @poff=200
0x208: @ Trace(Stack[-1])
0x209: Pop(1)
0x20a: Return(); Pop(8)

0x20b: @ GetWindowSize(Stack[-1]T, Stack[-2]T)
0x20c: Pop(0)
0x20d: Stack[3 + Tasks[-1].StackPointer] = (int)0
0x20e: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x20f: @ ClientToScreen(Stack[-3]T, Stack[-4]T)
0x210: Pop(0)
0x211: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x212: Push((bool) 1)
0x213: @ EnableClipping(Stack[-1])
0x214: Pop(1)
0x215: Push((bool) 1)
0x216: @ SetOwnerDraw(Stack[-1])
0x217: Pop(1)
0x218: PushEmpty()
0x219: Call2 0x2ad

0x21a: Pop(0)
0x21b: @ ProcessEvents()
0x21c: Pop(0)
0x21d: Return(); Pop(0)

0x21e: PushEmpty(int, int, int, int, int, int, int, int)
0x21f: PushEmpty(int)
0x220: Call2 0xd

0x221: Stack[-1] = Stack[-5]
0x222: Pop(1)
0x223: PushEmpty(int)
0x224: Call2 0x12

0x225: Stack[-1] = Stack[-4]
0x226: Pop(1)
0x227: Stack[-2] = (int) 0
0x228: Pop(0); Push((bool) Stack[-2] < Stack[-4])
0x229: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x22a: Pop(0); Push(Stack[-2] * Stack[-3]);
0x22b: Stack[-2] = Stack[-1] + Stack[0 + Tasks[-1].StackPointer]; Pop(1);
0x22c: PushEmpty(int, int, int)
0x22d: Stack[-5] = Stack[-3]
0x22e: Stack[-2] = (int) 0
0x22f: Stack[-4] = Stack[-1]
0x230: Call2 0xcf

0x231: Pop(3)
0x232: Push((int) 1)
0x233: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x234: GOTO 0x228

0x235: Return(); Pop(8)

0x236: PushEmpty()
0x237: PushEmpty(string)
0x238: Call2 0xcd

0x239: Pop(0)
0x23a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23b: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23c: Pop(0); Push(( -Stack[-3])
0x23d: PushEmpty(int)
0x23e: Call2 0x2a5

0x23f: Pop(0)
0x240: Pop(1); Push(Stack[-1] - Stack[2 + Tasks[-1].StackPointer]);
0x241: Pop(2); Push(Stack[-2] * Stack[-1]);
0x242: Push((int) 100)
0x243: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x244: Return(); Pop(0)

0x245: PushEmpty(int, int)
0x246: PushEmpty(int)
0x247: Call2 0x12

0x248: Pop(0)
0x249: Pop(1); Push(Stack[-4] * Stack[-1]);
0x24a: Push((int) 2)
0x24b: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x24c: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x24d: PushEmpty()
0x24e: Call2 0x2ad

0x24f: Pop(0)
0x250: Return(); Pop(2)

0x251: PushEmpty(int, int)
0x252: PushEmpty(int, int, int)
0x253: Stack[-7] = Stack[-2]
0x254: Stack[-6] = Stack[-1]
0x255: Call2 0x295

0x256: Stack[-3] = Stack[-4]
0x257: Pop(3)
0x258: Push((int) -1)
0x259: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x25a: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x25b: PushEmpty(int, int, int)
0x25c: Stack[-4] = Stack[-3]
0x25d: Stack[-7] = Stack[-2]
0x25e: Stack[-6] = Stack[-1]
0x25f: Call2 0x80

0x260: Pop(3)
0x261: Return(); Pop(2)

0x262: PushEmpty(int, int)
0x263: PushEmpty(int, int, int)
0x264: Stack[-7] = Stack[-2]
0x265: Stack[-6] = Stack[-1]
0x266: Call2 0x295

0x267: Stack[-3] = Stack[-4]
0x268: Pop(3)
0x269: Push((int) -1)
0x26a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x26c: PushEmpty(int, int, int)
0x26d: Stack[-4] = Stack[-3]
0x26e: Stack[-7] = Stack[-2]
0x26f: Stack[-6] = Stack[-1]
0x270: Call2 0xc7

0x271: Pop(3)
0x272: Return(); Pop(2)

0x273: PushEmpty(int, int)
0x274: PushEmpty(int, int, int)
0x275: Stack[-7] = Stack[-2]
0x276: Stack[-6] = Stack[-1]
0x277: Call2 0x295

0x278: Stack[-3] = Stack[-4]
0x279: Pop(3)
0x27a: Push((int) -1)
0x27b: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x27c: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x27d: PushEmpty(int, int, int)
0x27e: Stack[-4] = Stack[-3]
0x27f: Stack[-7] = Stack[-2]
0x280: Stack[-6] = Stack[-1]
0x281: Call2 0xc9

0x282: Pop(3)
0x283: Return(); Pop(2)

0x284: PushEmpty(int, int)
0x285: PushEmpty(int, int, int)
0x286: Stack[-7] = Stack[-2]
0x287: Stack[-6] = Stack[-1]
0x288: Call2 0x295

0x289: Stack[-3] = Stack[-4]
0x28a: Pop(3)
0x28b: Push((int) -1)
0x28c: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x28d: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x28e: PushEmpty(int, int, int)
0x28f: Stack[-4] = Stack[-3]
0x290: Stack[-7] = Stack[-2]
0x291: Stack[-6] = Stack[-1]
0x292: Call2 0xcb

0x293: Pop(3)
0x294: Return(); Pop(2)

0x295: PushEmpty(int, int, int, int, int, int)
0x296: Stack[-3] = Stack[-7] - Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x297: PushEmpty(int)
0x298: Call2 0x12

0x299: Stack[-1] = Stack[-3]
0x29a: Pop(1)
0x29b: Stack[-1] = Stack[-3] / Stack[-2]; Pop(0);
0x29c: PushEmpty(int)
0x29d: Call2 0xd

0x29e: Pop(0)
0x29f: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a1: Stack[-9] = (int) -1
0x2a2: Return(); Pop(6)

0x2a3: Stack[-1] = Stack[-9]
0x2a4: Return(); Pop(6)

0x2a5: PushEmpty(int)
0x2a6: Call2 0xd

0x2a7: Pop(0)
0x2a8: PushEmpty(int)
0x2a9: Call2 0x12

0x2aa: Pop(0)
0x2ab: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x2ac: Return(); Pop(0)

0x2ad: PushEmpty(int, int)
0x2ae: PushEmpty(int)
0x2af: Call2 0x2a5

0x2b0: Pop(0)
0x2b1: Stack[-2] = Stack[-1] - Stack[2 + Tasks[-1].StackPointer]; Pop(1);
0x2b2: Push((int) 0)
0x2b3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b5: Stack[-1] = (int) 0
0x2b6: Pop(0); Push(( -Stack[0 + Tasks[-1].StackPointer])
0x2b7: Pop(1); Push((bool) Stack[-1] > Stack[-2])
0x2b8: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b9: Stack[0 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(0);
0x2ba: GOTO 0x2bf

0x2bb: Push((int) 0)
0x2bc: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2be: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x2bf: Push((int) 0)
0x2c0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c2: Push((int) 16384)
0x2c3: PushEmpty(string)
0x2c4: Call2 0xcd

0x2c5: Pop(0)
0x2c6: @ SendMessage(Stack[-2], Stack[-1])
0x2c7: Pop(2)
0x2c8: GOTO 0x2d2

0x2c9: Pop(0); Push(( -Stack[0 + Tasks[-1].StackPointer])
0x2ca: Push((int) 100)
0x2cb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2cc: Pop(1); Push(Stack[-1] / Stack[-2]);
0x2cd: PushEmpty(string)
0x2ce: Call2 0xcd

0x2cf: Pop(0)
0x2d0: @ SendMessage(Stack[-2], Stack[-1])
0x2d1: Pop(2)
0x2d2: Return(); Pop(2)

0x2d3: PushEmpty(string, string)
0x2d4: @ GetStringByID(Stack[-1], Stack[-3])
0x2d5: Pop(0)
0x2d6: Stack[-1] = Stack[-4]
0x2d7: Return(); Pop(2)

