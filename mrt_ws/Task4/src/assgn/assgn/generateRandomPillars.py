import random

def generate_pillar_code(n):
    code = ""
    for i in range(1, n + 1):
        while True:
            x = random.uniform(-45, 45)
            y = random.uniform(-45, 45)
            if not (-10 <= x <= 10 and -10 <= y <= 10):  
                break

        pillar_code = f"""
    <model name='pillar_{i}'>
      <static>true</static>
      <link name='link'>
        <collision name='collision'>
          <geometry>
            <cylinder>
              <radius>0.5</radius>
              <length>2</length>
            </cylinder>
          </geometry>
        </collision>
        <visual name='visual'>
          <geometry>
            <cylinder>
              <radius>0.5</radius>
              <length>2</length>
            </cylinder>
          </geometry>
          <material>
            <ambient>1 0 0 1</ambient>
            <diffuse>1 0 0 1</diffuse>
            <specular>1 0 0 1</specular>
          </material>
        </visual>
        <pose>{x:.2f} {y:.2f} 1 0 0 0</pose>
      </link>
    </model>
"""
        code += pillar_code
    return code

generated_code = generate_pillar_code(110)

print(generated_code)