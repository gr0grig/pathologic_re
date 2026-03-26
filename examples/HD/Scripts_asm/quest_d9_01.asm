GlobalVarCount = 0

Strings:
	W:pt_d9q01_doberman1
	W:pers_doberman
	W:d9q01_doberman.xml
	A:add
	W:pt_d9q01_doberman2
	W:pt_d9q01_doberman3
	W:teleport_to_han
	W:player
	W:mnogogrannik_han
	W:pt_d9q01_teleport
	A:GetLocator
	W:teleport_to_mnogogrannik
	W:place_rifles
	W:d9q01_rifle
	W:d9q01_rifle.xml
	W:unlock_polyh
	W:polyh@door1
	W:cleanup
	W:d9q01
	W:fail
	W:completed
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	A:size
	A:get
	A:Remove
	A:clear
// @pool_raw:700074005f00640039007100300031005f0064006f006200650072006d0061006e003100000070006500720073005f0064006f006200650072006d0061006e000000640039007100300031005f0064006f006200650072006d0061006e002e0078006d006c00000061646400700074005f00640039007100300031005f0064006f006200650072006d0061006e0032000000700074005f00640039007100300031005f0064006f006200650072006d0061006e0033000000740065006c00650070006f00720074005f0074006f005f00680061006e00000070006c00610079006500720000006d006e006f0067006f006700720061006e006e0069006b005f00680061006e000000700074005f00640039007100300031005f00740065006c00650070006f007200740000004765744c6f6361746f7200740065006c00650070006f00720074005f0074006f005f006d006e006f0067006f006700720061006e006e0069006b00000070006c006100630065005f007200690066006c00650073000000640039007100300031005f007200690066006c0065000000640039007100300031005f007200690066006c0065002e0078006d006c00000075006e006c006f0063006b005f0070006f006c0079006800000070006f006c0079006800400064006f006f0072003100000063006c00650061006e007500700000006400390071003000310000006600610069006c00000063006f006d0070006c00650074006500640000004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f720044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f70657274790073697a65006765740052656d6f766500636c65617200

Import:
	CreateObjectVector (1 args)
	GetMainOutdoorScene (1 args)
	Hold (0 args)
	Trace (1 args)
	FindActor (2 args)
	GetSceneByName (2 args)
	Teleport (4 args)
	AddActor (6 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x25 Vars = (string)


0x0: PushEmpty(object, object)
0x1: @ CreateObjectVector(Stack[-0]T)
0x2: Pop(0)
0x3: @ GetMainOutdoorScene(Stack[-1])
0x4: Pop(0)
0x5: PushEmpty(object, object, string, string, string)
0x6: Stack[-6] = Stack[-4]
0x7: Stack[-3] = "pt_d9q01_doberman1" // @poff=0
0x8: Stack[-2] = "pers_doberman" // @poff=38
0x9: Stack[-1] = "d9q01_doberman.xml" // @poff=66
0xa: Call2 0xb2

0xb: Pop(4)
0xc: @@@ add(Stack[-1]); Obj=0 // @poff=104
0xd: Pop(1)
0xe: PushEmpty(object, object, string, string, string)
0xf: Stack[-6] = Stack[-4]
0x10: Stack[-3] = "pt_d9q01_doberman2" // @poff=108
0x11: Stack[-2] = "pers_doberman" // @poff=38
0x12: Stack[-1] = "d9q01_doberman.xml" // @poff=66
0x13: Call2 0xb2

0x14: Pop(4)
0x15: @@@ add(Stack[-1]); Obj=0 // @poff=104
0x16: Pop(1)
0x17: PushEmpty(object, object, string, string, string)
0x18: Stack[-6] = Stack[-4]
0x19: Stack[-3] = "pt_d9q01_doberman3" // @poff=146
0x1a: Stack[-2] = "pers_doberman" // @poff=38
0x1b: Stack[-1] = "d9q01_doberman.xml" // @poff=66
0x1c: Call2 0xb2

0x1d: Pop(4)
0x1e: @@@ add(Stack[-1]); Obj=0 // @poff=104
0x1f: Pop(1)
0x20: @ Hold()
0x21: Pop(0)
0x22: GOTO 0x20

0x23: Return(); Pop(2)

0x24: Stack[-1] = 0
0x25: PushEmpty(object, object, cvector, cvector, bool, object, object, cvector, cvector, bool, object, int, object, int, object, object, cvector, cvector, bool, object, object, cvector, cvector, bool, object, int, object, int)
0x26: @ Trace(Stack[-29])
0x27: Pop(0)
0x28: Push("teleport_to_han") // @poff=184
0x29: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x2a: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x2b: Push("player") // @poff=216
0x2c: @ FindActor(Stack[-15], Stack[-1])
0x2d: Pop(1)
0x2e: Push(Stack[-14])
0x2f: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x30: Push("mnogogrannik_han") // @poff=230
0x31: @ GetSceneByName(Stack[-14], Stack[-1])
0x32: Pop(1)
0x33: Push("pt_d9q01_teleport") // @poff=264
0x34: @@ GetLocator(Stack[-1], Stack[-11], Stack[-13], Stack[-12]); Obj=14 // @poff=300
0x35: Pop(1)
0x36: @ Teleport(Stack[-14], Stack[-13], Stack[-12], Stack[-11])
0x37: Pop(0)
0x38: Stack[-13] = 0
0x39: Stack[-14] = 0
0x3a: GOTO 0x8b

0x3b: Push("teleport_to_mnogogrannik") // @poff=311
0x3c: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x3d: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x3e: Push("player") // @poff=216
0x3f: @ FindActor(Stack[-10], Stack[-1])
0x40: Pop(1)
0x41: Push(Stack[-9])
0x42: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x43: Push("mnogogrannik") // @poff=335
0x44: @ GetSceneByName(Stack[-9], Stack[-1])
0x45: Pop(1)
0x46: Push("pt_d9q01_teleport") // @poff=264
0x47: @@ GetLocator(Stack[-1], Stack[-6], Stack[-8], Stack[-7]); Obj=9 // @poff=300
0x48: Pop(1)
0x49: @ Teleport(Stack[-9], Stack[-8], Stack[-7], Stack[-6])
0x4a: Pop(0)
0x4b: Stack[-8] = 0
0x4c: Stack[-9] = 0
0x4d: GOTO 0x8b

0x4e: Push("place_rifles") // @poff=361
0x4f: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x50: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x51: @ GetMainOutdoorScene(Stack[-4])
0x52: Pop(0)
0x53: Stack[-3] = (int) 1
0x54: Push((int) 5)
0x55: Pop(1); Push((bool) Stack[-4] <= Stack[-1])
0x56: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x57: Push("d9q01_rifle") // @poff=387
0x58: Pop(1); Push(Stack[-1] + Stack[-4]);
0x59: Push(CVector(0.0, 0.0, 0.0))
0x5a: Push(CVector(0.0, 0.0, 1.0))
0x5b: Push("d9q01_rifle.xml") // @poff=411
0x5c: @ AddActor(Stack[-6], Stack[-4], Stack[-8], Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(4)
0x5e: Stack[-2] = 0
0x5f: Push((int) 1)
0x60: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x61: GOTO 0x54

0x62: Stack[-4] = 0
0x63: GOTO 0x8b

0x64: Push("unlock_polyh") // @poff=443
0x65: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x66: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x67: PushEmpty(string, bool)
0x68: Stack[-2] = "polyh@door1" // @poff=469
0x69: Stack[-1] = (bool) 0
0x6a: Call2 0xc4

0x6b: Pop(2)
0x6c: GOTO 0x8b

0x6d: Push("cleanup") // @poff=493
0x6e: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x6f: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x70: Push("d9q01") // @poff=509
0x71: @ GetVariable(Stack[-1], Stack[-2])
0x72: Pop(1)
0x73: Push((int) 1000)
0x74: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x75: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x76: PushEmpty()
0x77: Call2 0x8c

0x78: Pop(0)
0x79: GOTO 0x7d

0x7a: PushEmpty()
0x7b: Call2 0x9c

0x7c: Pop(0)
0x7d: GOTO 0x8b

0x7e: Push("fail") // @poff=521
0x7f: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x80: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x81: PushEmpty()
0x82: Call2 0x8c

0x83: Pop(0)
0x84: GOTO 0x8b

0x85: Push("completed") // @poff=531
0x86: Pop(1); Push((bool) Stack[-30] == Stack[-1])
0x87: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x88: PushEmpty()
0x89: Call2 0x94

0x8a: Pop(0)
0x8b: Return(); Pop(28)

0x8c: Push("d9q01") // @poff=509
0x8d: Push((int) -1)
0x8e: @ SetVariable(Stack[-2], Stack[-1])
0x8f: Pop(2)
0x90: PushEmpty()
0x91: Call2 0x9c

0x92: Pop(0)
0x93: Return(); Pop(0)

0x94: Push("d9q01") // @poff=509
0x95: Push((int) 1000)
0x96: @ SetVariable(Stack[-2], Stack[-1])
0x97: Pop(2)
0x98: PushEmpty()
0x99: Call2 0x9c

0x9a: Pop(0)
0x9b: Return(); Pop(0)

0x9c: EventDisable(26)
0x9d: PushEmpty(string, bool)
0x9e: Stack[-2] = "polyh@door1" // @poff=469
0x9f: Stack[-1] = (bool) 1
0xa0: Call2 0xc4

0xa1: Pop(2)
0xa2: PushEmpty(object)
0xa3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa4: Call2 0xd5

0xa5: Pop(1)
0xa6: PushEmpty(object)
0xa7: Call2 0xac

0xa8: Pop(0)
0xa9: @ RemoveActor(Stack[-1])
0xaa: Pop(1)
0xab: Return(); Pop(0)

0xac: PushEmpty(object, object)
0xad: @ self(Stack[-1])
0xae: Pop(0)
0xaf: Stack[-1] = Stack[-3]
0xb0: Return(); Pop(2)

0xb1: Stack[-1] = 0
0xb2: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xb3: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=300
0xb4: Pop(0)
0xb5: Pop(0); Push((bool) Stack[-4] == 0)
0xb6: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xb7: Push("Locator ") // @poff=551
0xb8: Pop(1); Push(Stack[-1] + Stack[-12]);
0xb9: Push(" doesn't exist") // @poff=569
0xba: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbb: @ Trace(Stack[-1])
0xbc: Pop(1)
0xbd: Stack[-1] = 0
0xbe: GOTO 0xc1

0xbf: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=599
0xc0: Pop(0)
0xc1: Stack[-1] = Stack[-13]
0xc2: Return(); Pop(8)

0xc3: Stack[-1] = 0
0xc4: PushEmpty(object, object)
0xc5: @ FindActor(Stack[-1], Stack[-4])
0xc6: Pop(0)
0xc7: Pop(0); Push((bool) Stack[-1] == 0)
0xc8: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xc9: Push("Door ") // @poff=618
0xca: Pop(1); Push(Stack[-1] + Stack[-5]);
0xcb: Push(" not found") // @poff=630
0xcc: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcd: @ Trace(Stack[-1])
0xce: Pop(1)
0xcf: GOTO 0xd3

0xd0: Push("locked") // @poff=652
0xd1: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=666
0xd2: Pop(1)
0xd3: Return(); Pop(2)

0xd4: Stack[-1] = 0
0xd5: PushEmpty(int, int, object, int, int, object)
0xd6: Push(Stack[-7])
0xd7: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xd8: @@ size(Stack[-3]); Obj=7 // @poff=678
0xd9: Pop(0)
0xda: Stack[-2] = (int) 0
0xdb: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xdc: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xdd: @@ get(Stack[-1], Stack[-2]); Obj=7 // @poff=683
0xde: Pop(0)
0xdf: Push(Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe1: @@ Remove(); Obj=1 // @poff=687
0xe2: Pop(0)
0xe3: Stack[-1] = 0
0xe4: Push((int) 1)
0xe5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xe6: GOTO 0xdb

0xe7: @@ clear(); Obj=7 // @poff=694
0xe8: Pop(0)
0xe9: Return(); Pop(6)

