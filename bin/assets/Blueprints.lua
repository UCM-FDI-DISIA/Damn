Cube = {
    Name = "Cube", 
    Components = {
        {
            Name = "TRANSFORM", 
            Arguments = {
                Position = "0|0|0",
                Rotation = "false|1.0|0.0|0.0|0.0",
                Scale = "1|1|1"
            }
        },
        {
            Name = "MESH_RENDERER",
            Arguments = {
                Mesh = "cube"
            }
        }
    }
}

Bullet = {
    Name = "Bullet", 
    Components = {
        {
            Name = "TRANSFORM", 
            Arguments = {
                Position = "0|0|0",
                Rotation = "false|1.0|0.0|0.0|0.0",
                Scale = "0.3|0.3|0.3"
            }
        },
        {
            Name = "MESH_RENDERER",
            Arguments = {
                Mesh = "PruebaCubo"
            }
        },
        {
            Name = "PROYECTILE_MOVEMENT",
            Arguments = {
                Speed = "0.05"
            }
        }
    }
}

Frog = {
    Name = "Frog", 
    Components = {
        {
            Name = "TRANSFORM", 
            Arguments = {
                Position = "0|0|100",
                Rotation = "false|1.0|0.0|0.0|0.0",
                Scale = "10|10|10"
            }
        },
        {
            Name = "MESH_RENDERER",
            Arguments = {
                Mesh = "Cube.057"
            }
        }
    }
}

Blueprints = { Cube, Frog, Bullet }