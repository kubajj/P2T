set terminal png                        # Set the output to png data
set output 'graph.png'                  # Where to put the graph

                          # Let gnuplot decide how to format the axis
set logscale                                 # Use a logarithmic scale
set grid

set title "Relitivistic Mass and Energy against Velocity"
set xlabel "Velocity (m/s)"
set ylabel "Mass, Energy"

plot "sim.data" using 1:2 title "Relitivistic Mass", \
"sim.data" using 1:3 title "Kinetic Energy"
