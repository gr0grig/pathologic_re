GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:d2q03
	W:birdmask
	W:r4_house_2_02
	W:r4_house_2_02@door1
	W:r4_house_2_02@door2
	W:pt_d2q03_birdmask
	W:pers_birdmask
	W:d2q03_birdmask.xml
	W:completed
	W:icot_lara_supply
	W:enabled
	A:SetProperty
	W:cleanup
	A:GetLocator
	W:Locator 
	W: doesn't exist
	W:Door 
	W: not found
	W:locked
	W:Can't retrieve diary root
	A:Find
	A:Remove
// @pool_raw:64003200710030003300000062006900720064006d00610073006b000000720034005f0068006f007500730065005f0032005f00300032000000720034005f0068006f007500730065005f0032005f0030003200400064006f006f00720031000000720034005f0068006f007500730065005f0032005f0030003200400064006f006f00720032000000700074005f00640032007100300033005f0062006900720064006d00610073006b00000070006500720073005f0062006900720064006d00610073006b000000640032007100300033005f0062006900720064006d00610073006b002e0078006d006c00000063006f006d0070006c0065007400650064000000690063006f0074005f006c006100720061005f0073007500700070006c007900000065006e00610062006c0065006400000053657450726f70657274790063006c00650061006e007500700000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b00650064000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e640052656d6f766500

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetSceneByName (2 args)
	GetVariable (2 args)
	FindActor (2 args)
	Trigger (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)
	GetDiaryRoot (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x9 Vars = (string)
		EVENT_9 Op = 0x73 Vars = (int, float)


0x0: Push("d2q03") // @poff=0
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(int)
0x5: Stack[-1] = (int) 2
0x6: Call2 0x60

0x7: Pop(1)
0x8: Return(); Pop(0)

0x9: PushEmpty(object, object)
0xa: @ Trace(Stack[-3])
0xb: Pop(0)
0xc: Push("birdmask") // @poff=12
0xd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0xf: Push("r4_house_2_02") // @poff=30
0x10: @ GetSceneByName(Stack[-2], Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(string, bool)
0x13: Stack[-2] = "r4_house_2_02@door1" // @poff=58
0x14: Stack[-1] = (bool) 0
0x15: Call2 0x90

0x16: Pop(2)
0x17: PushEmpty(string, bool)
0x18: Stack[-2] = "r4_house_2_02@door2" // @poff=98
0x19: Stack[-1] = (bool) 0
0x1a: Call2 0x90

0x1b: Pop(2)
0x1c: PushEmpty(object, object, string, string, string)
0x1d: Stack[-6] = Stack[-4]
0x1e: Stack[-3] = "pt_d2q03_birdmask" // @poff=138
0x1f: Stack[-2] = "pers_birdmask" // @poff=174
0x20: Stack[-1] = "d2q03_birdmask.xml" // @poff=202
0x21: Call2 0x7e

0x22: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x23: Pop(5)
0x24: Stack[-1] = 0
0x25: GOTO 0x2c

0x26: Push("completed") // @poff=240
0x27: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x28: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x29: PushEmpty()
0x2a: Call2 0x40

0x2b: Pop(0)
0x2c: Return(); Pop(2)

0x2d: PushEmpty(int, int)
0x2e: Push("d2q03") // @poff=0
0x2f: @ GetVariable(Stack[-1], Stack[-2])
0x30: Pop(1)
0x31: Push((int) 1000)
0x32: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x34: PushEmpty()
0x35: Call2 0x38

0x36: Pop(0)
0x37: Return(); Pop(2)

0x38: Push("d2q03") // @poff=0
0x39: Push((int) -1)
0x3a: @ SetVariable(Stack[-2], Stack[-1])
0x3b: Pop(2)
0x3c: PushEmpty()
0x3d: Call2 0x51

0x3e: Pop(0)
0x3f: Return(); Pop(0)

0x40: PushEmpty(object, object)
0x41: Push("icot_lara_supply") // @poff=260
0x42: @ FindActor(Stack[-2], Stack[-1])
0x43: Pop(1)
0x44: Push("enabled") // @poff=294
0x45: Push((bool) 1)
0x46: @@ SetProperty(Stack[-2], Stack[-1]); Obj=3 // @poff=310
0x47: Pop(2)
0x48: Push("d2q03") // @poff=0
0x49: Push((int) 1000)
0x4a: @ SetVariable(Stack[-2], Stack[-1])
0x4b: Pop(2)
0x4c: PushEmpty()
0x4d: Call2 0x51

0x4e: Pop(0)
0x4f: Return(); Pop(2)

0x50: Stack[-1] = 0
0x51: EventDisable(26)
0x52: PushEmpty()
0x53: Call2 0xc4

0x54: Pop(0)
0x55: Push( Stack[0 + Tasks[-1].StackPointer] )
0x56: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x57: Push("cleanup") // @poff=322
0x58: @ Trigger(Stack[-0]T, Stack[-1])
0x59: Pop(1)
0x5a: PushEmpty(object)
0x5b: Call2 0x78

0x5c: Pop(0)
0x5d: @ RemoveActor(Stack[-1])
0x5e: Pop(1)
0x5f: Return(); Pop(0)

0x60: PushEmpty(float, float)
0x61: @ GetGameTime(Stack[-1])
0x62: Pop(0)
0x63: Push((int) 24)
0x64: Pop(1); Push(Stack[-4] * Stack[-1]);
0x65: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x66: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x67: PushEmpty()
0x68: Call2 0x51

0x69: Pop(0)
0x6a: GOTO 0x72

0x6b: Push((int) 0)
0x6c: Push((int) 24)
0x6d: Pop(1); Push(Stack[-5] * Stack[-1]);
0x6e: @ SetTimeEvent(Stack[-2], Stack[-1])
0x6f: Pop(2)
0x70: @ Hold()
0x71: Pop(0)
0x72: Return(); Pop(2)

0x73: PushEmpty()
0x74: PushEmpty()
0x75: Call2 0x2d

0x76: Pop(0)
0x77: Return(); Pop(0)

0x78: PushEmpty(object, object)
0x79: @ self(Stack[-1])
0x7a: Pop(0)
0x7b: Stack[-1] = Stack[-3]
0x7c: Return(); Pop(2)

0x7d: Stack[-1] = 0
0x7e: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x7f: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=338
0x80: Pop(0)
0x81: Pop(0); Push((bool) Stack[-4] == 0)
0x82: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x83: Push("Locator ") // @poff=349
0x84: Pop(1); Push(Stack[-1] + Stack[-12]);
0x85: Push(" doesn't exist") // @poff=367
0x86: Pop(2); Push(Stack[-2] + Stack[-1]);
0x87: @ Trace(Stack[-1])
0x88: Pop(1)
0x89: Stack[-1] = 0
0x8a: GOTO 0x8d

0x8b: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x8c: Pop(0)
0x8d: Stack[-1] = Stack[-13]
0x8e: Return(); Pop(8)

0x8f: Stack[-1] = 0
0x90: PushEmpty(object, object)
0x91: @ FindActor(Stack[-1], Stack[-4])
0x92: Pop(0)
0x93: Pop(0); Push((bool) Stack[-1] == 0)
0x94: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x95: Push("Door ") // @poff=397
0x96: Pop(1); Push(Stack[-1] + Stack[-5]);
0x97: Push(" not found") // @poff=409
0x98: Pop(2); Push(Stack[-2] + Stack[-1]);
0x99: @ Trace(Stack[-1])
0x9a: Pop(1)
0x9b: GOTO 0x9f

0x9c: Push("locked") // @poff=431
0x9d: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=310
0x9e: Pop(1)
0x9f: Return(); Pop(2)

0xa0: Stack[-1] = 0
0xa1: PushEmpty(bool, int)
0xa2: Stack[-1] = (int) 37
0xa3: Call2 0xb3

0xa4: Pop(2)
0xa5: Return(); Pop(0)

0xa6: PushEmpty(object, object)
0xa7: @ GetDiaryRoot(Stack[-1])
0xa8: Pop(0)
0xa9: Pop(0); Push((bool) Stack[-1] == 0)
0xaa: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xab: Push("Can't retrieve diary root") // @poff=445
0xac: @ Trace(Stack[-1])
0xad: Pop(1)
0xae: Stack[-3] = (bool) 0
0xaf: Return(); Pop(2)

0xb0: Stack[-1] = Stack[-3]
0xb1: Return(); Pop(2)

0xb2: Stack[-1] = 0
0xb3: PushEmpty(object, object, object, object)
0xb4: PushEmpty(object)
0xb5: Call2 0xa6

0xb6: Stack[-1] = Stack[-3]
0xb7: Pop(1)
0xb8: @@ Find(Stack[-5], Stack[-1]); Obj=2 // @poff=497
0xb9: Pop(0)
0xba: Pop(0); Push((bool) Stack[-1] == 0)
0xbb: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbc: Stack[-6] = (bool) 0
0xbd: Return(); Pop(4)

0xbe: @@ Remove(); Obj=1 // @poff=502
0xbf: Pop(0)
0xc0: Stack[-6] = (bool) 1
0xc1: Return(); Pop(4)

0xc2: Stack[-1] = 0
0xc3: Stack[-2] = 0
0xc4: PushEmpty()
0xc5: Call2 0xa1

0xc6: Pop(0)
0xc7: Return(); Pop(0)

