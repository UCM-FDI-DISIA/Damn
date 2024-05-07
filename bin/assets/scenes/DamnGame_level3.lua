Entity1 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "3.0457093715667725|7.639549732208252|43.95880126953125",
				Rotation = "false|0.7070063948631287|-0.7072043418884277|0.0014138901606202126|-0.001413494348526001",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|1.9999997828974656",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity2 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-12.700560569763184|7.689549922943115|43.95880126953125",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "-7.888238430023193|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776476860046387",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity3 = {
	Name = "Floor",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Floor"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.8228198289871216|1.7865326404571533|0.7102036476135254",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "15.294673919677734|18.7946720123291|0.28266042470932007"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "37.5893440246582",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity4 = {
	Name = "Cube.002",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "14.74069595336914|4.428697109222412|38.64470291137695",
				Rotation = "false|0.7030217051506042|-0.7030218839645386|-0.07589713484048843|-0.07589715719223022",
				Scale = "0.6255058646202087|0.6564507484436035|0.6564506888389587"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0000001815967",
				PosOffset = "0|0|0",
				Radius = "1.3129016160964966",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity5 = {
	Name = "Cube.001",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "14.74069595336914|2.9162464141845703|38.64470291137695",
				Rotation = "false|0.6982442140579224|-0.6982442736625671|0.1116017997264862|0.1116018071770668",
				Scale = "1.9370683431625366|0.938348114490509|0.8470563292503357"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "3.8741366863250732",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity6 = {
	Name = "Sun",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "9.962356567382812|-0.608795166015625|10.804308891296387",
				Rotation = "false|0.584906816482544|-0.7914972305297852|-0.08224325627088547|-0.15701015293598175",
				Scale = "0.6571059823036194|0.6571060419082642|0.6571060419082642"
			}
		}
	}
}

Entity7 = {
	Name = "Cube",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "CatWalk"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "16.567302703857422|18.484468460083008|39.0838508605957",
				Rotation = "false|0.6762095093727112|-0.6762096881866455|0.20673798024654388|0.20673803985118866",
				Scale = "0.8145411014556885|0.8145411014556885|0.814540684223175"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "13.066711391676641|1.2687056120330242|2.254146210389608",
				PosOffset = "0|0|0",
				Radius = "10.643373489379883",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity8 = {
	Name = "Cube.003",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "CatWalk"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-8.940030097961426|17.188766479492188|-4.071859836578369",
				Rotation = "false|6.119269357895973e-08|-4.557745825195525e-08|-0.7071067094802856|-0.7071068286895752",
				Scale = "0.814540684223175|0.814540684223175|0.814540684223175"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "13.066709889156996|1.2687056120330242|2.2541460478679323",
				PosOffset = "0|0|0",
				Radius = "10.643366813659668",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity9 = {
	Name = "Cylinder.001",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-18.56779670715332|2.774369955062866|14.695327758789062",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.4192843735218048|0.4192843735218048|0.42240726947784424"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.1669189142622827|3.4935205052535565|3.1669189142622827",
				PosOffset = "0|0|0",
				Radius = "1.4756884574890137",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity10 = {
	Name = "Cylinder.002",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "6.30380916595459|8.97777271270752|36.17769241333008",
				Rotation = "false|0.3182870149612427|-0.31828707456588745|-0.6314216256141663|-0.6314218044281006",
				Scale = "0.5248204469680786|0.5248204469680786|0.5248204469680786"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.1669189846798864|3.4935204052776223|3.1669189846798864",
				PosOffset = "0|0|0",
				Radius = "1.8334709405899048",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity11 = {
	Name = "Cylinder.003",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "7.098102569580078|8.97777271270752|34.75166702270508",
				Rotation = "false|0.6993336081504822|-0.699333667755127|-0.10455840826034546|-0.10455842316150665",
				Scale = "0.5248204469680786|0.5248204469680786|0.5248204469680786"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.1669189846798864|3.4935204052776223|3.1669189846798864",
				PosOffset = "0|0|0",
				Radius = "1.8334709405899048",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity12 = {
	Name = "Cylinder.004",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "12.233668327331543|2.8750321865081787|1.4938952922821045",
				Rotation = "false|0.6022876501083374|-0.6022877097129822|0.37047210335731506|0.3704720735549927",
				Scale = "0.5248205065727234|0.5248205065727234|0.5248204469680786"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.166919079294135|3.4935204052776223|3.166919079294135",
				PosOffset = "0|0|0",
				Radius = "1.8334709405899048",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity13 = {
	Name = "Cube.004",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "12.850387573242188|4.133596420288086|-0.811532735824585",
				Rotation = "false|0.09460096061229706|-0.6604019999504089|-0.6871870160102844|-0.2875654101371765",
				Scale = "1.9370683431625366|0.938348114490509|0.8470563292503357"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "1.999999876917828|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "3.874136447906494",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity14 = {
	Name = "Cylinder.005",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-22.974706649780273|2.7183327674865723|40.075294494628906",
				Rotation = "false|0.4999995529651642|-0.5000004768371582|0.5000004172325134|-0.4999995231628418",
				Scale = "0.4389641582965851|0.4389641582965851|0.4389641582965851"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.166918920812566|3.493520384993258|3.166918920812566",
				PosOffset = "0|0|0",
				Radius = "1.5335302352905273",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity15 = {
	Name = "Cube.005",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "8.475419044494629|2.7256388664245605|25.457666397094727",
				Rotation = "false|0.6797195672988892|-0.6797196865081787|0.1948876529932022|0.1948876678943634",
				Scale = "0.6255058646202087|0.6564507484436035|0.6564506888389587"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "1.312901496887207",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity16 = {
	Name = "Cube.006",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-15.455106735229492|2.9162464141845703|28.625017166137695",
				Rotation = "false|0.604570746421814|-0.6045708060264587|0.36673447489738464|0.36673447489738464",
				Scale = "1.9370685815811157|0.9383481740951538|0.8470563292503357"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "3.8741371631622314",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity17 = {
	Name = "Cube.007",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-16.993051528930664|8.478659629821777|41.412654876708984",
				Rotation = "false|0.5974879264831543|-0.5974879264831543|0.37816423177719116|0.37816423177719116",
				Scale = "2.1980843544006348|0.7364873886108398|0.3317997455596924"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|1.9999998381380437",
				PosOffset = "0|0|0",
				Radius = "4.3961687088012695",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity18 = {
	Name = "Cube.008",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "19.467037200927734|8.86932373046875|4.784132957458496",
				Rotation = "false|0.6692147254943848|-0.7033685445785522|-0.2283671349287033|-0.07261371612548828",
				Scale = "2.1980843544006348|0.7364872694015503|0.3317997455596924"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "4.3961687088012695",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity19 = {
	Name = "Cube.009",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "21.855670928955078|8.429000854492188|7.0690765380859375",
				Rotation = "false|0.5993326306343079|-0.5993326902389526|-0.3752337396144867|-0.3752337396144867",
				Scale = "2.1980843544006348|0.7364872694015503|0.3317997455596924"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "4.3961687088012695",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity20 = {
	Name = "AUI_HEALTH_BAR",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.6480690240859985|1.407318353652954|0.683670163154602",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.6571059823036194|0.6571059823036194|0.6571059823036194"
			}
		},
		{
			Name = "BAR",
			Arguments = {
				OverlayName = "HealthBar",
				XPos = "18",
				YPos = "24",
				Width = "20",
				Height = "4",
				Texture = "HealthBar.png",
				Depth = "2"
			}
		},
		{
			Name = "IMAGE",
			Arguments = {
				OverlayName = "BackBarImage",
				XPos = "18",
				YPos = "24",
				Width = "22",
				Height = "7",
				Texture = "BackBar.png",
				Depth = "1"
			}
		}
	}
}

Entity21 = {
	Name = "AUI_AMMO_TEXT",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.6480690240859985|1.407318353652954|0.683670163154602",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.6571059823036194|0.6571059823036194|0.6571059823036194"
			}
		},
		{
			Name = "TEXT",
			Arguments = {
				OverlayName = "AmmoText",
				XPos = "95",
				YPos = "90",
				Width = "30",
				Depth = "1",
				Tam = "3.5",
				Text = "XX/XX",
				Font = "01-digit2000.regular.ttf",
				Color = "1|129|255"
			}
		}
	}
}

Entity22 = {
	Name = "AUI_GUN_IMAGE",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.6480690240859985|1.407318353652954|0.683670163154602",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.6571059823036194|0.6571059823036194|0.6571059823036194"
			}
		},
		{
			Name = "IMAGE",
			Arguments = {
				OverlayName = "GunImage",
				XPos = "79",
				YPos = "92",
				Width = "23",
				Height = "10",
				Texture = "Pistol.png",
				Depth = "2"
			}
		}
	}
}

Entity23 = {
	Name = "AUI_TIME_TEXT",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.6480690240859985|1.407318353652954|0.683670163154602",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.6571059823036194|0.6571059823036194|0.6571059823036194"
			}
		},
		{
			Name = "TEXT",
			Arguments = {
				OverlayName = "TimeText",
				XPos = "82",
				YPos = "30",
				Depth = "1",
				Tam = "3",
				Text = "TIME: XXXX",
				Font = "01-digit2000.regular.ttf",
				Color = "0|0|0"
			}
		}
	}
}

Entity24 = {
	Name = "AUI_ENEMIES_LEFT_TEXT",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.6480690240859985|1.407318353652954|0.683670163154602",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.6571059823036194|0.6571059823036194|0.6571059823036194"
			}
		},
		{
			Name = "TEXT",
			Arguments = {
				OverlayName = "EnemiesLeftText",
				XPos = "80",
				YPos = "20",
				Depth = "1",
				Tam = "3",
				Text = "ENEMIES: XXXXXX",
				Font = "01-digit2000.regular.ttf",
				Color = "0|0|0"
			}
		}
	}
}

Entity25 = {
	Name = "A_LIGHT",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.6480690240859985|1.407318353652954|-0.6305416822433472",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.6571059823036194|0.6571059823036194|0.6571059823036194"
			}
		},
		{
			Name = "LIGHT",
			Arguments = {
				LightType = "LT_POINT",
				DiffuseColor = "1|1|1",
				SpecularColor = "0|0|0"
			}
		}
	}
}

Entity26 = {
	Name = "AUI_SCORE_TEXT",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.6480690240859985|1.407318353652954|0.683670163154602",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.6571059823036194|0.6571059823036194|0.6571059823036194"
			}
		},
		{
			Name = "TEXT",
			Arguments = {
				OverlayName = "ScoreText",
				XPos = "81",
				YPos = "25",
				Depth = "1",
				Tam = "3",
				Text = "SCORE: XXXXXX",
				Font = "01-digit2000.regular.ttf",
				Color = "0|0|0"
			}
		}
	}
}

Entity27 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "3.0890326499938965|7.4430317878723145|-4.829790115356445",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity28 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-27.077234268188477|7.749549865722656|39.58777618408203",
				Rotation = "false|0.6762095093727112|-0.6762096285820007|-0.20673801004886627|-0.20673805475234985",
				Scale = "-7.888229846954346|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776459693908691",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity29 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-12.675148010253906|7.499549865722656|-4.829790115356445",
				Rotation = "false|0.7070063948631287|-0.7072043418884277|0.0014138879487290978|-0.001413492253050208",
				Scale = "-7.888238430023193|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|1.9999997828974656",
				PosOffset = "0|0|0",
				Radius = "15.776476860046387",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity30 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-33.55479431152344|7.692959785461426|10.546072959899902",
				Rotation = "false|0.49892911314964294|-0.5010683536529541|0.5009288787841797|0.4990696310997009",
				Scale = "-8.26867961883545|-0.13727301359176636|-5.5973100662231445"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|1.999999782897442",
				PosOffset = "0|0|0",
				Radius = "16.5373592376709",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity31 = {
	Name = "Floor.001",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Floor"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-29.766529083251953|1.7865326404571533|0.7102036476135254",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "15.294673919677734|18.7946720123291|0.28266042470932007"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "37.5893440246582",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity32 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-26.97919464111328|7.562959671020508|-0.3951815068721771",
				Rotation = "false|0.6750313639640808|-0.6760556697845459|0.21022078394889832|0.20757807791233063",
				Scale = "-7.888229846954346|-0.13727301359176636|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "1.9999998791016065|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776458740234375",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity33 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "17.4129638671875|7.559549808502197|39.57880401611328",
				Rotation = "false|0.6762095093727112|-0.6762096285820007|0.20673801004886627|0.20673805475234985",
				Scale = "-7.888238430023193|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776476860046387",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity34 = {
	Name = "Floor.002",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Floor"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "31.412168502807617|1.7865326404571533|0.7102036476135254",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "15.294673919677734|18.7946720123291|0.28266042470932007"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "37.5893440246582",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity35 = {
	Name = "Cube.013",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "CatWalk"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "1.6699695587158203|17.188766479492188|-4.071859836578369",
				Rotation = "false|6.119269357895973e-08|-4.557745825195525e-08|-0.7071067094802856|-0.7071068286895752",
				Scale = "0.814540684223175|0.814540684223175|0.814540684223175"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "13.066709889156996|1.2687056120330242|2.2541460478679323",
				PosOffset = "0|0|0",
				Radius = "10.643366813659668",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity36 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "17.41255760192871|7.413032054901123|-0.4497935473918915",
				Rotation = "false|0.6762095093727112|-0.6762096285820007|-0.20673801004886627|-0.20673805475234985",
				Scale = "-7.888229846954346|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776459693908691",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity37 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "23.889799118041992|7.497965335845947|27.42932891845703",
				Rotation = "false|0.4989292323589325|-0.5010684728622437|0.5009287595748901|0.4990695118904114",
				Scale = "-7.888238430023193|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|1.9999997828974656",
				PosOffset = "0|0|0",
				Radius = "15.776476860046387",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity38 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "23.889799118041992|7.437965393066406|11.762724876403809",
				Rotation = "false|0.4989292323589325|-0.5010684728622437|0.5009287595748901|0.4990695118904114",
				Scale = "-7.888238430023193|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|1.9999997828974656",
				PosOffset = "0|0|0",
				Radius = "15.776476860046387",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity39 = {
	Name = "Cylinder.006",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-26.23893928527832|9.016851425170898|11.684428215026855",
				Rotation = "false|0.3150792717933655|-0.3150792419910431|-0.6330284476280212|-0.633028507232666",
				Scale = "0.5248204469680786|0.5248204469680786|0.5248204469680786"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.1669189846798864|3.4935204052776223|3.1669189846798864",
				PosOffset = "0|0|0",
				Radius = "1.8334709405899048",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity40 = {
	Name = "Cylinder.007",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-25.43021583557129|9.016851425170898|10.266534805297852",
				Rotation = "false|0.6987940073013306|-0.6987942457199097|-0.10810533165931702|-0.10810533165931702",
				Scale = "0.5248204469680786|0.5248204469680786|0.5248204469680786"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.1669189846798864|3.4935204052776223|3.1669189846798864",
				PosOffset = "0|0|0",
				Radius = "1.8334709405899048",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity41 = {
	Name = "Cylinder.008",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-25.532238006591797|10.823335647583008|11.187925338745117",
				Rotation = "false|0.604159414768219|-0.6041596531867981|0.3674115538597107|0.3674115836620331",
				Scale = "0.5248205065727234|0.5248205065727234|0.5248204469680786"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.166919079294135|3.4935204052776223|3.166919079294135",
				PosOffset = "0|0|0",
				Radius = "1.8334709405899048",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity42 = {
	Name = "Cube.011",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "22.050762176513672|10.363899230957031|34.26567077636719",
				Rotation = "false|0.4560962915420532|-0.7099079489707947|-0.5226389765739441|0.1218826100230217",
				Scale = "1.9370683431625366|0.938348114490509|0.8470563292503357"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "1.999999876917828|2.0|2.0000001270416465",
				PosOffset = "0|0|0",
				Radius = "3.874136447906494",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity43 = {
	Name = "Cube.012",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.5120658874511719|2.9162464141845703|28.573110580444336",
				Rotation = "false|0.604570746421814|-0.6045708060264587|0.36673447489738464|0.36673447489738464",
				Scale = "1.9370685815811157|0.9383481740951538|0.8470563292503357"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "3.8741371631622314",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity44 = {
	Name = "Cube.014",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-12.021431922912598|2.9162464141845703|12.790149688720703",
				Rotation = "false|0.04692913591861725|-0.046929217875003815|0.7055476903915405|0.7055478692054749",
				Scale = "1.9370685815811157|0.9383481740951538|0.8470563292503357"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.000000123082157|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "3.8741374015808105",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity45 = {
	Name = "Cylinder.009",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-31.137279510498047|2.7901813983917236|13.394229888916016",
				Rotation = "false|0.5032623410224915|-0.5032632350921631|-0.4967153072357178|-0.4967162311077118",
				Scale = "0.4286847412586212|0.4286847412586212|0.43187761306762695"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.1669190372012546|3.493520574398292|3.1669190372012546",
				PosOffset = "0|0|0",
				Radius = "1.5087733268737793",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity46 = {
	Name = "Cylinder.010",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-18.77366065979004|2.7627623081207275|2.2472167015075684",
				Rotation = "false|0.5032623410224915|-0.5032632350921631|-0.4967153072357178|-0.4967162311077118",
				Scale = "0.4123821556568146|0.4123821556568146|0.41545361280441284"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.1669190891917895|3.493520588853476|3.1669190891917895",
				PosOffset = "0|0|0",
				Radius = "1.4513957500457764",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity47 = {
	Name = "Cylinder.011",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "DangerousBarrel"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-22.229290008544922|2.8192009925842285|41.60969161987305",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.445939302444458|0.445939302444458|0.4492607116699219"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "3.1669189293227937|3.4935205292474376|3.1669189293227937",
				PosOffset = "0|0|0",
				Radius = "1.569501519203186",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity48 = {
	Name = "Cube.015",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-18.735763549804688|3.873034954071045|2.6020710468292236",
				Rotation = "false|0.447040855884552|-0.44704103469848633|-0.5478633642196655|-0.5478636026382446",
				Scale = "0.6599737405776978|0.6926238536834717|0.4277225732803345"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0000001806273224|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "1.3852477073669434",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity49 = {
	Name = "Cube.016",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-15.716255187988281|4.081338882446289|28.99494743347168",
				Rotation = "false|0.7049946188926697|-0.704994797706604|0.05461214482784271|0.05461215600371361",
				Scale = "0.40755990147590637|0.42772260308265686|0.4277225732803345"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0000001462475687|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "0.8554452061653137",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity50 = {
	Name = "Cube.017",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-31.413955688476562|10.498737335205078|26.312774658203125",
				Rotation = "false|0.6354477405548096|-0.6354479193687439|-0.310170978307724|-0.31017109751701355",
				Scale = "0.6255058646202087|0.6564507484436035|0.6564506888389587"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "1.312901496887207",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity51 = {
	Name = "Cube.018",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-31.413955688476562|8.986287117004395|26.312774658203125",
				Rotation = "false|0.6946395635604858|-0.6946396231651306|-0.13219621777534485|-0.13219621777534485",
				Scale = "1.9370683431625366|0.938348114490509|0.8470563292503357"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|1.9999998729583535",
				PosOffset = "0|0|0",
				Radius = "3.8741366863250732",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity52 = {
	Name = "Cube.019",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-6.413668632507324|4.428698539733887|38.55924606323242",
				Rotation = "false|0.7069522738456726|-0.7069525122642517|-0.014775711111724377|-0.014775784686207771",
				Scale = "0.6255058646202087|0.6564507484436035|0.6564506888389587"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0000001905806104|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "1.312901496887207",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity53 = {
	Name = "Cube.020",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-6.413668632507324|2.916248321533203|38.55924606323242",
				Rotation = "false|0.6859673857688904|-0.6859673857688904|0.17160636186599731|0.1716063916683197",
				Scale = "1.9370683431625366|0.938348114490509|0.8470563292503357"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "3.8741366863250732",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity54 = {
	Name = "Cube.021",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-17.88205909729004|4.006252288818359|28.0737247467041",
				Rotation = "false|0.18131454288959503|0.6834683418273926|-0.683462917804718|-0.18131308257579803",
				Scale = "1.9370683431625366|0.938348114490509|0.8470563292503357"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "3.8741366863250732",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity55 = {
	Name = "Cube.022",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "12.08853530883789|7.778419494628906|15.50497817993164",
				Rotation = "false|0.15019895136356354|-0.15019893646240234|0.6909704804420471|-0.6909705400466919",
				Scale = "1.9370683431625366|0.938348114490509|0.8470563292503357"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "3.8741366863250732",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity56 = {
	Name = "Cube.023",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-12.433406829833984|4.006251335144043|-2.0262086391448975",
				Rotation = "false|0.43493229150772095|0.5575283765792847|-0.5575239658355713|-0.4349288046360016",
				Scale = "1.9370683431625366|0.938348114490509|0.8470563292503357"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "3.8741366863250732",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity57 = {
	Name = "Cube.024",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Crate"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-14.95011043548584|10.061176300048828|2.596021890640259",
				Rotation = "false|0.44583114981651306|0.5488520860671997|-0.5488476753234863|-0.44582757353782654",
				Scale = "1.9370683431625366|0.938348114490509|0.8470563292503357"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "3.8741366863250732",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity58 = {
	Name = "Spawner",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-18.77170181274414|10.465200424194336|6.639008522033691",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "SPAWNPOINT",
			Arguments = {
			}
		}
	}
}

Entity59 = {
	Name = "Spawner.003",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "10.16952133178711|10.465200424194336|32.57917022705078",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "SPAWNPOINT",
			Arguments = {
			}
		}
	}
}

Entity60 = {
	Name = "Spawner.004",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-4.682889938354492|4.0|19.525808334350586",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "SPAWNPOINT",
			Arguments = {
			}
		}
	}
}

Entity61 = {
	Name = "Gun",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "pistol"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-4.9010443687438965|4.6239190101623535|24.025449752807617",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|0.0",
				Scale = "0.30000001192092896|0.30000001192092896|0.30000001192092896"
			}
		},
		{
			Name = "ANIMATOR",
			Arguments = {
				AnimNames = "shootPistol|reloadPistol|idlePistol|reloadSpecialPistol",
				AnimMeshNames = "shootPistol|reloadPistol|idlePistol|reloadPistolEspecial",
				NextAnim = "idlePistol|idlePistol|idlePistol|idlePistol",
				LoopAnims = "false|false|true|false"
			}
		},
		{
			Name = "AUDIO_EMITTER",
			Arguments = {
				SongName = "pistolShoot.wav",
				Is3D = "false"
			}
		},
		{
			Name = "PARTICLE_EMITTER",
			Arguments = {
				Loop = "false",
				Time = "0.05",
				Started = "false",
				Name = "Muzzle"
			}
		},
		{
			Name = "WEAPON_COMPONENT",
			Arguments = {
				MaxAmmo = "50",
				MagazineSize = "25",
				Cadence = "0.25"
			}
		}
	}
}

Entity62 = {
	Name = "Shotgun",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "shotgun"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-4.9040446281433105|4.8924736976623535|23.36073875427246",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|0.0",
				Scale = "0.10000000149011612|0.10000000149011612|0.10000000149011612"
			}
		},
		{
			Name = "ANIMATOR",
			Arguments = {
				AnimNames = "shootShotgun|reloadShotgun|idleShotgun",
				AnimMeshNames = "shootShotgun|reloadShotgun|idleShotgun",
				NextAnim = "idleShotgun|idleShotgun|idleShotgun",
				LoopAnims = "false|false|true"
			}
		},
		{
			Name = "AUDIO_EMITTER",
			Arguments = {
				SongName = "shotgunShoot.wav",
				Is3D = "false"
			}
		},
		{
			Name = "PARTICLE_EMITTER",
			Arguments = {
				Loop = "false",
				Time = "0.05",
				Started = "false",
				Name = "Muzzle"
			}
		},
		{
			Name = "SHOTGUN",
			Arguments = {
				MaxAmmo = "10",
				MagazineSize = "2",
				Cadence = "0.8",
				Balas = "3"
			}
		}
	}
}

Entity63 = {
	Name = "Player",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-4.900733470916748|5.348429203033447|25.685970306396484",
				Rotation = "false|1.0|2.1855694143368964e-08|0.0|-0.0",
				Scale = "1.1050000190734863|1.1050000190734863|1.1050000190734863"
			}
		}
	}
}

Entity64 = {
	Name = "A_LIGHT.001",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.6480690240859985|1.407318353652954|-0.6305416822433472",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.6571059823036194|0.6571059823036194|0.6571059823036194"
			}
		},
		{
			Name = "LIGHT",
			Arguments = {
				LightType = "LT_DIRECTIONAL",
				DiffuseColor = "0.5|0.5|0.5",
				SpecularColor = "0|0|0"
			}
		}
	}
}

Entity65 = {
	Name = "Rifle",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "rifle"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-4.884044647216797|4.733919143676758|23.735448837280273",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.30000001192092896|0.30000001192092896|0.30000001192092896"
			}
		},
		{
			Name = "ANIMATOR",
			Arguments = {
				AnimNames = "shootRifle|reloadRifle|idleRifle",
				AnimMeshNames = "fireRifle|reloadRifle|idleRifle",
				NextAnim = "idleRifle|idleRifle|idleRifle",
				LoopAnims = "false|false|true"
			}
		},
		{
			Name = "AUDIO_EMITTER",
			Arguments = {
				SongName = "rifleShoot.wav",
				Is3D = "false"
			}
		},
		{
			Name = "PARTICLE_EMITTER",
			Arguments = {
				Loop = "false",
				Time = "0.05",
				Started = "false",
				Name = "Muzzle"
			}
		},
		{
			Name = "RIFLE",
			Arguments = {
				MaxAmmo = "10",
				MagazineSize = "5",
				Cadence = "1",
				Damage = "50"
			}
		}
	}
}

Entity66 = {
	Name = "AUI_ROUND_TEXT",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.6480690240859985|1.407318353652954|0.683670163154602",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.6571059823036194|0.6571059823036194|0.6571059823036194"
			}
		},
		{
			Name = "TEXT",
			Arguments = {
				OverlayName = "RoundText",
				XPos = "10",
				YPos = "83",
				Depth = "1",
				Tam = "12",
				Text = "0",
				Font = "01-digit2000.regular.ttf",
				Color = "1|129|255"
			}
		}
	}
}

Entity67 = {
	Name = "AUI_HELMET_IMAGE",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.6480690240859985|1.407318353652954|0.683670163154602",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.6571059823036194|0.6571059823036194|0.6571059823036194"
			}
		},
		{
			Name = "IMAGE",
			Arguments = {
				OverlayName = "HelmetImage",
				XPos = "50",
				YPos = "50",
				Width = "192",
				Height = "108",
				Texture = "Helmet.png",
				Depth = "1"
			}
		}
	}
}

Entity68 = {
	Name = "AUI_FRONTBAR",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.6480690240859985|1.407318353652954|0.683670163154602",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.6571059823036194|0.6571059823036194|0.6571059823036194"
			}
		},
		{
			Name = "IMAGE",
			Arguments = {
				OverlayName = "FrontBarImage",
				XPos = "18",
				YPos = "24",
				Width = "22",
				Height = "7",
				Texture = "FrontBar.png",
				Depth = "3"
			}
		}
	}
}

Entity69 = {
	Name = "Spawner.001",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "10.350363731384277|10.465200424194336|7.700906276702881",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "SPAWNPOINT",
			Arguments = {
			}
		}
	}
}

Entity70 = {
	Name = "Spawner.002",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-19.813518524169922|10.465200424194336|32.4571647644043",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "SPAWNPOINT",
			Arguments = {
			}
		}
	}
}

Entity71 = {
	Name = "Spawner.005",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-3.603431463241577|4.0|0.23241615295410156",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "SPAWNPOINT",
			Arguments = {
			}
		}
	}
}

Entity72 = {
	Name = "Spawner.006",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-3.393526077270508|4.0|40.761817932128906",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "SPAWNPOINT",
			Arguments = {
			}
		}
	}
}

Entity73 = {
	Name = "Floor.003",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Floor"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "31.412168502807617|1.7865326404571533|38.29999923706055",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "15.294673919677734|18.7946720123291|0.28266042470932007"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "37.5893440246582",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity74 = {
	Name = "Floor.004",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Floor"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-29.766529083251953|1.7865326404571533|38.29999923706055",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "15.294673919677734|18.7946720123291|0.28266042470932007"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "37.5893440246582",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity75 = {
	Name = "Floor.005",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Floor"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.8228198289871216|1.7865326404571533|38.29999923706055",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "15.294673919677734|18.7946720123291|0.28266042470932007"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "37.5893440246582",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity76 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-33.55479431152344|7.752959728240967|27.076072692871094",
				Rotation = "false|0.49892911314964294|-0.5010683536529541|0.5009288787841797|0.4990696310997009",
				Scale = "-8.26867961883545|-0.13727301359176636|-5.5973100662231445"
			}
		}
	}
}

Entity77 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "8.5357084274292|5.039549827575684|19.668800354003906",
				Rotation = "false|0.9803676605224609|2.1426615148811834e-08|4.309467005469969e-09|0.19717822968959808",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|1.9999997828974656",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity78 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-17.464290618896484|5.039549827575684|19.668800354003906",
				Rotation = "false|7.832516502048747e-08|-0.19717799127101898|-0.9803677201271057|3.631314271501651e-08",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0000001208983424|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776467323303223",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity79 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "21.3457088470459|8.069550514221191|19.668800354003906",
				Rotation = "false|0.7071067094802856|1.5454308055495858e-08|0.7071068286895752|-1.5454311608209537e-08",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity80 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "15.295709609985352|8.04955005645752|34.17879867553711",
				Rotation = "false|0.9563047885894775|2.0900705166582156e-08|0.2923716902732849|-6.3899863178562555e-09",
				Scale = "-12.0|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0000001703807104|2.0",
				PosOffset = "0|0|0",
				Radius = "24.0",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity81 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "15.295709609985352|8.04955005645752|5.2287983894348145",
				Rotation = "false|0.2923716604709625|6.389984985588626e-09|0.9563047885894775|-2.0900705166582156e-08",
				Scale = "-12.0|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "24.0",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity82 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-3.364290237426758|7.9550275802612305|42.00879669189453",
				Rotation = "false|1.0|2.1855694143368964e-08|0.0|-0.0",
				Scale = "-12.0|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "24.0",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity83 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-3.364290237426758|8.036961555480957|-2.491201400756836",
				Rotation = "false|7.549790126404332e-08|1.6500590388878324e-15|-1.0|2.1855694143368964e-08",
				Scale = "-12.0|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "24.0",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity84 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-30.274288177490234|8.069550514221191|19.668800354003906",
				Rotation = "false|0.7071067094802856|1.5454308055495858e-08|-0.7071068286895752|1.5454311608209537e-08",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity85 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-24.35824966430664|8.04955005645752|34.439186096191406",
				Rotation = "false|0.9563047885894775|2.0900705166582156e-08|-0.2923716902732849|6.3899863178562555e-09",
				Scale = "-12.0|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0000001703807104|2.0",
				PosOffset = "0|0|0",
				Radius = "24.0",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity86 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-23.90056610107422|8.049551010131836|4.4741716384887695",
				Rotation = "false|0.2923716604709625|6.389984985588626e-09|-0.9563047885894775|2.0900705166582156e-08",
				Scale = "-12.0|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "24.0",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity87 = {
	Name = "Spawner.007",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-29.532644271850586|4.0|19.788532257080078",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "SPAWNPOINT",
			Arguments = {
			}
		}
	}
}

Entity88 = {
	Name = "Spawner.008",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "20.36931037902832|4.0|20.408430099487305",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "SPAWNPOINT",
			Arguments = {
			}
		}
	}
}

Entity89 = {
	Name = "Spawner.009",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-22.197160720825195|4.0|35.595985412597656",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "SPAWNPOINT",
			Arguments = {
			}
		}
	}
}

Entity90 = {
	Name = "Spawner.010",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "12.413925170898438|4.0|4.910930633544922",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "SPAWNPOINT",
			Arguments = {
			}
		}
	}
}

Entity91 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "23.889799118041992|18.66363525390625|27.42932891845703",
				Rotation = "false|0.4989292323589325|-0.5010684728622437|0.5009287595748901|0.4990695118904114",
				Scale = "-7.888238430023193|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|1.9999997828974656",
				PosOffset = "0|0|0",
				Radius = "15.776476860046387",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity92 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "17.41255760192871|18.57870101928711|-0.4497935473918915",
				Rotation = "false|0.6762095093727112|-0.6762096285820007|-0.20673801004886627|-0.20673805475234985",
				Scale = "-7.888229846954346|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776459693908691",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity93 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "17.4129638671875|18.7252197265625|39.57880401611328",
				Rotation = "false|0.6762095093727112|-0.6762096285820007|0.20673801004886627|0.20673805475234985",
				Scale = "-7.888238430023193|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776476860046387",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity94 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-33.55479431152344|18.918628692626953|27.076072692871094",
				Rotation = "false|0.49892911314964294|-0.5010683536529541|0.5009288787841797|0.4990696310997009",
				Scale = "-8.26867961883545|-0.13727301359176636|-5.5973100662231445"
			}
		}
	}
}

Entity95 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "23.889799118041992|18.603635787963867|11.762724876403809",
				Rotation = "false|0.4989292323589325|-0.5010684728622437|0.5009287595748901|0.4990695118904114",
				Scale = "-7.888238430023193|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|1.9999997828974656",
				PosOffset = "0|0|0",
				Radius = "15.776476860046387",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity96 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-26.97919464111328|18.728628158569336|-0.3951815068721771",
				Rotation = "false|0.6750313639640808|-0.6760556697845459|0.21022078394889832|0.20757807791233063",
				Scale = "-7.888229846954346|-0.13727301359176636|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "1.9999998791016065|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776458740234375",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity97 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-33.55479431152344|18.85862922668457|10.546072959899902",
				Rotation = "false|0.49892911314964294|-0.5010683536529541|0.5009288787841797|0.4990696310997009",
				Scale = "-8.26867961883545|-0.13727301359176636|-5.5973100662231445"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|1.999999782897442",
				PosOffset = "0|0|0",
				Radius = "16.5373592376709",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity98 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-12.700560569763184|18.8552188873291|43.95880126953125",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "-7.888238430023193|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776476860046387",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity99 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-12.675148010253906|18.665220260620117|-4.829790115356445",
				Rotation = "false|0.7070063948631287|-0.7072043418884277|0.0014138879487290978|-0.001413492253050208",
				Scale = "-7.888238430023193|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|1.9999997828974656",
				PosOffset = "0|0|0",
				Radius = "15.776476860046387",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity100 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "3.0457093715667725|18.805219650268555|43.95880126953125",
				Rotation = "false|0.7070063948631287|-0.7072043418884277|0.0014138901606202126|-0.001413494348526001",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|1.9999997828974656",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity101 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "3.0890326499938965|18.608701705932617|-4.829790115356445",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "-7.888233184814453|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776466369628906",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity102 = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "HazardousWall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-27.077234268188477|18.915220260620117|39.58777618408203",
				Rotation = "false|0.6762095093727112|-0.6762096285820007|-0.20673801004886627|-0.20673805475234985",
				Scale = "-7.888229846954346|-0.13727302849292755|-5.59731388092041"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1",
				Bounciness = "0",
				Friction = "1",
				AABB = "2.0|2.0|2.0",
				PosOffset = "0|0|0",
				Radius = "15.776459693908691",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		}
	}
}

Entity103 = {
	Name = "UI_MANAGER",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.6480690240859985|1.407318353652954|0.683670163154602",
				Rotation = "false|0.7071067094802856|-0.7071068286895752|0.0|-0.0",
				Scale = "0.6571059823036194|0.6571059823036194|0.6571059823036194"
			}
		},
		{
			Name = "UIMANAGER",
			Arguments = {
			}
		}
	}
}

Entities = { Entity1, Entity2, Entity3, Entity4, Entity5, Entity6, Entity7, Entity8, Entity9, Entity10, Entity11, Entity12, Entity13, Entity14, Entity15, Entity16, Entity17, Entity18, Entity19, Entity20, Entity21, Entity22, Entity23, Entity24, Entity25, Entity26, Entity27, Entity28, Entity29, Entity30, Entity31, Entity32, Entity33, Entity34, Entity35, Entity36, Entity37, Entity38, Entity39, Entity40, Entity41, Entity42, Entity43, Entity44, Entity45, Entity46, Entity47, Entity48, Entity49, Entity50, Entity51, Entity52, Entity53, Entity54, Entity55, Entity56, Entity57, Entity58, Entity59, Entity60, Entity61, Entity62, Entity63, Entity64, Entity65, Entity66, Entity67, Entity68, Entity69, Entity70, Entity71, Entity72, Entity73, Entity74, Entity75, Entity76, Entity77, Entity78, Entity79, Entity80, Entity81, Entity82, Entity83, Entity84, Entity85, Entity86, Entity87, Entity88, Entity89, Entity90, Entity91, Entity92, Entity93, Entity94, Entity95, Entity96, Entity97, Entity98, Entity99, Entity100, Entity101, Entity102, Entity103 }

CollisionLayers = {
	Layers = {
		DEFAULT = ""
	}
}