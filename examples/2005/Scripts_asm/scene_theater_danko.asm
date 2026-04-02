GlobalVarCount = 0

Strings:
	W:quest_d12_01
	W:theater_load
	W:theater_unload
	W:Performance
	W:cs_mask_danko
	W:cs_mask_danko.xml
	A:ForceGeometryLoad
	W:.mot
	W:nightmask
	W:.ogg
	W:NightMasks
	W:.wmv
	W:player
	W:noaccess
	A:HasProperty
	A:GetProperty
	A:SetProperty
	A:RemoveProperty
// @pool_raw:710075006500730074005f006400310032005f0030003100000074006800650061007400650072005f006c006f0061006400000074006800650061007400650072005f0075006e006c006f0061006400000050006500720066006f0072006d0061006e00630065000000630073005f006d00610073006b005f00640061006e006b006f000000630073005f006d00610073006b005f00640061006e006b006f002e0078006d006c000000466f72636547656f6d657472794c6f6164002e006d006f00740000006e0069006700680074006d00610073006b0000002e006f006700670000004e0069006700680074004d00610073006b00730000002e0077006d007600000070006c00610079006500720000006e006f00610063006300650073007300000048617350726f70657274790047657450726f70657274790053657450726f70657274790052656d6f766550726f706572747900

Import:
	Hold (0 args)
	SetVariable (2 args)
	AddActor (6 args)
	CameraPlay (1 args)
	PlayGlobalMusic (1 args)
	CameraWaitForPlayFinish (0 args)
	CameraSwitchToNormal (0 args)
	RemoveActor (1 args)
	PlayMovie (1 args)
	FindActor (2 args)
	self (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	GetVariable (2 args)

RunOp = 0xf
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x0 Vars = ()
		EVENT_6 Op = 0x9 Vars = ()


0x0: PushEmpty()
0x1: Call2 0x13

0x2: Pop(0)
0x3: PushEmpty(bool, string, string)
0x4: Stack[-2] = "quest_d12_01" // @poff=0
0x5: Stack[-1] = "theater_load" // @poff=26
0x6: Call2 0x94

0x7: Pop(3)
0x8: Return(); Pop(0)

0x9: PushEmpty(bool, string, string)
0xa: Stack[-2] = "quest_d12_01" // @poff=0
0xb: Stack[-1] = "theater_unload" // @poff=52
0xc: Call2 0x94

0xd: Pop(3)
0xe: Return(); Pop(0)

0xf: @ Hold()
0x10: Pop(0)
0x11: GOTO 0xf

0x12: Return(); Pop(0)

0x13: PushEmpty(int, int, object, object, int, int, object, object)
0x14: PushEmpty(bool)
0x15: Call2 0xb1

0x16: Pop(0)
0x17: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x18: PushEmpty(int)
0x19: Call2 0xa0

0x1a: Stack[-1] = Stack[-5]
0x1b: Pop(1)
0x1c: Push("Performance") // @poff=82
0x1d: Pop(1); Push(Stack[-1] + Stack[-5]);
0x1e: Push((int) 1)
0x1f: @ SetVariable(Stack[-2], Stack[-1])
0x20: Pop(2)
0x21: Push("cs_mask_danko") // @poff=106
0x22: PushEmpty(object)
0x23: Call2 0x8e

0x24: Pop(0)
0x25: Push([0.0, 0.0, 0.0])
0x26: Push([0.0, 0.0, 1.0])
0x27: Push("cs_mask_danko.xml") // @poff=134
0x28: @ AddActor(Stack[-7], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x29: Pop(5)
0x2a: @@ ForceGeometryLoad(); Obj=2 // @poff=170
0x2b: Pop(0)
0x2c: PushEmpty(object)
0x2d: Call2 0x5c

0x2e: Stack[-1] = Stack[-2]
0x2f: Pop(1)
0x30: PushEmpty(object)
0x31: Stack[-2] = Stack[-1]
0x32: Call2 0x63

0x33: Pop(1)
0x34: Push("cs_mask_danko") // @poff=106
0x35: Push((int) 1)
0x36: Pop(1); Push(Stack[-6] - Stack[-1]);
0x37: Pop(2); Push(Stack[-2] + Stack[-1]);
0x38: Push(".mot") // @poff=188
0x39: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3a: @ CameraPlay(Stack[-1])
0x3b: Pop(1)
0x3c: Push("nightmask") // @poff=198
0x3d: Push((int) 1)
0x3e: Pop(1); Push(Stack[-6] - Stack[-1]);
0x3f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x40: Push(".ogg") // @poff=218
0x41: Pop(2); Push(Stack[-2] + Stack[-1]);
0x42: @ PlayGlobalMusic(Stack[-1])
0x43: Pop(1)
0x44: @ CameraWaitForPlayFinish()
0x45: Pop(0)
0x46: Push("") // @poff=23
0x47: @ PlayGlobalMusic(Stack[-1])
0x48: Pop(1)
0x49: PushEmpty(object)
0x4a: Stack[-2] = Stack[-1]
0x4b: Call2 0x7a

0x4c: Pop(1)
0x4d: @ CameraSwitchToNormal()
0x4e: Pop(0)
0x4f: @ RemoveActor(Stack[-2])
0x50: Pop(0)
0x51: Push("NightMasks") // @poff=228
0x52: Push((int) 1)
0x53: Pop(1); Push(Stack[-6] - Stack[-1]);
0x54: Pop(2); Push(Stack[-2] + Stack[-1]);
0x55: Push(".wmv") // @poff=250
0x56: Pop(2); Push(Stack[-2] + Stack[-1]);
0x57: @ PlayMovie(Stack[-1])
0x58: Pop(1)
0x59: Stack[-1] = 0
0x5a: Stack[-2] = 0
0x5b: Return(); Pop(8)

0x5c: PushEmpty(object, object)
0x5d: Push("player") // @poff=260
0x5e: @ FindActor(Stack[-2], Stack[-1])
0x5f: Pop(1)
0x60: Stack[-1] = Stack[-3]
0x61: Return(); Pop(2)

0x62: Stack[-1] = 0
0x63: PushEmpty(bool, int, bool, int)
0x64: Pop(0); Push((bool) Stack[-5] == 0)
0x65: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x66: Return(); Pop(4)

0x67: Push("noaccess") // @poff=274
0x68: @@ HasProperty(Stack[-1], Stack[-3]); Obj=6 // @poff=292
0x69: Pop(1)
0x6a: Push(Stack[-2])
0x6b: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6c: Push("noaccess") // @poff=274
0x6d: @@ GetProperty(Stack[-1], Stack[-2]); Obj=6 // @poff=304
0x6e: Pop(1)
0x6f: Push("noaccess") // @poff=274
0x70: Push((int) 1)
0x71: Pop(1); Push(Stack[-3] + Stack[-1]);
0x72: @@ SetProperty(Stack[-2], Stack[-1]); Obj=7 // @poff=316
0x73: Pop(2)
0x74: GOTO 0x79

0x75: Push("noaccess") // @poff=274
0x76: Push((int) 1)
0x77: @@ SetProperty(Stack[-2], Stack[-1]); Obj=7 // @poff=316
0x78: Pop(2)
0x79: Return(); Pop(4)

0x7a: PushEmpty(int, int)
0x7b: Pop(0); Push((bool) Stack[-3] == 0)
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: Return(); Pop(2)

0x7e: Push("noaccess") // @poff=274
0x7f: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=304
0x80: Pop(1)
0x81: Push((int) 1)
0x82: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x83: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x84: Push("noaccess") // @poff=274
0x85: Push((int) 1)
0x86: Pop(1); Push(Stack[-3] - Stack[-1]);
0x87: @@ SetProperty(Stack[-2], Stack[-1]); Obj=5 // @poff=316
0x88: Pop(2)
0x89: GOTO 0x8d

0x8a: Push("noaccess") // @poff=274
0x8b: @@ RemoveProperty(Stack[-1]); Obj=4 // @poff=328
0x8c: Pop(1)
0x8d: Return(); Pop(2)

0x8e: PushEmpty(object, object)
0x8f: @ self(Stack[-1])
0x90: Pop(0)
0x91: Stack[-1] = Stack[-3]
0x92: Return(); Pop(2)

0x93: Stack[-1] = 0
0x94: PushEmpty(object, object)
0x95: @ FindActor(Stack[-1], Stack[-4])
0x96: Pop(0)
0x97: Pop(0); PushNull((bool) Stack[-1] == 0)
0x98: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x99: Stack[-5] = (bool) 0
0x9a: Return(); Pop(2)

0x9b: @ Trigger(Stack[-1], Stack[-3])
0x9c: Pop(0)
0x9d: Stack[-5] = (bool) 1
0x9e: Return(); Pop(2)

0x9f: Stack[-1] = 0
0xa0: PushEmpty(float, float)
0xa1: @ GetGameTime(Stack[-1])
0xa2: Pop(0)
0xa3: Push((int) 1)
0xa4: PushEmpty(int)
0xa5: Push((int) 24)
0xa6: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xa7: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xa8: Return(); Pop(2)

0xa9: PushEmpty(float, float)
0xaa: @ GetGameTime(Stack[-1])
0xab: Pop(0)
0xac: PushEmpty(int)
0xad: Stack[-2] = Stack[-1]
0xae: Push((int) 24)
0xaf: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xb0: Return(); Pop(2)

0xb1: PushEmpty(int, int, int, int, int, int)
0xb2: PushEmpty(int)
0xb3: Call2 0xa9

0xb4: Stack[-1] = Stack[-4]
0xb5: Pop(1)
0xb6: Push((int) 6)
0xb7: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xb8: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xb9: PushEmpty(int)
0xba: Call2 0xa0

0xbb: Stack[-1] = Stack[-3]
0xbc: Pop(1)
0xbd: Push((int) 1)
0xbe: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc0: Push("Performance") // @poff=82
0xc1: Pop(1); Push(Stack[-1] + Stack[-3]);
0xc2: @ GetVariable(Stack[-1], Stack[-2])
0xc3: Pop(1)
0xc4: Push((int) 0)
0xc5: Stack[-8] = Stack[-2] == Stack[-1]; Pop(1);
0xc6: Return(); Pop(6)

0xc7: Stack[-7] = (bool) 0
0xc8: Return(); Pop(6)

